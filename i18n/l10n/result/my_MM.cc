﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr basic_io_scatter_t<char> time_alt_digits_storage[]{tsc("၀၀"),tsc("၀၁"),tsc("၀၂"),tsc("၀၃"),tsc("၀၄"),tsc("၀၅"),tsc("၀၆"),tsc("၀၇"),tsc("၀၈"),tsc("၀၉"),tsc("၁၀"),tsc("၁၁"),tsc("၁၂"),tsc("၁၃"),tsc("၁၄"),tsc("၁၅"),tsc("၁၆"),tsc("၁၇"),tsc("၁၈"),tsc("၁၉"),tsc("၂၀"),tsc("၂၁"),tsc("၂၂"),tsc("၂၃"),tsc("၂၄"),tsc("၂၅"),tsc("၂၆"),tsc("၂၇"),tsc("၂၈"),tsc("၂၉"),tsc("၃၀"),tsc("၃၁"),tsc("၃၂"),tsc("၃၃"),tsc("၃၄"),tsc("၃၅"),tsc("၃၆"),tsc("၃၇"),tsc("၃၈"),tsc("၃၉"),tsc("၄၀"),tsc("၄၁"),tsc("၄၂"),tsc("၄၃"),tsc("၄၄"),tsc("၄၅"),tsc("၄၆"),tsc("၄၇"),tsc("၄၈"),tsc("၄၉"),tsc("၅၀"),tsc("၅၁"),tsc("၅၂"),tsc("၅၃"),tsc("၅၄"),tsc("၅၅"),tsc("၅၆"),tsc("၅၇"),tsc("၅၈"),tsc("၅၉"),tsc("၆၀"),tsc("၆၁"),tsc("၆၂"),tsc("၆၃"),tsc("၆၄"),tsc("၆၅"),tsc("၆၆"),tsc("၆၇"),tsc("၆၈"),tsc("၆၉"),tsc("၇၀"),tsc("၇၁"),tsc("၇၂"),tsc("၇၃"),tsc("၇၄"),tsc("၇၅"),tsc("၇၆"),tsc("၇၇"),tsc("၇၈"),tsc("၇၉"),tsc("၈၀"),tsc("၈၁"),tsc("၈၂"),tsc("၈၃"),tsc("၈၄"),tsc("၈၅"),tsc("၈၆"),tsc("၈၇"),tsc("၈၈"),tsc("၈၉"),tsc("၉၀"),tsc("၉၁"),tsc("၉၂"),tsc("၉၃"),tsc("၉၄"),tsc("၉၅"),tsc("၉၆"),tsc("၉၇"),tsc("၉၈"),tsc("၉၉")};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Burmese language locale for Myanmar"),.source=tsc("ThanLwinSoft http://www.thanlwinsoft.org\t\t;\t\tfast_io"),.address=tsc("Yangon, Myanmar\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc("Keith Stribley\t\t;\t\tfast_io"),.email=tsc("devel@thanlwinsoft.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Burmese"),.territory=tsc("Myanmar (Burma)"),.revision=tsc("1.3"),.date=tsc("2009-10-02")},.monetary={.int_curr_symbol=tsc("MMK "),.currency_symbol=tsc("K"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=0,.n_cs_precedes=0,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("နွေ"),tsc("လာ"),tsc("ဂါ"),tsc("ဟူး"),tsc("တေး"),tsc("သော"),tsc("နေ")},.day={tsc("တနင်္ဂနွေ"),tsc("တနင်္လာ"),tsc("အင်္ဂါ"),tsc("ဗုဒ္ဓဟူး"),tsc("ကြာသပတေး"),tsc("သောကြာ"),tsc("စနေ")},.abmon={tsc("ဇန်"),tsc("ဖေ"),tsc("မတ်"),tsc("ဧပြီ"),tsc("မေ"),tsc("ဇွန်"),tsc("ဇူ"),tsc("ဩ"),tsc("စက်"),tsc("အောက်"),tsc("နို"),tsc("ဒီ")},.mon={tsc("ဇန်နဝါရီ"),tsc("ဖေဖော်ဝါရီ"),tsc("မတ်"),tsc("ဧပြီ"),tsc("မေ"),tsc("ဇွန်"),tsc("ဇူလိုင်"),tsc("ဩဂုတ်"),tsc("စက်တင်ဘာ"),tsc("အောက်တိုဘာ"),tsc("နိုဝင်ဘာ"),tsc("ဒီဇင်ဘာ")},.d_t_fmt=tsc("%OC%Oy %b %Od %A %OI:%OM:%OS %p"),.d_fmt=tsc("%OC%Oy %b %Od %A"),.t_fmt=tsc("%OI:%OM:%OS %p"),.t_fmt_ampm=tsc("%OI:%OM:%OS %p"),.date_fmt=tsc("%OC%Oy %b %Od %A %OI:%OM:%OS %p %Z"),.am_pm={tsc("နံနက်"),tsc("ညနေ")},.alt_digits={time_alt_digits_storage,100},.week={7,19971130,1}},.messages={.yesexpr=tsc("^[+1yYဟ]"),.noexpr=tsc("^[-0nNမ]"),.yesstr=tsc("ဟုတ်တယ်"),.nostr=tsc("မဟုတ်ဘူး")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.tel_dom_fmt=tsc("%a %l"),.int_select=tsc("0"),.int_prefix=tsc("95")},.name={.name_fmt=tsc("%p%t%g%t%m%t%f"),.name_gen=tsc(""),.name_miss=tsc("မ"),.name_mr=tsc("ဦး"),.name_mrs=tsc("ဒေါ်"),.name_ms=tsc("ဒေါ်")},.address={.postal_fmt=tsc("%a%N%d%N%f%N%b%N%h%t%r%t%e%t%s%N%T%t%z%N%c%N"),.country_name=tsc("မြန်မာ"),.country_post=tsc("Myanmar"),.country_ab2=tsc("MM"),.country_num=104,.country_car=tsc("MYA"),.lang_name=tsc("မြန်မာ"),.lang_ab=tsc("my"),.lang_term=tsc("mya"),.lang_lib=tsc("bur")},.measurement={.measurement=1}};

