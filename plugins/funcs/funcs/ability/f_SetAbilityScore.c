
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

#include "NWNXFuncs.h"


void Func_SetAbilityScore(CGameObject *ob, char *value)
{
    int abil, val;
    CNWSCreature *cre;

    if (ob == NULL                                    ||
            (cre = ob->vtable->AsNWSCreature(ob)) == NULL ||
            cre->cre_stats == NULL                        ||
            sscanf(value, "%d %d", &abil, &val) != 2      ||
            val < 0 || val > 255) {

        snprintf(value, strlen(value), "-1");
        return;
    }

    switch (abil) {
        case ABILITY_STRENGTH:
            CNWSCreatureStats__SetSTRBase(cre->cre_stats, val);
            snprintf(value, strlen(value), "%d", cre->cre_stats->cs_str);
            break;

        case ABILITY_DEXTERITY:
            CNWSCreatureStats__SetDEXBase(cre->cre_stats, val);
            snprintf(value, strlen(value), "%d", cre->cre_stats->cs_dex);
            break;

        case ABILITY_CONSTITUTION:
            CNWSCreatureStats__SetCONBase(cre->cre_stats, val, 0);
            snprintf(value, strlen(value), "%d", cre->cre_stats->cs_con);
            break;

        case ABILITY_INTELLIGENCE:
            CNWSCreatureStats__SetINTBase(cre->cre_stats, val);
            snprintf(value, strlen(value), "%d", cre->cre_stats->cs_int);
            break;

        case ABILITY_WISDOM:
            CNWSCreatureStats__SetWISBase(cre->cre_stats, val);
            snprintf(value, strlen(value), "%d", cre->cre_stats->cs_wis);
            break;

        case ABILITY_CHARISMA:
            CNWSCreatureStats__SetCHABase(cre->cre_stats, val);
            snprintf(value, strlen(value), "%d", cre->cre_stats->cs_cha);
            break;
    }
}


/* vim: set sw=4: */
