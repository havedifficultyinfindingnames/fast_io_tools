﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t monetary_mon_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Kinyarwanda language locale for Rwanda"),.source=tsc("Rwanda\t\t;\t\tfast_io"),.address=tsc("Rwanda, Africa\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc("Steve Murphy\t\t;\t\tfast_io"),.email=tsc("murf@e-tools.com;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Kinyarwanda"),.territory=tsc("Rwanda"),.revision=tsc("1.0"),.date=tsc("2004-02-24")},.monetary={.int_curr_symbol=tsc("RWF "),.currency_symbol=tsc("FRw"),.mon_decimal_point=tsc(","),.mon_thousands_sep=tsc("."),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc("")},.time={.abday={tsc("Mwe"),tsc("Mbe"),tsc("Kab"),tsc("Gtu"),tsc("Kan"),tsc("Gnu"),tsc("Gnd")},.day={tsc("Ku cyumweru"),tsc("Kuwa mbere"),tsc("Kuwa kabiri"),tsc("Kuwa gatatu"),tsc("Kuwa kane"),tsc("Kuwa gatanu"),tsc("Kuwa gatandatu")},.abmon={tsc("Mut"),tsc("Gas"),tsc("Wer"),tsc("Mat"),tsc("Gic"),tsc("Kam"),tsc("Nya"),tsc("Kan"),tsc("Nze"),tsc("Ukw"),tsc("Ugu"),tsc("Uku")},.mon={tsc("Mutarama"),tsc("Gashyantare"),tsc("Werurwe"),tsc("Mata"),tsc("Gicuransi"),tsc("Kamena"),tsc("Nyakanga"),tsc("Kanama"),tsc("Nzeli"),tsc("Ukwakira"),tsc("Ugushyingo"),tsc("Ukuboza")},.d_t_fmt=tsc("%a %d %b %Y %T"),.d_fmt=tsc("%d.%m.%Y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%a %d %b %Y %T %Z"),.am_pm={tsc(""),tsc("")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc("^[+1yY]"),.noexpr=tsc("^[-0nNoO]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.tel_dom_fmt=tsc("%a%l"),.int_select=tsc("00"),.int_prefix=tsc("250")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("U Rwanda"),.country_ab2=tsc("RW"),.country_ab3=tsc("RWA"),.country_num=646,.country_car=tsc("RWA"),.lang_name=tsc("Kinyarwanda"),.lang_ab=tsc("rw"),.lang_term=tsc("kin"),.lang_lib=tsc("kin")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Kinyarwanda language locale for Rwanda"),.source=tsc(L"Rwanda\t\t;\t\tfast_io"),.address=tsc(L"Rwanda, Africa\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(L"Steve Murphy\t\t;\t\tfast_io"),.email=tsc(L"murf@e-tools.com;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Kinyarwanda"),.territory=tsc(L"Rwanda"),.revision=tsc(L"1.0"),.date=tsc(L"2004-02-24")},.monetary={.int_curr_symbol=tsc(L"RWF "),.currency_symbol=tsc(L"FRw"),.mon_decimal_point=tsc(L","),.mon_thousands_sep=tsc(L"."),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L"")},.time={.abday={tsc(L"Mwe"),tsc(L"Mbe"),tsc(L"Kab"),tsc(L"Gtu"),tsc(L"Kan"),tsc(L"Gnu"),tsc(L"Gnd")},.day={tsc(L"Ku cyumweru"),tsc(L"Kuwa mbere"),tsc(L"Kuwa kabiri"),tsc(L"Kuwa gatatu"),tsc(L"Kuwa kane"),tsc(L"Kuwa gatanu"),tsc(L"Kuwa gatandatu")},.abmon={tsc(L"Mut"),tsc(L"Gas"),tsc(L"Wer"),tsc(L"Mat"),tsc(L"Gic"),tsc(L"Kam"),tsc(L"Nya"),tsc(L"Kan"),tsc(L"Nze"),tsc(L"Ukw"),tsc(L"Ugu"),tsc(L"Uku")},.mon={tsc(L"Mutarama"),tsc(L"Gashyantare"),tsc(L"Werurwe"),tsc(L"Mata"),tsc(L"Gicuransi"),tsc(L"Kamena"),tsc(L"Nyakanga"),tsc(L"Kanama"),tsc(L"Nzeli"),tsc(L"Ukwakira"),tsc(L"Ugushyingo"),tsc(L"Ukuboza")},.d_t_fmt=tsc(L"%a %d %b %Y %T"),.d_fmt=tsc(L"%d.%m.%Y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%a %d %b %Y %T %Z"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1yY]"),.noexpr=tsc(L"^[-0nNoO]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.tel_dom_fmt=tsc(L"%a%l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"250")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"U Rwanda"),.country_ab2=tsc(L"RW"),.country_ab3=tsc(L"RWA"),.country_num=646,.country_car=tsc(L"RWA"),.lang_name=tsc(L"Kinyarwanda"),.lang_ab=tsc(L"rw"),.lang_term=tsc(L"kin"),.lang_lib=tsc(L"kin")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Kinyarwanda language locale for Rwanda"),.source=tsc(u8"Rwanda\t\t;\t\tfast_io"),.address=tsc(u8"Rwanda, Africa\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u8"Steve Murphy\t\t;\t\tfast_io"),.email=tsc(u8"murf@e-tools.com;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Kinyarwanda"),.territory=tsc(u8"Rwanda"),.revision=tsc(u8"1.0"),.date=tsc(u8"2004-02-24")},.monetary={.int_curr_symbol=tsc(u8"RWF "),.currency_symbol=tsc(u8"FRw"),.mon_decimal_point=tsc(u8","),.mon_thousands_sep=tsc(u8"."),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8"")},.time={.abday={tsc(u8"Mwe"),tsc(u8"Mbe"),tsc(u8"Kab"),tsc(u8"Gtu"),tsc(u8"Kan"),tsc(u8"Gnu"),tsc(u8"Gnd")},.day={tsc(u8"Ku cyumweru"),tsc(u8"Kuwa mbere"),tsc(u8"Kuwa kabiri"),tsc(u8"Kuwa gatatu"),tsc(u8"Kuwa kane"),tsc(u8"Kuwa gatanu"),tsc(u8"Kuwa gatandatu")},.abmon={tsc(u8"Mut"),tsc(u8"Gas"),tsc(u8"Wer"),tsc(u8"Mat"),tsc(u8"Gic"),tsc(u8"Kam"),tsc(u8"Nya"),tsc(u8"Kan"),tsc(u8"Nze"),tsc(u8"Ukw"),tsc(u8"Ugu"),tsc(u8"Uku")},.mon={tsc(u8"Mutarama"),tsc(u8"Gashyantare"),tsc(u8"Werurwe"),tsc(u8"Mata"),tsc(u8"Gicuransi"),tsc(u8"Kamena"),tsc(u8"Nyakanga"),tsc(u8"Kanama"),tsc(u8"Nzeli"),tsc(u8"Ukwakira"),tsc(u8"Ugushyingo"),tsc(u8"Ukuboza")},.d_t_fmt=tsc(u8"%a %d %b %Y %T"),.d_fmt=tsc(u8"%d.%m.%Y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%a %d %b %Y %T %Z"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1yY]"),.noexpr=tsc(u8"^[-0nNoO]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.tel_dom_fmt=tsc(u8"%a%l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"250")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"U Rwanda"),.country_ab2=tsc(u8"RW"),.country_ab3=tsc(u8"RWA"),.country_num=646,.country_car=tsc(u8"RWA"),.lang_name=tsc(u8"Kinyarwanda"),.lang_ab=tsc(u8"rw"),.lang_term=tsc(u8"kin"),.lang_lib=tsc(u8"kin")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Kinyarwanda language locale for Rwanda"),.source=tsc(u"Rwanda\t\t;\t\tfast_io"),.address=tsc(u"Rwanda, Africa\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u"Steve Murphy\t\t;\t\tfast_io"),.email=tsc(u"murf@e-tools.com;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Kinyarwanda"),.territory=tsc(u"Rwanda"),.revision=tsc(u"1.0"),.date=tsc(u"2004-02-24")},.monetary={.int_curr_symbol=tsc(u"RWF "),.currency_symbol=tsc(u"FRw"),.mon_decimal_point=tsc(u","),.mon_thousands_sep=tsc(u"."),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u"")},.time={.abday={tsc(u"Mwe"),tsc(u"Mbe"),tsc(u"Kab"),tsc(u"Gtu"),tsc(u"Kan"),tsc(u"Gnu"),tsc(u"Gnd")},.day={tsc(u"Ku cyumweru"),tsc(u"Kuwa mbere"),tsc(u"Kuwa kabiri"),tsc(u"Kuwa gatatu"),tsc(u"Kuwa kane"),tsc(u"Kuwa gatanu"),tsc(u"Kuwa gatandatu")},.abmon={tsc(u"Mut"),tsc(u"Gas"),tsc(u"Wer"),tsc(u"Mat"),tsc(u"Gic"),tsc(u"Kam"),tsc(u"Nya"),tsc(u"Kan"),tsc(u"Nze"),tsc(u"Ukw"),tsc(u"Ugu"),tsc(u"Uku")},.mon={tsc(u"Mutarama"),tsc(u"Gashyantare"),tsc(u"Werurwe"),tsc(u"Mata"),tsc(u"Gicuransi"),tsc(u"Kamena"),tsc(u"Nyakanga"),tsc(u"Kanama"),tsc(u"Nzeli"),tsc(u"Ukwakira"),tsc(u"Ugushyingo"),tsc(u"Ukuboza")},.d_t_fmt=tsc(u"%a %d %b %Y %T"),.d_fmt=tsc(u"%d.%m.%Y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%a %d %b %Y %T %Z"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1yY]"),.noexpr=tsc(u"^[-0nNoO]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.tel_dom_fmt=tsc(u"%a%l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"250")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"U Rwanda"),.country_ab2=tsc(u"RW"),.country_ab3=tsc(u"RWA"),.country_num=646,.country_car=tsc(u"RWA"),.lang_name=tsc(u"Kinyarwanda"),.lang_ab=tsc(u"rw"),.lang_term=tsc(u"kin"),.lang_lib=tsc(u"kin")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Kinyarwanda language locale for Rwanda"),.source=tsc(U"Rwanda\t\t;\t\tfast_io"),.address=tsc(U"Rwanda, Africa\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(U"Steve Murphy\t\t;\t\tfast_io"),.email=tsc(U"murf@e-tools.com;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Kinyarwanda"),.territory=tsc(U"Rwanda"),.revision=tsc(U"1.0"),.date=tsc(U"2004-02-24")},.monetary={.int_curr_symbol=tsc(U"RWF "),.currency_symbol=tsc(U"FRw"),.mon_decimal_point=tsc(U","),.mon_thousands_sep=tsc(U"."),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U"")},.time={.abday={tsc(U"Mwe"),tsc(U"Mbe"),tsc(U"Kab"),tsc(U"Gtu"),tsc(U"Kan"),tsc(U"Gnu"),tsc(U"Gnd")},.day={tsc(U"Ku cyumweru"),tsc(U"Kuwa mbere"),tsc(U"Kuwa kabiri"),tsc(U"Kuwa gatatu"),tsc(U"Kuwa kane"),tsc(U"Kuwa gatanu"),tsc(U"Kuwa gatandatu")},.abmon={tsc(U"Mut"),tsc(U"Gas"),tsc(U"Wer"),tsc(U"Mat"),tsc(U"Gic"),tsc(U"Kam"),tsc(U"Nya"),tsc(U"Kan"),tsc(U"Nze"),tsc(U"Ukw"),tsc(U"Ugu"),tsc(U"Uku")},.mon={tsc(U"Mutarama"),tsc(U"Gashyantare"),tsc(U"Werurwe"),tsc(U"Mata"),tsc(U"Gicuransi"),tsc(U"Kamena"),tsc(U"Nyakanga"),tsc(U"Kanama"),tsc(U"Nzeli"),tsc(U"Ukwakira"),tsc(U"Ugushyingo"),tsc(U"Ukuboza")},.d_t_fmt=tsc(U"%a %d %b %Y %T"),.d_fmt=tsc(U"%d.%m.%Y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%a %d %b %Y %T %Z"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1yY]"),.noexpr=tsc(U"^[-0nNoO]")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.tel_dom_fmt=tsc(U"%a%l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"250")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"U Rwanda"),.country_ab2=tsc(U"RW"),.country_ab3=tsc(U"RWA"),.country_num=646,.country_car=tsc(U"RWA"),.lang_name=tsc(U"Kinyarwanda"),.lang_ab=tsc(U"rw"),.lang_term=tsc(U"kin"),.lang_lib=tsc(U"kin")},.measurement={.measurement=1}};


}
}

#include"../main.h"