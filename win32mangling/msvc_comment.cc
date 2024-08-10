#include<string_view>
#include<fast_io_device.h>
#include<fast_io.h>

int main(int argc,char** argv)
{
	using namespace ::fast_io::io;
	if(argc<3)
	{
		if(argc==0)
		{
			return 1;
		}
		perr("Usage: ",fast_io::mnp::os_c_str(argv[0])," <input file> <output file>\n");
		return 1;
	}
	fast_io::u8ibuf_file ibf(fast_io::mnp::os_c_str(argv[1]));
	fast_io::u8obuf_file obf(fast_io::mnp::os_c_str(argv[2]));
	print(obf,u8"#pragma once\n\n// clang-format off");
	for(auto& linesc:line_scanner(ibf))
	{
		std::u8string_view line{linesc};
		if(line.empty())
			continue;
		auto i{line.rfind(u8' ')};
		if(i==SIZE_MAX)
		{
			print(obf,line,u8" : bad");
			continue;
		}
		print(obf,u8"#pragma comment(linker,\"/alternatename:",line.substr(0,i),u8"=",line.substr(i+1),u8"\")\n");
	}
	print(obf,u8"// clang-format on\n");
}
