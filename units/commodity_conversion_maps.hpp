/*
Copyright (c) 2019-2025,
Lawrence Livermore National Security, LLC;
See the top-level NOTICE for additional details. All rights reserved.
SPDX-License-Identifier: BSD-3-Clause
*/
#pragma once

#include "commodity_definitions.hpp"
#include "units.hpp"
#include <array>
#include <limits>
#include <utility>

namespace UNITS_NAMESPACE {

namespace commodities {
    UNITS_CPP14_CONSTEXPR_OBJECT
    std::array<std::pair<const char*, std::uint32_t>, 1213>
        defined_commodity_codes{{
            {"_",
             0U},  // null commodity code, would cause some screwy things with
            // the strings
            {"__",
             0U},  // null commodity code, would cause some screwy things with
            // the strings
            {"___",
             0U},  // null commodity code, would cause some screwy things with
            // the strings
            {"____",
             0U},  // null commodity code, would cause some screwy things
            // with the strings
            {"_____",
             0U},  // null commodity code, would cause some screwy things
            // with the strings
            {"water", water},
            // metals
            {"gold", gold},
            {"copper", copper},
            {"silver", silver},
            {"platinum", platinum},
            {"palladium", palladium},
            {"zinc", zinc},
            {"tin", tin},
            {"lead", lead},
            {"aluminum", aluminum},
            {"alluminum_alloy", alluminum_alloy},
            {"nickel", nickel},
            {"cobalt", cobalt},
            {"molybdenum", molybdenum},
            {"carbon", carbon},

            // energy
            {"oil", oil},
            {"heat_oil", heat_oil},
            {"nat_gas", nat_gas},
            {"brent_crude", brent_crude},
            {"ethanol", ethanol},
            {"propane", propane},
            // grains
            {"wheat", wheat},
            {"corn", corn},
            {"soybeans", soybeans},
            {"soybean_meal", soybean_meal},
            {"soybean_oil", soybean_oil},
            {"oats", oats},
            {"rice", rice},
            {"durum_wheat", durum_wheat},
            {"canola", canola},
            {"rough_rice", rough_rice},
            {"rapeseed", rapeseed},
            {"adzuci", adzuki},
            {"adzuki", adzuki},
            {"barley", barley},
            // meats
            {"live_cattle", live_cattle},
            {"feeder_cattle", feeder_cattle},
            {"lean_hogs", lean_hogs},
            {"milk", milk},

            // soft
            {"cotton", cotton},
            {"orange_juice", orange_juice},
            {"sugar", sugar},
            {"sugar_11", sugar_11},
            {"coffee", coffee},
            {"cocoa", cocoa},
            {"palm_oil", palm_oil},
            {"rubber", rubber},
            {"wool", wool},
            {"lumber", lumber},

            // other common unit blocks
            {"people", people},
            {"cars", vehicle},
            {"vehicle", vehicle},
            // clinical
            {"tissue", tissue},
            {"cell", cell},
            {"cells", cell},
            {"embryo", embryo},
            {"hahnemann", Hahnemann},
            {"korsakov", Korsakov},
            {"protein", protein},
            {"creatinine", creatinine},
            {"prot", protein},
            {"creat", creatinine},
            // computer
            {"voxel", voxel},
            {"pixel", pixel},
            {"vox", voxel},
            {"pix", pixel},
            {"dot", pixel},
            {"error", errors},
            {"errors", errors},
            {"AFN", generateCurrencyCode("AFN")},
            {"971", generateCurrencyCode("AFN")},
            {"ALL", generateCurrencyCode("ALL")},
            {"008", generateCurrencyCode("ALL")},
            {"DZD", generateCurrencyCode("DZD")},
            {"012", generateCurrencyCode("DZD")},
            {"AOA", generateCurrencyCode("AOA")},
            {"973", generateCurrencyCode("AOA")},
            {"XCD", generateCurrencyCode("XCD")},
            {"951", generateCurrencyCode("XCD")},
            {"nan", generateCurrencyCode("nan")},
            {"nan", generateCurrencyCode("nan")},
            {"XCD", generateCurrencyCode("XCD")},
            {"951", generateCurrencyCode("XCD")},
            {"ARS", generateCurrencyCode("ARS")},
            {"032", generateCurrencyCode("ARS")},
            {"AMD", generateCurrencyCode("AMD")},
            {"051", generateCurrencyCode("AMD")},
            {"AWG", generateCurrencyCode("AWG")},
            {"533", generateCurrencyCode("AWG")},
            {"AUD", generateCurrencyCode("AUD")},
            {"036", generateCurrencyCode("AUD")},
            {"AZN", generateCurrencyCode("AZN")},
            {"944", generateCurrencyCode("AZN")},
            {"BSD", generateCurrencyCode("BSD")},
            {"044", generateCurrencyCode("BSD")},
            {"BHD", generateCurrencyCode("BHD")},
            {"048", generateCurrencyCode("BHD")},
            {"BDT", generateCurrencyCode("BDT")},
            {"050", generateCurrencyCode("BDT")},
            {"BBD", generateCurrencyCode("BBD")},
            {"052", generateCurrencyCode("BBD")},
            {"BYN", generateCurrencyCode("BYN")},
            {"933", generateCurrencyCode("BYN")},
            {"BZD", generateCurrencyCode("BZD")},
            {"084", generateCurrencyCode("BZD")},
            {"XOF", generateCurrencyCode("XOF")},
            {"952", generateCurrencyCode("XOF")},
            {"BMD", generateCurrencyCode("BMD")},
            {"060", generateCurrencyCode("BMD")},
            {"INR", generateCurrencyCode("INR")},
            {"356", generateCurrencyCode("INR")},
            {"BTN", generateCurrencyCode("BTN")},
            {"064", generateCurrencyCode("BTN")},
            {"BOB", generateCurrencyCode("BOB")},
            {"068", generateCurrencyCode("BOB")},
            {"BOV", generateCurrencyCode("BOV")},
            {"984", generateCurrencyCode("BOV")},
            {"BAM", generateCurrencyCode("BAM")},
            {"977", generateCurrencyCode("BAM")},
            {"BWP", generateCurrencyCode("BWP")},
            {"072", generateCurrencyCode("BWP")},
            {"NOK", generateCurrencyCode("NOK")},
            {"578", generateCurrencyCode("NOK")},
            {"BRL", generateCurrencyCode("BRL")},
            {"986", generateCurrencyCode("BRL")},
            {"BND", generateCurrencyCode("BND")},
            {"096", generateCurrencyCode("BND")},
            {"BGN", generateCurrencyCode("BGN")},
            {"975", generateCurrencyCode("BGN")},
            {"XOF", generateCurrencyCode("XOF")},
            {"952", generateCurrencyCode("XOF")},
            {"BIF", generateCurrencyCode("BIF")},
            {"108", generateCurrencyCode("BIF")},
            {"CVE", generateCurrencyCode("CVE")},
            {"132", generateCurrencyCode("CVE")},
            {"KHR", generateCurrencyCode("KHR")},
            {"116", generateCurrencyCode("KHR")},
            {"XAF", generateCurrencyCode("XAF")},
            {"950", generateCurrencyCode("XAF")},
            {"CAD", generateCurrencyCode("CAD")},
            {"124", generateCurrencyCode("CAD")},
            {"KYD", generateCurrencyCode("KYD")},
            {"136", generateCurrencyCode("KYD")},
            {"XAF", generateCurrencyCode("XAF")},
            {"950", generateCurrencyCode("XAF")},
            {"XAF", generateCurrencyCode("XAF")},
            {"950", generateCurrencyCode("XAF")},
            {"CLP", generateCurrencyCode("CLP")},
            {"152", generateCurrencyCode("CLP")},
            {"CLF", generateCurrencyCode("CLF")},
            {"990", generateCurrencyCode("CLF")},
            {"CNY", generateCurrencyCode("CNY")},
            {"156", generateCurrencyCode("CNY")},
            {"AUD", generateCurrencyCode("AUD")},
            {"036", generateCurrencyCode("AUD")},
            {"AUD", generateCurrencyCode("AUD")},
            {"036", generateCurrencyCode("AUD")},
            {"COP", generateCurrencyCode("COP")},
            {"170", generateCurrencyCode("COP")},
            {"COU", generateCurrencyCode("COU")},
            {"970", generateCurrencyCode("COU")},
            {"KMF", generateCurrencyCode("KMF")},
            {"174", generateCurrencyCode("KMF")},
            {"CDF", generateCurrencyCode("CDF")},
            {"976", generateCurrencyCode("CDF")},
            {"XAF", generateCurrencyCode("XAF")},
            {"950", generateCurrencyCode("XAF")},
            {"NZD", generateCurrencyCode("NZD")},
            {"554", generateCurrencyCode("NZD")},
            {"CRC", generateCurrencyCode("CRC")},
            {"188", generateCurrencyCode("CRC")},
            {"XOF", generateCurrencyCode("XOF")},
            {"952", generateCurrencyCode("XOF")},
            {"CUP", generateCurrencyCode("CUP")},
            {"192", generateCurrencyCode("CUP")},
            {"CUC", generateCurrencyCode("CUC")},
            {"931", generateCurrencyCode("CUC")},
            {"ANG", generateCurrencyCode("ANG")},
            {"532", generateCurrencyCode("ANG")},
            {"CZK", generateCurrencyCode("CZK")},
            {"203", generateCurrencyCode("CZK")},
            {"DKK", generateCurrencyCode("DKK")},
            {"208", generateCurrencyCode("DKK")},
            {"DJF", generateCurrencyCode("DJF")},
            {"262", generateCurrencyCode("DJF")},
            {"XCD", generateCurrencyCode("XCD")},
            {"951", generateCurrencyCode("XCD")},
            {"DOP", generateCurrencyCode("DOP")},
            {"214", generateCurrencyCode("DOP")},
            {"EGP", generateCurrencyCode("EGP")},
            {"818", generateCurrencyCode("EGP")},
            {"SVC", generateCurrencyCode("SVC")},
            {"222", generateCurrencyCode("SVC")},
            {"XAF", generateCurrencyCode("XAF")},
            {"950", generateCurrencyCode("XAF")},
            {"ERN", generateCurrencyCode("ERN")},
            {"232", generateCurrencyCode("ERN")},
            {"SZL", generateCurrencyCode("SZL")},
            {"748", generateCurrencyCode("SZL")},
            {"ETB", generateCurrencyCode("ETB")},
            {"230", generateCurrencyCode("ETB")},
            {"FKP", generateCurrencyCode("FKP")},
            {"238", generateCurrencyCode("FKP")},
            {"DKK", generateCurrencyCode("DKK")},
            {"208", generateCurrencyCode("DKK")},
            {"FJD", generateCurrencyCode("FJD")},
            {"242", generateCurrencyCode("FJD")},
            {"XPF", generateCurrencyCode("XPF")},
            {"953", generateCurrencyCode("XPF")},
            {"XAF", generateCurrencyCode("XAF")},
            {"950", generateCurrencyCode("XAF")},
            {"GMD", generateCurrencyCode("GMD")},
            {"270", generateCurrencyCode("GMD")},
            {"GEL", generateCurrencyCode("GEL")},
            {"981", generateCurrencyCode("GEL")},
            {"GHS", generateCurrencyCode("GHS")},
            {"936", generateCurrencyCode("GHS")},
            {"GIP", generateCurrencyCode("GIP")},
            {"292", generateCurrencyCode("GIP")},
            {"DKK", generateCurrencyCode("DKK")},
            {"208", generateCurrencyCode("DKK")},
            {"XCD", generateCurrencyCode("XCD")},
            {"951", generateCurrencyCode("XCD")},
            {"GTQ", generateCurrencyCode("GTQ")},
            {"320", generateCurrencyCode("GTQ")},
            {"GBP", generateCurrencyCode("GBP")},
            {"826", generateCurrencyCode("GBP")},
            {"GNF", generateCurrencyCode("GNF")},
            {"324", generateCurrencyCode("GNF")},
            {"XOF", generateCurrencyCode("XOF")},
            {"952", generateCurrencyCode("XOF")},
            {"GYD", generateCurrencyCode("GYD")},
            {"328", generateCurrencyCode("GYD")},
            {"HTG", generateCurrencyCode("HTG")},
            {"332", generateCurrencyCode("HTG")},
            {"AUD", generateCurrencyCode("AUD")},
            {"036", generateCurrencyCode("AUD")},
            {"HNL", generateCurrencyCode("HNL")},
            {"340", generateCurrencyCode("HNL")},
            {"HKD", generateCurrencyCode("HKD")},
            {"344", generateCurrencyCode("HKD")},
            {"HUF", generateCurrencyCode("HUF")},
            {"348", generateCurrencyCode("HUF")},
            {"ISK", generateCurrencyCode("ISK")},
            {"352", generateCurrencyCode("ISK")},
            {"INR", generateCurrencyCode("INR")},
            {"356", generateCurrencyCode("INR")},
            {"IDR", generateCurrencyCode("IDR")},
            {"360", generateCurrencyCode("IDR")},
            {"XDR", generateCurrencyCode("XDR")},
            {"960", generateCurrencyCode("XDR")},
            {"IRR", generateCurrencyCode("IRR")},
            {"364", generateCurrencyCode("IRR")},
            {"IQD", generateCurrencyCode("IQD")},
            {"368", generateCurrencyCode("IQD")},
            {"GBP", generateCurrencyCode("GBP")},
            {"826", generateCurrencyCode("GBP")},
            {"ILS", generateCurrencyCode("ILS")},
            {"376", generateCurrencyCode("ILS")},
            {"JMD", generateCurrencyCode("JMD")},
            {"388", generateCurrencyCode("JMD")},
            {"JPY", generateCurrencyCode("JPY")},
            {"392", generateCurrencyCode("JPY")},
            {"GBP", generateCurrencyCode("GBP")},
            {"826", generateCurrencyCode("GBP")},
            {"JOD", generateCurrencyCode("JOD")},
            {"400", generateCurrencyCode("JOD")},
            {"KZT", generateCurrencyCode("KZT")},
            {"398", generateCurrencyCode("KZT")},
            {"KES", generateCurrencyCode("KES")},
            {"404", generateCurrencyCode("KES")},
            {"AUD", generateCurrencyCode("AUD")},
            {"036", generateCurrencyCode("AUD")},
            {"KPW", generateCurrencyCode("KPW")},
            {"408", generateCurrencyCode("KPW")},
            {"KRW", generateCurrencyCode("KRW")},
            {"410", generateCurrencyCode("KRW")},
            {"KWD", generateCurrencyCode("KWD")},
            {"414", generateCurrencyCode("KWD")},
            {"KGS", generateCurrencyCode("KGS")},
            {"417", generateCurrencyCode("KGS")},
            {"LAK", generateCurrencyCode("LAK")},
            {"418", generateCurrencyCode("LAK")},
            {"LBP", generateCurrencyCode("LBP")},
            {"422", generateCurrencyCode("LBP")},
            {"LSL", generateCurrencyCode("LSL")},
            {"426", generateCurrencyCode("LSL")},
            {"ZAR", generateCurrencyCode("ZAR")},
            {"710", generateCurrencyCode("ZAR")},
            {"LRD", generateCurrencyCode("LRD")},
            {"430", generateCurrencyCode("LRD")},
            {"LYD", generateCurrencyCode("LYD")},
            {"434", generateCurrencyCode("LYD")},
            {"CHF", generateCurrencyCode("CHF")},
            {"756", generateCurrencyCode("CHF")},
            {"MOP", generateCurrencyCode("MOP")},
            {"446", generateCurrencyCode("MOP")},
            {"MKD", generateCurrencyCode("MKD")},
            {"807", generateCurrencyCode("MKD")},
            {"MGA", generateCurrencyCode("MGA")},
            {"969", generateCurrencyCode("MGA")},
            {"MWK", generateCurrencyCode("MWK")},
            {"454", generateCurrencyCode("MWK")},
            {"MYR", generateCurrencyCode("MYR")},
            {"458", generateCurrencyCode("MYR")},
            {"MVR", generateCurrencyCode("MVR")},
            {"462", generateCurrencyCode("MVR")},
            {"XOF", generateCurrencyCode("XOF")},
            {"952", generateCurrencyCode("XOF")},
            {"MRU", generateCurrencyCode("MRU")},
            {"929", generateCurrencyCode("MRU")},
            {"MUR", generateCurrencyCode("MUR")},
            {"480", generateCurrencyCode("MUR")},
            {"XUA", generateCurrencyCode("XUA")},
            {"965", generateCurrencyCode("XUA")},
            {"MXN", generateCurrencyCode("MXN")},
            {"484", generateCurrencyCode("MXN")},
            {"MXV", generateCurrencyCode("MXV")},
            {"979", generateCurrencyCode("MXV")},
            {"MDL", generateCurrencyCode("MDL")},
            {"498", generateCurrencyCode("MDL")},
            {"MNT", generateCurrencyCode("MNT")},
            {"496", generateCurrencyCode("MNT")},
            {"XCD", generateCurrencyCode("XCD")},
            {"951", generateCurrencyCode("XCD")},
            {"MAD", generateCurrencyCode("MAD")},
            {"504", generateCurrencyCode("MAD")},
            {"MZN", generateCurrencyCode("MZN")},
            {"943", generateCurrencyCode("MZN")},
            {"MMK", generateCurrencyCode("MMK")},
            {"104", generateCurrencyCode("MMK")},
            {"NAD", generateCurrencyCode("NAD")},
            {"516", generateCurrencyCode("NAD")},
            {"ZAR", generateCurrencyCode("ZAR")},
            {"710", generateCurrencyCode("ZAR")},
            {"AUD", generateCurrencyCode("AUD")},
            {"036", generateCurrencyCode("AUD")},
            {"NPR", generateCurrencyCode("NPR")},
            {"524", generateCurrencyCode("NPR")},
            {"XPF", generateCurrencyCode("XPF")},
            {"953", generateCurrencyCode("XPF")},
            {"NZD", generateCurrencyCode("NZD")},
            {"554", generateCurrencyCode("NZD")},
            {"NIO", generateCurrencyCode("NIO")},
            {"558", generateCurrencyCode("NIO")},
            {"XOF", generateCurrencyCode("XOF")},
            {"952", generateCurrencyCode("XOF")},
            {"NGN", generateCurrencyCode("NGN")},
            {"566", generateCurrencyCode("NGN")},
            {"NZD", generateCurrencyCode("NZD")},
            {"554", generateCurrencyCode("NZD")},
            {"AUD", generateCurrencyCode("AUD")},
            {"036", generateCurrencyCode("AUD")},
            {"NOK", generateCurrencyCode("NOK")},
            {"578", generateCurrencyCode("NOK")},
            {"OMR", generateCurrencyCode("OMR")},
            {"512", generateCurrencyCode("OMR")},
            {"PKR", generateCurrencyCode("PKR")},
            {"586", generateCurrencyCode("PKR")},
            {"nan", generateCurrencyCode("nan")},
            {"nan", generateCurrencyCode("nan")},
            {"PAB", generateCurrencyCode("PAB")},
            {"590", generateCurrencyCode("PAB")},
            {"PGK", generateCurrencyCode("PGK")},
            {"598", generateCurrencyCode("PGK")},
            {"PYG", generateCurrencyCode("PYG")},
            {"600", generateCurrencyCode("PYG")},
            {"PEN", generateCurrencyCode("PEN")},
            {"604", generateCurrencyCode("PEN")},
            {"PHP", generateCurrencyCode("PHP")},
            {"608", generateCurrencyCode("PHP")},
            {"NZD", generateCurrencyCode("NZD")},
            {"554", generateCurrencyCode("NZD")},
            {"PLN", generateCurrencyCode("PLN")},
            {"985", generateCurrencyCode("PLN")},
            {"QAR", generateCurrencyCode("QAR")},
            {"634", generateCurrencyCode("QAR")},
            {"RON", generateCurrencyCode("RON")},
            {"946", generateCurrencyCode("RON")},
            {"RUB", generateCurrencyCode("RUB")},
            {"643", generateCurrencyCode("RUB")},
            {"RWF", generateCurrencyCode("RWF")},
            {"646", generateCurrencyCode("RWF")},
            {"SHP", generateCurrencyCode("SHP")},
            {"654", generateCurrencyCode("SHP")},
            {"XCD", generateCurrencyCode("XCD")},
            {"951", generateCurrencyCode("XCD")},
            {"XCD", generateCurrencyCode("XCD")},
            {"951", generateCurrencyCode("XCD")},
            {"XCD", generateCurrencyCode("XCD")},
            {"951", generateCurrencyCode("XCD")},
            {"WST", generateCurrencyCode("WST")},
            {"882", generateCurrencyCode("WST")},
            {"STN", generateCurrencyCode("STN")},
            {"930", generateCurrencyCode("STN")},
            {"SAR", generateCurrencyCode("SAR")},
            {"682", generateCurrencyCode("SAR")},
            {"XOF", generateCurrencyCode("XOF")},
            {"952", generateCurrencyCode("XOF")},
            {"RSD", generateCurrencyCode("RSD")},
            {"941", generateCurrencyCode("RSD")},
            {"SCR", generateCurrencyCode("SCR")},
            {"690", generateCurrencyCode("SCR")},
            {"SLE", generateCurrencyCode("SLE")},
            {"925", generateCurrencyCode("SLE")},
            {"SGD", generateCurrencyCode("SGD")},
            {"702", generateCurrencyCode("SGD")},
            {"ANG", generateCurrencyCode("ANG")},
            {"532", generateCurrencyCode("ANG")},
            {"XSU", generateCurrencyCode("XSU")},
            {"994", generateCurrencyCode("XSU")},
            {"SBD", generateCurrencyCode("SBD")},
            {"090", generateCurrencyCode("SBD")},
            {"SOS", generateCurrencyCode("SOS")},
            {"706", generateCurrencyCode("SOS")},
            {"ZAR", generateCurrencyCode("ZAR")},
            {"710", generateCurrencyCode("ZAR")},
            {"nan", generateCurrencyCode("nan")},
            {"nan", generateCurrencyCode("nan")},
            {"SSP", generateCurrencyCode("SSP")},
            {"728", generateCurrencyCode("SSP")},
            {"LKR", generateCurrencyCode("LKR")},
            {"144", generateCurrencyCode("LKR")},
            {"SDG", generateCurrencyCode("SDG")},
            {"938", generateCurrencyCode("SDG")},
            {"SRD", generateCurrencyCode("SRD")},
            {"968", generateCurrencyCode("SRD")},
            {"NOK", generateCurrencyCode("NOK")},
            {"578", generateCurrencyCode("NOK")},
            {"SEK", generateCurrencyCode("SEK")},
            {"752", generateCurrencyCode("SEK")},
            {"CHF", generateCurrencyCode("CHF")},
            {"756", generateCurrencyCode("CHF")},
            {"CHE", generateCurrencyCode("CHE")},
            {"947", generateCurrencyCode("CHE")},
            {"CHW", generateCurrencyCode("CHW")},
            {"948", generateCurrencyCode("CHW")},
            {"SYP", generateCurrencyCode("SYP")},
            {"760", generateCurrencyCode("SYP")},
            {"TWD", generateCurrencyCode("TWD")},
            {"901", generateCurrencyCode("TWD")},
            {"TJS", generateCurrencyCode("TJS")},
            {"972", generateCurrencyCode("TJS")},
            {"TZS", generateCurrencyCode("TZS")},
            {"834", generateCurrencyCode("TZS")},
            {"THB", generateCurrencyCode("THB")},
            {"764", generateCurrencyCode("THB")},
            {"XOF", generateCurrencyCode("XOF")},
            {"952", generateCurrencyCode("XOF")},
            {"NZD", generateCurrencyCode("NZD")},
            {"554", generateCurrencyCode("NZD")},
            {"TOP", generateCurrencyCode("TOP")},
            {"776", generateCurrencyCode("TOP")},
            {"TTD", generateCurrencyCode("TTD")},
            {"780", generateCurrencyCode("TTD")},
            {"TND", generateCurrencyCode("TND")},
            {"788", generateCurrencyCode("TND")},
            {"TRY", generateCurrencyCode("TRY")},
            {"949", generateCurrencyCode("TRY")},
            {"TMT", generateCurrencyCode("TMT")},
            {"934", generateCurrencyCode("TMT")},
            {"AUD", generateCurrencyCode("AUD")},
            {"036", generateCurrencyCode("AUD")},
            {"UGX", generateCurrencyCode("UGX")},
            {"800", generateCurrencyCode("UGX")},
            {"UAH", generateCurrencyCode("UAH")},
            {"980", generateCurrencyCode("UAH")},
            {"AED", generateCurrencyCode("AED")},
            {"784", generateCurrencyCode("AED")},
            {"GBP", generateCurrencyCode("GBP")},
            {"826", generateCurrencyCode("GBP")},
            {"USN", generateCurrencyCode("USN")},
            {"997", generateCurrencyCode("USN")},
            {"UYU", generateCurrencyCode("UYU")},
            {"858", generateCurrencyCode("UYU")},
            {"UYI", generateCurrencyCode("UYI")},
            {"940", generateCurrencyCode("UYI")},
            {"UYW", generateCurrencyCode("UYW")},
            {"927", generateCurrencyCode("UYW")},
            {"UZS", generateCurrencyCode("UZS")},
            {"860", generateCurrencyCode("UZS")},
            {"VUV", generateCurrencyCode("VUV")},
            {"548", generateCurrencyCode("VUV")},
            {"VES", generateCurrencyCode("VES")},
            {"928", generateCurrencyCode("VES")},
            {"VED", generateCurrencyCode("VED")},
            {"926", generateCurrencyCode("VED")},
            {"VND", generateCurrencyCode("VND")},
            {"704", generateCurrencyCode("VND")},
            {"XPF", generateCurrencyCode("XPF")},
            {"953", generateCurrencyCode("XPF")},
            {"MAD", generateCurrencyCode("MAD")},
            {"504", generateCurrencyCode("MAD")},
            {"YER", generateCurrencyCode("YER")},
            {"886", generateCurrencyCode("YER")},
            {"ZMW", generateCurrencyCode("ZMW")},
            {"967", generateCurrencyCode("ZMW")},
            {"ZWG", generateCurrencyCode("ZWG")},
            {"924", generateCurrencyCode("ZWG")},
            {"XBA", generateCurrencyCode("XBA")},
            {"955", generateCurrencyCode("XBA")},
            {"XBB", generateCurrencyCode("XBB")},
            {"956", generateCurrencyCode("XBB")},
            {"XBC", generateCurrencyCode("XBC")},
            {"957", generateCurrencyCode("XBC")},
            {"XBD", generateCurrencyCode("XBD")},
            {"958", generateCurrencyCode("XBD")},
            {"XTS", generateCurrencyCode("XTS")},
            {"963", generateCurrencyCode("XTS")},
            {"XXX", generateCurrencyCode("XXX")},
            {"999", generateCurrencyCode("XXX")},
            {"XAU", generateCurrencyCode("XAU")},
            {"959", generateCurrencyCode("XAU")},
            {"XPD", generateCurrencyCode("XPD")},
            {"964", generateCurrencyCode("XPD")},
            {"XPT", generateCurrencyCode("XPT")},
            {"962", generateCurrencyCode("XPT")},
            {"XAG", generateCurrencyCode("XAG")},
            {"961", generateCurrencyCode("XAG")},
        }};

}  // namespace commodities
}  // namespace UNITS_NAMESPACE
