﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Walser locale for Switzerland"),.source=tsc("fast_io"),.address=tsc("https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc("Walser Translation Team\t\t;\t\tfast_io"),.email=tsc("ml@translate-wae.ch;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Walser"),.territory=tsc("Switzerland"),.revision=tsc("0.1"),.date=tsc("2010-10-25")},.monetary={.int_curr_symbol=tsc("CHF "),.currency_symbol=tsc("CHF"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc("’"),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc("’"),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("Sun"),tsc("Män"),tsc("Zis"),tsc("Mit"),tsc("Fro"),tsc("Fri"),tsc("Sam")},.day={tsc("Suntag"),tsc("Mäntag"),tsc("Zischtag"),tsc("Mittwuch"),tsc("Frontag"),tsc("Fritag"),tsc("Samschtag")},.abmon={tsc("Jen"),tsc("Hor"),tsc("Mär"),tsc("Abr"),tsc("Mei"),tsc("Brá"),tsc("Hei"),tsc("Öig"),tsc("Her"),tsc("Wím"),tsc("Win"),tsc("Chr")},.mon={tsc("Jenner"),tsc("Hornig"),tsc("Märze"),tsc("Abrille"),tsc("Meije"),tsc("Bráčet"),tsc("Heiwet"),tsc("Öigšte"),tsc("Herbštmánet"),tsc("Wímánet"),tsc("Wintermánet"),tsc("Chrištmánet")},.d_t_fmt=tsc("%a %d. %b %Y %T %Z"),.d_fmt=tsc("%Y-%m-%d"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%a %-d %b %H:%M:%S %Z %Y"),.am_pm={tsc(""),tsc("")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc("^[+1jJyY]"),.noexpr=tsc("^[-0nN]"),.yesstr=tsc("ja"),.nostr=tsc("nei")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.int_select=tsc("00"),.int_prefix=tsc("41")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f"),.name_miss=tsc("Frölein"),.name_mr=tsc("Herr"),.name_mrs=tsc("Fröiw"),.name_ms=tsc("Fröiw")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Schwiz"),.country_post=tsc("DH"),.country_ab2=tsc("CH"),.country_ab3=tsc("CHE"),.country_num=756,.country_car=tsc("CH"),.country_isbn=tsc("3"),.lang_name=tsc("Walser"),.lang_ab=tsc(""),.lang_term=tsc("wae"),.lang_lib=tsc("wae")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Walser locale for Switzerland"),.source=tsc(L"fast_io"),.address=tsc(L"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(L"Walser Translation Team\t\t;\t\tfast_io"),.email=tsc(L"ml@translate-wae.ch;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Walser"),.territory=tsc(L"Switzerland"),.revision=tsc(L"0.1"),.date=tsc(L"2010-10-25")},.monetary={.int_curr_symbol=tsc(L"CHF "),.currency_symbol=tsc(L"CHF"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L"’"),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L"’"),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"Sun"),tsc(L"Män"),tsc(L"Zis"),tsc(L"Mit"),tsc(L"Fro"),tsc(L"Fri"),tsc(L"Sam")},.day={tsc(L"Suntag"),tsc(L"Mäntag"),tsc(L"Zischtag"),tsc(L"Mittwuch"),tsc(L"Frontag"),tsc(L"Fritag"),tsc(L"Samschtag")},.abmon={tsc(L"Jen"),tsc(L"Hor"),tsc(L"Mär"),tsc(L"Abr"),tsc(L"Mei"),tsc(L"Brá"),tsc(L"Hei"),tsc(L"Öig"),tsc(L"Her"),tsc(L"Wím"),tsc(L"Win"),tsc(L"Chr")},.mon={tsc(L"Jenner"),tsc(L"Hornig"),tsc(L"Märze"),tsc(L"Abrille"),tsc(L"Meije"),tsc(L"Bráčet"),tsc(L"Heiwet"),tsc(L"Öigšte"),tsc(L"Herbštmánet"),tsc(L"Wímánet"),tsc(L"Wintermánet"),tsc(L"Chrištmánet")},.d_t_fmt=tsc(L"%a %d. %b %Y %T %Z"),.d_fmt=tsc(L"%Y-%m-%d"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%a %-d %b %H:%M:%S %Z %Y"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1jJyY]"),.noexpr=tsc(L"^[-0nN]"),.yesstr=tsc(L"ja"),.nostr=tsc(L"nei")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"41")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f"),.name_miss=tsc(L"Frölein"),.name_mr=tsc(L"Herr"),.name_mrs=tsc(L"Fröiw"),.name_ms=tsc(L"Fröiw")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Schwiz"),.country_post=tsc(L"DH"),.country_ab2=tsc(L"CH"),.country_ab3=tsc(L"CHE"),.country_num=756,.country_car=tsc(L"CH"),.country_isbn=tsc(L"3"),.lang_name=tsc(L"Walser"),.lang_ab=tsc(L""),.lang_term=tsc(L"wae"),.lang_lib=tsc(L"wae")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Walser locale for Switzerland"),.source=tsc(u8"fast_io"),.address=tsc(u8"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u8"Walser Translation Team\t\t;\t\tfast_io"),.email=tsc(u8"ml@translate-wae.ch;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Walser"),.territory=tsc(u8"Switzerland"),.revision=tsc(u8"0.1"),.date=tsc(u8"2010-10-25")},.monetary={.int_curr_symbol=tsc(u8"CHF "),.currency_symbol=tsc(u8"CHF"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8"’"),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8"’"),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"Sun"),tsc(u8"Män"),tsc(u8"Zis"),tsc(u8"Mit"),tsc(u8"Fro"),tsc(u8"Fri"),tsc(u8"Sam")},.day={tsc(u8"Suntag"),tsc(u8"Mäntag"),tsc(u8"Zischtag"),tsc(u8"Mittwuch"),tsc(u8"Frontag"),tsc(u8"Fritag"),tsc(u8"Samschtag")},.abmon={tsc(u8"Jen"),tsc(u8"Hor"),tsc(u8"Mär"),tsc(u8"Abr"),tsc(u8"Mei"),tsc(u8"Brá"),tsc(u8"Hei"),tsc(u8"Öig"),tsc(u8"Her"),tsc(u8"Wím"),tsc(u8"Win"),tsc(u8"Chr")},.mon={tsc(u8"Jenner"),tsc(u8"Hornig"),tsc(u8"Märze"),tsc(u8"Abrille"),tsc(u8"Meije"),tsc(u8"Bráčet"),tsc(u8"Heiwet"),tsc(u8"Öigšte"),tsc(u8"Herbštmánet"),tsc(u8"Wímánet"),tsc(u8"Wintermánet"),tsc(u8"Chrištmánet")},.d_t_fmt=tsc(u8"%a %d. %b %Y %T %Z"),.d_fmt=tsc(u8"%Y-%m-%d"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%a %-d %b %H:%M:%S %Z %Y"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1jJyY]"),.noexpr=tsc(u8"^[-0nN]"),.yesstr=tsc(u8"ja"),.nostr=tsc(u8"nei")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"41")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f"),.name_miss=tsc(u8"Frölein"),.name_mr=tsc(u8"Herr"),.name_mrs=tsc(u8"Fröiw"),.name_ms=tsc(u8"Fröiw")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Schwiz"),.country_post=tsc(u8"DH"),.country_ab2=tsc(u8"CH"),.country_ab3=tsc(u8"CHE"),.country_num=756,.country_car=tsc(u8"CH"),.country_isbn=tsc(u8"3"),.lang_name=tsc(u8"Walser"),.lang_ab=tsc(u8""),.lang_term=tsc(u8"wae"),.lang_lib=tsc(u8"wae")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Walser locale for Switzerland"),.source=tsc(u"fast_io"),.address=tsc(u"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u"Walser Translation Team\t\t;\t\tfast_io"),.email=tsc(u"ml@translate-wae.ch;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Walser"),.territory=tsc(u"Switzerland"),.revision=tsc(u"0.1"),.date=tsc(u"2010-10-25")},.monetary={.int_curr_symbol=tsc(u"CHF "),.currency_symbol=tsc(u"CHF"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u"’"),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u"’"),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"Sun"),tsc(u"Män"),tsc(u"Zis"),tsc(u"Mit"),tsc(u"Fro"),tsc(u"Fri"),tsc(u"Sam")},.day={tsc(u"Suntag"),tsc(u"Mäntag"),tsc(u"Zischtag"),tsc(u"Mittwuch"),tsc(u"Frontag"),tsc(u"Fritag"),tsc(u"Samschtag")},.abmon={tsc(u"Jen"),tsc(u"Hor"),tsc(u"Mär"),tsc(u"Abr"),tsc(u"Mei"),tsc(u"Brá"),tsc(u"Hei"),tsc(u"Öig"),tsc(u"Her"),tsc(u"Wím"),tsc(u"Win"),tsc(u"Chr")},.mon={tsc(u"Jenner"),tsc(u"Hornig"),tsc(u"Märze"),tsc(u"Abrille"),tsc(u"Meije"),tsc(u"Bráčet"),tsc(u"Heiwet"),tsc(u"Öigšte"),tsc(u"Herbštmánet"),tsc(u"Wímánet"),tsc(u"Wintermánet"),tsc(u"Chrištmánet")},.d_t_fmt=tsc(u"%a %d. %b %Y %T %Z"),.d_fmt=tsc(u"%Y-%m-%d"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%a %-d %b %H:%M:%S %Z %Y"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1jJyY]"),.noexpr=tsc(u"^[-0nN]"),.yesstr=tsc(u"ja"),.nostr=tsc(u"nei")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"41")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f"),.name_miss=tsc(u"Frölein"),.name_mr=tsc(u"Herr"),.name_mrs=tsc(u"Fröiw"),.name_ms=tsc(u"Fröiw")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Schwiz"),.country_post=tsc(u"DH"),.country_ab2=tsc(u"CH"),.country_ab3=tsc(u"CHE"),.country_num=756,.country_car=tsc(u"CH"),.country_isbn=tsc(u"3"),.lang_name=tsc(u"Walser"),.lang_ab=tsc(u""),.lang_term=tsc(u"wae"),.lang_lib=tsc(u"wae")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Walser locale for Switzerland"),.source=tsc(U"fast_io"),.address=tsc(U"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(U"Walser Translation Team\t\t;\t\tfast_io"),.email=tsc(U"ml@translate-wae.ch;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Walser"),.territory=tsc(U"Switzerland"),.revision=tsc(U"0.1"),.date=tsc(U"2010-10-25")},.monetary={.int_curr_symbol=tsc(U"CHF "),.currency_symbol=tsc(U"CHF"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U"’"),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U"’"),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"Sun"),tsc(U"Män"),tsc(U"Zis"),tsc(U"Mit"),tsc(U"Fro"),tsc(U"Fri"),tsc(U"Sam")},.day={tsc(U"Suntag"),tsc(U"Mäntag"),tsc(U"Zischtag"),tsc(U"Mittwuch"),tsc(U"Frontag"),tsc(U"Fritag"),tsc(U"Samschtag")},.abmon={tsc(U"Jen"),tsc(U"Hor"),tsc(U"Mär"),tsc(U"Abr"),tsc(U"Mei"),tsc(U"Brá"),tsc(U"Hei"),tsc(U"Öig"),tsc(U"Her"),tsc(U"Wím"),tsc(U"Win"),tsc(U"Chr")},.mon={tsc(U"Jenner"),tsc(U"Hornig"),tsc(U"Märze"),tsc(U"Abrille"),tsc(U"Meije"),tsc(U"Bráčet"),tsc(U"Heiwet"),tsc(U"Öigšte"),tsc(U"Herbštmánet"),tsc(U"Wímánet"),tsc(U"Wintermánet"),tsc(U"Chrištmánet")},.d_t_fmt=tsc(U"%a %d. %b %Y %T %Z"),.d_fmt=tsc(U"%Y-%m-%d"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%a %-d %b %H:%M:%S %Z %Y"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1jJyY]"),.noexpr=tsc(U"^[-0nN]"),.yesstr=tsc(U"ja"),.nostr=tsc(U"nei")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"41")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f"),.name_miss=tsc(U"Frölein"),.name_mr=tsc(U"Herr"),.name_mrs=tsc(U"Fröiw"),.name_ms=tsc(U"Fröiw")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Schwiz"),.country_post=tsc(U"DH"),.country_ab2=tsc(U"CH"),.country_ab3=tsc(U"CHE"),.country_num=756,.country_car=tsc(U"CH"),.country_isbn=tsc(U"3"),.lang_name=tsc(U"Walser"),.lang_ab=tsc(U""),.lang_term=tsc(U"wae"),.lang_lib=tsc(U"wae")},.measurement={.measurement=1}};


}
}

#include"../main.h"