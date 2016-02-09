
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


void Func_GetClericDomain(CGameObject *ob, char *value)
{
    int i, dom, ret = -1;
    const CNWSCreature *cre;

    if (ob == NULL                                    ||
            (cre = ob->vtable->AsNWSCreature(ob)) == NULL ||
            cre->cre_stats == NULL                        ||
            ((dom = atoi(value)) < 1) || dom > 2) {

        snprintf(value, strlen(value), "-1");
        return;
    }

    for (i = 0; i < cre->cre_stats->cs_classes_len; i++) {
        if (cre->cre_stats->cs_classes[i].cl_class == CLASS_TYPE_CLERIC) {
            if (dom == 1)
                ret = cre->cre_stats->cs_classes[i].cl_domain_1;
            else
                ret = cre->cre_stats->cs_classes[i].cl_domain_2;

            break;
        }
    }

    snprintf(value, strlen(value), "%d", ret);
}


/* vim: set sw=4: */