inline constexpr basic_io_scatter_t<wchar_t> wtime_alt_digits_storage[]{tsc(L"၀၀"),tsc(L"၀၁"),tsc(L"၀၂"),tsc(L"၀၃"),tsc(L"၀၄"),tsc(L"၀၅"),tsc(L"၀၆"),tsc(L"၀၇"),tsc(L"၀၈"),tsc(L"၀၉"),tsc(L"၁၀"),tsc(L"၁၁"),tsc(L"၁၂"),tsc(L"၁၃"),tsc(L"၁၄"),tsc(L"၁၅"),tsc(L"၁၆"),tsc(L"၁၇"),tsc(L"၁၈"),tsc(L"၁၉"),tsc(L"၂၀"),tsc(L"၂၁"),tsc(L"၂၂"),tsc(L"၂၃"),tsc(L"၂၄"),tsc(L"၂၅"),tsc(L"၂၆"),tsc(L"၂၇"),tsc(L"၂၈"),tsc(L"၂၉"),tsc(L"၃၀"),tsc(L"၃၁"),tsc(L"၃၂"),tsc(L"၃၃"),tsc(L"၃၄"),tsc(L"၃၅"),tsc(L"၃၆"),tsc(L"၃၇"),tsc(L"၃၈"),tsc(L"၃၉"),tsc(L"၄၀"),tsc(L"၄၁"),tsc(L"၄၂"),tsc(L"၄၃"),tsc(L"၄၄"),tsc(L"၄၅"),tsc(L"၄၆"),tsc(L"၄၇"),tsc(L"၄၈"),tsc(L"၄၉"),tsc(L"၅၀"),tsc(L"၅၁"),tsc(L"၅၂"),tsc(L"၅၃"),tsc(L"၅၄"),tsc(L"၅၅"),tsc(L"၅၆"),tsc(L"၅၇"),tsc(L"၅၈"),tsc(L"၅၉"),tsc(L"၆၀"),tsc(L"၆၁"),tsc(L"၆၂"),tsc(L"၆၃"),tsc(L"၆၄"),tsc(L"၆၅"),tsc(L"၆၆"),tsc(L"၆၇"),tsc(L"၆၈"),tsc(L"၆၉"),tsc(L"၇၀"),tsc(L"၇၁"),tsc(L"၇၂"),tsc(L"၇၃"),tsc(L"၇၄"),tsc(L"၇၅"),tsc(L"၇၆"),tsc(L"၇၇"),tsc(L"၇၈"),tsc(L"၇၉"),tsc(L"၈၀"),tsc(L"၈၁"),tsc(L"၈၂"),tsc(L"၈၃"),tsc(L"၈၄"),tsc(L"၈၅"),tsc(L"၈၆"),tsc(L"၈၇"),tsc(L"၈၈"),tsc(L"၈၉"),tsc(L"၉၀"),tsc(L"၉၁"),tsc(L"၉၂"),tsc(L"၉၃"),tsc(L"၉၄"),tsc(L"၉၅"),tsc(L"၉၆"),tsc(L"၉၇"),tsc(L"၉၈"),tsc(L"၉၉")};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Burmese language locale for Myanmar"),.source=tsc(L"ThanLwinSoft http://www.thanlwinsoft.org\t\t;\t\tfast_io"),.address=tsc(L"Yangon, Myanmar\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(L"Keith Stribley\t\t;\t\tfast_io"),.email=tsc(L"devel@thanlwinsoft.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Burmese"),.territory=tsc(L"Myanmar (Burma)"),.revision=tsc(L"1.3"),.date=tsc(L"2009-10-02")},.monetary={.int_curr_symbol=tsc(L"MMK "),.currency_symbol=tsc(L"K"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=0,.n_cs_precedes=0,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"နွေ"),tsc(L"လာ"),tsc(L"ဂါ"),tsc(L"ဟူး"),tsc(L"တေး"),tsc(L"သော"),tsc(L"နေ")},.day={tsc(L"တနင်္ဂနွေ"),tsc(L"တနင်္လာ"),tsc(L"အင်္ဂါ"),tsc(L"ဗုဒ္ဓဟူး"),tsc(L"ကြာသပတေး"),tsc(L"သောကြာ"),tsc(L"စနေ")},.abmon={tsc(L"ဇန်"),tsc(L"ဖေ"),tsc(L"မတ်"),tsc(L"ဧပြီ"),tsc(L"မေ"),tsc(L"ဇွန်"),tsc(L"ဇူ"),tsc(L"ဩ"),tsc(L"စက်"),tsc(L"အောက်"),tsc(L"နို"),tsc(L"ဒီ")},.mon={tsc(L"ဇန်နဝါရီ"),tsc(L"ဖေဖော်ဝါရီ"),tsc(L"မတ်"),tsc(L"ဧပြီ"),tsc(L"မေ"),tsc(L"ဇွန်"),tsc(L"ဇူလိုင်"),tsc(L"ဩဂုတ်"),tsc(L"စက်တင်ဘာ"),tsc(L"အောက်တိုဘာ"),tsc(L"နိုဝင်ဘာ"),tsc(L"ဒီဇင်ဘာ")},.d_t_fmt=tsc(L"%OC%Oy %b %Od %A %OI:%OM:%OS %p"),.d_fmt=tsc(L"%OC%Oy %b %Od %A"),.t_fmt=tsc(L"%OI:%OM:%OS %p"),.t_fmt_ampm=tsc(L"%OI:%OM:%OS %p"),.date_fmt=tsc(L"%OC%Oy %b %Od %A %OI:%OM:%OS %p %Z"),.am_pm={tsc(L"နံနက်"),tsc(L"ညနေ")},.alt_digits={wtime_alt_digits_storage,100},.week={7,19971130,1}},.messages={.yesexpr=tsc(L"^[+1yYဟ]"),.noexpr=tsc(L"^[-0nNမ]"),.yesstr=tsc(L"ဟုတ်တယ်"),.nostr=tsc(L"မဟုတ်ဘူး")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.tel_dom_fmt=tsc(L"%a %l"),.int_select=tsc(L"0"),.int_prefix=tsc(L"95")},.name={.name_fmt=tsc(L"%p%t%g%t%m%t%f"),.name_gen=tsc(L""),.name_miss=tsc(L"မ"),.name_mr=tsc(L"ဦး"),.name_mrs=tsc(L"ဒေါ်"),.name_ms=tsc(L"ဒေါ်")},.address={.postal_fmt=tsc(L"%a%N%d%N%f%N%b%N%h%t%r%t%e%t%s%N%T%t%z%N%c%N"),.country_name=tsc(L"မြန်မာ"),.country_post=tsc(L"Myanmar"),.country_ab2=tsc(L"MM"),.country_num=104,.country_car=tsc(L"MYA"),.lang_name=tsc(L"မြန်မာ"),.lang_ab=tsc(L"my"),.lang_term=tsc(L"mya"),.lang_lib=tsc(L"bur")},.measurement={.measurement=1}};

