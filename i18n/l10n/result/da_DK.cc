﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Danish locale for Denmark"),.source=tsc("Danish Standards Association\t\t;\t\tfast_io"),.address=tsc("Kollegievej 6, DK-2920 Charlottenlund, Danmark\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc("fast_io"),.email=tsc("bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Danish"),.territory=tsc("Denmark"),.revision=tsc("1.0"),.date=tsc("2000-06-29")},.monetary={.int_curr_symbol=tsc("DKK "),.currency_symbol=tsc("kr."),.mon_decimal_point=tsc(","),.mon_thousands_sep=tsc("."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=2,.n_cs_precedes=1,.n_sep_by_space=2,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc("."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("søn"),tsc("man"),tsc("tir"),tsc("ons"),tsc("tor"),tsc("fre"),tsc("lør")},.day={tsc("søndag"),tsc("mandag"),tsc("tirsdag"),tsc("onsdag"),tsc("torsdag"),tsc("fredag"),tsc("lørdag")},.abmon={tsc("jan"),tsc("feb"),tsc("mar"),tsc("apr"),tsc("maj"),tsc("jun"),tsc("jul"),tsc("aug"),tsc("sep"),tsc("okt"),tsc("nov"),tsc("dec")},.mon={tsc("januar"),tsc("februar"),tsc("marts"),tsc("april"),tsc("maj"),tsc("juni"),tsc("juli"),tsc("august"),tsc("september"),tsc("oktober"),tsc("november"),tsc("december")},.d_t_fmt=tsc("%a %d %b %Y %T %Z"),.d_fmt=tsc("%d-%m-%Y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%a %e %b %H:%M:%S %Z %Y"),.am_pm={tsc(""),tsc("")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc("^[+1JjYy]"),.noexpr=tsc("^[-0Nn]"),.yesstr=tsc("ja"),.nostr=tsc("nej")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.int_select=tsc("00"),.int_prefix=tsc("45")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Danmark"),.country_ab2=tsc("DK"),.country_ab3=tsc("DNK"),.country_num=208,.country_car=tsc("DK"),.lang_name=tsc("dansk"),.lang_ab=tsc("da"),.lang_term=tsc("dan"),.lang_lib=tsc("dan")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Danish locale for Denmark"),.source=tsc(L"Danish Standards Association\t\t;\t\tfast_io"),.address=tsc(L"Kollegievej 6, DK-2920 Charlottenlund, Danmark\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(L"fast_io"),.email=tsc(L"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Danish"),.territory=tsc(L"Denmark"),.revision=tsc(L"1.0"),.date=tsc(L"2000-06-29")},.monetary={.int_curr_symbol=tsc(L"DKK "),.currency_symbol=tsc(L"kr."),.mon_decimal_point=tsc(L","),.mon_thousands_sep=tsc(L"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=2,.n_cs_precedes=1,.n_sep_by_space=2,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"søn"),tsc(L"man"),tsc(L"tir"),tsc(L"ons"),tsc(L"tor"),tsc(L"fre"),tsc(L"lør")},.day={tsc(L"søndag"),tsc(L"mandag"),tsc(L"tirsdag"),tsc(L"onsdag"),tsc(L"torsdag"),tsc(L"fredag"),tsc(L"lørdag")},.abmon={tsc(L"jan"),tsc(L"feb"),tsc(L"mar"),tsc(L"apr"),tsc(L"maj"),tsc(L"jun"),tsc(L"jul"),tsc(L"aug"),tsc(L"sep"),tsc(L"okt"),tsc(L"nov"),tsc(L"dec")},.mon={tsc(L"januar"),tsc(L"februar"),tsc(L"marts"),tsc(L"april"),tsc(L"maj"),tsc(L"juni"),tsc(L"juli"),tsc(L"august"),tsc(L"september"),tsc(L"oktober"),tsc(L"november"),tsc(L"december")},.d_t_fmt=tsc(L"%a %d %b %Y %T %Z"),.d_fmt=tsc(L"%d-%m-%Y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%a %e %b %H:%M:%S %Z %Y"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1JjYy]"),.noexpr=tsc(L"^[-0Nn]"),.yesstr=tsc(L"ja"),.nostr=tsc(L"nej")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"45")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Danmark"),.country_ab2=tsc(L"DK"),.country_ab3=tsc(L"DNK"),.country_num=208,.country_car=tsc(L"DK"),.lang_name=tsc(L"dansk"),.lang_ab=tsc(L"da"),.lang_term=tsc(L"dan"),.lang_lib=tsc(L"dan")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Danish locale for Denmark"),.source=tsc(u8"Danish Standards Association\t\t;\t\tfast_io"),.address=tsc(u8"Kollegievej 6, DK-2920 Charlottenlund, Danmark\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u8"fast_io"),.email=tsc(u8"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Danish"),.territory=tsc(u8"Denmark"),.revision=tsc(u8"1.0"),.date=tsc(u8"2000-06-29")},.monetary={.int_curr_symbol=tsc(u8"DKK "),.currency_symbol=tsc(u8"kr."),.mon_decimal_point=tsc(u8","),.mon_thousands_sep=tsc(u8"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=2,.n_cs_precedes=1,.n_sep_by_space=2,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"søn"),tsc(u8"man"),tsc(u8"tir"),tsc(u8"ons"),tsc(u8"tor"),tsc(u8"fre"),tsc(u8"lør")},.day={tsc(u8"søndag"),tsc(u8"mandag"),tsc(u8"tirsdag"),tsc(u8"onsdag"),tsc(u8"torsdag"),tsc(u8"fredag"),tsc(u8"lørdag")},.abmon={tsc(u8"jan"),tsc(u8"feb"),tsc(u8"mar"),tsc(u8"apr"),tsc(u8"maj"),tsc(u8"jun"),tsc(u8"jul"),tsc(u8"aug"),tsc(u8"sep"),tsc(u8"okt"),tsc(u8"nov"),tsc(u8"dec")},.mon={tsc(u8"januar"),tsc(u8"februar"),tsc(u8"marts"),tsc(u8"april"),tsc(u8"maj"),tsc(u8"juni"),tsc(u8"juli"),tsc(u8"august"),tsc(u8"september"),tsc(u8"oktober"),tsc(u8"november"),tsc(u8"december")},.d_t_fmt=tsc(u8"%a %d %b %Y %T %Z"),.d_fmt=tsc(u8"%d-%m-%Y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%a %e %b %H:%M:%S %Z %Y"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1JjYy]"),.noexpr=tsc(u8"^[-0Nn]"),.yesstr=tsc(u8"ja"),.nostr=tsc(u8"nej")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"45")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Danmark"),.country_ab2=tsc(u8"DK"),.country_ab3=tsc(u8"DNK"),.country_num=208,.country_car=tsc(u8"DK"),.lang_name=tsc(u8"dansk"),.lang_ab=tsc(u8"da"),.lang_term=tsc(u8"dan"),.lang_lib=tsc(u8"dan")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Danish locale for Denmark"),.source=tsc(u"Danish Standards Association\t\t;\t\tfast_io"),.address=tsc(u"Kollegievej 6, DK-2920 Charlottenlund, Danmark\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u"fast_io"),.email=tsc(u"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Danish"),.territory=tsc(u"Denmark"),.revision=tsc(u"1.0"),.date=tsc(u"2000-06-29")},.monetary={.int_curr_symbol=tsc(u"DKK "),.currency_symbol=tsc(u"kr."),.mon_decimal_point=tsc(u","),.mon_thousands_sep=tsc(u"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=2,.n_cs_precedes=1,.n_sep_by_space=2,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"søn"),tsc(u"man"),tsc(u"tir"),tsc(u"ons"),tsc(u"tor"),tsc(u"fre"),tsc(u"lør")},.day={tsc(u"søndag"),tsc(u"mandag"),tsc(u"tirsdag"),tsc(u"onsdag"),tsc(u"torsdag"),tsc(u"fredag"),tsc(u"lørdag")},.abmon={tsc(u"jan"),tsc(u"feb"),tsc(u"mar"),tsc(u"apr"),tsc(u"maj"),tsc(u"jun"),tsc(u"jul"),tsc(u"aug"),tsc(u"sep"),tsc(u"okt"),tsc(u"nov"),tsc(u"dec")},.mon={tsc(u"januar"),tsc(u"februar"),tsc(u"marts"),tsc(u"april"),tsc(u"maj"),tsc(u"juni"),tsc(u"juli"),tsc(u"august"),tsc(u"september"),tsc(u"oktober"),tsc(u"november"),tsc(u"december")},.d_t_fmt=tsc(u"%a %d %b %Y %T %Z"),.d_fmt=tsc(u"%d-%m-%Y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%a %e %b %H:%M:%S %Z %Y"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1JjYy]"),.noexpr=tsc(u"^[-0Nn]"),.yesstr=tsc(u"ja"),.nostr=tsc(u"nej")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"45")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Danmark"),.country_ab2=tsc(u"DK"),.country_ab3=tsc(u"DNK"),.country_num=208,.country_car=tsc(u"DK"),.lang_name=tsc(u"dansk"),.lang_ab=tsc(u"da"),.lang_term=tsc(u"dan"),.lang_lib=tsc(u"dan")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Danish locale for Denmark"),.source=tsc(U"Danish Standards Association\t\t;\t\tfast_io"),.address=tsc(U"Kollegievej 6, DK-2920 Charlottenlund, Danmark\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(U"fast_io"),.email=tsc(U"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Danish"),.territory=tsc(U"Denmark"),.revision=tsc(U"1.0"),.date=tsc(U"2000-06-29")},.monetary={.int_curr_symbol=tsc(U"DKK "),.currency_symbol=tsc(U"kr."),.mon_decimal_point=tsc(U","),.mon_thousands_sep=tsc(U"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=2,.n_cs_precedes=1,.n_sep_by_space=2,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"søn"),tsc(U"man"),tsc(U"tir"),tsc(U"ons"),tsc(U"tor"),tsc(U"fre"),tsc(U"lør")},.day={tsc(U"søndag"),tsc(U"mandag"),tsc(U"tirsdag"),tsc(U"onsdag"),tsc(U"torsdag"),tsc(U"fredag"),tsc(U"lørdag")},.abmon={tsc(U"jan"),tsc(U"feb"),tsc(U"mar"),tsc(U"apr"),tsc(U"maj"),tsc(U"jun"),tsc(U"jul"),tsc(U"aug"),tsc(U"sep"),tsc(U"okt"),tsc(U"nov"),tsc(U"dec")},.mon={tsc(U"januar"),tsc(U"februar"),tsc(U"marts"),tsc(U"april"),tsc(U"maj"),tsc(U"juni"),tsc(U"juli"),tsc(U"august"),tsc(U"september"),tsc(U"oktober"),tsc(U"november"),tsc(U"december")},.d_t_fmt=tsc(U"%a %d %b %Y %T %Z"),.d_fmt=tsc(U"%d-%m-%Y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%a %e %b %H:%M:%S %Z %Y"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1JjYy]"),.noexpr=tsc(U"^[-0Nn]"),.yesstr=tsc(U"ja"),.nostr=tsc(U"nej")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"45")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Danmark"),.country_ab2=tsc(U"DK"),.country_ab3=tsc(U"DNK"),.country_num=208,.country_car=tsc(U"DK"),.lang_name=tsc(U"dansk"),.lang_ab=tsc(U"da"),.lang_term=tsc(U"dan"),.lang_lib=tsc(U"dan")},.measurement={.measurement=1}};


}
}

#include"../main.h"