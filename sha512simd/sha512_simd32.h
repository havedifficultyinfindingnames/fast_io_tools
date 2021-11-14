#pragma once

#if __has_cpp_attribute(gnu::flatten)
[[gnu::flatten]]
#endif
inline void sha512_simd32(std::uint_least64_t* __restrict state,std::byte const* __restrict blocks_start,std::byte const* __restrict blocks_last) noexcept
{
	using namespace fast_io::intrinsics;
	using namespace fast_io::details::sha512;

	simd_vector<std::uint_least64_t,4> simd,simd_temp;
	constexpr simd_vector<char,32> byteswap_simd{7,6,5,4,3,2,1,0,15,14,13,12,11,10,9,8,23,22,21,20,19,18,17,16,31,30,29,28,27,26,25,24};

	constexpr bool is_little_endian{std::endian::native==std::endian::little};

	std::uint_least64_t wt[80];
	std::uint_least64_t w[76];
	std::uint_least64_t a{state[0]};
	std::uint_least64_t b{state[1]};
	std::uint_least64_t c{state[2]};
	std::uint_least64_t d{state[3]};
	std::uint_least64_t e{state[4]};
	std::uint_least64_t f{state[5]};
	std::uint_least64_t g{state[6]};
	std::uint_least64_t h{state[7]};
	std::uint_least64_t sigma1wm2;

	for(;blocks_start!=blocks_last;blocks_start+=128)
	{
		simd.load(blocks_start);
		simd_temp.load(K512);
		if constexpr(is_little_endian)
			simd.shuffle(byteswap_simd);
		simd.store(w);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt);

		sha512_scalar_round(wt[0],a,b,c,d,e,f,g,h);
		sha512_scalar_round(wt[1],h,a,b,c,d,e,f,g);
		sha512_scalar_round(wt[2],g,h,a,b,c,d,e,f);
		sha512_scalar_round(wt[3],f,g,h,a,b,c,d,e);
		simd.load(blocks_start+32);
		simd_temp.load(K512+4);
		if constexpr(is_little_endian)
			simd.shuffle(byteswap_simd);
		simd.store(w+4);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+4);

		sha512_scalar_round(wt[4],e,f,g,h,a,b,c,d);
		sha512_scalar_round(wt[5],d,e,f,g,h,a,b,c);
		sha512_scalar_round(wt[6],c,d,e,f,g,h,a,b);
		sha512_scalar_round(wt[7],b,c,d,e,f,g,h,a);
		simd.load(blocks_start+64);
		simd_temp.load(K512+8);
		if constexpr(is_little_endian)
			simd.shuffle(byteswap_simd);
		simd.store(w+8);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+8);

		sha512_scalar_round(wt[8],a,b,c,d,e,f,g,h);
		sha512_scalar_round(wt[9],h,a,b,c,d,e,f,g);
		sha512_scalar_round(wt[10],g,h,a,b,c,d,e,f);
		sha512_scalar_round(wt[11],f,g,h,a,b,c,d,e);
		simd.load(blocks_start+96);
		simd_temp.load(K512+12);
		if constexpr(is_little_endian)
			simd.shuffle(byteswap_simd);
		simd.store(w+12);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+12);

		sigma1wm2=sigma1(w[10]);
		w[12]+=sigmal1wm2;
		sha512_scalar_round(wt[10]+signmalwm1,e,f,g,h,a,b,c,d);
		sigma1wm2=sigma1(w[11]);
		w[13]+=sigmal1wm2;
		sha512_scalar_round(wt[11]+signmalwm1,d,e,f,g,h,a,b,c);
		sigma1wm2=sigma1(w[12]);
		w[14]+=sigmal1wm2;
		sha512_scalar_round(wt[12]+signmalwm1,c,d,e,f,g,h,a,b);
		sigma1wm2=sigma1(w[13]);
		w[15]+=sigmal1wm2;
		sha512_scalar_round(wt[13]+signmalwm1,b,c,d,e,f,g,h,a);
		simd.load(w+1);
		simd=(simd>>1)^(simd<<63)^(simd>>8)^(simd<<56)^(simd>>7);
		simd_temp.load(w);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+7);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+16);
		simd_temp.load(K512+16);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+16);

		sigma1wm2=sigma1(w[14]);
		w[16]+=sigmal1wm2;
		sha512_scalar_round(wt[14]+signmalwm1,a,b,c,d,e,f,g,h);
		sigma1wm2=sigma1(w[15]);
		w[17]+=sigmal1wm2;
		sha512_scalar_round(wt[15]+signmalwm1,h,a,b,c,d,e,f,g);
		sigma1wm2=sigma1(w[16]);
		w[18]+=sigmal1wm2;
		sha512_scalar_round(wt[16]+signmalwm1,g,h,a,b,c,d,e,f);
		sigma1wm2=sigma1(w[17]);
		w[19]+=sigmal1wm2;
		sha512_scalar_round(wt[17]+signmalwm1,f,g,h,a,b,c,d,e);
		simd.load(w+5);
		simd=(simd>>1)^(simd<<63)^(simd>>8)^(simd<<56)^(simd>>7);
		simd_temp.load(w+18446744073709551604);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+11);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+20);
		simd_temp.load(K512+20);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+20);

		sigma1wm2=sigma1(w[18]);
		w[20]+=sigmal1wm2;
		sha512_scalar_round(wt[18]+signmalwm1,e,f,g,h,a,b,c,d);
		sigma1wm2=sigma1(w[19]);
		w[21]+=sigmal1wm2;
		sha512_scalar_round(wt[19]+signmalwm1,d,e,f,g,h,a,b,c);
		sigma1wm2=sigma1(w[20]);
		w[22]+=sigmal1wm2;
		sha512_scalar_round(wt[20]+signmalwm1,c,d,e,f,g,h,a,b);
		sigma1wm2=sigma1(w[21]);
		w[23]+=sigmal1wm2;
		sha512_scalar_round(wt[21]+signmalwm1,b,c,d,e,f,g,h,a);
		simd.load(w+9);
		simd=(simd>>1)^(simd<<63)^(simd>>8)^(simd<<56)^(simd>>7);
		simd_temp.load(w+18446744073709551608);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+15);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+24);
		simd_temp.load(K512+24);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+24);

		sigma1wm2=sigma1(w[22]);
		w[24]+=sigmal1wm2;
		sha512_scalar_round(wt[22]+signmalwm1,a,b,c,d,e,f,g,h);
		sigma1wm2=sigma1(w[23]);
		w[25]+=sigmal1wm2;
		sha512_scalar_round(wt[23]+signmalwm1,h,a,b,c,d,e,f,g);
		sigma1wm2=sigma1(w[24]);
		w[26]+=sigmal1wm2;
		sha512_scalar_round(wt[24]+signmalwm1,g,h,a,b,c,d,e,f);
		sigma1wm2=sigma1(w[25]);
		w[27]+=sigmal1wm2;
		sha512_scalar_round(wt[25]+signmalwm1,f,g,h,a,b,c,d,e);
		simd.load(w+13);
		simd=(simd>>1)^(simd<<63)^(simd>>8)^(simd<<56)^(simd>>7);
		simd_temp.load(w+18446744073709551612);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+19);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+28);
		simd_temp.load(K512+28);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+28);

		sigma1wm2=sigma1(w[26]);
		w[28]+=sigmal1wm2;
		sha512_scalar_round(wt[26]+signmalwm1,e,f,g,h,a,b,c,d);
		sigma1wm2=sigma1(w[27]);
		w[29]+=sigmal1wm2;
		sha512_scalar_round(wt[27]+signmalwm1,d,e,f,g,h,a,b,c);
		sigma1wm2=sigma1(w[28]);
		w[30]+=sigmal1wm2;
		sha512_scalar_round(wt[28]+signmalwm1,c,d,e,f,g,h,a,b);
		sigma1wm2=sigma1(w[29]);
		w[31]+=sigmal1wm2;
		sha512_scalar_round(wt[29]+signmalwm1,b,c,d,e,f,g,h,a);
		simd.load(w+17);
		simd=(simd>>1)^(simd<<63)^(simd>>8)^(simd<<56)^(simd>>7);
		simd_temp.load(w+0);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+23);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+32);
		simd_temp.load(K512+32);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+32);

		sigma1wm2=sigma1(w[30]);
		w[32]+=sigmal1wm2;
		sha512_scalar_round(wt[30]+signmalwm1,a,b,c,d,e,f,g,h);
		sigma1wm2=sigma1(w[31]);
		w[33]+=sigmal1wm2;
		sha512_scalar_round(wt[31]+signmalwm1,h,a,b,c,d,e,f,g);
		sigma1wm2=sigma1(w[32]);
		w[34]+=sigmal1wm2;
		sha512_scalar_round(wt[32]+signmalwm1,g,h,a,b,c,d,e,f);
		sigma1wm2=sigma1(w[33]);
		w[35]+=sigmal1wm2;
		sha512_scalar_round(wt[33]+signmalwm1,f,g,h,a,b,c,d,e);
		simd.load(w+21);
		simd=(simd>>1)^(simd<<63)^(simd>>8)^(simd<<56)^(simd>>7);
		simd_temp.load(w+4);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+27);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+36);
		simd_temp.load(K512+36);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+36);

		sigma1wm2=sigma1(w[34]);
		w[36]+=sigmal1wm2;
		sha512_scalar_round(wt[34]+signmalwm1,e,f,g,h,a,b,c,d);
		sigma1wm2=sigma1(w[35]);
		w[37]+=sigmal1wm2;
		sha512_scalar_round(wt[35]+signmalwm1,d,e,f,g,h,a,b,c);
		sigma1wm2=sigma1(w[36]);
		w[38]+=sigmal1wm2;
		sha512_scalar_round(wt[36]+signmalwm1,c,d,e,f,g,h,a,b);
		sigma1wm2=sigma1(w[37]);
		w[39]+=sigmal1wm2;
		sha512_scalar_round(wt[37]+signmalwm1,b,c,d,e,f,g,h,a);
		simd.load(w+25);
		simd=(simd>>1)^(simd<<63)^(simd>>8)^(simd<<56)^(simd>>7);
		simd_temp.load(w+8);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+31);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+40);
		simd_temp.load(K512+40);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+40);

		sigma1wm2=sigma1(w[38]);
		w[40]+=sigmal1wm2;
		sha512_scalar_round(wt[38]+signmalwm1,a,b,c,d,e,f,g,h);
		sigma1wm2=sigma1(w[39]);
		w[41]+=sigmal1wm2;
		sha512_scalar_round(wt[39]+signmalwm1,h,a,b,c,d,e,f,g);
		sigma1wm2=sigma1(w[40]);
		w[42]+=sigmal1wm2;
		sha512_scalar_round(wt[40]+signmalwm1,g,h,a,b,c,d,e,f);
		sigma1wm2=sigma1(w[41]);
		w[43]+=sigmal1wm2;
		sha512_scalar_round(wt[41]+signmalwm1,f,g,h,a,b,c,d,e);
		simd.load(w+29);
		simd=(simd>>1)^(simd<<63)^(simd>>8)^(simd<<56)^(simd>>7);
		simd_temp.load(w+12);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+35);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+44);
		simd_temp.load(K512+44);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+44);

		sigma1wm2=sigma1(w[42]);
		w[44]+=sigmal1wm2;
		sha512_scalar_round(wt[42]+signmalwm1,e,f,g,h,a,b,c,d);
		sigma1wm2=sigma1(w[43]);
		w[45]+=sigmal1wm2;
		sha512_scalar_round(wt[43]+signmalwm1,d,e,f,g,h,a,b,c);
		sigma1wm2=sigma1(w[44]);
		w[46]+=sigmal1wm2;
		sha512_scalar_round(wt[44]+signmalwm1,c,d,e,f,g,h,a,b);
		sigma1wm2=sigma1(w[45]);
		w[47]+=sigmal1wm2;
		sha512_scalar_round(wt[45]+signmalwm1,b,c,d,e,f,g,h,a);
		simd.load(w+33);
		simd=(simd>>1)^(simd<<63)^(simd>>8)^(simd<<56)^(simd>>7);
		simd_temp.load(w+16);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+39);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+48);
		simd_temp.load(K512+48);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+48);

		sigma1wm2=sigma1(w[46]);
		w[48]+=sigmal1wm2;
		sha512_scalar_round(wt[46]+signmalwm1,a,b,c,d,e,f,g,h);
		sigma1wm2=sigma1(w[47]);
		w[49]+=sigmal1wm2;
		sha512_scalar_round(wt[47]+signmalwm1,h,a,b,c,d,e,f,g);
		sigma1wm2=sigma1(w[48]);
		w[50]+=sigmal1wm2;
		sha512_scalar_round(wt[48]+signmalwm1,g,h,a,b,c,d,e,f);
		sigma1wm2=sigma1(w[49]);
		w[51]+=sigmal1wm2;
		sha512_scalar_round(wt[49]+signmalwm1,f,g,h,a,b,c,d,e);
		simd.load(w+37);
		simd=(simd>>1)^(simd<<63)^(simd>>8)^(simd<<56)^(simd>>7);
		simd_temp.load(w+20);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+43);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+52);
		simd_temp.load(K512+52);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+52);

		sigma1wm2=sigma1(w[50]);
		w[52]+=sigmal1wm2;
		sha512_scalar_round(wt[50]+signmalwm1,e,f,g,h,a,b,c,d);
		sigma1wm2=sigma1(w[51]);
		w[53]+=sigmal1wm2;
		sha512_scalar_round(wt[51]+signmalwm1,d,e,f,g,h,a,b,c);
		sigma1wm2=sigma1(w[52]);
		w[54]+=sigmal1wm2;
		sha512_scalar_round(wt[52]+signmalwm1,c,d,e,f,g,h,a,b);
		sigma1wm2=sigma1(w[53]);
		w[55]+=sigmal1wm2;
		sha512_scalar_round(wt[53]+signmalwm1,b,c,d,e,f,g,h,a);
		simd.load(w+41);
		simd=(simd>>1)^(simd<<63)^(simd>>8)^(simd<<56)^(simd>>7);
		simd_temp.load(w+24);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+47);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+56);
		simd_temp.load(K512+56);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+56);

		sigma1wm2=sigma1(w[54]);
		w[56]+=sigmal1wm2;
		sha512_scalar_round(wt[54]+signmalwm1,a,b,c,d,e,f,g,h);
		sigma1wm2=sigma1(w[55]);
		w[57]+=sigmal1wm2;
		sha512_scalar_round(wt[55]+signmalwm1,h,a,b,c,d,e,f,g);
		sigma1wm2=sigma1(w[56]);
		w[58]+=sigmal1wm2;
		sha512_scalar_round(wt[56]+signmalwm1,g,h,a,b,c,d,e,f);
		sigma1wm2=sigma1(w[57]);
		w[59]+=sigmal1wm2;
		sha512_scalar_round(wt[57]+signmalwm1,f,g,h,a,b,c,d,e);
		simd.load(w+45);
		simd=(simd>>1)^(simd<<63)^(simd>>8)^(simd<<56)^(simd>>7);
		simd_temp.load(w+28);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+51);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+60);
		simd_temp.load(K512+60);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+60);

		sigma1wm2=sigma1(w[58]);
		w[60]+=sigmal1wm2;
		sha512_scalar_round(wt[58]+signmalwm1,e,f,g,h,a,b,c,d);
		sigma1wm2=sigma1(w[59]);
		w[61]+=sigmal1wm2;
		sha512_scalar_round(wt[59]+signmalwm1,d,e,f,g,h,a,b,c);
		sigma1wm2=sigma1(w[60]);
		w[62]+=sigmal1wm2;
		sha512_scalar_round(wt[60]+signmalwm1,c,d,e,f,g,h,a,b);
		sigma1wm2=sigma1(w[61]);
		w[63]+=sigmal1wm2;
		sha512_scalar_round(wt[61]+signmalwm1,b,c,d,e,f,g,h,a);
		simd.load(w+49);
		simd=(simd>>1)^(simd<<63)^(simd>>8)^(simd<<56)^(simd>>7);
		simd_temp.load(w+32);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+55);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+64);
		simd_temp.load(K512+64);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+64);

		sigma1wm2=sigma1(w[62]);
		w[64]+=sigmal1wm2;
		sha512_scalar_round(wt[62]+signmalwm1,a,b,c,d,e,f,g,h);
		sigma1wm2=sigma1(w[63]);
		w[65]+=sigmal1wm2;
		sha512_scalar_round(wt[63]+signmalwm1,h,a,b,c,d,e,f,g);
		sigma1wm2=sigma1(w[64]);
		w[66]+=sigmal1wm2;
		sha512_scalar_round(wt[64]+signmalwm1,g,h,a,b,c,d,e,f);
		sigma1wm2=sigma1(w[65]);
		w[67]+=sigmal1wm2;
		sha512_scalar_round(wt[65]+signmalwm1,f,g,h,a,b,c,d,e);
		simd.load(w+53);
		simd=(simd>>1)^(simd<<63)^(simd>>8)^(simd<<56)^(simd>>7);
		simd_temp.load(w+36);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+59);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+68);
		simd_temp.load(K512+68);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+68);

		sigma1wm2=sigma1(w[66]);
		w[68]+=sigmal1wm2;
		sha512_scalar_round(wt[66]+signmalwm1,e,f,g,h,a,b,c,d);
		sigma1wm2=sigma1(w[67]);
		w[69]+=sigmal1wm2;
		sha512_scalar_round(wt[67]+signmalwm1,d,e,f,g,h,a,b,c);
		sigma1wm2=sigma1(w[68]);
		w[70]+=sigmal1wm2;
		sha512_scalar_round(wt[68]+signmalwm1,c,d,e,f,g,h,a,b);
		sigma1wm2=sigma1(w[69]);
		w[71]+=sigmal1wm2;
		sha512_scalar_round(wt[69]+signmalwm1,b,c,d,e,f,g,h,a);
		simd.load(w+57);
		simd=(simd>>1)^(simd<<63)^(simd>>8)^(simd<<56)^(simd>>7);
		simd_temp.load(w+40);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+63);
		simd.wrap_add_assign(simd_temp);
		simd.store(w+72);
		simd_temp.load(K512+72);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+72);

		sigma1wm2=sigma1(w[70]);
		w[72]+=sigmal1wm2;
		sha512_scalar_round(wt[70]+signmalwm1,a,b,c,d,e,f,g,h);
		sigma1wm2=sigma1(w[71]);
		w[73]+=sigmal1wm2;
		sha512_scalar_round(wt[71]+signmalwm1,h,a,b,c,d,e,f,g);
		sigma1wm2=sigma1(w[72]);
		w[74]+=sigmal1wm2;
		sha512_scalar_round(wt[72]+signmalwm1,g,h,a,b,c,d,e,f);
		sigma1wm2=sigma1(w[73]);
		w[75]+=sigmal1wm2;
		sha512_scalar_round(wt[73]+signmalwm1,f,g,h,a,b,c,d,e);
		simd.load(w+61);
		simd=(simd>>1)^(simd<<63)^(simd>>8)^(simd<<56)^(simd>>7);
		simd_temp.load(w+44);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(w+67);
		simd.wrap_add_assign(simd_temp);
		simd_temp.load(K512+76);
		simd.wrap_add_assign(simd_temp);
		simd.store(wt+76);

		sigma1wm2=sigma1(w[74]);
		w[76]+=sigmal1wm2;
		sha512_scalar_round(wt[74]+signmalwm1,e,f,g,h,a,b,c,d);
		sigma1wm2=sigma1(w[75]);
		w[77]+=sigmal1wm2;
		sha512_scalar_round(wt[75]+signmalwm1,d,e,f,g,h,a,b,c);
		sigma1wm2=sigma1(w[76]);
		w[78]+=sigmal1wm2;
		sha512_scalar_round(wt[76]+signmalwm1,c,d,e,f,g,h,a,b);
		sigma1wm2=sigma1(w[77]);
		w[79]+=sigmal1wm2;
		sha512_scalar_round(wt[77]+signmalwm1,b,c,d,e,f,g,h,a);

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
