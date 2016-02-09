
/***************************************************************************
    NWNXFuncs.cpp - Implementation of the CNWNXFuncs class.
    Copyright (C) 2007 Doug Swarin (zac@intertex.net)

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 ***************************************************************************/

#include "NWNXDefenses.h"


void Func_GetSavingThrowFeat(CGameObject *ob, char *value)
{
    int save, idx;
    int16_t *table = NULL;

    switch (atoi(value)) {
        case SAVING_THROW_FORT:   table = Table_DefenseSaveFort;   break;
        case SAVING_THROW_REFLEX: table = Table_DefenseSaveReflex; break;
        case SAVING_THROW_WILL:   table = Table_DefenseSaveWill;   break;
    }

    if (table == NULL                                    ||
            sscanf(value, "%d %d", &save, &idx) != 2         ||
            idx < 0 || idx >= NWNX_DEFENSES_SAVEFEATS_TABLE_SIZE) {

        snprintf(value, strlen(value), "-1 0");
        return;
    }

    snprintf(value, strlen(value), "%d %d", table[idx * 2], table[(idx * 2) + 1]);
}


/* vim: set sw=4: */
