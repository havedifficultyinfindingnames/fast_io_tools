﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.name=tsc("oc_FR"),.title=tsc("Occitan Language Locale for France"),.source=tsc("RAP\t\t;\t\tfast_io"),.address=tsc("Los Genets, 12290 Pont de Salars\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc("Jean-Paul Fraysse\t\t;\t\tfast_io"),.email=tsc("Jean-Paul.Fraysse@wanadoo.fr;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Occitan"),.territory=tsc("France"),.revision=tsc("0.3"),.date=tsc("2018-04-12")},.monetary={.int_curr_symbol=tsc("EUR "),.currency_symbol=tsc("€"),.mon_decimal_point=tsc(","),.mon_thousands_sep=tsc(" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc(" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("dg."),tsc("dl."),tsc("dm."),tsc("dc."),tsc("dj."),tsc("dv."),tsc("ds.")},.day={tsc("dimenge"),tsc("diluns"),tsc("dimars"),tsc("dimècres"),tsc("dijòus"),tsc("divendres"),tsc("dissabte")},.abmon={tsc("gen."),tsc("febr."),tsc("març"),tsc("abr."),tsc("mai"),tsc("junh"),tsc("jul."),tsc("ago."),tsc("set."),tsc("oct."),tsc("nov."),tsc("dec.")},.mon={tsc("de genièr"),tsc("de febrièr"),tsc("de març"),tsc("d’abril"),tsc("de mai"),tsc("de junh"),tsc("de julhet"),tsc("d’agost"),tsc("de setembre"),tsc("d’octòbre"),tsc("de novembre"),tsc("de decembre")},.d_t_fmt=tsc("%a %d %b %Y %T"),.d_fmt=tsc("%d//%m//%Y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%a %d %b %Y %T %Z"),.am_pm={tsc(""),tsc("")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc("^[+1oOsSyY]"),.noexpr=tsc("^[-0nN]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.tel_dom_fmt=tsc("%a %l"),.int_select=tsc("00"),.int_prefix=tsc("33")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f"),.name_mr=tsc("En"),.name_mrs=tsc("Na")},.address={.postal_fmt=tsc("%d%N%f%N%d%N%b%N%s %h 5e %r%N%C%z %T%N%c%N"),.country_name=tsc("França"),.country_post=tsc("F"),.country_ab2=tsc("FR"),.country_ab3=tsc("FRA"),.country_num=250,.country_car=tsc("F"),.country_isbn=tsc("979-10"),.lang_name=tsc("occitan"),.lang_ab=tsc("oc"),.lang_term=tsc("oci"),.lang_lib=tsc("oci")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.name=tsc(L"oc_FR"),.title=tsc(L"Occitan Language Locale for France"),.source=tsc(L"RAP\t\t;\t\tfast_io"),.address=tsc(L"Los Genets, 12290 Pont de Salars\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(L"Jean-Paul Fraysse\t\t;\t\tfast_io"),.email=tsc(L"Jean-Paul.Fraysse@wanadoo.fr;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Occitan"),.territory=tsc(L"France"),.revision=tsc(L"0.3"),.date=tsc(L"2018-04-12")},.monetary={.int_curr_symbol=tsc(L"EUR "),.currency_symbol=tsc(L"€"),.mon_decimal_point=tsc(L","),.mon_thousands_sep=tsc(L" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"dg."),tsc(L"dl."),tsc(L"dm."),tsc(L"dc."),tsc(L"dj."),tsc(L"dv."),tsc(L"ds.")},.day={tsc(L"dimenge"),tsc(L"diluns"),tsc(L"dimars"),tsc(L"dimècres"),tsc(L"dijòus"),tsc(L"divendres"),tsc(L"dissabte")},.abmon={tsc(L"gen."),tsc(L"febr."),tsc(L"març"),tsc(L"abr."),tsc(L"mai"),tsc(L"junh"),tsc(L"jul."),tsc(L"ago."),tsc(L"set."),tsc(L"oct."),tsc(L"nov."),tsc(L"dec.")},.mon={tsc(L"de genièr"),tsc(L"de febrièr"),tsc(L"de març"),tsc(L"d’abril"),tsc(L"de mai"),tsc(L"de junh"),tsc(L"de julhet"),tsc(L"d’agost"),tsc(L"de setembre"),tsc(L"d’octòbre"),tsc(L"de novembre"),tsc(L"de decembre")},.d_t_fmt=tsc(L"%a %d %b %Y %T"),.d_fmt=tsc(L"%d//%m//%Y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%a %d %b %Y %T %Z"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1oOsSyY]"),.noexpr=tsc(L"^[-0nN]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.tel_dom_fmt=tsc(L"%a %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"33")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f"),.name_mr=tsc(L"En"),.name_mrs=tsc(L"Na")},.address={.postal_fmt=tsc(L"%d%N%f%N%d%N%b%N%s %h 5e %r%N%C%z %T%N%c%N"),.country_name=tsc(L"França"),.country_post=tsc(L"F"),.country_ab2=tsc(L"FR"),.country_ab3=tsc(L"FRA"),.country_num=250,.country_car=tsc(L"F"),.country_isbn=tsc(L"979-10"),.lang_name=tsc(L"occitan"),.lang_ab=tsc(L"oc"),.lang_term=tsc(L"oci"),.lang_lib=tsc(L"oci")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.name=tsc(u8"oc_FR"),.title=tsc(u8"Occitan Language Locale for France"),.source=tsc(u8"RAP\t\t;\t\tfast_io"),.address=tsc(u8"Los Genets, 12290 Pont de Salars\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u8"Jean-Paul Fraysse\t\t;\t\tfast_io"),.email=tsc(u8"Jean-Paul.Fraysse@wanadoo.fr;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Occitan"),.territory=tsc(u8"France"),.revision=tsc(u8"0.3"),.date=tsc(u8"2018-04-12")},.monetary={.int_curr_symbol=tsc(u8"EUR "),.currency_symbol=tsc(u8"€"),.mon_decimal_point=tsc(u8","),.mon_thousands_sep=tsc(u8" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"dg."),tsc(u8"dl."),tsc(u8"dm."),tsc(u8"dc."),tsc(u8"dj."),tsc(u8"dv."),tsc(u8"ds.")},.day={tsc(u8"dimenge"),tsc(u8"diluns"),tsc(u8"dimars"),tsc(u8"dimècres"),tsc(u8"dijòus"),tsc(u8"divendres"),tsc(u8"dissabte")},.abmon={tsc(u8"gen."),tsc(u8"febr."),tsc(u8"març"),tsc(u8"abr."),tsc(u8"mai"),tsc(u8"junh"),tsc(u8"jul."),tsc(u8"ago."),tsc(u8"set."),tsc(u8"oct."),tsc(u8"nov."),tsc(u8"dec.")},.mon={tsc(u8"de genièr"),tsc(u8"de febrièr"),tsc(u8"de març"),tsc(u8"d’abril"),tsc(u8"de mai"),tsc(u8"de junh"),tsc(u8"de julhet"),tsc(u8"d’agost"),tsc(u8"de setembre"),tsc(u8"d’octòbre"),tsc(u8"de novembre"),tsc(u8"de decembre")},.d_t_fmt=tsc(u8"%a %d %b %Y %T"),.d_fmt=tsc(u8"%d//%m//%Y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%a %d %b %Y %T %Z"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1oOsSyY]"),.noexpr=tsc(u8"^[-0nN]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.tel_dom_fmt=tsc(u8"%a %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"33")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f"),.name_mr=tsc(u8"En"),.name_mrs=tsc(u8"Na")},.address={.postal_fmt=tsc(u8"%d%N%f%N%d%N%b%N%s %h 5e %r%N%C%z %T%N%c%N"),.country_name=tsc(u8"França"),.country_post=tsc(u8"F"),.country_ab2=tsc(u8"FR"),.country_ab3=tsc(u8"FRA"),.country_num=250,.country_car=tsc(u8"F"),.country_isbn=tsc(u8"979-10"),.lang_name=tsc(u8"occitan"),.lang_ab=tsc(u8"oc"),.lang_term=tsc(u8"oci"),.lang_lib=tsc(u8"oci")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.name=tsc(u"oc_FR"),.title=tsc(u"Occitan Language Locale for France"),.source=tsc(u"RAP\t\t;\t\tfast_io"),.address=tsc(u"Los Genets, 12290 Pont de Salars\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u"Jean-Paul Fraysse\t\t;\t\tfast_io"),.email=tsc(u"Jean-Paul.Fraysse@wanadoo.fr;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Occitan"),.territory=tsc(u"France"),.revision=tsc(u"0.3"),.date=tsc(u"2018-04-12")},.monetary={.int_curr_symbol=tsc(u"EUR "),.currency_symbol=tsc(u"€"),.mon_decimal_point=tsc(u","),.mon_thousands_sep=tsc(u" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"dg."),tsc(u"dl."),tsc(u"dm."),tsc(u"dc."),tsc(u"dj."),tsc(u"dv."),tsc(u"ds.")},.day={tsc(u"dimenge"),tsc(u"diluns"),tsc(u"dimars"),tsc(u"dimècres"),tsc(u"dijòus"),tsc(u"divendres"),tsc(u"dissabte")},.abmon={tsc(u"gen."),tsc(u"febr."),tsc(u"març"),tsc(u"abr."),tsc(u"mai"),tsc(u"junh"),tsc(u"jul."),tsc(u"ago."),tsc(u"set."),tsc(u"oct."),tsc(u"nov."),tsc(u"dec.")},.mon={tsc(u"de genièr"),tsc(u"de febrièr"),tsc(u"de març"),tsc(u"d’abril"),tsc(u"de mai"),tsc(u"de junh"),tsc(u"de julhet"),tsc(u"d’agost"),tsc(u"de setembre"),tsc(u"d’octòbre"),tsc(u"de novembre"),tsc(u"de decembre")},.d_t_fmt=tsc(u"%a %d %b %Y %T"),.d_fmt=tsc(u"%d//%m//%Y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%a %d %b %Y %T %Z"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1oOsSyY]"),.noexpr=tsc(u"^[-0nN]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.tel_dom_fmt=tsc(u"%a %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"33")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f"),.name_mr=tsc(u"En"),.name_mrs=tsc(u"Na")},.address={.postal_fmt=tsc(u"%d%N%f%N%d%N%b%N%s %h 5e %r%N%C%z %T%N%c%N"),.country_name=tsc(u"França"),.country_post=tsc(u"F"),.country_ab2=tsc(u"FR"),.country_ab3=tsc(u"FRA"),.country_num=250,.country_car=tsc(u"F"),.country_isbn=tsc(u"979-10"),.lang_name=tsc(u"occitan"),.lang_ab=tsc(u"oc"),.lang_term=tsc(u"oci"),.lang_lib=tsc(u"oci")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.name=tsc(U"oc_FR"),.title=tsc(U"Occitan Language Locale for France"),.source=tsc(U"RAP\t\t;\t\tfast_io"),.address=tsc(U"Los Genets, 12290 Pont de Salars\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(U"Jean-Paul Fraysse\t\t;\t\tfast_io"),.email=tsc(U"Jean-Paul.Fraysse@wanadoo.fr;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Occitan"),.territory=tsc(U"France"),.revision=tsc(U"0.3"),.date=tsc(U"2018-04-12")},.monetary={.int_curr_symbol=tsc(U"EUR "),.currency_symbol=tsc(U"€"),.mon_decimal_point=tsc(U","),.mon_thousands_sep=tsc(U" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"dg."),tsc(U"dl."),tsc(U"dm."),tsc(U"dc."),tsc(U"dj."),tsc(U"dv."),tsc(U"ds.")},.day={tsc(U"dimenge"),tsc(U"diluns"),tsc(U"dimars"),tsc(U"dimècres"),tsc(U"dijòus"),tsc(U"divendres"),tsc(U"dissabte")},.abmon={tsc(U"gen."),tsc(U"febr."),tsc(U"març"),tsc(U"abr."),tsc(U"mai"),tsc(U"junh"),tsc(U"jul."),tsc(U"ago."),tsc(U"set."),tsc(U"oct."),tsc(U"nov."),tsc(U"dec.")},.mon={tsc(U"de genièr"),tsc(U"de febrièr"),tsc(U"de març"),tsc(U"d’abril"),tsc(U"de mai"),tsc(U"de junh"),tsc(U"de julhet"),tsc(U"d’agost"),tsc(U"de setembre"),tsc(U"d’octòbre"),tsc(U"de novembre"),tsc(U"de decembre")},.d_t_fmt=tsc(U"%a %d %b %Y %T"),.d_fmt=tsc(U"%d//%m//%Y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%a %d %b %Y %T %Z"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1oOsSyY]"),.noexpr=tsc(U"^[-0nN]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.tel_dom_fmt=tsc(U"%a %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"33")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f"),.name_mr=tsc(U"En"),.name_mrs=tsc(U"Na")},.address={.postal_fmt=tsc(U"%d%N%f%N%d%N%b%N%s %h 5e %r%N%C%z %T%N%c%N"),.country_name=tsc(U"França"),.country_post=tsc(U"F"),.country_ab2=tsc(U"FR"),.country_ab3=tsc(U"FRA"),.country_num=250,.country_car=tsc(U"F"),.country_isbn=tsc(U"979-10"),.lang_name=tsc(U"occitan"),.lang_ab=tsc(U"oc"),.lang_term=tsc(U"oci"),.lang_lib=tsc(U"oci")},.measurement={.measurement=1}};


}
}

#include"../main.h"