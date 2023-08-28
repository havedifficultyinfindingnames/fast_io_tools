#include<fast_io.h>
#include"fast_io_unit/gb18030.h"
using namespace fast_io::io;
#include"impl.h"

int main()
{
	char8_t buffer[]=u8"😀 😃 😄 😁 😆 12348724937149127598057193085732850 😅 😂 🤣 🥲 🥹 ☺️ 😊 😇 🙂 🙃 😉 😌 😍 🥰 😘 😗 😙 😚 😋 😛 😝 😜 🤪 🤨 🧐 🤓 😎 🥸 🤩 🥳 😏 😒 😞 😔 😟 😕 🙁 ☹️ 😣 😖 😫 😩 🥺 😢 😭 😮‍💨 😤 😠 😡 🤬 🤯 😳 🥵 🥶 😱 😨 😰 😥 😓 🫣 🤗 🫡 🤔 🫢 🤭 🤫 🤥 😶 😶‍🌫️ 😐 😑 😬 🫨 🫠 🙄 😯 😦 😧 😮 😲 🥱 😴 🤤 😪 😵 😵‍💫 🫥 🤐 🥴 🤢 🤮 🤧 😷";

	char8_t buffer2[]=u8"123487249371491275980571930857328507130295731295sdhfsdhaiosdghdsoighsiodg";

	char buffer32[1000]{};
	auto [it,dit]=::fast_io::code_cvt_api<::fast_io::manipulators::encoding::utf8,::fast_io::manipulators::encoding::utf_ebcdic>(buffer,buffer+std::ranges::size(buffer)-1,buffer32,buffer32+std::ranges::size(buffer32));


	char buffer42[1000]{};
	auto [it2,dit2]=::fast_io::code_cvt_api<::fast_io::manipulators::encoding::utf8,::fast_io::manipulators::encoding::utf_ebcdic>(buffer2,buffer2+std::ranges::size(buffer2)-1,buffer42,buffer42+std::ranges::size(buffer42));

	::fast_io::io::println(dit-buffer32,"\n",::fast_io::mnp::code_cvt(::fast_io::mnp::strvw(buffer32,dit)),"\n",

			dit2-buffer42,"\n",::fast_io::mnp::code_cvt(::fast_io::mnp::strvw(buffer42,dit2)));

}
