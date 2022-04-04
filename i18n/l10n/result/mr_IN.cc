﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t monetary_mon_grouping_storage[]{3,2};

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Marathi language locale for India"),.source=tsc("IBM Globalization Center of Competency, Yamato Software Laboratory\t\t;\t\tfast_io"),.address=tsc("1623-14, Shimotsuruma, Yamato-shi, Kanagawa-ken, 242-8502, Japan\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc("fast_io"),.email=tsc("bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Marathi"),.territory=tsc("India"),.revision=tsc("1.0"),.date=tsc("2000-07-21")},.monetary={.int_curr_symbol=tsc("INR "),.currency_symbol=tsc("₹"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={monetary_mon_grouping_storage,2},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("रवि"),tsc("सोम"),tsc("मंगळ"),tsc("बुध"),tsc("गुरु"),tsc("शुक्र"),tsc("शनि")},.day={tsc("रविवार"),tsc("सोमवार"),tsc("मंगळवार"),tsc("बुधवार"),tsc("गुरुवार"),tsc("शुक्रवार"),tsc("शनिवार")},.abmon={tsc("जाने"),tsc("फेब्रु"),tsc("मार्च"),tsc("एप्रि"),tsc("मे"),tsc("जून"),tsc("जुलै"),tsc("ऑग"),tsc("सप्टें"),tsc("ऑक्टो"),tsc("नोव्हें"),tsc("डिसें")},.mon={tsc("जानेवारी"),tsc("फेब्रुवारी"),tsc("मार्च"),tsc("एप्रिल"),tsc("मे"),tsc("जून"),tsc("जुलै"),tsc("ऑगस्ट"),tsc("सप्टेंबर"),tsc("ऑक्टोबर"),tsc("नोव्हेंबर"),tsc("डिसेंबर")},.d_t_fmt=tsc("%A %d %b %Y %I:%M:%S %p"),.d_fmt=tsc("%-d//%-m//%y"),.t_fmt=tsc("%I:%M:%S %p %Z"),.t_fmt_ampm=tsc("%I:%M:%S %p %Z"),.date_fmt=tsc("%A %d %b %Y %I:%M:%S %p %Z"),.am_pm={tsc("म.पू."),tsc("म.नं.")},.week={7,19971130,1}},.messages={.yesexpr=tsc("^[+1yYह]"),.noexpr=tsc("^[-0nNन]"),.yesstr=tsc("होय"),.nostr=tsc("नाही")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c ;%a ;%l"),.int_select=tsc("00"),.int_prefix=tsc("91")},.name={.name_fmt=tsc("%p%t%f%t%g"),.name_gen=tsc(""),.name_miss=tsc("Miss."),.name_mr=tsc("Mr."),.name_mrs=tsc("Mrs."),.name_ms=tsc("Ms.")},.address={.postal_fmt=tsc("%z%c%T%s%b%e%r"),.country_name=tsc("भारत"),.country_ab2=tsc("IN"),.country_ab3=tsc("IND"),.country_num=356,.country_car=tsc("IND"),.lang_name=tsc("मराठी"),.lang_ab=tsc("mr"),.lang_term=tsc("mar"),.lang_lib=tsc("mar")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Marathi language locale for India"),.source=tsc(L"IBM Globalization Center of Competency, Yamato Software Laboratory\t\t;\t\tfast_io"),.address=tsc(L"1623-14, Shimotsuruma, Yamato-shi, Kanagawa-ken, 242-8502, Japan\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(L"fast_io"),.email=tsc(L"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Marathi"),.territory=tsc(L"India"),.revision=tsc(L"1.0"),.date=tsc(L"2000-07-21")},.monetary={.int_curr_symbol=tsc(L"INR "),.currency_symbol=tsc(L"₹"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={monetary_mon_grouping_storage,2},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"रवि"),tsc(L"सोम"),tsc(L"मंगळ"),tsc(L"बुध"),tsc(L"गुरु"),tsc(L"शुक्र"),tsc(L"शनि")},.day={tsc(L"रविवार"),tsc(L"सोमवार"),tsc(L"मंगळवार"),tsc(L"बुधवार"),tsc(L"गुरुवार"),tsc(L"शुक्रवार"),tsc(L"शनिवार")},.abmon={tsc(L"जाने"),tsc(L"फेब्रु"),tsc(L"मार्च"),tsc(L"एप्रि"),tsc(L"मे"),tsc(L"जून"),tsc(L"जुलै"),tsc(L"ऑग"),tsc(L"सप्टें"),tsc(L"ऑक्टो"),tsc(L"नोव्हें"),tsc(L"डिसें")},.mon={tsc(L"जानेवारी"),tsc(L"फेब्रुवारी"),tsc(L"मार्च"),tsc(L"एप्रिल"),tsc(L"मे"),tsc(L"जून"),tsc(L"जुलै"),tsc(L"ऑगस्ट"),tsc(L"सप्टेंबर"),tsc(L"ऑक्टोबर"),tsc(L"नोव्हेंबर"),tsc(L"डिसेंबर")},.d_t_fmt=tsc(L"%A %d %b %Y %I:%M:%S %p"),.d_fmt=tsc(L"%-d//%-m//%y"),.t_fmt=tsc(L"%I:%M:%S %p %Z"),.t_fmt_ampm=tsc(L"%I:%M:%S %p %Z"),.date_fmt=tsc(L"%A %d %b %Y %I:%M:%S %p %Z"),.am_pm={tsc(L"म.पू."),tsc(L"म.नं.")},.week={7,19971130,1}},.messages={.yesexpr=tsc(L"^[+1yYह]"),.noexpr=tsc(L"^[-0nNन]"),.yesstr=tsc(L"होय"),.nostr=tsc(L"नाही")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c ;%a ;%l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"91")},.name={.name_fmt=tsc(L"%p%t%f%t%g"),.name_gen=tsc(L""),.name_miss=tsc(L"Miss."),.name_mr=tsc(L"Mr."),.name_mrs=tsc(L"Mrs."),.name_ms=tsc(L"Ms.")},.address={.postal_fmt=tsc(L"%z%c%T%s%b%e%r"),.country_name=tsc(L"भारत"),.country_ab2=tsc(L"IN"),.country_ab3=tsc(L"IND"),.country_num=356,.country_car=tsc(L"IND"),.lang_name=tsc(L"मराठी"),.lang_ab=tsc(L"mr"),.lang_term=tsc(L"mar"),.lang_lib=tsc(L"mar")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Marathi language locale for India"),.source=tsc(u8"IBM Globalization Center of Competency, Yamato Software Laboratory\t\t;\t\tfast_io"),.address=tsc(u8"1623-14, Shimotsuruma, Yamato-shi, Kanagawa-ken, 242-8502, Japan\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u8"fast_io"),.email=tsc(u8"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Marathi"),.territory=tsc(u8"India"),.revision=tsc(u8"1.0"),.date=tsc(u8"2000-07-21")},.monetary={.int_curr_symbol=tsc(u8"INR "),.currency_symbol=tsc(u8"₹"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={monetary_mon_grouping_storage,2},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"रवि"),tsc(u8"सोम"),tsc(u8"मंगळ"),tsc(u8"बुध"),tsc(u8"गुरु"),tsc(u8"शुक्र"),tsc(u8"शनि")},.day={tsc(u8"रविवार"),tsc(u8"सोमवार"),tsc(u8"मंगळवार"),tsc(u8"बुधवार"),tsc(u8"गुरुवार"),tsc(u8"शुक्रवार"),tsc(u8"शनिवार")},.abmon={tsc(u8"जाने"),tsc(u8"फेब्रु"),tsc(u8"मार्च"),tsc(u8"एप्रि"),tsc(u8"मे"),tsc(u8"जून"),tsc(u8"जुलै"),tsc(u8"ऑग"),tsc(u8"सप्टें"),tsc(u8"ऑक्टो"),tsc(u8"नोव्हें"),tsc(u8"डिसें")},.mon={tsc(u8"जानेवारी"),tsc(u8"फेब्रुवारी"),tsc(u8"मार्च"),tsc(u8"एप्रिल"),tsc(u8"मे"),tsc(u8"जून"),tsc(u8"जुलै"),tsc(u8"ऑगस्ट"),tsc(u8"सप्टेंबर"),tsc(u8"ऑक्टोबर"),tsc(u8"नोव्हेंबर"),tsc(u8"डिसेंबर")},.d_t_fmt=tsc(u8"%A %d %b %Y %I:%M:%S %p"),.d_fmt=tsc(u8"%-d//%-m//%y"),.t_fmt=tsc(u8"%I:%M:%S %p %Z"),.t_fmt_ampm=tsc(u8"%I:%M:%S %p %Z"),.date_fmt=tsc(u8"%A %d %b %Y %I:%M:%S %p %Z"),.am_pm={tsc(u8"म.पू."),tsc(u8"म.नं.")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u8"^[+1yYह]"),.noexpr=tsc(u8"^[-0nNन]"),.yesstr=tsc(u8"होय"),.nostr=tsc(u8"नाही")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c ;%a ;%l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"91")},.name={.name_fmt=tsc(u8"%p%t%f%t%g"),.name_gen=tsc(u8""),.name_miss=tsc(u8"Miss."),.name_mr=tsc(u8"Mr."),.name_mrs=tsc(u8"Mrs."),.name_ms=tsc(u8"Ms.")},.address={.postal_fmt=tsc(u8"%z%c%T%s%b%e%r"),.country_name=tsc(u8"भारत"),.country_ab2=tsc(u8"IN"),.country_ab3=tsc(u8"IND"),.country_num=356,.country_car=tsc(u8"IND"),.lang_name=tsc(u8"मराठी"),.lang_ab=tsc(u8"mr"),.lang_term=tsc(u8"mar"),.lang_lib=tsc(u8"mar")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Marathi language locale for India"),.source=tsc(u"IBM Globalization Center of Competency, Yamato Software Laboratory\t\t;\t\tfast_io"),.address=tsc(u"1623-14, Shimotsuruma, Yamato-shi, Kanagawa-ken, 242-8502, Japan\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u"fast_io"),.email=tsc(u"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Marathi"),.territory=tsc(u"India"),.revision=tsc(u"1.0"),.date=tsc(u"2000-07-21")},.monetary={.int_curr_symbol=tsc(u"INR "),.currency_symbol=tsc(u"₹"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={monetary_mon_grouping_storage,2},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"रवि"),tsc(u"सोम"),tsc(u"मंगळ"),tsc(u"बुध"),tsc(u"गुरु"),tsc(u"शुक्र"),tsc(u"शनि")},.day={tsc(u"रविवार"),tsc(u"सोमवार"),tsc(u"मंगळवार"),tsc(u"बुधवार"),tsc(u"गुरुवार"),tsc(u"शुक्रवार"),tsc(u"शनिवार")},.abmon={tsc(u"जाने"),tsc(u"फेब्रु"),tsc(u"मार्च"),tsc(u"एप्रि"),tsc(u"मे"),tsc(u"जून"),tsc(u"जुलै"),tsc(u"ऑग"),tsc(u"सप्टें"),tsc(u"ऑक्टो"),tsc(u"नोव्हें"),tsc(u"डिसें")},.mon={tsc(u"जानेवारी"),tsc(u"फेब्रुवारी"),tsc(u"मार्च"),tsc(u"एप्रिल"),tsc(u"मे"),tsc(u"जून"),tsc(u"जुलै"),tsc(u"ऑगस्ट"),tsc(u"सप्टेंबर"),tsc(u"ऑक्टोबर"),tsc(u"नोव्हेंबर"),tsc(u"डिसेंबर")},.d_t_fmt=tsc(u"%A %d %b %Y %I:%M:%S %p"),.d_fmt=tsc(u"%-d//%-m//%y"),.t_fmt=tsc(u"%I:%M:%S %p %Z"),.t_fmt_ampm=tsc(u"%I:%M:%S %p %Z"),.date_fmt=tsc(u"%A %d %b %Y %I:%M:%S %p %Z"),.am_pm={tsc(u"म.पू."),tsc(u"म.नं.")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u"^[+1yYह]"),.noexpr=tsc(u"^[-0nNन]"),.yesstr=tsc(u"होय"),.nostr=tsc(u"नाही")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c ;%a ;%l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"91")},.name={.name_fmt=tsc(u"%p%t%f%t%g"),.name_gen=tsc(u""),.name_miss=tsc(u"Miss."),.name_mr=tsc(u"Mr."),.name_mrs=tsc(u"Mrs."),.name_ms=tsc(u"Ms.")},.address={.postal_fmt=tsc(u"%z%c%T%s%b%e%r"),.country_name=tsc(u"भारत"),.country_ab2=tsc(u"IN"),.country_ab3=tsc(u"IND"),.country_num=356,.country_car=tsc(u"IND"),.lang_name=tsc(u"मराठी"),.lang_ab=tsc(u"mr"),.lang_term=tsc(u"mar"),.lang_lib=tsc(u"mar")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Marathi language locale for India"),.source=tsc(U"IBM Globalization Center of Competency, Yamato Software Laboratory\t\t;\t\tfast_io"),.address=tsc(U"1623-14, Shimotsuruma, Yamato-shi, Kanagawa-ken, 242-8502, Japan\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(U"fast_io"),.email=tsc(U"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Marathi"),.territory=tsc(U"India"),.revision=tsc(U"1.0"),.date=tsc(U"2000-07-21")},.monetary={.int_curr_symbol=tsc(U"INR "),.currency_symbol=tsc(U"₹"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={monetary_mon_grouping_storage,2},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"रवि"),tsc(U"सोम"),tsc(U"मंगळ"),tsc(U"बुध"),tsc(U"गुरु"),tsc(U"शुक्र"),tsc(U"शनि")},.day={tsc(U"रविवार"),tsc(U"सोमवार"),tsc(U"मंगळवार"),tsc(U"बुधवार"),tsc(U"गुरुवार"),tsc(U"शुक्रवार"),tsc(U"शनिवार")},.abmon={tsc(U"जाने"),tsc(U"फेब्रु"),tsc(U"मार्च"),tsc(U"एप्रि"),tsc(U"मे"),tsc(U"जून"),tsc(U"जुलै"),tsc(U"ऑग"),tsc(U"सप्टें"),tsc(U"ऑक्टो"),tsc(U"नोव्हें"),tsc(U"डिसें")},.mon={tsc(U"जानेवारी"),tsc(U"फेब्रुवारी"),tsc(U"मार्च"),tsc(U"एप्रिल"),tsc(U"मे"),tsc(U"जून"),tsc(U"जुलै"),tsc(U"ऑगस्ट"),tsc(U"सप्टेंबर"),tsc(U"ऑक्टोबर"),tsc(U"नोव्हेंबर"),tsc(U"डिसेंबर")},.d_t_fmt=tsc(U"%A %d %b %Y %I:%M:%S %p"),.d_fmt=tsc(U"%-d//%-m//%y"),.t_fmt=tsc(U"%I:%M:%S %p %Z"),.t_fmt_ampm=tsc(U"%I:%M:%S %p %Z"),.date_fmt=tsc(U"%A %d %b %Y %I:%M:%S %p %Z"),.am_pm={tsc(U"म.पू."),tsc(U"म.नं.")},.week={7,19971130,1}},.messages={.yesexpr=tsc(U"^[+1yYह]"),.noexpr=tsc(U"^[-0nNन]"),.yesstr=tsc(U"होय"),.nostr=tsc(U"नाही")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c ;%a ;%l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"91")},.name={.name_fmt=tsc(U"%p%t%f%t%g"),.name_gen=tsc(U""),.name_miss=tsc(U"Miss."),.name_mr=tsc(U"Mr."),.name_mrs=tsc(U"Mrs."),.name_ms=tsc(U"Ms.")},.address={.postal_fmt=tsc(U"%z%c%T%s%b%e%r"),.country_name=tsc(U"भारत"),.country_ab2=tsc(U"IN"),.country_ab3=tsc(U"IND"),.country_num=356,.country_car=tsc(U"IND"),.lang_name=tsc(U"मराठी"),.lang_ab=tsc(U"mr"),.lang_term=tsc(U"mar"),.lang_lib=tsc(U"mar")},.measurement={.measurement=1}};


}
}

#include"../main.h"