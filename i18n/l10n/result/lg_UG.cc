﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Luganda locale for Uganda"),.source=tsc("Akademe ya Luganda\t\t;\t\tfast_io"),.address=tsc("c/o P.O. Box 5190 Kampala, Uganda\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc("Kizito Birabwa\t\t;\t\tfast_io"),.email=tsc("kompyuta@kizito.uklinux.net;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Ganda"),.territory=tsc("Uganda"),.revision=tsc("1.0"),.date=tsc("2001-11-04")},.monetary={.int_curr_symbol=tsc("UGX "),.currency_symbol=tsc("USh"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=0,.n_cs_precedes=0,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("Sab"),tsc("Bal"),tsc("Lw2"),tsc("Lw3"),tsc("Lw4"),tsc("Lw5"),tsc("Lw6")},.day={tsc("Sabiiti"),tsc("Balaza"),tsc("Lwakubiri"),tsc("Lwakusatu"),tsc("Lwakuna"),tsc("Lwakutaano"),tsc("Lwamukaaga")},.abmon={tsc("Jan"),tsc("Feb"),tsc("Mar"),tsc("Apu"),tsc("Maa"),tsc("Juu"),tsc("Jul"),tsc("Agu"),tsc("Seb"),tsc("Oki"),tsc("Nov"),tsc("Des")},.mon={tsc("Janwaliyo"),tsc("Febwaliyo"),tsc("Marisi"),tsc("Apuli"),tsc("Maayi"),tsc("Juuni"),tsc("Julaayi"),tsc("Agusito"),tsc("Sebuttemba"),tsc("Okitobba"),tsc("Novemba"),tsc("Desemba")},.d_t_fmt=tsc("%a %d %b %Y %T"),.d_fmt=tsc("%d//%m//%y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%a %d %b %Y %T %Z"),.am_pm={tsc(""),tsc("")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc("^[+1yY]"),.noexpr=tsc("^[-0nN]"),.yesstr=tsc("Ye"),.nostr=tsc("Nedda")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.tel_dom_fmt=tsc("%a %l"),.int_select=tsc("000"),.int_prefix=tsc("256")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f"),.name_miss=tsc("Mla"),.name_mr=tsc("Mw"),.name_mrs=tsc("Mla"),.name_ms=tsc("Mla")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Yuganda"),.country_post=tsc("UG"),.country_ab2=tsc("UG"),.country_ab3=tsc("UGA"),.country_num=800,.country_car=tsc("EAU"),.lang_name=tsc("Luganda"),.lang_ab=tsc("lg"),.lang_term=tsc("lug"),.lang_lib=tsc("lug")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Luganda locale for Uganda"),.source=tsc(L"Akademe ya Luganda\t\t;\t\tfast_io"),.address=tsc(L"c/o P.O. Box 5190 Kampala, Uganda\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(L"Kizito Birabwa\t\t;\t\tfast_io"),.email=tsc(L"kompyuta@kizito.uklinux.net;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Ganda"),.territory=tsc(L"Uganda"),.revision=tsc(L"1.0"),.date=tsc(L"2001-11-04")},.monetary={.int_curr_symbol=tsc(L"UGX "),.currency_symbol=tsc(L"USh"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=0,.n_cs_precedes=0,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"Sab"),tsc(L"Bal"),tsc(L"Lw2"),tsc(L"Lw3"),tsc(L"Lw4"),tsc(L"Lw5"),tsc(L"Lw6")},.day={tsc(L"Sabiiti"),tsc(L"Balaza"),tsc(L"Lwakubiri"),tsc(L"Lwakusatu"),tsc(L"Lwakuna"),tsc(L"Lwakutaano"),tsc(L"Lwamukaaga")},.abmon={tsc(L"Jan"),tsc(L"Feb"),tsc(L"Mar"),tsc(L"Apu"),tsc(L"Maa"),tsc(L"Juu"),tsc(L"Jul"),tsc(L"Agu"),tsc(L"Seb"),tsc(L"Oki"),tsc(L"Nov"),tsc(L"Des")},.mon={tsc(L"Janwaliyo"),tsc(L"Febwaliyo"),tsc(L"Marisi"),tsc(L"Apuli"),tsc(L"Maayi"),tsc(L"Juuni"),tsc(L"Julaayi"),tsc(L"Agusito"),tsc(L"Sebuttemba"),tsc(L"Okitobba"),tsc(L"Novemba"),tsc(L"Desemba")},.d_t_fmt=tsc(L"%a %d %b %Y %T"),.d_fmt=tsc(L"%d//%m//%y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%a %d %b %Y %T %Z"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1yY]"),.noexpr=tsc(L"^[-0nN]"),.yesstr=tsc(L"Ye"),.nostr=tsc(L"Nedda")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.tel_dom_fmt=tsc(L"%a %l"),.int_select=tsc(L"000"),.int_prefix=tsc(L"256")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f"),.name_miss=tsc(L"Mla"),.name_mr=tsc(L"Mw"),.name_mrs=tsc(L"Mla"),.name_ms=tsc(L"Mla")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Yuganda"),.country_post=tsc(L"UG"),.country_ab2=tsc(L"UG"),.country_ab3=tsc(L"UGA"),.country_num=800,.country_car=tsc(L"EAU"),.lang_name=tsc(L"Luganda"),.lang_ab=tsc(L"lg"),.lang_term=tsc(L"lug"),.lang_lib=tsc(L"lug")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Luganda locale for Uganda"),.source=tsc(u8"Akademe ya Luganda\t\t;\t\tfast_io"),.address=tsc(u8"c/o P.O. Box 5190 Kampala, Uganda\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u8"Kizito Birabwa\t\t;\t\tfast_io"),.email=tsc(u8"kompyuta@kizito.uklinux.net;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Ganda"),.territory=tsc(u8"Uganda"),.revision=tsc(u8"1.0"),.date=tsc(u8"2001-11-04")},.monetary={.int_curr_symbol=tsc(u8"UGX "),.currency_symbol=tsc(u8"USh"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=0,.n_cs_precedes=0,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"Sab"),tsc(u8"Bal"),tsc(u8"Lw2"),tsc(u8"Lw3"),tsc(u8"Lw4"),tsc(u8"Lw5"),tsc(u8"Lw6")},.day={tsc(u8"Sabiiti"),tsc(u8"Balaza"),tsc(u8"Lwakubiri"),tsc(u8"Lwakusatu"),tsc(u8"Lwakuna"),tsc(u8"Lwakutaano"),tsc(u8"Lwamukaaga")},.abmon={tsc(u8"Jan"),tsc(u8"Feb"),tsc(u8"Mar"),tsc(u8"Apu"),tsc(u8"Maa"),tsc(u8"Juu"),tsc(u8"Jul"),tsc(u8"Agu"),tsc(u8"Seb"),tsc(u8"Oki"),tsc(u8"Nov"),tsc(u8"Des")},.mon={tsc(u8"Janwaliyo"),tsc(u8"Febwaliyo"),tsc(u8"Marisi"),tsc(u8"Apuli"),tsc(u8"Maayi"),tsc(u8"Juuni"),tsc(u8"Julaayi"),tsc(u8"Agusito"),tsc(u8"Sebuttemba"),tsc(u8"Okitobba"),tsc(u8"Novemba"),tsc(u8"Desemba")},.d_t_fmt=tsc(u8"%a %d %b %Y %T"),.d_fmt=tsc(u8"%d//%m//%y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%a %d %b %Y %T %Z"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1yY]"),.noexpr=tsc(u8"^[-0nN]"),.yesstr=tsc(u8"Ye"),.nostr=tsc(u8"Nedda")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.tel_dom_fmt=tsc(u8"%a %l"),.int_select=tsc(u8"000"),.int_prefix=tsc(u8"256")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f"),.name_miss=tsc(u8"Mla"),.name_mr=tsc(u8"Mw"),.name_mrs=tsc(u8"Mla"),.name_ms=tsc(u8"Mla")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Yuganda"),.country_post=tsc(u8"UG"),.country_ab2=tsc(u8"UG"),.country_ab3=tsc(u8"UGA"),.country_num=800,.country_car=tsc(u8"EAU"),.lang_name=tsc(u8"Luganda"),.lang_ab=tsc(u8"lg"),.lang_term=tsc(u8"lug"),.lang_lib=tsc(u8"lug")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Luganda locale for Uganda"),.source=tsc(u"Akademe ya Luganda\t\t;\t\tfast_io"),.address=tsc(u"c/o P.O. Box 5190 Kampala, Uganda\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u"Kizito Birabwa\t\t;\t\tfast_io"),.email=tsc(u"kompyuta@kizito.uklinux.net;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Ganda"),.territory=tsc(u"Uganda"),.revision=tsc(u"1.0"),.date=tsc(u"2001-11-04")},.monetary={.int_curr_symbol=tsc(u"UGX "),.currency_symbol=tsc(u"USh"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=0,.n_cs_precedes=0,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"Sab"),tsc(u"Bal"),tsc(u"Lw2"),tsc(u"Lw3"),tsc(u"Lw4"),tsc(u"Lw5"),tsc(u"Lw6")},.day={tsc(u"Sabiiti"),tsc(u"Balaza"),tsc(u"Lwakubiri"),tsc(u"Lwakusatu"),tsc(u"Lwakuna"),tsc(u"Lwakutaano"),tsc(u"Lwamukaaga")},.abmon={tsc(u"Jan"),tsc(u"Feb"),tsc(u"Mar"),tsc(u"Apu"),tsc(u"Maa"),tsc(u"Juu"),tsc(u"Jul"),tsc(u"Agu"),tsc(u"Seb"),tsc(u"Oki"),tsc(u"Nov"),tsc(u"Des")},.mon={tsc(u"Janwaliyo"),tsc(u"Febwaliyo"),tsc(u"Marisi"),tsc(u"Apuli"),tsc(u"Maayi"),tsc(u"Juuni"),tsc(u"Julaayi"),tsc(u"Agusito"),tsc(u"Sebuttemba"),tsc(u"Okitobba"),tsc(u"Novemba"),tsc(u"Desemba")},.d_t_fmt=tsc(u"%a %d %b %Y %T"),.d_fmt=tsc(u"%d//%m//%y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%a %d %b %Y %T %Z"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1yY]"),.noexpr=tsc(u"^[-0nN]"),.yesstr=tsc(u"Ye"),.nostr=tsc(u"Nedda")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.tel_dom_fmt=tsc(u"%a %l"),.int_select=tsc(u"000"),.int_prefix=tsc(u"256")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f"),.name_miss=tsc(u"Mla"),.name_mr=tsc(u"Mw"),.name_mrs=tsc(u"Mla"),.name_ms=tsc(u"Mla")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Yuganda"),.country_post=tsc(u"UG"),.country_ab2=tsc(u"UG"),.country_ab3=tsc(u"UGA"),.country_num=800,.country_car=tsc(u"EAU"),.lang_name=tsc(u"Luganda"),.lang_ab=tsc(u"lg"),.lang_term=tsc(u"lug"),.lang_lib=tsc(u"lug")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Luganda locale for Uganda"),.source=tsc(U"Akademe ya Luganda\t\t;\t\tfast_io"),.address=tsc(U"c/o P.O. Box 5190 Kampala, Uganda\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(U"Kizito Birabwa\t\t;\t\tfast_io"),.email=tsc(U"kompyuta@kizito.uklinux.net;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Ganda"),.territory=tsc(U"Uganda"),.revision=tsc(U"1.0"),.date=tsc(U"2001-11-04")},.monetary={.int_curr_symbol=tsc(U"UGX "),.currency_symbol=tsc(U"USh"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=0,.n_cs_precedes=0,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"Sab"),tsc(U"Bal"),tsc(U"Lw2"),tsc(U"Lw3"),tsc(U"Lw4"),tsc(U"Lw5"),tsc(U"Lw6")},.day={tsc(U"Sabiiti"),tsc(U"Balaza"),tsc(U"Lwakubiri"),tsc(U"Lwakusatu"),tsc(U"Lwakuna"),tsc(U"Lwakutaano"),tsc(U"Lwamukaaga")},.abmon={tsc(U"Jan"),tsc(U"Feb"),tsc(U"Mar"),tsc(U"Apu"),tsc(U"Maa"),tsc(U"Juu"),tsc(U"Jul"),tsc(U"Agu"),tsc(U"Seb"),tsc(U"Oki"),tsc(U"Nov"),tsc(U"Des")},.mon={tsc(U"Janwaliyo"),tsc(U"Febwaliyo"),tsc(U"Marisi"),tsc(U"Apuli"),tsc(U"Maayi"),tsc(U"Juuni"),tsc(U"Julaayi"),tsc(U"Agusito"),tsc(U"Sebuttemba"),tsc(U"Okitobba"),tsc(U"Novemba"),tsc(U"Desemba")},.d_t_fmt=tsc(U"%a %d %b %Y %T"),.d_fmt=tsc(U"%d//%m//%y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%a %d %b %Y %T %Z"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1yY]"),.noexpr=tsc(U"^[-0nN]"),.yesstr=tsc(U"Ye"),.nostr=tsc(U"Nedda")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.tel_dom_fmt=tsc(U"%a %l"),.int_select=tsc(U"000"),.int_prefix=tsc(U"256")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f"),.name_miss=tsc(U"Mla"),.name_mr=tsc(U"Mw"),.name_mrs=tsc(U"Mla"),.name_ms=tsc(U"Mla")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Yuganda"),.country_post=tsc(U"UG"),.country_ab2=tsc(U"UG"),.country_ab3=tsc(U"UGA"),.country_num=800,.country_car=tsc(U"EAU"),.lang_name=tsc(U"Luganda"),.lang_ab=tsc(U"lg"),.lang_term=tsc(U"lug"),.lang_lib=tsc(U"lug")},.measurement={.measurement=1}};


}
}

#include"../main.h"