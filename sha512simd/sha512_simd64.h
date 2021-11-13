#pragma once

#if __has_cpp_attribute(gnu::flatten)
[[gnu::flatten]]
#endif
inline void sha512_simd64(std::uint_least64_t* __restrict state,std::byte const* __restrict blocks_start,std::byte const* __restrict blocks_last) noexcept
{
	using namespace fast_io::intrinsics;
	using namespace fast_io::details::sha512;

	simd_vector<std::uint_least64_t,8> simd;
	simd_vector<std::uint_least64_t,8> simd_temp;
	constexpr simd_vector<char,64> byteswap_simd{7,6,5,4,3,2,1,0,15,14,13,12,11,10,9,8,23,22,21,20,19,18,17,16,31,30,29,28,27,26,25,24,39,38,37,36,35,34,33,32,47,46,45,44,43,42,41,40,55,54,53,52,51,50,49,48,63,62,61,60,59,58,57,56};

	constexpr bool is_little_endian{std::endian::native==std::endian::little};

	std::uint_least64_t wt[80];
	std::uint_least64_t w[72];
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
		simd.load(blocks_start);
		simd_temp.load(K512);
		if constexpr(is_little_endian)
			simd.shuffle(byteswap_simd);
		simd.store(w);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt);

		simd.load(blocks_start+64);
		simd_temp.load(K512+8);
		if constexpr(is_little_endian)
			simd.shuffle(byteswap_simd);
		simd.store(w+8);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+8);
		sha512_scalar_round(wt[0],a,b,c,d,e,f,g,h);
		sha512_scalar_round(wt[1],h,a,b,c,d,e,f,g);
		sha512_scalar_round(wt[2],g,h,a,b,c,d,e,f);
		sha512_scalar_round(wt[3],f,g,h,a,b,c,d,e);
		sha512_scalar_round(wt[4],e,f,g,h,a,b,c,d);
		sha512_scalar_round(wt[5],d,e,f,g,h,a,b,c);
		sha512_scalar_round(wt[6],c,d,e,f,g,h,a,b);
		sha512_scalar_round(wt[7],b,c,d,e,f,g,h,a);

		simd_temp.load(w+1);
		simd.load(w+14);
		simd=(simd>>19)^(simd<<45)^(simd>>61)^(simd<<3)^(simd>>6);
		simd_temp=(simd_temp>>1)^(simd_temp<<63)^(simd_temp>>8)^(simd_temp<<56)^(simd_temp>>7);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+9);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+16);
		simd_temp.load(K512+16);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+16);
		sha512_scalar_round(wt[8],a,b,c,d,e,f,g,h);
		sha512_scalar_round(wt[9],h,a,b,c,d,e,f,g);
		sha512_scalar_round(wt[10],g,h,a,b,c,d,e,f);
		sha512_scalar_round(wt[11],f,g,h,a,b,c,d,e);
		sha512_scalar_round(wt[12],e,f,g,h,a,b,c,d);
		sha512_scalar_round(wt[13],d,e,f,g,h,a,b,c);
		sha512_scalar_round(wt[14],c,d,e,f,g,h,a,b);
		sha512_scalar_round(wt[15],b,c,d,e,f,g,h,a);

		simd_temp.load(w+9);
		simd.load(w+22);
		simd=(simd>>19)^(simd<<45)^(simd>>61)^(simd<<3)^(simd>>6);
		simd_temp=(simd_temp>>1)^(simd_temp<<63)^(simd_temp>>8)^(simd_temp<<56)^(simd_temp>>7);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+8);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+17);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+24);
		simd_temp.load(K512+24);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+24);
		sha512_scalar_round(wt[16],a,b,c,d,e,f,g,h);
		sha512_scalar_round(wt[17],h,a,b,c,d,e,f,g);
		sha512_scalar_round(wt[18],g,h,a,b,c,d,e,f);
		sha512_scalar_round(wt[19],f,g,h,a,b,c,d,e);
		sha512_scalar_round(wt[20],e,f,g,h,a,b,c,d);
		sha512_scalar_round(wt[21],d,e,f,g,h,a,b,c);
		sha512_scalar_round(wt[22],c,d,e,f,g,h,a,b);
		sha512_scalar_round(wt[23],b,c,d,e,f,g,h,a);

		simd_temp.load(w+17);
		simd.load(w+30);
		simd=(simd>>19)^(simd<<45)^(simd>>61)^(simd<<3)^(simd>>6);
		simd_temp=(simd_temp>>1)^(simd_temp<<63)^(simd_temp>>8)^(simd_temp<<56)^(simd_temp>>7);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+16);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+25);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+32);
		simd_temp.load(K512+32);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+32);
		sha512_scalar_round(wt[24],a,b,c,d,e,f,g,h);
		sha512_scalar_round(wt[25],h,a,b,c,d,e,f,g);
		sha512_scalar_round(wt[26],g,h,a,b,c,d,e,f);
		sha512_scalar_round(wt[27],f,g,h,a,b,c,d,e);
		sha512_scalar_round(wt[28],e,f,g,h,a,b,c,d);
		sha512_scalar_round(wt[29],d,e,f,g,h,a,b,c);
		sha512_scalar_round(wt[30],c,d,e,f,g,h,a,b);
		sha512_scalar_round(wt[31],b,c,d,e,f,g,h,a);

		simd_temp.load(w+25);
		simd.load(w+38);
		simd=(simd>>19)^(simd<<45)^(simd>>61)^(simd<<3)^(simd>>6);
		simd_temp=(simd_temp>>1)^(simd_temp<<63)^(simd_temp>>8)^(simd_temp<<56)^(simd_temp>>7);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+24);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+33);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+40);
		simd_temp.load(K512+40);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+40);
		sha512_scalar_round(wt[32],a,b,c,d,e,f,g,h);
		sha512_scalar_round(wt[33],h,a,b,c,d,e,f,g);
		sha512_scalar_round(wt[34],g,h,a,b,c,d,e,f);
		sha512_scalar_round(wt[35],f,g,h,a,b,c,d,e);
		sha512_scalar_round(wt[36],e,f,g,h,a,b,c,d);
		sha512_scalar_round(wt[37],d,e,f,g,h,a,b,c);
		sha512_scalar_round(wt[38],c,d,e,f,g,h,a,b);
		sha512_scalar_round(wt[39],b,c,d,e,f,g,h,a);

		simd_temp.load(w+33);
		simd.load(w+46);
		simd=(simd>>19)^(simd<<45)^(simd>>61)^(simd<<3)^(simd>>6);
		simd_temp=(simd_temp>>1)^(simd_temp<<63)^(simd_temp>>8)^(simd_temp<<56)^(simd_temp>>7);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+32);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+41);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+48);
		simd_temp.load(K512+48);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+48);
		sha512_scalar_round(wt[40],a,b,c,d,e,f,g,h);
		sha512_scalar_round(wt[41],h,a,b,c,d,e,f,g);
		sha512_scalar_round(wt[42],g,h,a,b,c,d,e,f);
		sha512_scalar_round(wt[43],f,g,h,a,b,c,d,e);
		sha512_scalar_round(wt[44],e,f,g,h,a,b,c,d);
		sha512_scalar_round(wt[45],d,e,f,g,h,a,b,c);
		sha512_scalar_round(wt[46],c,d,e,f,g,h,a,b);
		sha512_scalar_round(wt[47],b,c,d,e,f,g,h,a);

		simd_temp.load(w+41);
		simd.load(w+54);
		simd=(simd>>19)^(simd<<45)^(simd>>61)^(simd<<3)^(simd>>6);
		simd_temp=(simd_temp>>1)^(simd_temp<<63)^(simd_temp>>8)^(simd_temp<<56)^(simd_temp>>7);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+40);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+49);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+56);
		simd_temp.load(K512+56);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+56);
		sha512_scalar_round(wt[48],a,b,c,d,e,f,g,h);
		sha512_scalar_round(wt[49],h,a,b,c,d,e,f,g);
		sha512_scalar_round(wt[50],g,h,a,b,c,d,e,f);
		sha512_scalar_round(wt[51],f,g,h,a,b,c,d,e);
		sha512_scalar_round(wt[52],e,f,g,h,a,b,c,d);
		sha512_scalar_round(wt[53],d,e,f,g,h,a,b,c);
		sha512_scalar_round(wt[54],c,d,e,f,g,h,a,b);
		sha512_scalar_round(wt[55],b,c,d,e,f,g,h,a);

		simd_temp.load(w+49);
		simd.load(w+62);
		simd=(simd>>19)^(simd<<45)^(simd>>61)^(simd<<3)^(simd>>6);
		simd_temp=(simd_temp>>1)^(simd_temp<<63)^(simd_temp>>8)^(simd_temp<<56)^(simd_temp>>7);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+48);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+57);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+64);
		simd_temp.load(K512+64);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+64);
		sha512_scalar_round(wt[56],a,b,c,d,e,f,g,h);
		sha512_scalar_round(wt[57],h,a,b,c,d,e,f,g);
		sha512_scalar_round(wt[58],g,h,a,b,c,d,e,f);
		sha512_scalar_round(wt[59],f,g,h,a,b,c,d,e);
		sha512_scalar_round(wt[60],e,f,g,h,a,b,c,d);
		sha512_scalar_round(wt[61],d,e,f,g,h,a,b,c);
		sha512_scalar_round(wt[62],c,d,e,f,g,h,a,b);
		sha512_scalar_round(wt[63],b,c,d,e,f,g,h,a);

		simd_temp.load(w+57);
		simd.load(w+70);
		simd=(simd>>19)^(simd<<45)^(simd>>61)^(simd<<3)^(simd>>6);
		simd_temp=(simd_temp>>1)^(simd_temp<<63)^(simd_temp>>8)^(simd_temp<<56)^(simd_temp>>7);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+56);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+65);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(K512+72);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+72);
		sha512_scalar_round(wt[64],a,b,c,d,e,f,g,h);
		sha512_scalar_round(wt[65],h,a,b,c,d,e,f,g);
		sha512_scalar_round(wt[66],g,h,a,b,c,d,e,f);
		sha512_scalar_round(wt[67],f,g,h,a,b,c,d,e);
		sha512_scalar_round(wt[68],e,f,g,h,a,b,c,d);
		sha512_scalar_round(wt[69],d,e,f,g,h,a,b,c);
		sha512_scalar_round(wt[70],c,d,e,f,g,h,a,b);
		sha512_scalar_round(wt[71],b,c,d,e,f,g,h,a);

		sha512_scalar_round(wt[72],a,b,c,d,e,f,g,h);
		sha512_scalar_round(wt[73],h,a,b,c,d,e,f,g);
		sha512_scalar_round(wt[74],g,h,a,b,c,d,e,f);
		sha512_scalar_round(wt[75],f,g,h,a,b,c,d,e);
		sha512_scalar_round(wt[76],e,f,g,h,a,b,c,d);
		sha512_scalar_round(wt[77],d,e,f,g,h,a,b,c);
		sha512_scalar_round(wt[78],c,d,e,f,g,h,a,b);
		sha512_scalar_round(wt[79],b,c,d,e,f,g,h,a);

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
