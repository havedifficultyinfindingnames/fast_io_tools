#pragma once

namespace fast_io::details::jeaiii
{

template<std::integral char_type>
inline constexpr void jeaiii_w(char_type* pi,std::uint_fast32_t u) noexcept
{
	constexpr auto tb{::fast_io::details::get_shared_inline_constexpr_base_table<char_type,10,false>().element};
#if __cpp_if_consteval > 202106L
	if consteval
#else
	if(std::is_constant_evaluated())
#endif
	{
		non_overlapped_copy_n(tb[u].element,2,pi);
	}
	else
	{
#if defined(__has_builtin)
#if __has_builtin(__builtin_memcpy)
		__builtin_memcpy(pi,tb[u].element,2);
#else
		::std::memcpy(pi,tb[u].element,2);
#endif
#else
		::std::memcpy(pi,tb[u].element,2);
#endif
	}
}

template<std::size_t n,std::integral char_type>
inline constexpr std::uint_least64_t jeaiii_a(char_type* pi,std::uint_least32_t u) noexcept
{
	constexpr std::uint_least64_t one{1};
	constexpr std::uint_least64_t v{n/5*n*53/16};
	constexpr std::uint_least64_t constant{(one<<(32+v))/
		::fast_io::details::compile_pow10<std::uint_least64_t,n>+1+n/6-n/8};
	std::uint_least64_t t{constant*u};
	t>>=v;
	constexpr std::uint_least64_t add_factor{n/6*4};
	if constexpr(add_factor)
		t+=add_factor;
	jeaiii_w(pi,static_cast<std::uint_fast32_t>(t>>32u));
	return t;
}

template<std::size_t n,std::integral ch_type>
inline constexpr void jeaiii_s(ch_type* pi,std::uint_least64_t t) noexcept
{
	using char_type = ch_type;
	constexpr std::uint_least64_t ten{10u};
	pi[n]=static_cast<char_type>(ten*static_cast<std::uint_least32_t>(t)>>32u)+char_literal_v<u8'0',char_type>;
}

template<std::size_t n,bool last=false,std::integral char_type>
inline constexpr auto jeaiii_d(char_type* pi,std::uint_least64_t t) noexcept
{
	constexpr std::uint_least64_t hundred{100u};
	jeaiii_w(pi+n,static_cast<std::uint_least32_t>((t=hundred*static_cast<std::uint_least32_t>(t))>>32));
	if constexpr(!last)
		return t;
}


template<std::size_t n,std::integral char_type>
inline constexpr void jeaiii_c(char_type* pi,std::uint_least32_t u) noexcept
{
	if constexpr(n==0)
	{
		*pi=static_cast<char_type>(u)+char_literal_v<u8'0',char_type>;
	}
	else if constexpr(n==1)
	{
		jeaiii_w(pi,u);
	}
	else if constexpr(n==2)
	{
		jeaiii_s<2>(pi,jeaiii_a<1>(pi,u));
	}
	else if constexpr(n==3)
	{
		jeaiii_d<2,true>(pi,jeaiii_a<2>(pi,u));
	}
	else if constexpr(n==4)
	{
		jeaiii_s<4>(pi,jeaiii_d<2>(pi,jeaiii_a<3>(pi,u)));
	}
	else if constexpr(n==5)
	{
		jeaiii_d<4,true>(pi,jeaiii_d<2>(pi,jeaiii_a<4>(pi,u)));
	}
	else if constexpr(n==5)
	{
		jeaiii_s<4>(pi,jeaiii_d<2>(pi,jeaiii_a<4>(pi,u)));
	}
	else if constexpr(n==6)
	{
		jeaiii_s<6>(pi,jeaiii_d<4>(pi,jeaiii_d<2>(pi,jeaiii_a<5>(pi,u))));
	}
	else if constexpr(n==7)
	{
		jeaiii_d<6,true>(pi,jeaiii_d<4>(pi,jeaiii_d<2>(pi,jeaiii_a<6>(pi,u))));
	}
	else if constexpr(n==8)
	{
		std::uint_least64_t t{jeaiii_a<7>(pi,u)};
		t=jeaiii_d<2>(pi,t);
		t=jeaiii_d<4>(pi,t);
		t=jeaiii_d<6>(pi,t);
		jeaiii_s<8>(pi,t);
	}
	else if constexpr(n==9)
	{
		std::uint_least64_t t{jeaiii_a<8>(pi,u)};
		t=jeaiii_d<2>(pi,t);
		t=jeaiii_d<4>(pi,t);
		t=jeaiii_d<6>(pi,t);
		jeaiii_d<8,true>(pi,t);
	}
}

template<std::size_t n,std::integral char_type>
inline constexpr char_type* jeaiii_f(char_type* pi,std::uint_least32_t u) noexcept
{
	constexpr std::size_t np1{n+1};
	jeaiii_c<n>(pi,u);
	return pi+np1;
}

template<std::size_t n,std::integral char_type>
inline constexpr char_type* jeaiii_l(char_type* pi,std::uint_least32_t u) noexcept
{
	if constexpr(n==9)
	{
		if(u<100u)
		{
			return jeaiii_l<1>(pi,u);
		}
		else
		{
			return jeaiii_l<29>(pi,u);
		}
	}
	else if constexpr(n==29)
	{
		if(u<1000000u)
		{
			return jeaiii_l<25>(pi,u);
		}
		else
		{
			return jeaiii_l<69>(pi,u);
		}
	}
	else if constexpr(n==25)
	{
		if(u<10000u)
		{
			return jeaiii_l<23>(pi,u);
		}
		else
		{
			return jeaiii_l<45>(pi,u);
		}
	}
	else if constexpr(n==69)
	{
		if(u<100000000u)
		{
			return jeaiii_l<67>(pi,u);
		}
		else
		{
			return jeaiii_l<89>(pi,u);
		}
	}
	else if constexpr(n==3)
	{
		if(u<100u)
		{
			return jeaiii_l<1>(pi,u);
		}
		else
		{
			return jeaiii_l<23>(pi,u);
		}
	}
	else if constexpr(n==1)
	{
		if(u<10u)
		{
			return jeaiii_f<0>(pi,u);
		}
		else
		{
			return jeaiii_f<1>(pi,u);
		}
	}
	else if constexpr(n==23)
	{
		if(u<1000u)
		{
			return jeaiii_f<2>(pi,u);
		}
		else
		{
			return jeaiii_f<3>(pi,u);
		}
	}
	else if constexpr(n==45)
	{
		if(u<100000u)
		{
			return jeaiii_f<4>(pi,u);
		}
		else
		{
			return jeaiii_f<5>(pi,u);
		}
	}
	else if constexpr(n==67)
	{
		if(u<10000000u)
		{
			return jeaiii_f<6>(pi,u);
		}
		else
		{
			return jeaiii_f<7>(pi,u);
		}
	}
	else if constexpr(n==89)
	{
		if(u<1000000000u)
		{
			return jeaiii_f<8>(pi,u);
		}
		else
		{
			return jeaiii_f<9>(pi,u);
		}
	}
}

template<std::integral char_type,::fast_io::details::my_unsigned_integral U>
inline
#if __cpp_constexpr >= 202110L
//goto in constexpr is only allowed since C++23
constexpr
#endif
char_type* jeaiii_main(char_type* ptr,U n) noexcept
{
	if constexpr(sizeof(U)>sizeof(std::uint_least64_t)&&sizeof(U)==16)//__uint128_t
	{
		std::uint_least64_t u;
		if(static_cast<std::uint_least32_t>(n>>64u)==0)
		{
			u=static_cast<std::uint_least64_t>(n);
			goto uint128_end_label;
		}
		{
			constexpr std::uint_least64_t divisor{10000000000000000000ull};
			U a{n/divisor};
			u=static_cast<std::uint_least64_t>(n%divisor);
			std::uint_least64_t alow{static_cast<std::uint_least64_t>(a)};
			if(static_cast<std::uint_least64_t>(a>>64u)!=0u)
			{
				std::uint_least32_t v{static_cast<std::uint_least32_t>(a/divisor)};
				std::uint_least64_t m{static_cast<std::uint_least64_t>(a%divisor)};
				jeaiii_c<0>(ptr,v);
				++ptr;
				alow=m;
			}
			ptr=jeaiii_main(ptr,static_cast<std::uint_least64_t>(alow));
		}
uint128_end_label:
		return jeaiii_main(ptr,static_cast<std::uint_least64_t>(u));
	}
	else if constexpr(sizeof(U)==sizeof(std::uint_least64_t))
	{
		std::uint_least32_t u;
		if(static_cast<std::uint_least32_t>(n>>32u)==0)
		{
			u=static_cast<std::uint_least32_t>(n);
			goto uint64_end_label;
		}
		{
			constexpr std::uint_least32_t divisor{1000000000u};
			std::uint_least64_t a{n/divisor};
			u=static_cast<std::uint_least32_t>(n%divisor);
			std::uint_least32_t alow{static_cast<std::uint_least32_t>(a)};
			if(static_cast<std::uint_least32_t>(a>>32u)!=0u)
			{
				std::uint_least32_t v{static_cast<std::uint_least32_t>(a/divisor)};
				std::uint_least32_t m{static_cast<std::uint_least32_t>(a%divisor)};
				if(v>=10u)
				{
					jeaiii_w(ptr,v);
					ptr+=2;
				}
				else
				{
					jeaiii_c<0>(ptr,v);
					++ptr;
				}
				alow=m;
			}
			ptr=jeaiii_l<9>(ptr,static_cast<std::uint_least32_t>(alow));
		}
uint64_end_label:
		return jeaiii_l<9>(ptr,u);
	}
	else
	{
		return jeaiii_l<9>(ptr,n);
	}
}

}
