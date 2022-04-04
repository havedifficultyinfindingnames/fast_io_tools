﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.name=tsc("nds_DE"),.encoding=tsc(FAST_IO_LOCALE_ENCODING),.title=tsc("Low(lands) Saxon Language Locale for Germany"),.source=tsc("information from Kenneth Christiansen\t\t;\t\tfast_io"),.address=tsc("https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc("Kenneth Christiansen, Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc("kenneth@gnu.org, pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(""),.language=tsc("Low German"),.territory=tsc("Germany"),.revision=tsc("0.1"),.date=tsc("2003-11-30")},.monetary={.int_curr_symbol=tsc("EUR "),.currency_symbol=tsc("€"),.mon_decimal_point=tsc(","),.mon_thousands_sep=tsc("."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc("."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("Sdag"),tsc("Maan"),tsc("Ding"),tsc("Migg"),tsc("Dunn"),tsc("Free"),tsc("Svd.")},.day={tsc("Sünndag"),tsc("Maandag"),tsc("Dingsdag"),tsc("Middeweek"),tsc("Dunnersdag"),tsc("Freedag"),tsc("Sünnavend")},.abmon={tsc("Jan"),tsc("Feb"),tsc("Mär"),tsc("Apr"),tsc("Mai"),tsc("Jun"),tsc("Jul"),tsc("Aug"),tsc("Sep"),tsc("Okt"),tsc("Nov"),tsc("Dez")},.mon={tsc("Jannuaar"),tsc("Feberwaar"),tsc("März"),tsc("April"),tsc("Mai"),tsc("Juni"),tsc("Juli"),tsc("August"),tsc("September"),tsc("Oktober"),tsc("November"),tsc("Dezember")},.d_t_fmt=tsc("%a %d. %b %Y %T"),.d_fmt=tsc("%d.%m.%Y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%a %d. %b %Y %T %Z"),.am_pm={tsc(""),tsc("")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc("^[+1jJyY]"),.noexpr=tsc("^[-0nN]"),.yesstr=tsc("jo"),.nostr=tsc("nee")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.tel_dom_fmt=tsc("%A %l"),.int_select=tsc("00"),.int_prefix=tsc("49")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f"),.name_miss=tsc("Fräulein"),.name_mr=tsc("Herr"),.name_mrs=tsc("Frau"),.name_ms=tsc("Frau")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Düütschland"),.country_post=tsc("D"),.country_ab2=tsc("DE"),.country_ab3=tsc("DEU"),.country_num=276,.country_car=tsc("D"),.country_isbn=tsc("3"),.lang_name=tsc("Neddersass’sch"),.lang_term=tsc("nds"),.lang_lib=tsc("nds")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.name=tsc(L"nds_DE"),.encoding=tsc(FAST_IO_LOCALE_LENCODING),.title=tsc(L"Low(lands) Saxon Language Locale for Germany"),.source=tsc(L"information from Kenneth Christiansen\t\t;\t\tfast_io"),.address=tsc(L"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(L"Kenneth Christiansen, Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(L"kenneth@gnu.org, pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(L""),.language=tsc(L"Low German"),.territory=tsc(L"Germany"),.revision=tsc(L"0.1"),.date=tsc(L"2003-11-30")},.monetary={.int_curr_symbol=tsc(L"EUR "),.currency_symbol=tsc(L"€"),.mon_decimal_point=tsc(L","),.mon_thousands_sep=tsc(L"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"Sdag"),tsc(L"Maan"),tsc(L"Ding"),tsc(L"Migg"),tsc(L"Dunn"),tsc(L"Free"),tsc(L"Svd.")},.day={tsc(L"Sünndag"),tsc(L"Maandag"),tsc(L"Dingsdag"),tsc(L"Middeweek"),tsc(L"Dunnersdag"),tsc(L"Freedag"),tsc(L"Sünnavend")},.abmon={tsc(L"Jan"),tsc(L"Feb"),tsc(L"Mär"),tsc(L"Apr"),tsc(L"Mai"),tsc(L"Jun"),tsc(L"Jul"),tsc(L"Aug"),tsc(L"Sep"),tsc(L"Okt"),tsc(L"Nov"),tsc(L"Dez")},.mon={tsc(L"Jannuaar"),tsc(L"Feberwaar"),tsc(L"März"),tsc(L"April"),tsc(L"Mai"),tsc(L"Juni"),tsc(L"Juli"),tsc(L"August"),tsc(L"September"),tsc(L"Oktober"),tsc(L"November"),tsc(L"Dezember")},.d_t_fmt=tsc(L"%a %d. %b %Y %T"),.d_fmt=tsc(L"%d.%m.%Y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%a %d. %b %Y %T %Z"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1jJyY]"),.noexpr=tsc(L"^[-0nN]"),.yesstr=tsc(L"jo"),.nostr=tsc(L"nee")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.tel_dom_fmt=tsc(L"%A %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"49")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f"),.name_miss=tsc(L"Fräulein"),.name_mr=tsc(L"Herr"),.name_mrs=tsc(L"Frau"),.name_ms=tsc(L"Frau")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Düütschland"),.country_post=tsc(L"D"),.country_ab2=tsc(L"DE"),.country_ab3=tsc(L"DEU"),.country_num=276,.country_car=tsc(L"D"),.country_isbn=tsc(L"3"),.lang_name=tsc(L"Neddersass’sch"),.lang_term=tsc(L"nds"),.lang_lib=tsc(L"nds")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.name=tsc(u8"nds_DE"),.encoding=tsc(FAST_IO_LOCALE_u8ENCODING),.title=tsc(u8"Low(lands) Saxon Language Locale for Germany"),.source=tsc(u8"information from Kenneth Christiansen\t\t;\t\tfast_io"),.address=tsc(u8"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u8"Kenneth Christiansen, Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(u8"kenneth@gnu.org, pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(u8""),.language=tsc(u8"Low German"),.territory=tsc(u8"Germany"),.revision=tsc(u8"0.1"),.date=tsc(u8"2003-11-30")},.monetary={.int_curr_symbol=tsc(u8"EUR "),.currency_symbol=tsc(u8"€"),.mon_decimal_point=tsc(u8","),.mon_thousands_sep=tsc(u8"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"Sdag"),tsc(u8"Maan"),tsc(u8"Ding"),tsc(u8"Migg"),tsc(u8"Dunn"),tsc(u8"Free"),tsc(u8"Svd.")},.day={tsc(u8"Sünndag"),tsc(u8"Maandag"),tsc(u8"Dingsdag"),tsc(u8"Middeweek"),tsc(u8"Dunnersdag"),tsc(u8"Freedag"),tsc(u8"Sünnavend")},.abmon={tsc(u8"Jan"),tsc(u8"Feb"),tsc(u8"Mär"),tsc(u8"Apr"),tsc(u8"Mai"),tsc(u8"Jun"),tsc(u8"Jul"),tsc(u8"Aug"),tsc(u8"Sep"),tsc(u8"Okt"),tsc(u8"Nov"),tsc(u8"Dez")},.mon={tsc(u8"Jannuaar"),tsc(u8"Feberwaar"),tsc(u8"März"),tsc(u8"April"),tsc(u8"Mai"),tsc(u8"Juni"),tsc(u8"Juli"),tsc(u8"August"),tsc(u8"September"),tsc(u8"Oktober"),tsc(u8"November"),tsc(u8"Dezember")},.d_t_fmt=tsc(u8"%a %d. %b %Y %T"),.d_fmt=tsc(u8"%d.%m.%Y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%a %d. %b %Y %T %Z"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1jJyY]"),.noexpr=tsc(u8"^[-0nN]"),.yesstr=tsc(u8"jo"),.nostr=tsc(u8"nee")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.tel_dom_fmt=tsc(u8"%A %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"49")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f"),.name_miss=tsc(u8"Fräulein"),.name_mr=tsc(u8"Herr"),.name_mrs=tsc(u8"Frau"),.name_ms=tsc(u8"Frau")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Düütschland"),.country_post=tsc(u8"D"),.country_ab2=tsc(u8"DE"),.country_ab3=tsc(u8"DEU"),.country_num=276,.country_car=tsc(u8"D"),.country_isbn=tsc(u8"3"),.lang_name=tsc(u8"Neddersass’sch"),.lang_term=tsc(u8"nds"),.lang_lib=tsc(u8"nds")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.name=tsc(u"nds_DE"),.encoding=tsc(FAST_IO_LOCALE_uENCODING),.title=tsc(u"Low(lands) Saxon Language Locale for Germany"),.source=tsc(u"information from Kenneth Christiansen\t\t;\t\tfast_io"),.address=tsc(u"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u"Kenneth Christiansen, Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(u"kenneth@gnu.org, pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(u""),.language=tsc(u"Low German"),.territory=tsc(u"Germany"),.revision=tsc(u"0.1"),.date=tsc(u"2003-11-30")},.monetary={.int_curr_symbol=tsc(u"EUR "),.currency_symbol=tsc(u"€"),.mon_decimal_point=tsc(u","),.mon_thousands_sep=tsc(u"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"Sdag"),tsc(u"Maan"),tsc(u"Ding"),tsc(u"Migg"),tsc(u"Dunn"),tsc(u"Free"),tsc(u"Svd.")},.day={tsc(u"Sünndag"),tsc(u"Maandag"),tsc(u"Dingsdag"),tsc(u"Middeweek"),tsc(u"Dunnersdag"),tsc(u"Freedag"),tsc(u"Sünnavend")},.abmon={tsc(u"Jan"),tsc(u"Feb"),tsc(u"Mär"),tsc(u"Apr"),tsc(u"Mai"),tsc(u"Jun"),tsc(u"Jul"),tsc(u"Aug"),tsc(u"Sep"),tsc(u"Okt"),tsc(u"Nov"),tsc(u"Dez")},.mon={tsc(u"Jannuaar"),tsc(u"Feberwaar"),tsc(u"März"),tsc(u"April"),tsc(u"Mai"),tsc(u"Juni"),tsc(u"Juli"),tsc(u"August"),tsc(u"September"),tsc(u"Oktober"),tsc(u"November"),tsc(u"Dezember")},.d_t_fmt=tsc(u"%a %d. %b %Y %T"),.d_fmt=tsc(u"%d.%m.%Y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%a %d. %b %Y %T %Z"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1jJyY]"),.noexpr=tsc(u"^[-0nN]"),.yesstr=tsc(u"jo"),.nostr=tsc(u"nee")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.tel_dom_fmt=tsc(u"%A %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"49")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f"),.name_miss=tsc(u"Fräulein"),.name_mr=tsc(u"Herr"),.name_mrs=tsc(u"Frau"),.name_ms=tsc(u"Frau")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Düütschland"),.country_post=tsc(u"D"),.country_ab2=tsc(u"DE"),.country_ab3=tsc(u"DEU"),.country_num=276,.country_car=tsc(u"D"),.country_isbn=tsc(u"3"),.lang_name=tsc(u"Neddersass’sch"),.lang_term=tsc(u"nds"),.lang_lib=tsc(u"nds")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.name=tsc(U"nds_DE"),.encoding=tsc(FAST_IO_LOCALE_UENCODING),.title=tsc(U"Low(lands) Saxon Language Locale for Germany"),.source=tsc(U"information from Kenneth Christiansen\t\t;\t\tfast_io"),.address=tsc(U"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(U"Kenneth Christiansen, Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(U"kenneth@gnu.org, pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(U""),.language=tsc(U"Low German"),.territory=tsc(U"Germany"),.revision=tsc(U"0.1"),.date=tsc(U"2003-11-30")},.monetary={.int_curr_symbol=tsc(U"EUR "),.currency_symbol=tsc(U"€"),.mon_decimal_point=tsc(U","),.mon_thousands_sep=tsc(U"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"Sdag"),tsc(U"Maan"),tsc(U"Ding"),tsc(U"Migg"),tsc(U"Dunn"),tsc(U"Free"),tsc(U"Svd.")},.day={tsc(U"Sünndag"),tsc(U"Maandag"),tsc(U"Dingsdag"),tsc(U"Middeweek"),tsc(U"Dunnersdag"),tsc(U"Freedag"),tsc(U"Sünnavend")},.abmon={tsc(U"Jan"),tsc(U"Feb"),tsc(U"Mär"),tsc(U"Apr"),tsc(U"Mai"),tsc(U"Jun"),tsc(U"Jul"),tsc(U"Aug"),tsc(U"Sep"),tsc(U"Okt"),tsc(U"Nov"),tsc(U"Dez")},.mon={tsc(U"Jannuaar"),tsc(U"Feberwaar"),tsc(U"März"),tsc(U"April"),tsc(U"Mai"),tsc(U"Juni"),tsc(U"Juli"),tsc(U"August"),tsc(U"September"),tsc(U"Oktober"),tsc(U"November"),tsc(U"Dezember")},.d_t_fmt=tsc(U"%a %d. %b %Y %T"),.d_fmt=tsc(U"%d.%m.%Y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%a %d. %b %Y %T %Z"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1jJyY]"),.noexpr=tsc(U"^[-0nN]"),.yesstr=tsc(U"jo"),.nostr=tsc(U"nee")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.tel_dom_fmt=tsc(U"%A %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"49")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f"),.name_miss=tsc(U"Fräulein"),.name_mr=tsc(U"Herr"),.name_mrs=tsc(U"Frau"),.name_ms=tsc(U"Frau")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Düütschland"),.country_post=tsc(U"D"),.country_ab2=tsc(U"DE"),.country_ab3=tsc(U"DEU"),.country_num=276,.country_car=tsc(U"D"),.country_isbn=tsc(U"3"),.lang_name=tsc(U"Neddersass’sch"),.lang_term=tsc(U"nds"),.lang_lib=tsc(U"nds")},.measurement={.measurement=1}};


}
}

#include"../main.h"