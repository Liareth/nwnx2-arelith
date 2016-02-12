#ifndef _CNWSAREAOFEFFECTOBJECT_H_
#define _CNWSAREAOFEFFECTOBJECT_H_
#include "nwndef.h"
#include "Vector.h"
#include "CExoString.h"

class CNWSAreaOfEffectObject
{
public:
    void AIUpdate();
    void AddToArea(CNWSArea *, float, float, float, int);
    CNWSAreaOfEffectObject * AsNWSAreaOfEffectObject();
    void EventHandler(unsigned long, unsigned long, void *, unsigned long, unsigned long);
    int GetAreaEffectId();
    int GetCreator();
    unsigned long GetEffectSpellId();
    int GetLastEntered();
    int GetLastLeft();
    int GetObjectArrayIndex();
    Vector GetPosition();
    int GetRadius();
    int GetScriptName(int);
    int GetShape();
    int GetSpellLevel();
    int GetSpellSaveDC();
    int GetTargetObjID();
    int InAreaOfEffect(Vector);
    void JumpToPoint(CNWSArea *, Vector const &);
    int LineSegmentIntersectAreaOfEffect(Vector, Vector);
    void LoadAreaEffect(int);
    int LoadEffect(CResGFF *, CResStruct *);
    void RemoveFromArea();
    void RemoveFromSubAreas(int);
    int SaveEffect(CResGFF *, CResStruct *);
    void SetCreator(unsigned long);
    void SetDuration(unsigned char, float);
    void SetEffectSpellId(unsigned long);
    int SetLastEntered(unsigned long);
    int SetLastLeft(unsigned long);
    int SetObjectArrayIndex(unsigned short);
    void SetScriptName(int, CExoString);
    int SetShape(unsigned char, float, float);
    void SetTargetObjID(unsigned long);
    void UpdateSubAreas(Vector *);
    ~CNWSAreaOfEffectObject();
    CNWSAreaOfEffectObject(unsigned long);

    /* 0x0 */            CNWSObject Object;
    /* 0x1c4 */          unsigned short ObjectArrayIndex;
    /* 0x1c6 */          char field_1c6;
    /* 0x1c7 */          char field_1c7;
    /* 0x1c8 */          unsigned long AreaEFfectId;
    /* 0x1cc */          char Shape;
    /* 0x1cd */          char field_1cd;
    /* 0x1ce */          char field_1ce;
    /* 0x1cf */          char field_1cf;
    /* 0x1d0 */          unsigned long EffectSpellId;
    /* 0x1d4 */          unsigned long Radius;
    /* 0x1d8 */          unsigned long Width;
    /* 0x1dc */          unsigned long Length;
    /* 0x1e0 */          unsigned long SomethingRelatedShapeEq1Ptr48;
    /* 0x1e4 */          unsigned long CreatorId;
    /* 0x1e8 */          unsigned long LinkedToObjectId;
    /* 0x1ec */          unsigned long LastEntered;
    /* 0x1f0 */          unsigned long LastLeft;
    /* 0x1f4 */          unsigned long SpellSaveDC;
    /* 0x1f8 */          unsigned long ClassLevels;
    /* 0x1fc */          CExoString OnHeartbeat;
    /* 0x204 */          CExoString OnUserDefined;
    /* 0x20c */          CExoString OnObjEnter;
    /* 0x214 */          CExoString OnObjExit;
    /* 0x21c */          unsigned long LastHrtbtDay;
    /* 0x220 */          unsigned long LastHrtbtTime;
    /* 0x224 */          unsigned long DurationInMilliseconds;
    /* 0x228 */          unsigned long DurationType;
};
#endif
