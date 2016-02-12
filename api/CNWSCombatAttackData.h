#ifndef _CNWSCOMBATATTACKDATA_H_
#define _CNWSCOMBATATTACKDATA_H_
#include "nwndef.h"
#include "CExoString.h"
#include "CExoArrayList.h"

class CNWSCombatAttackData
{
public:
    void AddDamage(unsigned short, int);
    void ClearAttackData();
    void Copy(CNWSCombatAttackData *, int);
    int GetDamage(unsigned short);
    int GetTotalDamage(int);
    int LoadData(CResGFF *, CResStruct *);
    int SaveData(CResGFF *, CResStruct *);
    void SetBaseDamage(int);
    int SetDamage(unsigned short, int);
    ~CNWSCombatAttackData();
    CNWSCombatAttackData();

    /* 0x0/0 */ unsigned short AttackGroup;
    /* 0x2/2 */ unsigned short AnimationLength;
    /* 0x4/4 */ unsigned long ReactObject;
    /* 0x8/8 */ unsigned short ReaxnDelay;
    /* 0xA/10 */ unsigned short ReaxnAnimation;
    /* 0xC/12 */ unsigned short ReaxnAnimLength;
    /* 0xE/14 */ char ToHitRoll;
    /* 0xF/15 */ char ThreatRoll;
    /* 0x10/16 */ unsigned long ToHitMod;
    /* 0x14/20 */ char MissedBy;
    /* 0x16/22 */ char field_15;
    /* 0x16/22 */ unsigned short DamageBludgeoning;
    /* 0x18/24 */ unsigned short DamagePiercing;
    /* 0x1A/26 */ unsigned short DamageSlashing;
    /* 0x1C/28 */ unsigned short DamageMagical;
    /* 0x1E/30 */ unsigned short DamageAcid;
    /* 0x20/32 */ unsigned short DamageCold;
    /* 0x22/34 */ unsigned short DamageDivine;
    /* 0x24/36 */ unsigned short DamageElectrical;
    /* 0x26/38 */ unsigned short DamageFire;
    /* 0x28/40 */ unsigned short DamageNegative;
    /* 0x2a/42 */ unsigned short DamagePositive;
    /* 0x2c/44 */ unsigned short DamageSonic;
    /* 0x2e/46 */ unsigned short DamageBase;
    /* 0x30/48 */ char WeaponAttackType;
    /* 0x31/49 */ char AttackMode;
    /* 0x32/50 */ char Concealment;
    /* 0x33/51 */ char field_33;
    /* 0x34/52 */ unsigned long RangedAttack;
    /* 0x38/56 */ unsigned long SneakAttack;
    /* 0x3C/60 */ unsigned long DeathAttack;
    /* 0x40/64 */ unsigned long KillingBlow;
    /* 0x44/68 */ unsigned long CoupDeGrace;
    /* 0x48/72 */ unsigned long CriticalThreat;
    /* 0x4C/76 */ unsigned long AttackDeflected;
    /* 0x50/80 */ char AttackResult;
    /* 0x51/81 */ char field_51;
    /* 0x52/82 */ unsigned short AttackType; // also "SpecialAttack"
    /* 0x54/84 */ unsigned short AttackID;
    /* 0x56/86 */ unsigned short field_56;
    /* 0x58/88 */ Vector RangedTargetPosition;
    /* 0x64/100 */ unsigned long AmmoItemID;
    /* 0x68/104 */ CExoString AttackDebugText;
    /* 0x70/112 */ CExoString DamageDebugText;
    /* (mtype:CExoArrayList<unsigned long>) */
    /* 0x78/120 */ CExoArrayList<unsigned long> m_alstOnHitGameEffects;
    /* (mtype:CExoArrayList<CNWSSpellScriptData *>) */
    /* 0x84/132 */ CExoArrayList<CNWSSpellScriptData *> m_alstOnHitSpellScripts;
    /* (mtype:CExoArrayList<CNWSSpellScriptData *>) */
    /* 0x90/144 */ CExoArrayList<CNWSSpellScriptData *> m_alstOnHitEnemySpellScripts;
    /* 0x9C/156 */ CExoArrayList<CNWCCMessageData *> m_alstPendingFeedback;
    /* 0xA0/160 */ // unsigned long field_A0;
    /* 0xA4/164 */ // unsigned long field_A4;
};
#endif