inline constexpr basic_io_scatter_t<char8_t> u8time_alt_digits_storage[]{tsc(u8"၀၀"),tsc(u8"၀၁"),tsc(u8"၀၂"),tsc(u8"၀၃"),tsc(u8"၀၄"),tsc(u8"၀၅"),tsc(u8"၀၆"),tsc(u8"၀၇"),tsc(u8"၀၈"),tsc(u8"၀၉"),tsc(u8"၁၀"),tsc(u8"၁၁"),tsc(u8"၁၂"),tsc(u8"၁၃"),tsc(u8"၁၄"),tsc(u8"၁၅"),tsc(u8"၁၆"),tsc(u8"၁၇"),tsc(u8"၁၈"),tsc(u8"၁၉"),tsc(u8"၂၀"),tsc(u8"၂၁"),tsc(u8"၂၂"),tsc(u8"၂၃"),tsc(u8"၂၄"),tsc(u8"၂၅"),tsc(u8"၂၆"),tsc(u8"၂၇"),tsc(u8"၂၈"),tsc(u8"၂၉"),tsc(u8"၃၀"),tsc(u8"၃၁"),tsc(u8"၃၂"),tsc(u8"၃၃"),tsc(u8"၃၄"),tsc(u8"၃၅"),tsc(u8"၃၆"),tsc(u8"၃၇"),tsc(u8"၃၈"),tsc(u8"၃၉"),tsc(u8"၄၀"),tsc(u8"၄၁"),tsc(u8"၄၂"),tsc(u8"၄၃"),tsc(u8"၄၄"),tsc(u8"၄၅"),tsc(u8"၄၆"),tsc(u8"၄၇"),tsc(u8"၄၈"),tsc(u8"၄၉"),tsc(u8"၅၀"),tsc(u8"၅၁"),tsc(u8"၅၂"),tsc(u8"၅၃"),tsc(u8"၅၄"),tsc(u8"၅၅"),tsc(u8"၅၆"),tsc(u8"၅၇"),tsc(u8"၅၈"),tsc(u8"၅၉"),tsc(u8"၆၀"),tsc(u8"၆၁"),tsc(u8"၆၂"),tsc(u8"၆၃"),tsc(u8"၆၄"),tsc(u8"၆၅"),tsc(u8"၆၆"),tsc(u8"၆၇"),tsc(u8"၆၈"),tsc(u8"၆၉"),tsc(u8"၇၀"),tsc(u8"၇၁"),tsc(u8"၇၂"),tsc(u8"၇၃"),tsc(u8"၇၄"),tsc(u8"၇၅"),tsc(u8"၇၆"),tsc(u8"၇၇"),tsc(u8"၇၈"),tsc(u8"၇၉"),tsc(u8"၈၀"),tsc(u8"၈၁"),tsc(u8"၈၂"),tsc(u8"၈၃"),tsc(u8"၈၄"),tsc(u8"၈၅"),tsc(u8"၈၆"),tsc(u8"၈၇"),tsc(u8"၈၈"),tsc(u8"၈၉"),tsc(u8"၉၀"),tsc(u8"၉၁"),tsc(u8"၉၂"),tsc(u8"၉၃"),tsc(u8"၉၄"),tsc(u8"၉၅"),tsc(u8"၉၆"),tsc(u8"၉၇"),tsc(u8"၉၈"),tsc(u8"၉၉")};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Burmese language locale for Myanmar"),.source=tsc(u8"ThanLwinSoft http://www.thanlwinsoft.org\t\t;\t\tfast_io"),.address=tsc(u8"Yangon, Myanmar\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u8"Keith Stribley\t\t;\t\tfast_io"),.email=tsc(u8"devel@thanlwinsoft.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Burmese"),.territory=tsc(u8"Myanmar (Burma)"),.revision=tsc(u8"1.3"),.date=tsc(u8"2009-10-02")},.monetary={.int_curr_symbol=tsc(u8"MMK "),.currency_symbol=tsc(u8"K"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=0,.n_cs_precedes=0,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"နွေ"),tsc(u8"လာ"),tsc(u8"ဂါ"),tsc(u8"ဟူး"),tsc(u8"တေး"),tsc(u8"သော"),tsc(u8"နေ")},.day={tsc(u8"တနင်္ဂနွေ"),tsc(u8"တနင်္လာ"),tsc(u8"အင်္ဂါ"),tsc(u8"ဗုဒ္ဓဟူး"),tsc(u8"ကြာသပတေး"),tsc(u8"သောကြာ"),tsc(u8"စနေ")},.abmon={tsc(u8"ဇန်"),tsc(u8"ဖေ"),tsc(u8"မတ်"),tsc(u8"ဧပြီ"),tsc(u8"မေ"),tsc(u8"ဇွန်"),tsc(u8"ဇူ"),tsc(u8"ဩ"),tsc(u8"စက်"),tsc(u8"အောက်"),tsc(u8"နို"),tsc(u8"ဒီ")},.mon={tsc(u8"ဇန်နဝါရီ"),tsc(u8"ဖေဖော်ဝါရီ"),tsc(u8"မတ်"),tsc(u8"ဧပြီ"),tsc(u8"မေ"),tsc(u8"ဇွန်"),tsc(u8"ဇူလိုင်"),tsc(u8"ဩဂုတ်"),tsc(u8"စက်တင်ဘာ"),tsc(u8"အောက်တိုဘာ"),tsc(u8"နိုဝင်ဘာ"),tsc(u8"ဒီဇင်ဘာ")},.d_t_fmt=tsc(u8"%OC%Oy %b %Od %A %OI:%OM:%OS %p"),.d_fmt=tsc(u8"%OC%Oy %b %Od %A"),.t_fmt=tsc(u8"%OI:%OM:%OS %p"),.t_fmt_ampm=tsc(u8"%OI:%OM:%OS %p"),.date_fmt=tsc(u8"%OC%Oy %b %Od %A %OI:%OM:%OS %p %Z"),.am_pm={tsc(u8"နံနက်"),tsc(u8"ညနေ")},.alt_digits={u8time_alt_digits_storage,100},.week={7,19971130,1}},.messages={.yesexpr=tsc(u8"^[+1yYဟ]"),.noexpr=tsc(u8"^[-0nNမ]"),.yesstr=tsc(u8"ဟုတ်တယ်"),.nostr=tsc(u8"မဟုတ်ဘူး")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.tel_dom_fmt=tsc(u8"%a %l"),.int_select=tsc(u8"0"),.int_prefix=tsc(u8"95")},.name={.name_fmt=tsc(u8"%p%t%g%t%m%t%f"),.name_gen=tsc(u8""),.name_miss=tsc(u8"မ"),.name_mr=tsc(u8"ဦး"),.name_mrs=tsc(u8"ဒေါ်"),.name_ms=tsc(u8"ဒေါ်")},.address={.postal_fmt=tsc(u8"%a%N%d%N%f%N%b%N%h%t%r%t%e%t%s%N%T%t%z%N%c%N"),.country_name=tsc(u8"မြန်မာ"),.country_post=tsc(u8"Myanmar"),.country_ab2=tsc(u8"MM"),.country_num=104,.country_car=tsc(u8"MYA"),.lang_name=tsc(u8"မြန်မာ"),.lang_ab=tsc(u8"my"),.lang_term=tsc(u8"mya"),.lang_lib=tsc(u8"bur")},.measurement={.measurement=1}};

