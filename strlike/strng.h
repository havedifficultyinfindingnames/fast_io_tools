#pragma once
namespace fast_io
{
template<std::integral char_type,typename traits_type,typename allocator_type>
inline constexpr auto strlike_construct_define(io_strlike_type_t<char_type,::std::basic_string<char_type,traits_type,allocator_type>>,char_type const* first,char_type const* last)
{
	return ::std::basic_string<char_type,traits_type,allocator_type>(first,last);
}

template<std::integral char_type,typename traits_type,typename allocator_type>
inline constexpr char_type* strlike_begin(io_strlike_type_t<char_type,::std::basic_string<char_type,traits_type,allocator_type>>,::std::basic_string<char_type,traits_type,allocator_type>& str)
{
	return str.data();
}

template<std::integral char_type,typename traits_type,typename allocator_type>
inline constexpr char_type* strlike_curr(io_strlike_type_t<char_type,::std::basic_string<char_type,traits_type,allocator_type>>,::std::basic_string<char_type,traits_type,allocator_type>& str)
{
	return str.data()+str.size();
}

template<std::integral char_type,typename traits_type,typename allocator_type>
inline constexpr char_type* strlike_end(io_strlike_type_t<char_type,::std::basic_string<char_type,traits_type,allocator_type>>,::std::basic_string<char_type,traits_type,allocator_type>& str)
{
	return str.data()+str.capacity();
}

template<std::integral char_type,typename traits_type,typename allocator_type>
inline constexpr void strlike_set_curr(io_strlike_type_t<char_type,::std::basic_string<char_type,traits_type,allocator_type>>,::std::basic_string<char_type,traits_type,allocator_type>& str,char_type* p)
{
	::fast_io::details::string_hack::set_end_ptr(str,p);
}

template<std::integral char_type,typename traits_type,typename allocator_type>
inline constexpr void strlike_reserve(io_strlike_type_t<char_type,::std::basic_string<char_type,traits_type,allocator_type>>,::std::basic_string<char_type,traits_type,allocator_type>& str,std::size_t n)
{
	str.reserve(n);
}

template<std::integral char_type,typename traits_type,typename allocator_type>
inline constexpr std::size_t strlike_sso_size(io_strlike_type_t<char_type,::std::basic_string<char_type,traits_type,allocator_type>>) noexcept
{
	return ::fast_io::details::string_hack::local_capacity<::std::basic_string<char_type,traits_type,allocator_type>>();
}

}