﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.name=tsc("uz_UZ@cyrillic"),.title=tsc("Uzbek (cyrillic) locale for Uzbekistan"),.source=tsc("Mashrab Kuvatov\t\t;\t\tfast_io"),.address=tsc("https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc("Mashrab Kuvatov, Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc("kmashrab@uni-bremen.de, pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Uzbek"),.territory=tsc("Uzbekistan"),.revision=tsc("0.1"),.date=tsc("2003-05-30")},.monetary={.int_curr_symbol=tsc("UZS "),.currency_symbol=tsc("сўм"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("Якш"),tsc("Душ"),tsc("Сеш"),tsc("Чор"),tsc("Пай"),tsc("Жум"),tsc("Шан")},.day={tsc("Якшанба"),tsc("Душанба"),tsc("Сешанба"),tsc("Чоршанба"),tsc("Пайшанба"),tsc("Жума"),tsc("Шанба")},.abmon={tsc("Янв"),tsc("Фев"),tsc("Мар"),tsc("Апр"),tsc("Май"),tsc("Июн"),tsc("Июл"),tsc("Авг"),tsc("Сен"),tsc("Окт"),tsc("Ноя"),tsc("Дек")},.mon={tsc("Январ"),tsc("Феврал"),tsc("Март"),tsc("Апрел"),tsc("Май"),tsc("Июн"),tsc("Июл"),tsc("Август"),tsc("Сентябр"),tsc("Октябр"),tsc("Ноябр"),tsc("Декабр")},.d_t_fmt=tsc("%T, %d %B, %Y йил, %A"),.d_fmt=tsc("%d//%m//%y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%d %B, %Y йил, %A"),.am_pm={tsc(""),tsc("")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc("^[+1hHҲҳ]"),.noexpr=tsc("^[-0nNyYjJЙй]"),.yesstr=tsc("ҳа"),.nostr=tsc("йўқ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.int_select=tsc("00"),.int_prefix=tsc("998")},.name={.name_fmt=tsc("%d%t%f%t%g%t%m"),.name_gen=tsc("Ҳурматли"),.name_miss=tsc(""),.name_mr=tsc("Жаноб"),.name_mrs=tsc("Хоним"),.name_ms=tsc("")},.address={.postal_fmt=tsc("%C%N%T%N%s %h%N%f%N%b%N%d%N%e %r%N%a%N%z"),.country_name=tsc("Ўзбекистон"),.country_post=tsc("UZ"),.country_ab2=tsc("UZ"),.country_ab3=tsc("UZB"),.country_num=860,.country_car=tsc("UZ"),.lang_name=tsc("Ўзбекча"),.lang_ab=tsc("uz"),.lang_term=tsc("uzb"),.lang_lib=tsc("uzb")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.name=tsc(L"uz_UZ@cyrillic"),.title=tsc(L"Uzbek (cyrillic) locale for Uzbekistan"),.source=tsc(L"Mashrab Kuvatov\t\t;\t\tfast_io"),.address=tsc(L"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(L"Mashrab Kuvatov, Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(L"kmashrab@uni-bremen.de, pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Uzbek"),.territory=tsc(L"Uzbekistan"),.revision=tsc(L"0.1"),.date=tsc(L"2003-05-30")},.monetary={.int_curr_symbol=tsc(L"UZS "),.currency_symbol=tsc(L"сўм"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"Якш"),tsc(L"Душ"),tsc(L"Сеш"),tsc(L"Чор"),tsc(L"Пай"),tsc(L"Жум"),tsc(L"Шан")},.day={tsc(L"Якшанба"),tsc(L"Душанба"),tsc(L"Сешанба"),tsc(L"Чоршанба"),tsc(L"Пайшанба"),tsc(L"Жума"),tsc(L"Шанба")},.abmon={tsc(L"Янв"),tsc(L"Фев"),tsc(L"Мар"),tsc(L"Апр"),tsc(L"Май"),tsc(L"Июн"),tsc(L"Июл"),tsc(L"Авг"),tsc(L"Сен"),tsc(L"Окт"),tsc(L"Ноя"),tsc(L"Дек")},.mon={tsc(L"Январ"),tsc(L"Феврал"),tsc(L"Март"),tsc(L"Апрел"),tsc(L"Май"),tsc(L"Июн"),tsc(L"Июл"),tsc(L"Август"),tsc(L"Сентябр"),tsc(L"Октябр"),tsc(L"Ноябр"),tsc(L"Декабр")},.d_t_fmt=tsc(L"%T, %d %B, %Y йил, %A"),.d_fmt=tsc(L"%d//%m//%y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%d %B, %Y йил, %A"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1hHҲҳ]"),.noexpr=tsc(L"^[-0nNyYjJЙй]"),.yesstr=tsc(L"ҳа"),.nostr=tsc(L"йўқ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"998")},.name={.name_fmt=tsc(L"%d%t%f%t%g%t%m"),.name_gen=tsc(L"Ҳурматли"),.name_miss=tsc(L""),.name_mr=tsc(L"Жаноб"),.name_mrs=tsc(L"Хоним"),.name_ms=tsc(L"")},.address={.postal_fmt=tsc(L"%C%N%T%N%s %h%N%f%N%b%N%d%N%e %r%N%a%N%z"),.country_name=tsc(L"Ўзбекистон"),.country_post=tsc(L"UZ"),.country_ab2=tsc(L"UZ"),.country_ab3=tsc(L"UZB"),.country_num=860,.country_car=tsc(L"UZ"),.lang_name=tsc(L"Ўзбекча"),.lang_ab=tsc(L"uz"),.lang_term=tsc(L"uzb"),.lang_lib=tsc(L"uzb")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.name=tsc(u8"uz_UZ@cyrillic"),.title=tsc(u8"Uzbek (cyrillic) locale for Uzbekistan"),.source=tsc(u8"Mashrab Kuvatov\t\t;\t\tfast_io"),.address=tsc(u8"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u8"Mashrab Kuvatov, Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(u8"kmashrab@uni-bremen.de, pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Uzbek"),.territory=tsc(u8"Uzbekistan"),.revision=tsc(u8"0.1"),.date=tsc(u8"2003-05-30")},.monetary={.int_curr_symbol=tsc(u8"UZS "),.currency_symbol=tsc(u8"сўм"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"Якш"),tsc(u8"Душ"),tsc(u8"Сеш"),tsc(u8"Чор"),tsc(u8"Пай"),tsc(u8"Жум"),tsc(u8"Шан")},.day={tsc(u8"Якшанба"),tsc(u8"Душанба"),tsc(u8"Сешанба"),tsc(u8"Чоршанба"),tsc(u8"Пайшанба"),tsc(u8"Жума"),tsc(u8"Шанба")},.abmon={tsc(u8"Янв"),tsc(u8"Фев"),tsc(u8"Мар"),tsc(u8"Апр"),tsc(u8"Май"),tsc(u8"Июн"),tsc(u8"Июл"),tsc(u8"Авг"),tsc(u8"Сен"),tsc(u8"Окт"),tsc(u8"Ноя"),tsc(u8"Дек")},.mon={tsc(u8"Январ"),tsc(u8"Феврал"),tsc(u8"Март"),tsc(u8"Апрел"),tsc(u8"Май"),tsc(u8"Июн"),tsc(u8"Июл"),tsc(u8"Август"),tsc(u8"Сентябр"),tsc(u8"Октябр"),tsc(u8"Ноябр"),tsc(u8"Декабр")},.d_t_fmt=tsc(u8"%T, %d %B, %Y йил, %A"),.d_fmt=tsc(u8"%d//%m//%y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%d %B, %Y йил, %A"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1hHҲҳ]"),.noexpr=tsc(u8"^[-0nNyYjJЙй]"),.yesstr=tsc(u8"ҳа"),.nostr=tsc(u8"йўқ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"998")},.name={.name_fmt=tsc(u8"%d%t%f%t%g%t%m"),.name_gen=tsc(u8"Ҳурматли"),.name_miss=tsc(u8""),.name_mr=tsc(u8"Жаноб"),.name_mrs=tsc(u8"Хоним"),.name_ms=tsc(u8"")},.address={.postal_fmt=tsc(u8"%C%N%T%N%s %h%N%f%N%b%N%d%N%e %r%N%a%N%z"),.country_name=tsc(u8"Ўзбекистон"),.country_post=tsc(u8"UZ"),.country_ab2=tsc(u8"UZ"),.country_ab3=tsc(u8"UZB"),.country_num=860,.country_car=tsc(u8"UZ"),.lang_name=tsc(u8"Ўзбекча"),.lang_ab=tsc(u8"uz"),.lang_term=tsc(u8"uzb"),.lang_lib=tsc(u8"uzb")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.name=tsc(u"uz_UZ@cyrillic"),.title=tsc(u"Uzbek (cyrillic) locale for Uzbekistan"),.source=tsc(u"Mashrab Kuvatov\t\t;\t\tfast_io"),.address=tsc(u"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u"Mashrab Kuvatov, Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(u"kmashrab@uni-bremen.de, pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Uzbek"),.territory=tsc(u"Uzbekistan"),.revision=tsc(u"0.1"),.date=tsc(u"2003-05-30")},.monetary={.int_curr_symbol=tsc(u"UZS "),.currency_symbol=tsc(u"сўм"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"Якш"),tsc(u"Душ"),tsc(u"Сеш"),tsc(u"Чор"),tsc(u"Пай"),tsc(u"Жум"),tsc(u"Шан")},.day={tsc(u"Якшанба"),tsc(u"Душанба"),tsc(u"Сешанба"),tsc(u"Чоршанба"),tsc(u"Пайшанба"),tsc(u"Жума"),tsc(u"Шанба")},.abmon={tsc(u"Янв"),tsc(u"Фев"),tsc(u"Мар"),tsc(u"Апр"),tsc(u"Май"),tsc(u"Июн"),tsc(u"Июл"),tsc(u"Авг"),tsc(u"Сен"),tsc(u"Окт"),tsc(u"Ноя"),tsc(u"Дек")},.mon={tsc(u"Январ"),tsc(u"Феврал"),tsc(u"Март"),tsc(u"Апрел"),tsc(u"Май"),tsc(u"Июн"),tsc(u"Июл"),tsc(u"Август"),tsc(u"Сентябр"),tsc(u"Октябр"),tsc(u"Ноябр"),tsc(u"Декабр")},.d_t_fmt=tsc(u"%T, %d %B, %Y йил, %A"),.d_fmt=tsc(u"%d//%m//%y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%d %B, %Y йил, %A"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1hHҲҳ]"),.noexpr=tsc(u"^[-0nNyYjJЙй]"),.yesstr=tsc(u"ҳа"),.nostr=tsc(u"йўқ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"998")},.name={.name_fmt=tsc(u"%d%t%f%t%g%t%m"),.name_gen=tsc(u"Ҳурматли"),.name_miss=tsc(u""),.name_mr=tsc(u"Жаноб"),.name_mrs=tsc(u"Хоним"),.name_ms=tsc(u"")},.address={.postal_fmt=tsc(u"%C%N%T%N%s %h%N%f%N%b%N%d%N%e %r%N%a%N%z"),.country_name=tsc(u"Ўзбекистон"),.country_post=tsc(u"UZ"),.country_ab2=tsc(u"UZ"),.country_ab3=tsc(u"UZB"),.country_num=860,.country_car=tsc(u"UZ"),.lang_name=tsc(u"Ўзбекча"),.lang_ab=tsc(u"uz"),.lang_term=tsc(u"uzb"),.lang_lib=tsc(u"uzb")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.name=tsc(U"uz_UZ@cyrillic"),.title=tsc(U"Uzbek (cyrillic) locale for Uzbekistan"),.source=tsc(U"Mashrab Kuvatov\t\t;\t\tfast_io"),.address=tsc(U"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(U"Mashrab Kuvatov, Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(U"kmashrab@uni-bremen.de, pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Uzbek"),.territory=tsc(U"Uzbekistan"),.revision=tsc(U"0.1"),.date=tsc(U"2003-05-30")},.monetary={.int_curr_symbol=tsc(U"UZS "),.currency_symbol=tsc(U"сўм"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"Якш"),tsc(U"Душ"),tsc(U"Сеш"),tsc(U"Чор"),tsc(U"Пай"),tsc(U"Жум"),tsc(U"Шан")},.day={tsc(U"Якшанба"),tsc(U"Душанба"),tsc(U"Сешанба"),tsc(U"Чоршанба"),tsc(U"Пайшанба"),tsc(U"Жума"),tsc(U"Шанба")},.abmon={tsc(U"Янв"),tsc(U"Фев"),tsc(U"Мар"),tsc(U"Апр"),tsc(U"Май"),tsc(U"Июн"),tsc(U"Июл"),tsc(U"Авг"),tsc(U"Сен"),tsc(U"Окт"),tsc(U"Ноя"),tsc(U"Дек")},.mon={tsc(U"Январ"),tsc(U"Феврал"),tsc(U"Март"),tsc(U"Апрел"),tsc(U"Май"),tsc(U"Июн"),tsc(U"Июл"),tsc(U"Август"),tsc(U"Сентябр"),tsc(U"Октябр"),tsc(U"Ноябр"),tsc(U"Декабр")},.d_t_fmt=tsc(U"%T, %d %B, %Y йил, %A"),.d_fmt=tsc(U"%d//%m//%y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%d %B, %Y йил, %A"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1hHҲҳ]"),.noexpr=tsc(U"^[-0nNyYjJЙй]"),.yesstr=tsc(U"ҳа"),.nostr=tsc(U"йўқ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"998")},.name={.name_fmt=tsc(U"%d%t%f%t%g%t%m"),.name_gen=tsc(U"Ҳурматли"),.name_miss=tsc(U""),.name_mr=tsc(U"Жаноб"),.name_mrs=tsc(U"Хоним"),.name_ms=tsc(U"")},.address={.postal_fmt=tsc(U"%C%N%T%N%s %h%N%f%N%b%N%d%N%e %r%N%a%N%z"),.country_name=tsc(U"Ўзбекистон"),.country_post=tsc(U"UZ"),.country_ab2=tsc(U"UZ"),.country_ab3=tsc(U"UZB"),.country_num=860,.country_car=tsc(U"UZ"),.lang_name=tsc(U"Ўзбекча"),.lang_ab=tsc(U"uz"),.lang_term=tsc(U"uzb"),.lang_lib=tsc(U"uzb")},.measurement={.measurement=1}};


}
}

#include"../main.h"