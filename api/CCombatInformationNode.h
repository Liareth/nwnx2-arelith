#ifndef _CCOMBATINFORMATIONNODE_H_
#define _CCOMBATINFORMATIONNODE_H_
#include "nwndef.h"

class CCombatInformationNode
{
public:
    CCombatInformationNode();
    int operator=(CCombatInformationNode const &);
    int operator==(CCombatInformationNode &);
    int operator!=(CCombatInformationNode &);

    char field_0;
    char field_1;
    char field_2;
    char field_3;
    char field_4;
    char race;
};
#endif
