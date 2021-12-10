#pragma once

#if __has_cpp_attribute(gnu::always_inline)
[[gnu::always_inline]]
#endif
inline void sha512_simd16_byte_swap_message_2rounds(
	::fast_io::intrinsics::simd_vector<std::uint_least64_t,2>& __restrict s0,
	::fast_io::intrinsics::simd_vector<std::uint_least64_t,2>& __restrict s1,
	std::byte const* __restrict blocks_start,std::uint_least64_t* __restrict w,std::uint_fast16_t round) noexcept
{
	using namespace ::fast_io::intrinsics;
	s1.load(blocks_start+(round<<3u));
	s0.load(::fast_io::details::sha512::K512+round);
	if constexpr(std::endian::native==std::endian::little)
	{
		s1.swap_endian();
	}
	s1.store(w+round);
	s0.wrap_add_assign(s1);
}

#if __has_cpp_attribute(gnu::always_inline)
[[gnu::always_inline]]
#endif
inline void sha512_simd16_compute_message_2rounds(
	::fast_io::intrinsics::simd_vector<std::uint_least64_t,2>& __restrict s0,
	::fast_io::intrinsics::simd_vector<std::uint_least64_t,2>& __restrict s1,
	std::uint_least64_t* __restrict w,std::uint_fast8_t round) noexcept
{
	using namespace ::fast_io::intrinsics;
	s0.load(w+(round-15));
#if 1
	s1=(((((s1>>42)^s1)>>13)^s1)>>6)^(((s1<<42)^s1)<<3);
	s0=(((((s0>>1)^s0)>>6)^s0)>>1)^(((s0<<7)^s0)<<56);
#else
	s1=(s1>>19)^(s1<<45)^(s1>>61)^(s1<<3)^(s1>>6);
	s0=(s0>>1)^(s0<<63)^(s0>>8)^(s0<<56)^(s0>>7);
#endif
	s1.wrap_add_assign(s0);
	s0.load(w+(round-16));
	s1.wrap_add_assign(s0);
	s0.load(w+(round-7));
	s1.wrap_add_assign(s0);
	s1.store(w+round);
	s0.load(::fast_io::details::sha512::K512+round);
	s0.wrap_add_assign(s1);
}

