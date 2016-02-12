#ifndef _CCOMBATINFORMATION_H_
#define _CCOMBATINFORMATION_H_
#include "nwndef.h"

class CCombatInformation
{
public:
    int LoadData(CResGFF *, CResStruct *);
    int SaveData(CResGFF *, CResStruct *);
    ~CCombatInformation();
    CCombatInformation();
    CCombatInformation & operator=(CCombatInformation &);
    int operator==(CCombatInformation &);
    int operator!=(CCombatInformation &);

    char NumAttacks;
    char OnHandAttackMod;
    char OnHandDamageMod;
    char OffHandAttackMod;
    char OffHandDamageMod;
    char SpellResistance;
    char ArcaneSpellFail;
    char ArmorCheckPenalty;
    char UnarmedDamageDice;
    char UnarmedDamageDie;
    char CreatureDamageDice[3];
    char CreatureDamageDie[3];
    char CreatureMeleeDamageBonus[3];
    char OnHandCriticalRange;
    char OnHandCriticalMultiplier;
    char field_15;  // gap
    char field_16;
    char field_17;
    char OffHandWeaponEquipped;
    char field_19;  // gap
    char field_1A;
    char field_1B;
    char OffHandCriticalRange;
    char OffHandCriticalMultiplier;
    char field_1E;  // gap
    char field_1F;
    CExoArrayList<CCombatInformationNode*> AttackList;
    CExoArrayList<CCombatInformationNode*> DamageList;
    unsigned long RightEquip;
    unsigned long LeftEquip;
    CExoString RightString;
    CExoString LeftString;
    char DamageDice;
    char DamageDie;
    char field_52;  // gap
    char field_53;
};
#endif
