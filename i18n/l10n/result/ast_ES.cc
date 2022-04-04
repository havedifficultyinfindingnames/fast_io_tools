﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Asturian locale for Spain"),.source=tsc("fast_io"),.address=tsc("https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc("Jordi Mallach\t\t;\t\tfast_io"),.email=tsc("jordi@gnu.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Asturian"),.territory=tsc("Spain"),.revision=tsc("1.0"),.date=tsc("2005-08-26")},.monetary={.int_curr_symbol=tsc("EUR "),.currency_symbol=tsc("€"),.mon_decimal_point=tsc(","),.mon_thousands_sep=tsc("."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc("."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("dom"),tsc("llu"),tsc("mar"),tsc("mié"),tsc("xue"),tsc("vie"),tsc("sáb")},.day={tsc("domingu"),tsc("llunes"),tsc("martes"),tsc("miércoles"),tsc("xueves"),tsc("vienres"),tsc("sábadu")},.abmon={tsc("xin"),tsc("feb"),tsc("mar"),tsc("abr"),tsc("may"),tsc("xun"),tsc("xnt"),tsc("ago"),tsc("set"),tsc("och"),tsc("pay"),tsc("avi")},.mon={tsc("de xineru"),tsc("de febreru"),tsc("de marzu"),tsc("d’abril"),tsc("de mayu"),tsc("de xunu"),tsc("de xunetu"),tsc("d’agostu"),tsc("de setiembre"),tsc("d’ochobre"),tsc("de payares"),tsc("d’avientu")},.d_t_fmt=tsc("%a %d %b %Y %T"),.d_fmt=tsc("%d//%m//%y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%a %d %b %Y %T %Z"),.am_pm={tsc(""),tsc("")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc("^[+1sSyY]"),.noexpr=tsc("^[-0nN]"),.yesstr=tsc("sí"),.nostr=tsc("non")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.int_select=tsc("00"),.int_prefix=tsc("34")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("España"),.country_ab2=tsc("ES"),.country_ab3=tsc("ESP"),.country_num=724,.country_car=tsc("E"),.lang_name=tsc("asturianu"),.lang_term=tsc("ast"),.lang_lib=tsc("ast")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Asturian locale for Spain"),.source=tsc(L"fast_io"),.address=tsc(L"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(L"Jordi Mallach\t\t;\t\tfast_io"),.email=tsc(L"jordi@gnu.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Asturian"),.territory=tsc(L"Spain"),.revision=tsc(L"1.0"),.date=tsc(L"2005-08-26")},.monetary={.int_curr_symbol=tsc(L"EUR "),.currency_symbol=tsc(L"€"),.mon_decimal_point=tsc(L","),.mon_thousands_sep=tsc(L"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"dom"),tsc(L"llu"),tsc(L"mar"),tsc(L"mié"),tsc(L"xue"),tsc(L"vie"),tsc(L"sáb")},.day={tsc(L"domingu"),tsc(L"llunes"),tsc(L"martes"),tsc(L"miércoles"),tsc(L"xueves"),tsc(L"vienres"),tsc(L"sábadu")},.abmon={tsc(L"xin"),tsc(L"feb"),tsc(L"mar"),tsc(L"abr"),tsc(L"may"),tsc(L"xun"),tsc(L"xnt"),tsc(L"ago"),tsc(L"set"),tsc(L"och"),tsc(L"pay"),tsc(L"avi")},.mon={tsc(L"de xineru"),tsc(L"de febreru"),tsc(L"de marzu"),tsc(L"d’abril"),tsc(L"de mayu"),tsc(L"de xunu"),tsc(L"de xunetu"),tsc(L"d’agostu"),tsc(L"de setiembre"),tsc(L"d’ochobre"),tsc(L"de payares"),tsc(L"d’avientu")},.d_t_fmt=tsc(L"%a %d %b %Y %T"),.d_fmt=tsc(L"%d//%m//%y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%a %d %b %Y %T %Z"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1sSyY]"),.noexpr=tsc(L"^[-0nN]"),.yesstr=tsc(L"sí"),.nostr=tsc(L"non")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"34")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"España"),.country_ab2=tsc(L"ES"),.country_ab3=tsc(L"ESP"),.country_num=724,.country_car=tsc(L"E"),.lang_name=tsc(L"asturianu"),.lang_term=tsc(L"ast"),.lang_lib=tsc(L"ast")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Asturian locale for Spain"),.source=tsc(u8"fast_io"),.address=tsc(u8"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u8"Jordi Mallach\t\t;\t\tfast_io"),.email=tsc(u8"jordi@gnu.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Asturian"),.territory=tsc(u8"Spain"),.revision=tsc(u8"1.0"),.date=tsc(u8"2005-08-26")},.monetary={.int_curr_symbol=tsc(u8"EUR "),.currency_symbol=tsc(u8"€"),.mon_decimal_point=tsc(u8","),.mon_thousands_sep=tsc(u8"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"dom"),tsc(u8"llu"),tsc(u8"mar"),tsc(u8"mié"),tsc(u8"xue"),tsc(u8"vie"),tsc(u8"sáb")},.day={tsc(u8"domingu"),tsc(u8"llunes"),tsc(u8"martes"),tsc(u8"miércoles"),tsc(u8"xueves"),tsc(u8"vienres"),tsc(u8"sábadu")},.abmon={tsc(u8"xin"),tsc(u8"feb"),tsc(u8"mar"),tsc(u8"abr"),tsc(u8"may"),tsc(u8"xun"),tsc(u8"xnt"),tsc(u8"ago"),tsc(u8"set"),tsc(u8"och"),tsc(u8"pay"),tsc(u8"avi")},.mon={tsc(u8"de xineru"),tsc(u8"de febreru"),tsc(u8"de marzu"),tsc(u8"d’abril"),tsc(u8"de mayu"),tsc(u8"de xunu"),tsc(u8"de xunetu"),tsc(u8"d’agostu"),tsc(u8"de setiembre"),tsc(u8"d’ochobre"),tsc(u8"de payares"),tsc(u8"d’avientu")},.d_t_fmt=tsc(u8"%a %d %b %Y %T"),.d_fmt=tsc(u8"%d//%m//%y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%a %d %b %Y %T %Z"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1sSyY]"),.noexpr=tsc(u8"^[-0nN]"),.yesstr=tsc(u8"sí"),.nostr=tsc(u8"non")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"34")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"España"),.country_ab2=tsc(u8"ES"),.country_ab3=tsc(u8"ESP"),.country_num=724,.country_car=tsc(u8"E"),.lang_name=tsc(u8"asturianu"),.lang_term=tsc(u8"ast"),.lang_lib=tsc(u8"ast")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Asturian locale for Spain"),.source=tsc(u"fast_io"),.address=tsc(u"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u"Jordi Mallach\t\t;\t\tfast_io"),.email=tsc(u"jordi@gnu.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Asturian"),.territory=tsc(u"Spain"),.revision=tsc(u"1.0"),.date=tsc(u"2005-08-26")},.monetary={.int_curr_symbol=tsc(u"EUR "),.currency_symbol=tsc(u"€"),.mon_decimal_point=tsc(u","),.mon_thousands_sep=tsc(u"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"dom"),tsc(u"llu"),tsc(u"mar"),tsc(u"mié"),tsc(u"xue"),tsc(u"vie"),tsc(u"sáb")},.day={tsc(u"domingu"),tsc(u"llunes"),tsc(u"martes"),tsc(u"miércoles"),tsc(u"xueves"),tsc(u"vienres"),tsc(u"sábadu")},.abmon={tsc(u"xin"),tsc(u"feb"),tsc(u"mar"),tsc(u"abr"),tsc(u"may"),tsc(u"xun"),tsc(u"xnt"),tsc(u"ago"),tsc(u"set"),tsc(u"och"),tsc(u"pay"),tsc(u"avi")},.mon={tsc(u"de xineru"),tsc(u"de febreru"),tsc(u"de marzu"),tsc(u"d’abril"),tsc(u"de mayu"),tsc(u"de xunu"),tsc(u"de xunetu"),tsc(u"d’agostu"),tsc(u"de setiembre"),tsc(u"d’ochobre"),tsc(u"de payares"),tsc(u"d’avientu")},.d_t_fmt=tsc(u"%a %d %b %Y %T"),.d_fmt=tsc(u"%d//%m//%y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%a %d %b %Y %T %Z"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1sSyY]"),.noexpr=tsc(u"^[-0nN]"),.yesstr=tsc(u"sí"),.nostr=tsc(u"non")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"34")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"España"),.country_ab2=tsc(u"ES"),.country_ab3=tsc(u"ESP"),.country_num=724,.country_car=tsc(u"E"),.lang_name=tsc(u"asturianu"),.lang_term=tsc(u"ast"),.lang_lib=tsc(u"ast")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Asturian locale for Spain"),.source=tsc(U"fast_io"),.address=tsc(U"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(U"Jordi Mallach\t\t;\t\tfast_io"),.email=tsc(U"jordi@gnu.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Asturian"),.territory=tsc(U"Spain"),.revision=tsc(U"1.0"),.date=tsc(U"2005-08-26")},.monetary={.int_curr_symbol=tsc(U"EUR "),.currency_symbol=tsc(U"€"),.mon_decimal_point=tsc(U","),.mon_thousands_sep=tsc(U"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"dom"),tsc(U"llu"),tsc(U"mar"),tsc(U"mié"),tsc(U"xue"),tsc(U"vie"),tsc(U"sáb")},.day={tsc(U"domingu"),tsc(U"llunes"),tsc(U"martes"),tsc(U"miércoles"),tsc(U"xueves"),tsc(U"vienres"),tsc(U"sábadu")},.abmon={tsc(U"xin"),tsc(U"feb"),tsc(U"mar"),tsc(U"abr"),tsc(U"may"),tsc(U"xun"),tsc(U"xnt"),tsc(U"ago"),tsc(U"set"),tsc(U"och"),tsc(U"pay"),tsc(U"avi")},.mon={tsc(U"de xineru"),tsc(U"de febreru"),tsc(U"de marzu"),tsc(U"d’abril"),tsc(U"de mayu"),tsc(U"de xunu"),tsc(U"de xunetu"),tsc(U"d’agostu"),tsc(U"de setiembre"),tsc(U"d’ochobre"),tsc(U"de payares"),tsc(U"d’avientu")},.d_t_fmt=tsc(U"%a %d %b %Y %T"),.d_fmt=tsc(U"%d//%m//%y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%a %d %b %Y %T %Z"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1sSyY]"),.noexpr=tsc(U"^[-0nN]"),.yesstr=tsc(U"sí"),.nostr=tsc(U"non")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"34")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"España"),.country_ab2=tsc(U"ES"),.country_ab3=tsc(U"ESP"),.country_num=724,.country_car=tsc(U"E"),.lang_name=tsc(U"asturianu"),.lang_term=tsc(U"ast"),.lang_lib=tsc(U"ast")},.measurement={.measurement=1}};


}
}

#include"../main.h"