inline constexpr basic_io_scatter_t<char16_t> u16time_alt_digits_storage[]{tsc(u"၀၀"),tsc(u"၀၁"),tsc(u"၀၂"),tsc(u"၀၃"),tsc(u"၀၄"),tsc(u"၀၅"),tsc(u"၀၆"),tsc(u"၀၇"),tsc(u"၀၈"),tsc(u"၀၉"),tsc(u"၁၀"),tsc(u"၁၁"),tsc(u"၁၂"),tsc(u"၁၃"),tsc(u"၁၄"),tsc(u"၁၅"),tsc(u"၁၆"),tsc(u"၁၇"),tsc(u"၁၈"),tsc(u"၁၉"),tsc(u"၂၀"),tsc(u"၂၁"),tsc(u"၂၂"),tsc(u"၂၃"),tsc(u"၂၄"),tsc(u"၂၅"),tsc(u"၂၆"),tsc(u"၂၇"),tsc(u"၂၈"),tsc(u"၂၉"),tsc(u"၃၀"),tsc(u"၃၁"),tsc(u"၃၂"),tsc(u"၃၃"),tsc(u"၃၄"),tsc(u"၃၅"),tsc(u"၃၆"),tsc(u"၃၇"),tsc(u"၃၈"),tsc(u"၃၉"),tsc(u"၄၀"),tsc(u"၄၁"),tsc(u"၄၂"),tsc(u"၄၃"),tsc(u"၄၄"),tsc(u"၄၅"),tsc(u"၄၆"),tsc(u"၄၇"),tsc(u"၄၈"),tsc(u"၄၉"),tsc(u"၅၀"),tsc(u"၅၁"),tsc(u"၅၂"),tsc(u"၅၃"),tsc(u"၅၄"),tsc(u"၅၅"),tsc(u"၅၆"),tsc(u"၅၇"),tsc(u"၅၈"),tsc(u"၅၉"),tsc(u"၆၀"),tsc(u"၆၁"),tsc(u"၆၂"),tsc(u"၆၃"),tsc(u"၆၄"),tsc(u"၆၅"),tsc(u"၆၆"),tsc(u"၆၇"),tsc(u"၆၈"),tsc(u"၆၉"),tsc(u"၇၀"),tsc(u"၇၁"),tsc(u"၇၂"),tsc(u"၇၃"),tsc(u"၇၄"),tsc(u"၇၅"),tsc(u"၇၆"),tsc(u"၇၇"),tsc(u"၇၈"),tsc(u"၇၉"),tsc(u"၈၀"),tsc(u"၈၁"),tsc(u"၈၂"),tsc(u"၈၃"),tsc(u"၈၄"),tsc(u"၈၅"),tsc(u"၈၆"),tsc(u"၈၇"),tsc(u"၈၈"),tsc(u"၈၉"),tsc(u"၉၀"),tsc(u"၉၁"),tsc(u"၉၂"),tsc(u"၉၃"),tsc(u"၉၄"),tsc(u"၉၅"),tsc(u"၉၆"),tsc(u"၉၇"),tsc(u"၉၈"),tsc(u"၉၉")};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Burmese language locale for Myanmar"),.source=tsc(u"ThanLwinSoft http://www.thanlwinsoft.org\t\t;\t\tfast_io"),.address=tsc(u"Yangon, Myanmar\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u"Keith Stribley\t\t;\t\tfast_io"),.email=tsc(u"devel@thanlwinsoft.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Burmese"),.territory=tsc(u"Myanmar (Burma)"),.revision=tsc(u"1.3"),.date=tsc(u"2009-10-02")},.monetary={.int_curr_symbol=tsc(u"MMK "),.currency_symbol=tsc(u"K"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=0,.n_cs_precedes=0,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"နွေ"),tsc(u"လာ"),tsc(u"ဂါ"),tsc(u"ဟူး"),tsc(u"တေး"),tsc(u"သော"),tsc(u"နေ")},.day={tsc(u"တနင်္ဂနွေ"),tsc(u"တနင်္လာ"),tsc(u"အင်္ဂါ"),tsc(u"ဗုဒ္ဓဟူး"),tsc(u"ကြာသပတေး"),tsc(u"သောကြာ"),tsc(u"စနေ")},.abmon={tsc(u"ဇန်"),tsc(u"ဖေ"),tsc(u"မတ်"),tsc(u"ဧပြီ"),tsc(u"မေ"),tsc(u"ဇွန်"),tsc(u"ဇူ"),tsc(u"ဩ"),tsc(u"စက်"),tsc(u"အောက်"),tsc(u"နို"),tsc(u"ဒီ")},.mon={tsc(u"ဇန်နဝါရီ"),tsc(u"ဖေဖော်ဝါရီ"),tsc(u"မတ်"),tsc(u"ဧပြီ"),tsc(u"မေ"),tsc(u"ဇွန်"),tsc(u"ဇူလိုင်"),tsc(u"ဩဂုတ်"),tsc(u"စက်တင်ဘာ"),tsc(u"အောက်တိုဘာ"),tsc(u"နိုဝင်ဘာ"),tsc(u"ဒီဇင်ဘာ")},.d_t_fmt=tsc(u"%OC%Oy %b %Od %A %OI:%OM:%OS %p"),.d_fmt=tsc(u"%OC%Oy %b %Od %A"),.t_fmt=tsc(u"%OI:%OM:%OS %p"),.t_fmt_ampm=tsc(u"%OI:%OM:%OS %p"),.date_fmt=tsc(u"%OC%Oy %b %Od %A %OI:%OM:%OS %p %Z"),.am_pm={tsc(u"နံနက်"),tsc(u"ညနေ")},.alt_digits={u16time_alt_digits_storage,100},.week={7,19971130,1}},.messages={.yesexpr=tsc(u"^[+1yYဟ]"),.noexpr=tsc(u"^[-0nNမ]"),.yesstr=tsc(u"ဟုတ်တယ်"),.nostr=tsc(u"မဟုတ်ဘူး")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.tel_dom_fmt=tsc(u"%a %l"),.int_select=tsc(u"0"),.int_prefix=tsc(u"95")},.name={.name_fmt=tsc(u"%p%t%g%t%m%t%f"),.name_gen=tsc(u""),.name_miss=tsc(u"မ"),.name_mr=tsc(u"ဦး"),.name_mrs=tsc(u"ဒေါ်"),.name_ms=tsc(u"ဒေါ်")},.address={.postal_fmt=tsc(u"%a%N%d%N%f%N%b%N%h%t%r%t%e%t%s%N%T%t%z%N%c%N"),.country_name=tsc(u"မြန်မာ"),.country_post=tsc(u"Myanmar"),.country_ab2=tsc(u"MM"),.country_num=104,.country_car=tsc(u"MYA"),.lang_name=tsc(u"မြန်မာ"),.lang_ab=tsc(u"my"),.lang_term=tsc(u"mya"),.lang_lib=tsc(u"bur")},.measurement={.measurement=1}};

