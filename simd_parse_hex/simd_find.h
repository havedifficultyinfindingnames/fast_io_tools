﻿#pragma once

namespace fast_io::details
{
template<bool signed_disposition,
	::std::integral char_type,
	::std::size_t N>
inline constexpr auto create_find_simd_vector_with_unsigned_toggle(char_type value) noexcept
{
	::fast_io::freestanding::array<char_type,N> arr;
	using signed_char_type = ::std::make_signed_t<char_type>;
	using unsigned_char_type = ::std::make_signed_t<char_type>;
	constexpr unsigned_char_type signed_min_unsigned_val{static_cast<unsigned_char_type>(::std::numeric_limits<signed_char_type>::min())};
	if constexpr(signed_disposition)
	{
		value=static_cast<char_type>(static_cast<unsigned_char_type>(value)+signed_min_unsigned_val);
	}
	for(auto& e : arr)
	{
		e=value;
	}
	return arr;
}

template<char8_t lfch,std::integral char_type,std::size_t N,bool signed_disposition=false>
inline constexpr
	::fast_io::freestanding::array<char_type,N> characters_array_impl{
		create_find_simd_vector_with_unsigned_toggle<signed_disposition,char_type,N>(lfch)};

template<typename T>
inline constexpr T create_simd_vector_with_all_masks() noexcept
{
	T t{};
	return ~t;
}

template<std::size_t vec_size,std::integral char_type,typename Func>
requires (sizeof(char_type)<=vec_size)&&(vec_size%sizeof(char_type)==0)
inline constexpr char_type const* find_simd_common_condition_impl(char_type const* first,char_type const* last,Func func) noexcept
{
	constexpr unsigned N{vec_size/sizeof(char_type)};
	using simd_vector_type = ::fast_io::intrinsics::simd_vector<char_type,N>;
	simd_vector_type simdvec,simdvec2,simdvec3,simdvec4;

	constexpr std::ptrdiff_t n1{N};
	constexpr std::ptrdiff_t n4{N*4};
	constexpr unsigned N2{N+N},N3{N2+N};

	std::size_t round{static_cast<std::size_t>(last-first)/N};
	for(;3<round;round-=4)
	{
		simdvec.load(first);
		simdvec2.load(first+N);
		simdvec3.load(first+N2);
		simdvec4.load(first+N3);
		bool v1{func(simdvec)};
		bool v2{func(simdvec2)};
		bool v3{func(simdvec3)};
		bool v4{func(simdvec4)};
		if(v1||v2||v3||v4)
		{
			if(!v1)
			{
			if(v2)
			{
				first+=N;
			}
			else if(v3)
			{
				first+=N2;
			}
			else if(v4)
			{
				first+=N3;
			}
			}
			break;
		}
		first+=n4;
	}
	for(;round;--round)
	{
		simdvec.load(first);
		if(func(simdvec))
		{
			break;
		}
		first+=n1;
	}
	return first;
}

template<bool findnot,std::size_t vec_size,std::integral char_type,typename Func>
requires (sizeof(char_type)<=vec_size)&&(vec_size%sizeof(char_type)==0)
inline constexpr char_type const* find_simd_common_all_impl(char_type const* first,char_type const* last,Func func) noexcept
{
	constexpr unsigned N{vec_size/sizeof(char_type)};
	using simd_vector_type = ::fast_io::intrinsics::simd_vector<char_type,N>;
	if constexpr(findnot)
	{
		constexpr simd_vector_type mask_vecs{create_simd_vector_with_all_masks<simd_vector_type>()};
		return find_simd_common_condition_impl<vec_size>(first,last,[&](simd_vector_type const& simdvec) noexcept -> bool
		{
			return !is_all_zeros(func(simdvec)!=mask_vecs);
		});
	}
	else
	{
		constexpr simd_vector_type zero_vecs{};
		return find_simd_common_condition_impl<vec_size>(first,last,[&](simd_vector_type const& simdvec) noexcept -> bool
		{
			return !is_all_zeros(func(simdvec)!=zero_vecs);
		});
	}
}

template<bool findnot,std::size_t vec_size,std::integral char_type,typename simd_vector_type>
inline constexpr char_type const* find_simd_constant_simd_common_all_impl(char_type const* first,char_type const* last,simd_vector_type const& zeros) noexcept
{
	return find_simd_common_all_impl<findnot,vec_size>(first,last,[&](simd_vector_type const& simdvec) noexcept
	{
		return simdvec==zeros;
	});
}

template<char8_t lfch,bool findnot,std::size_t vec_size,std::integral char_type>
inline constexpr char_type const* find_simd_constant_simd_common_impl(char_type const* first,char_type const* last) noexcept
{
	constexpr char_type lfchct{char_literal_v<lfch,std::remove_cvref_t<char_type>>};
	constexpr unsigned N{vec_size/sizeof(char_type)};
	using simd_vector_type = ::fast_io::intrinsics::simd_vector<char_type,N>;
#if (__cpp_lib_bit_cast >= 201806L) && !defined(__clang__)
	constexpr
		simd_vector_type zeros{
			std::bit_cast<simd_vector_type>(characters_array_impl<lfch,char_type,N>)};
#else
	simd_vector_type zeros;
	zeros.load(characters_array_impl<lfch,char_type,N>.data());
#endif
	return find_simd_constant_simd_common_all_impl<findnot,vec_size>(first,last,zeros);
}

template<bool ishtml,bool findnot,std::size_t vec_size,std::integral char_type>
inline constexpr char_type const* find_space_simd_common_impl(char_type const* first,char_type const* last) noexcept
{
	using unsigned_char_type = std::make_unsigned_t<std::remove_cvref_t<char_type>>;
	using signed_char_type = std::make_unsigned_t<unsigned_char_type>;
	constexpr char_type spacech{char_literal_v<u8' ',std::remove_cvref_t<char_type>>};
	constexpr char_type horizontaltab{char_literal_v<u8'\t',std::remove_cvref_t<char_type>>};
	constexpr char_type verticaltab{char_literal_v<u8'\v',std::remove_cvref_t<char_type>>};
	constexpr unsigned N{vec_size/sizeof(char_type)};
	using simd_vector_type = ::fast_io::intrinsics::simd_vector<char_type,N>;
	using unsigned_simd_vector_type = ::fast_io::intrinsics::simd_vector<unsigned_char_type,N>;
	using signed_simd_vector_type = ::fast_io::intrinsics::simd_vector<signed_char_type,N>;

	constexpr bool use_signed_vector_type{true};
//Change to architectures when they may have efficient unsigned comparison support. Although i do not know any of them.
	using decision_simd_vector_type = std::conditional_t<use_signed_vector_type,signed_simd_vector_type,unsigned_simd_vector_type>;



#if (__cpp_lib_bit_cast >= 201806L) && !defined(__clang__)
	constexpr
		simd_vector_type spaces{
		std::bit_cast<simd_vector_type>(characters_array_impl<spacech,char_type,N>)};
#else
	simd_vector_type spaces;
	spaces.load(characters_array_impl<spacech,char_type,N>.data());
#endif
	if constexpr(is_ebcdic<char_type>)
	{
/*
For EBCDIC NL should also get supported.
ASCII: horizontal tab (0x09, '\t'), EBCDIC:5
ASCII: vertical tab (0x0b, '\v'), EBCDIC:11
ASCII: form feed (0x0c, '\f'), EBCDIC:12
ASCII: carriage return (0x0d, '\r'), EBCDIC:13
EBCDIC specific: NL:21
ASCII: line feed (0x0a, '\n'), EBCDIC:37
ASCII: space (0x20, ' '), EBCDIC:64
*/
		constexpr char_type three{3};
		constexpr char_type ebcdic_specific_nl{21};
		constexpr char_type linefeed{char_literal_v<u8'\n',std::remove_cvref_t<char_type>>};
#if (__cpp_lib_bit_cast >= 201806L) && !defined(__clang__)
		constexpr
			simd_vector_type ebcdic_specific_nls{
				std::bit_cast<simd_vector_type>(characters_array_impl<ebcdic_specific_nl,char_type,N>)};
		constexpr
			simd_vector_type linefeeds{
				std::bit_cast<simd_vector_type>(characters_array_impl<linefeed,char_type,N>)};
		constexpr
			simd_vector_type horizontaltabs{
				std::bit_cast<simd_vector_type>(characters_array_impl<horizontaltab,char_type,N>)};
#else
		simd_vector_type ebcdic_specific_nls,linefeeds,horizontaltabs;

		ebcdic_specific_nls.load(characters_array_impl<ebcdic_specific_nl,char_type,N>.data());
		linefeeds.load(characters_array_impl<linefeed,char_type,N>.data());
		horizontaltabs.load(characters_array_impl<horizontaltab,char_type,N>.data());
#endif

		if constexpr(ishtml)
		{
			constexpr char_type formfeed{char_literal_v<u8'\f',std::remove_cvref_t<char_type>>};
			constexpr char_type carriagereturn{char_literal_v<u8'\r',std::remove_cvref_t<char_type>>};
#if (__cpp_lib_bit_cast >= 201806L) && !defined(__clang__)
			constexpr
			simd_vector_type formfeeds{
			std::bit_cast<simd_vector_type>(characters_array_impl<formfeed,char_type,N>)};
			constexpr
			simd_vector_type carriagereturns{
			std::bit_cast<simd_vector_type>(characters_array_impl<carriagereturn,char_type,N>)};
#else
			simd_vector_type formfeeds,carriagereturns;
			formfeeds.load(characters_array_impl<formfeed,char_type,N>.data());
			carriagereturns.load(characters_array_impl<carriagereturn,char_type,N>.data());
#endif
			return find_simd_common_all_impl<findnot,vec_size>(first,last,[&](simd_vector_type const& simdvec) noexcept
			{
				return (horizontaltabs==simdvec)^(formfeeds==simdvec)^(carriagereturns==simdvec)^
					(ebcdic_specific_nls==simdvec)^(linefeeds==simdvec)^(spaces==simdvec);
			});
		}
		else
		{
#if (__cpp_lib_bit_cast >= 201806L) && !defined(__clang__)
			constexpr
				decision_simd_vector_type threes{
					std::bit_cast<decision_simd_vector_type>(characters_array_impl<three,char_type,N,use_signed_vector_type>)};
			constexpr
				decision_simd_vector_type verticaltabs{
					std::bit_cast<decision_simd_vector_type>(characters_array_impl<verticaltab,char_type,N,use_signed_vector_type>)};
#else
			decision_simd_vector_type threes,verticaltabs;
			threes.load(characters_array_impl<three,char_type,N,use_signed_vector_type>.data());
			verticaltabs.load(characters_array_impl<verticaltab,char_type,N,use_signed_vector_type>.data());
#endif
			return find_simd_common_all_impl<findnot,vec_size>(first,last,[&](simd_vector_type const& simdvec) noexcept
			{
				return (horizontaltabs==simdvec)^
				static_cast<simd_vector_type>((static_cast<decision_simd_vector_type>(simdvec)-verticaltabs)<threes)^
				(ebcdic_specific_nls==simdvec)^(linefeeds==simdvec)^(spaces==simdvec);
			});
		}
	
	}
	else
	{
		constexpr char_type five{5};
#if (__cpp_lib_bit_cast >= 201806L) && !defined(__clang__)
		constexpr
			decision_simd_vector_type fives{
				std::bit_cast<decision_simd_vector_type>(characters_array_impl<five,char_type,N,use_signed_vector_type>)};
		constexpr
			decision_simd_vector_type horizontaltabs{
				std::bit_cast<decision_simd_vector_type>(characters_array_impl<horizontaltab,char_type,N,use_signed_vector_type>)};
#else
		decision_simd_vector_type fives;
		fives.load(characters_array_impl<five,char_type,N,use_signed_vector_type>.data());

		decision_simd_vector_type horizontaltabs;
		horizontaltabs.load(characters_array_impl<horizontaltab,char_type,N,use_signed_vector_type>.data());
#endif

		if constexpr(ishtml)
		{
#if (__cpp_lib_bit_cast >= 201806L) && !defined(__clang__)
			constexpr
				simd_vector_type verticaltabs{
					std::bit_cast<simd_vector_type>(characters_array_impl<verticaltab,char_type,N>)};
#else

			simd_vector_type verticaltabs;
			verticaltabs.load(characters_array_impl<verticaltab,char_type,N>.data());
#endif
			return find_simd_common_all_impl<findnot,vec_size>(first,last,[&](simd_vector_type const& simdvec) noexcept
			{
				return (spaces==simdvec)^(static_cast<simd_vector_type>((static_cast<decision_simd_vector_type>(simdvec)-horizontaltabs)<fives)&(simdvec!=verticaltabs));
			});
		}
		else
		{
			return find_simd_common_all_impl<findnot,vec_size>(first,last,[&](simd_vector_type const& simdvec) noexcept
			{
				return (spaces==simdvec)^static_cast<simd_vector_type>(((static_cast<decision_simd_vector_type>(simdvec)-horizontaltabs)<fives));
			});
		}
	}
}

/*
Referenced from musl libc but with extensions of findnot, __builtin_memcpy and C++20 <bit>
https://github.com/bminor/musl/blob/master/src/string/memchr.c
*/
template<bool findnot>
inline constexpr char unsigned const* find_characters_musl(char unsigned const* first,char unsigned const* last,char unsigned ch) noexcept
{
#if __cpp_if_consteval >= 202106L
	if !consteval
#else
	if(!std::is_constant_evaluated())
#endif
	{
	constexpr std::size_t diff{sizeof(std::size_t)};
	
	constexpr char unsigned ucharmx{std::numeric_limits<char unsigned>::max()};
	constexpr std::size_t ones{std::numeric_limits<std::size_t>::max()/ucharmx};
	constexpr std::size_t highs{ones*(ucharmx/2+1)};
	if(first!=last&&*first!=ch)
	{
	for(std::size_t const constantk{ones*ch};diff<=static_cast<std::size_t>(last-first);first+=diff)
	{

		std::size_t x;
#if defined(_MSC_VER) && !defined(__clang__)
		std::memcpy(__builtin_addressof(x),first,diff);
#else
		__builtin_memcpy(__builtin_addressof(x),first,diff);
#endif
		x^=constantk;
		std::size_t v{(x-ones)&(~x)&highs};
		if constexpr(findnot)
		{
			if(v!=highs)
			{
				break;
			}

		}
		else
		{
			if(v)
			{
				break;
			}
		}
	}
	}
	}
	if constexpr(findnot)
	{
		for(;first!=last&&*first==ch;++first);
	}
	else
	{
		for(;first!=last&&*first!=ch;++first);
	}
	return first;
}

template<char8_t lfch,bool findnot,std::integral char_type>
inline constexpr char_type const* find_simd_constant_common_impl(char_type const* first,char_type const* last) noexcept
{
	constexpr char_type lfchct{char_literal_v<lfch,std::remove_cvref_t<char_type>>};

#if __cpp_if_consteval >= 202106L || __cpp_lib_is_constant_evaluated >= 201811L
#if __cpp_if_consteval >= 202106L
	if !consteval
#else
	if(!std::is_constant_evaluated())
#endif
	{
	constexpr bool use_builtin_memchr{
#if (__STDC_HOSTED__==1 && (!defined(_GLIBCXX_HOSTED) || _GLIBCXX_HOSTED==1))
#if defined(__GLIBC__) && defined(__GLIBC_MINOR__)
#if (__GLIBC__ > 2 || (__GLIBC__ == 2 && __GLIBC_MINOR__ >= 26))
//For glibc >= 2.26, we use glibc's memchr implementation under hosted environment
	!findnot && 0
#endif
#endif
#endif
	};
	if constexpr(use_builtin_memchr&&(sizeof(char_type)==1||(sizeof(char_type)==4&&sizeof(wchar_t)==4)))
	{
		std::size_t diff{static_cast<std::size_t>(last-first)};
		if(diff==0)
#if __has_cpp_attribute(likely)
		[[likely]]
#endif
		{
			return first;
		}
		void* ret;
		if constexpr(sizeof(char_type)==1)
		{
			ret = __builtin_memchr(first,lfchct,diff);
		}
		else
		{
			ret = __builtin_wmemchr(first,lfchct,diff);
		}
		if(ret==nullptr)
		{
			return last;
		}
		return reinterpret_cast<char_type const*>(ret);
	}
	else if constexpr(::fast_io::details::optimal_simd_vector_run_with_cpu_instruction_size)
	{
		first=find_simd_constant_simd_common_impl<lfch,findnot,::fast_io::details::optimal_simd_vector_run_with_cpu_instruction_size>(first,last);
	}
	else if constexpr(sizeof(char_type)==1)
	{
		char unsigned const* firstconstptr{reinterpret_cast<char unsigned const*>(first)};
		return find_characters_musl<findnot>(firstconstptr,reinterpret_cast<char unsigned const*>(last),lfchct)-firstconstptr+first;
	}
	}
#endif
	if constexpr(findnot)
	{
		return ::fast_io::freestanding::find_not(first,last,lfchct);
	}
	else
	{
		return ::fast_io::freestanding::find(first,last,lfchct);
	}
}

template<bool ishtml,bool findnot,::std::forward_iterator Iter>
requires (::std::integral<::std::iter_value_t<Iter>>)
inline constexpr Iter find_space_common_iterator_generic_impl(Iter begin,Iter end)
{
	if constexpr(ishtml)
	{
		if constexpr(findnot)
		{
			for(;begin!=end&&fast_io::char_category::is_html_whitespace(*begin);++begin);
		}
		else
		{
			for(;begin!=end&&!fast_io::char_category::is_html_whitespace(*begin);++begin);
		}
	}
	else
	{
		if constexpr(findnot)
		{
			for(;begin!=end&&fast_io::char_category::is_c_space(*begin);++begin);
		}
		else
		{
			for(;begin!=end&&!fast_io::char_category::is_c_space(*begin);++begin);
		}
	}
	return begin;
}

template<bool ishtml,bool findnot,std::integral char_type>
inline constexpr char_type const* find_space_common_impl(char_type const* first,char_type const* last) noexcept
{
#if __cpp_if_consteval >= 202106L || __cpp_lib_is_constant_evaluated >= 201811L
#if __cpp_if_consteval >= 202106L
	if !consteval
#else
	if(!std::is_constant_evaluated())
#endif
	{
		if constexpr(::fast_io::details::optimal_simd_vector_run_with_cpu_instruction_size)
		{
			first=find_space_simd_common_impl<ishtml,findnot,::fast_io::details::optimal_simd_vector_run_with_cpu_instruction_size>(first,last);
		}
	}
#endif
	return find_space_common_iterator_generic_impl<ishtml,findnot>(first,last);
}

template<std::integral char_type>
inline constexpr char_type const* find_lf_simd_impl(char_type const* first,char_type const* last) noexcept
{
	return find_simd_constant_common_impl<u8'\n',false>(first,last);
}

template<std::integral char_type>
inline constexpr char_type const* find_none_zero_simd_impl(char_type const* first,char_type const* last) noexcept
{
	return find_simd_constant_common_impl<u8'0',true>(first,last);
}

template<bool ishtml,bool findnot,::std::forward_iterator Iter>
requires (::std::integral<::std::iter_value_t<Iter>>)
inline constexpr Iter find_space_impl(Iter first,Iter last)
{
	using value_type = ::std::iter_value_t<Iter>;
	if constexpr(!::std::is_volatile_v<value_type>&&::std::contiguous_iterator<Iter>)
	{
		if constexpr(::std::same_as<value_type,::std::remove_cvref_t<value_type> const>)
		{
			return ::fast_io::details::find_space_common_impl<ishtml,findnot>(first,last);
		}
		else if constexpr(::std::is_pointer_v<Iter>)
		{
			::std::remove_cvref_t<value_type> const* first_const_ptr{first};
			return ::fast_io::details::find_space_common_impl<ishtml,findnot>(first_const_ptr,last)-first_const_ptr+first;
		}
		else
		{
			::std::remove_cvref_t<value_type> const* first_const_ptr{std::to_address(first)};
			return ::fast_io::details::find_space_common_impl<ishtml,findnot>(first_const_ptr,std::to_address(last))-first_const_ptr+first;
		}
	}
	else
	{
		return find_space_common_iterator_generic_impl<ishtml,findnot>(first,last);
	}
}

template<char8_t lfch,bool findnot,::std::forward_iterator Iter>
requires (::std::integral<::std::iter_value_t<Iter>>)
inline constexpr Iter find_ch_impl(Iter first,Iter last)
{
	using value_type = ::std::iter_value_t<Iter>;
	if constexpr(!::std::is_volatile_v<value_type>&&::std::contiguous_iterator<Iter>)
	{
		if constexpr(::std::same_as<value_type,::std::remove_cvref_t<value_type> const>)
		{
			return ::fast_io::details::find_simd_constant_common_impl<lfch,findnot>(first,last);
		}
		else if constexpr(::std::is_pointer_v<Iter>)
		{
			::std::remove_cvref_t<value_type> const* first_const_ptr{first};
			return ::fast_io::details::find_simd_constant_common_impl<lfch,findnot>(first_const_ptr,last)-first_const_ptr+first;
		}
		else
		{
			::std::remove_cvref_t<value_type> const* first_const_ptr{std::to_address(first)};
			return ::fast_io::details::find_simd_constant_common_impl<lfch,findnot>(first_const_ptr,std::to_address(last))-first_const_ptr+first;
		}
	}
	else
	{
		constexpr auto lfchct{char_literal_v<lfch,std::remove_cvref_t<value_type>>};
		if constexpr(findnot)
		{
			return ::fast_io::freestanding::find_not(first,last,lfchct);
		}
		else
		{
			return ::fast_io::freestanding::find(first,last,lfchct);
		}
	}
}

}
