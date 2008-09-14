/*
 *  File:       chardump.h
 *  Summary:    Dumps character info out to the morgue file.
 *  Written by: Linley Henzell
 *
 *  Modified for Crawl Reference by $Author$ on $Date$
 */


#ifndef CHARDUMP_H
#define CHARDUMP_H

#include <string>
#include <cstdio>

enum item_origin_dump_selector
{
    IODS_PRICE            = 0,      // Extra info is provided based on price
    IODS_ARTEFACTS        = 1,      // Extra information on artefacts
    IODS_EGO_ARMOUR       = 2,
    IODS_EGO_WEAPON       = 4,
    IODS_JEWELLERY        = 8,
    IODS_RUNES            = 16,
    IODS_RODS             = 32,
    IODS_STAVES           = 64,
    IODS_BOOKS            = 128,
    IODS_EVERYTHING       = 0xFF
};

struct scorefile_entry;
bool dump_char(const std::string &fname,
               bool show_prices,
               bool full_id = false,
               const scorefile_entry *se = NULL);
void dump_map(const char* fname);
void dump_map(FILE *fp);
void display_notes();
std::string munge_description(const std::string &inStr);
const char *hunger_level(void);

#ifdef DGL_WHEREIS
void whereis_record(const char *status = "active");
#endif

#endif