inline constexpr basic_io_scatter_t<char32_t> u32time_alt_digits_storage[]{tsc(U"၀၀"),tsc(U"၀၁"),tsc(U"၀၂"),tsc(U"၀၃"),tsc(U"၀၄"),tsc(U"၀၅"),tsc(U"၀၆"),tsc(U"၀၇"),tsc(U"၀၈"),tsc(U"၀၉"),tsc(U"၁၀"),tsc(U"၁၁"),tsc(U"၁၂"),tsc(U"၁၃"),tsc(U"၁၄"),tsc(U"၁၅"),tsc(U"၁၆"),tsc(U"၁၇"),tsc(U"၁၈"),tsc(U"၁၉"),tsc(U"၂၀"),tsc(U"၂၁"),tsc(U"၂၂"),tsc(U"၂၃"),tsc(U"၂၄"),tsc(U"၂၅"),tsc(U"၂၆"),tsc(U"၂၇"),tsc(U"၂၈"),tsc(U"၂၉"),tsc(U"၃၀"),tsc(U"၃၁"),tsc(U"၃၂"),tsc(U"၃၃"),tsc(U"၃၄"),tsc(U"၃၅"),tsc(U"၃၆"),tsc(U"၃၇"),tsc(U"၃၈"),tsc(U"၃၉"),tsc(U"၄၀"),tsc(U"၄၁"),tsc(U"၄၂"),tsc(U"၄၃"),tsc(U"၄၄"),tsc(U"၄၅"),tsc(U"၄၆"),tsc(U"၄၇"),tsc(U"၄၈"),tsc(U"၄၉"),tsc(U"၅၀"),tsc(U"၅၁"),tsc(U"၅၂"),tsc(U"၅၃"),tsc(U"၅၄"),tsc(U"၅၅"),tsc(U"၅၆"),tsc(U"၅၇"),tsc(U"၅၈"),tsc(U"၅၉"),tsc(U"၆၀"),tsc(U"၆၁"),tsc(U"၆၂"),tsc(U"၆၃"),tsc(U"၆၄"),tsc(U"၆၅"),tsc(U"၆၆"),tsc(U"၆၇"),tsc(U"၆၈"),tsc(U"၆၉"),tsc(U"၇၀"),tsc(U"၇၁"),tsc(U"၇၂"),tsc(U"၇၃"),tsc(U"၇၄"),tsc(U"၇၅"),tsc(U"၇၆"),tsc(U"၇၇"),tsc(U"၇၈"),tsc(U"၇၉"),tsc(U"၈၀"),tsc(U"၈၁"),tsc(U"၈၂"),tsc(U"၈၃"),tsc(U"၈၄"),tsc(U"၈၅"),tsc(U"၈၆"),tsc(U"၈၇"),tsc(U"၈၈"),tsc(U"၈၉"),tsc(U"၉၀"),tsc(U"၉၁"),tsc(U"၉၂"),tsc(U"၉၃"),tsc(U"၉၄"),tsc(U"၉၅"),tsc(U"၉၆"),tsc(U"၉၇"),tsc(U"၉၈"),tsc(U"၉၉")};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Burmese language locale for Myanmar"),.source=tsc(U"ThanLwinSoft http://www.thanlwinsoft.org\t\t;\t\tfast_io"),.address=tsc(U"Yangon, Myanmar\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(U"Keith Stribley\t\t;\t\tfast_io"),.email=tsc(U"devel@thanlwinsoft.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Burmese"),.territory=tsc(U"Myanmar (Burma)"),.revision=tsc(U"1.3"),.date=tsc(U"2009-10-02")},.monetary={.int_curr_symbol=tsc(U"MMK "),.currency_symbol=tsc(U"K"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=0,.n_cs_precedes=0,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"နွေ"),tsc(U"လာ"),tsc(U"ဂါ"),tsc(U"ဟူး"),tsc(U"တေး"),tsc(U"သော"),tsc(U"နေ")},.day={tsc(U"တနင်္ဂနွေ"),tsc(U"တနင်္လာ"),tsc(U"အင်္ဂါ"),tsc(U"ဗုဒ္ဓဟူး"),tsc(U"ကြာသပတေး"),tsc(U"သောကြာ"),tsc(U"စနေ")},.abmon={tsc(U"ဇန်"),tsc(U"ဖေ"),tsc(U"မတ်"),tsc(U"ဧပြီ"),tsc(U"မေ"),tsc(U"ဇွန်"),tsc(U"ဇူ"),tsc(U"ဩ"),tsc(U"စက်"),tsc(U"အောက်"),tsc(U"နို"),tsc(U"ဒီ")},.mon={tsc(U"ဇန်နဝါရီ"),tsc(U"ဖေဖော်ဝါရီ"),tsc(U"မတ်"),tsc(U"ဧပြီ"),tsc(U"မေ"),tsc(U"ဇွန်"),tsc(U"ဇူလိုင်"),tsc(U"ဩဂုတ်"),tsc(U"စက်တင်ဘာ"),tsc(U"အောက်တိုဘာ"),tsc(U"နိုဝင်ဘာ"),tsc(U"ဒီဇင်ဘာ")},.d_t_fmt=tsc(U"%OC%Oy %b %Od %A %OI:%OM:%OS %p"),.d_fmt=tsc(U"%OC%Oy %b %Od %A"),.t_fmt=tsc(U"%OI:%OM:%OS %p"),.t_fmt_ampm=tsc(U"%OI:%OM:%OS %p"),.date_fmt=tsc(U"%OC%Oy %b %Od %A %OI:%OM:%OS %p %Z"),.am_pm={tsc(U"နံနက်"),tsc(U"ညနေ")},.alt_digits={u32time_alt_digits_storage,100},.week={7,19971130,1}},.messages={.yesexpr=tsc(U"^[+1yYဟ]"),.noexpr=tsc(U"^[-0nNမ]"),.yesstr=tsc(U"ဟုတ်တယ်"),.nostr=tsc(U"မဟုတ်ဘူး")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.tel_dom_fmt=tsc(U"%a %l"),.int_select=tsc(U"0"),.int_prefix=tsc(U"95")},.name={.name_fmt=tsc(U"%p%t%g%t%m%t%f"),.name_gen=tsc(U""),.name_miss=tsc(U"မ"),.name_mr=tsc(U"ဦး"),.name_mrs=tsc(U"ဒေါ်"),.name_ms=tsc(U"ဒေါ်")},.address={.postal_fmt=tsc(U"%a%N%d%N%f%N%b%N%h%t%r%t%e%t%s%N%T%t%z%N%c%N"),.country_name=tsc(U"မြန်မာ"),.country_post=tsc(U"Myanmar"),.country_ab2=tsc(U"MM"),.country_num=104,.country_car=tsc(U"MYA"),.lang_name=tsc(U"မြန်မာ"),.lang_ab=tsc(U"my"),.lang_term=tsc(U"mya"),.lang_lib=tsc(U"bur")},.measurement={.measurement=1}};


}
}

#include"../main.h"