#if __has_cpp_attribute(gnu::flatten)
[[gnu::flatten]]
#endif
inline void sha512_runtime_routine(std::uint_least64_t* __restrict state,std::byte const* __restrict blocks_start,std::byte const* __restrict blocks_last) noexcept
{
	using namespace fast_io::intrinsics;
	using namespace fast_io::details::sha512;


	simd_vector<std::uint_least64_t,2> s0,s2;
	simd_vector<std::uint_least64_t,2> simd;
	std::uint_least64_t w[80];
	std::uint_least64_t a{state[0]};
	std::uint_least64_t b{state[1]};
	std::uint_least64_t c{state[2]};
	std::uint_least64_t d{state[3]};
	std::uint_least64_t e{state[4]};
	std::uint_least64_t f{state[5]};
	std::uint_least64_t g{state[6]};
	std::uint_least64_t h{state[7]};

	for(;blocks_start!=blocks_last;blocks_start+=128)
	{
		sha512_simd16_byte_swap_message_2rounds(s0,simd,blocks_start,w,0);
		s2=s0;
		sha512_simd16_byte_swap_message_2rounds(s0,simd,blocks_start,w,2);
		std::uint_least64_t bpc{b^c};
		sha512_scalar_round(s2[0],a,b,d,e,f,g,h,bpc);
		sha512_scalar_round(s2[1],h,a,c,d,e,f,g,bpc);
		s2=s0;
		sha512_simd16_byte_swap_message_2rounds(s0,simd,blocks_start,w,4);
		sha512_scalar_round(s2[0],g,h,b,c,d,e,f,bpc);
		sha512_scalar_round(s2[1],f,g,a,b,c,d,e,bpc);
		s2=s0;
		sha512_simd16_byte_swap_message_2rounds(s0,simd,blocks_start,w,6);
		sha512_scalar_round(s2[0],e,f,h,a,b,c,d,bpc);
		sha512_scalar_round(s2[1],d,e,g,h,a,b,c,bpc);
		s2=s0;
		sha512_simd16_byte_swap_message_2rounds(s0,simd,blocks_start,w,8);
		sha512_scalar_round(s2[0],c,d,f,g,h,a,b,bpc);
		sha512_scalar_round(s2[1],b,c,e,f,g,h,a,bpc);
		s2=s0;
		sha512_simd16_byte_swap_message_2rounds(s0,simd,blocks_start,w,10);
		sha512_scalar_round(s2[0],a,b,d,e,f,g,h,bpc);
		sha512_scalar_round(s2[1],h,a,c,d,e,f,g,bpc);
		s2=s0;
		sha512_simd16_byte_swap_message_2rounds(s0,simd,blocks_start,w,12);
		sha512_scalar_round(s2[0],g,h,b,c,d,e,f,bpc);
		sha512_scalar_round(s2[1],f,g,a,b,c,d,e,bpc);
		s2=s0;
		sha512_simd16_byte_swap_message_2rounds(s0,simd,blocks_start,w,14);
		sha512_scalar_round(s2[0],e,f,h,a,b,c,d,bpc);
		sha512_scalar_round(s2[1],d,e,g,h,a,b,c,bpc);
		s2=s0;
		for(std::uint_fast8_t i{16};i!=80;i+=8)
		{
			sha512_simd16_compute_message_2rounds(s0,simd,w,i);
			sha512_scalar_round(s2[0],c,d,f,g,h,a,b,bpc);
			sha512_scalar_round(s2[1],b,c,e,f,g,h,a,bpc);
			s2=s0;
			sha512_simd16_compute_message_2rounds(s0,simd,w,i+2);
			sha512_scalar_round(s2[0],a,b,d,e,f,g,h,bpc);
			sha512_scalar_round(s2[1],h,a,c,d,e,f,g,bpc);
			s2=s0;
			sha512_simd16_compute_message_2rounds(s0,simd,w,i+4);
			sha512_scalar_round(s2[0],g,h,b,c,d,e,f,bpc);
			sha512_scalar_round(s2[1],f,g,a,b,c,d,e,bpc);
			s2=s0;
			sha512_simd16_compute_message_2rounds(s0,simd,w,i+6);
			sha512_scalar_round(s2[0],e,f,h,a,b,c,d,bpc);
			sha512_scalar_round(s2[1],d,e,g,h,a,b,c,bpc);
			s2=s0;
#if 0
			sha512_simd16_compute_message_2rounds(s0,simd,w,i+8);
			sha512_scalar_round(s2[0],c,d,f,g,h,a,b,bpc);
			sha512_scalar_round(s2[1],b,c,e,f,g,h,a,bpc);
			s2=s0;
			sha512_simd16_compute_message_2rounds(s0,simd,w,i+10);
			sha512_scalar_round(s2[0],a,b,d,e,f,g,h,bpc);
			sha512_scalar_round(s2[1],h,a,c,d,e,f,g,bpc);
			s2=s0;
			sha512_simd16_compute_message_2rounds(s0,simd,w,i+12);
			sha512_scalar_round(s2[0],g,h,b,c,d,e,f,bpc);
			sha512_scalar_round(s2[1],f,g,a,b,c,d,e,bpc);
			s2=s0;
			sha512_simd16_compute_message_2rounds(s0,simd,w,i+14);
			sha512_scalar_round(s2[0],e,f,h,a,b,c,d,bpc);
			sha512_scalar_round(s2[1],d,e,g,h,a,b,c,bpc);
			s2=s0;
#endif
		}
		sha512_scalar_round(s2[0],c,d,f,g,h,a,b,bpc);
		sha512_scalar_round(s2[1],b,c,e,f,g,h,a,bpc);
		a=(*state+=a);
		b=(state[1]+=b);
		c=(state[2]+=c);
		d=(state[3]+=d);
		e=(state[4]+=e);
		f=(state[5]+=f);
		g=(state[6]+=g);
		h=(state[7]+=h);
	}
}
