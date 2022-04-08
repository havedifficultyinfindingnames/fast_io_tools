﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.name=tsc("tn_ZA"),.encoding=tsc(FAST_IO_LOCALE_ENCODING),.title=tsc("Tswana locale for South Africa"),.source=tsc("Zuza Software Foundation (Translate.org.za)\t\t;\t\tfast_io"),.address=tsc("PO Box 28364, Sunnyside, 0132, South Africa\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc("Dwayne Bailey\t\t;\t\tfast_io"),.email=tsc("dwayne@translate.org.za;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Tswana"),.territory=tsc("South Africa"),.revision=tsc("0.4"),.date=tsc("2005-10-13")},.monetary={.int_curr_symbol=tsc("ZAR "),.currency_symbol=tsc("R"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("Tsh"),tsc("Mos"),tsc("Bed"),tsc("Rar"),tsc("Ne"),tsc("Tlh"),tsc("Mat")},.day={tsc("laTshipi"),tsc("Mosupologo"),tsc("Labobedi"),tsc("Laboraro"),tsc("Labone"),tsc("Labotlhano"),tsc("Lamatlhatso")},.abmon={tsc("Fer"),tsc("Tlh"),tsc("Mop"),tsc("Mor"),tsc("Mot"),tsc("See"),tsc("Phu"),tsc("Pha"),tsc("Lwe"),tsc("Dip"),tsc("Ngw"),tsc("Sed")},.mon={tsc("Ferikgong"),tsc("Tlhakole"),tsc("Mopitlwe"),tsc("Moranang"),tsc("Motsheganong"),tsc("Seetebosigo"),tsc("Phukwi"),tsc("Phatwe"),tsc("Lwetse"),tsc("Diphalane"),tsc("Ngwanatsele"),tsc("Sedimonthole")},.d_t_fmt=tsc("%a %-e %b %Y %T %Z"),.d_fmt=tsc("%d//%m//%Y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%a %b %-e %H:%M:%S %Z %Y"),.am_pm={tsc(""),tsc("")},.week={7,19971130,1}},.messages={.yesexpr=tsc("^[+1yYeE]"),.noexpr=tsc("^[-0nN]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.tel_dom_fmt=tsc("(%A) %l"),.int_select=tsc("00"),.int_prefix=tsc("27")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Aforika Borwa"),.country_post=tsc("ZA"),.country_ab2=tsc("ZA"),.country_ab3=tsc("ZAF"),.country_num=710,.country_car=tsc("ZA"),.lang_name=tsc("Setswana"),.lang_ab=tsc("tn"),.lang_term=tsc("tsn"),.lang_lib=tsc("tsn")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.name=tsc(L"tn_ZA"),.encoding=tsc(FAST_IO_LOCALE_LENCODING),.title=tsc(L"Tswana locale for South Africa"),.source=tsc(L"Zuza Software Foundation (Translate.org.za)\t\t;\t\tfast_io"),.address=tsc(L"PO Box 28364, Sunnyside, 0132, South Africa\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(L"Dwayne Bailey\t\t;\t\tfast_io"),.email=tsc(L"dwayne@translate.org.za;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Tswana"),.territory=tsc(L"South Africa"),.revision=tsc(L"0.4"),.date=tsc(L"2005-10-13")},.monetary={.int_curr_symbol=tsc(L"ZAR "),.currency_symbol=tsc(L"R"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"Tsh"),tsc(L"Mos"),tsc(L"Bed"),tsc(L"Rar"),tsc(L"Ne"),tsc(L"Tlh"),tsc(L"Mat")},.day={tsc(L"laTshipi"),tsc(L"Mosupologo"),tsc(L"Labobedi"),tsc(L"Laboraro"),tsc(L"Labone"),tsc(L"Labotlhano"),tsc(L"Lamatlhatso")},.abmon={tsc(L"Fer"),tsc(L"Tlh"),tsc(L"Mop"),tsc(L"Mor"),tsc(L"Mot"),tsc(L"See"),tsc(L"Phu"),tsc(L"Pha"),tsc(L"Lwe"),tsc(L"Dip"),tsc(L"Ngw"),tsc(L"Sed")},.mon={tsc(L"Ferikgong"),tsc(L"Tlhakole"),tsc(L"Mopitlwe"),tsc(L"Moranang"),tsc(L"Motsheganong"),tsc(L"Seetebosigo"),tsc(L"Phukwi"),tsc(L"Phatwe"),tsc(L"Lwetse"),tsc(L"Diphalane"),tsc(L"Ngwanatsele"),tsc(L"Sedimonthole")},.d_t_fmt=tsc(L"%a %-e %b %Y %T %Z"),.d_fmt=tsc(L"%d//%m//%Y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%a %b %-e %H:%M:%S %Z %Y"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,1}},.messages={.yesexpr=tsc(L"^[+1yYeE]"),.noexpr=tsc(L"^[-0nN]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.tel_dom_fmt=tsc(L"(%A) %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"27")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Aforika Borwa"),.country_post=tsc(L"ZA"),.country_ab2=tsc(L"ZA"),.country_ab3=tsc(L"ZAF"),.country_num=710,.country_car=tsc(L"ZA"),.lang_name=tsc(L"Setswana"),.lang_ab=tsc(L"tn"),.lang_term=tsc(L"tsn"),.lang_lib=tsc(L"tsn")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.name=tsc(u8"tn_ZA"),.encoding=tsc(FAST_IO_LOCALE_u8ENCODING),.title=tsc(u8"Tswana locale for South Africa"),.source=tsc(u8"Zuza Software Foundation (Translate.org.za)\t\t;\t\tfast_io"),.address=tsc(u8"PO Box 28364, Sunnyside, 0132, South Africa\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u8"Dwayne Bailey\t\t;\t\tfast_io"),.email=tsc(u8"dwayne@translate.org.za;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Tswana"),.territory=tsc(u8"South Africa"),.revision=tsc(u8"0.4"),.date=tsc(u8"2005-10-13")},.monetary={.int_curr_symbol=tsc(u8"ZAR "),.currency_symbol=tsc(u8"R"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"Tsh"),tsc(u8"Mos"),tsc(u8"Bed"),tsc(u8"Rar"),tsc(u8"Ne"),tsc(u8"Tlh"),tsc(u8"Mat")},.day={tsc(u8"laTshipi"),tsc(u8"Mosupologo"),tsc(u8"Labobedi"),tsc(u8"Laboraro"),tsc(u8"Labone"),tsc(u8"Labotlhano"),tsc(u8"Lamatlhatso")},.abmon={tsc(u8"Fer"),tsc(u8"Tlh"),tsc(u8"Mop"),tsc(u8"Mor"),tsc(u8"Mot"),tsc(u8"See"),tsc(u8"Phu"),tsc(u8"Pha"),tsc(u8"Lwe"),tsc(u8"Dip"),tsc(u8"Ngw"),tsc(u8"Sed")},.mon={tsc(u8"Ferikgong"),tsc(u8"Tlhakole"),tsc(u8"Mopitlwe"),tsc(u8"Moranang"),tsc(u8"Motsheganong"),tsc(u8"Seetebosigo"),tsc(u8"Phukwi"),tsc(u8"Phatwe"),tsc(u8"Lwetse"),tsc(u8"Diphalane"),tsc(u8"Ngwanatsele"),tsc(u8"Sedimonthole")},.d_t_fmt=tsc(u8"%a %-e %b %Y %T %Z"),.d_fmt=tsc(u8"%d//%m//%Y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%a %b %-e %H:%M:%S %Z %Y"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u8"^[+1yYeE]"),.noexpr=tsc(u8"^[-0nN]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.tel_dom_fmt=tsc(u8"(%A) %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"27")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Aforika Borwa"),.country_post=tsc(u8"ZA"),.country_ab2=tsc(u8"ZA"),.country_ab3=tsc(u8"ZAF"),.country_num=710,.country_car=tsc(u8"ZA"),.lang_name=tsc(u8"Setswana"),.lang_ab=tsc(u8"tn"),.lang_term=tsc(u8"tsn"),.lang_lib=tsc(u8"tsn")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.name=tsc(u"tn_ZA"),.encoding=tsc(FAST_IO_LOCALE_uENCODING),.title=tsc(u"Tswana locale for South Africa"),.source=tsc(u"Zuza Software Foundation (Translate.org.za)\t\t;\t\tfast_io"),.address=tsc(u"PO Box 28364, Sunnyside, 0132, South Africa\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u"Dwayne Bailey\t\t;\t\tfast_io"),.email=tsc(u"dwayne@translate.org.za;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Tswana"),.territory=tsc(u"South Africa"),.revision=tsc(u"0.4"),.date=tsc(u"2005-10-13")},.monetary={.int_curr_symbol=tsc(u"ZAR "),.currency_symbol=tsc(u"R"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"Tsh"),tsc(u"Mos"),tsc(u"Bed"),tsc(u"Rar"),tsc(u"Ne"),tsc(u"Tlh"),tsc(u"Mat")},.day={tsc(u"laTshipi"),tsc(u"Mosupologo"),tsc(u"Labobedi"),tsc(u"Laboraro"),tsc(u"Labone"),tsc(u"Labotlhano"),tsc(u"Lamatlhatso")},.abmon={tsc(u"Fer"),tsc(u"Tlh"),tsc(u"Mop"),tsc(u"Mor"),tsc(u"Mot"),tsc(u"See"),tsc(u"Phu"),tsc(u"Pha"),tsc(u"Lwe"),tsc(u"Dip"),tsc(u"Ngw"),tsc(u"Sed")},.mon={tsc(u"Ferikgong"),tsc(u"Tlhakole"),tsc(u"Mopitlwe"),tsc(u"Moranang"),tsc(u"Motsheganong"),tsc(u"Seetebosigo"),tsc(u"Phukwi"),tsc(u"Phatwe"),tsc(u"Lwetse"),tsc(u"Diphalane"),tsc(u"Ngwanatsele"),tsc(u"Sedimonthole")},.d_t_fmt=tsc(u"%a %-e %b %Y %T %Z"),.d_fmt=tsc(u"%d//%m//%Y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%a %b %-e %H:%M:%S %Z %Y"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u"^[+1yYeE]"),.noexpr=tsc(u"^[-0nN]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.tel_dom_fmt=tsc(u"(%A) %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"27")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Aforika Borwa"),.country_post=tsc(u"ZA"),.country_ab2=tsc(u"ZA"),.country_ab3=tsc(u"ZAF"),.country_num=710,.country_car=tsc(u"ZA"),.lang_name=tsc(u"Setswana"),.lang_ab=tsc(u"tn"),.lang_term=tsc(u"tsn"),.lang_lib=tsc(u"tsn")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.name=tsc(U"tn_ZA"),.encoding=tsc(FAST_IO_LOCALE_UENCODING),.title=tsc(U"Tswana locale for South Africa"),.source=tsc(U"Zuza Software Foundation (Translate.org.za)\t\t;\t\tfast_io"),.address=tsc(U"PO Box 28364, Sunnyside, 0132, South Africa\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(U"Dwayne Bailey\t\t;\t\tfast_io"),.email=tsc(U"dwayne@translate.org.za;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Tswana"),.territory=tsc(U"South Africa"),.revision=tsc(U"0.4"),.date=tsc(U"2005-10-13")},.monetary={.int_curr_symbol=tsc(U"ZAR "),.currency_symbol=tsc(U"R"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"Tsh"),tsc(U"Mos"),tsc(U"Bed"),tsc(U"Rar"),tsc(U"Ne"),tsc(U"Tlh"),tsc(U"Mat")},.day={tsc(U"laTshipi"),tsc(U"Mosupologo"),tsc(U"Labobedi"),tsc(U"Laboraro"),tsc(U"Labone"),tsc(U"Labotlhano"),tsc(U"Lamatlhatso")},.abmon={tsc(U"Fer"),tsc(U"Tlh"),tsc(U"Mop"),tsc(U"Mor"),tsc(U"Mot"),tsc(U"See"),tsc(U"Phu"),tsc(U"Pha"),tsc(U"Lwe"),tsc(U"Dip"),tsc(U"Ngw"),tsc(U"Sed")},.mon={tsc(U"Ferikgong"),tsc(U"Tlhakole"),tsc(U"Mopitlwe"),tsc(U"Moranang"),tsc(U"Motsheganong"),tsc(U"Seetebosigo"),tsc(U"Phukwi"),tsc(U"Phatwe"),tsc(U"Lwetse"),tsc(U"Diphalane"),tsc(U"Ngwanatsele"),tsc(U"Sedimonthole")},.d_t_fmt=tsc(U"%a %-e %b %Y %T %Z"),.d_fmt=tsc(U"%d//%m//%Y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%a %b %-e %H:%M:%S %Z %Y"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,1}},.messages={.yesexpr=tsc(U"^[+1yYeE]"),.noexpr=tsc(U"^[-0nN]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.tel_dom_fmt=tsc(U"(%A) %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"27")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Aforika Borwa"),.country_post=tsc(U"ZA"),.country_ab2=tsc(U"ZA"),.country_ab3=tsc(U"ZAF"),.country_num=710,.country_car=tsc(U"ZA"),.lang_name=tsc(U"Setswana"),.lang_ab=tsc(U"tn"),.lang_term=tsc(U"tsn"),.lang_lib=tsc(U"tsn")},.measurement={.measurement=1}};


}
}

#include"../main.h"