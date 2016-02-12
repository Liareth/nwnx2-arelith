#ifndef _CNWSAREA_H_
#define _CNWSAREA_H_
#include "nwndef.h"
#include "Vector.h"
#include "CExoArrayList.h"
#include "CExoString.h"
#include "CResRef.h"
#include "CGameObject.h"
#include "CExoLocString.h"

class CNWSArea
{
public:
    int AIUpdate();
    int AddObjectToArea(unsigned long, int);
    int AddSubArea(CGameObject *);
    void ApplyEffect(CGameEffect *, Vector, Vector);
    CNWSArea * AsNWSArea();
    void BudgeCreatures(Vector const &, Vector const &, Vector const &, unsigned long, int);
    int ClearLineOfSight(Vector, Vector, Vector *, unsigned long *, unsigned long, unsigned long, int);
    Vector ComputeAwayVector(Vector, Vector, float, CPathfindInformation *);
    int ComputeBestCorner(float, float, float, float, float, float, float, float, float *, float *, float *, float *);
    float ComputeHeight(Vector);
    int ComputeNonVisibleLocation(Vector, CPathfindInformation *, int, Vector *, float);
    int ComputePathDistance(int, float *);
    int ComputeSafeLocationInDirection(Vector, Vector, float, CPathfindInformation *, int, Vector *);
    int ComputeSafeLocation(Vector, float, CPathfindInformation *, int, Vector *);
    int CountAreaTransitionTriggers(unsigned long *, int, unsigned long *);
    int CountVisibleToPlayers(Vector, int);
    void DecreaseAILevelPriority();
    void DecrementPlayersInArea();
    int EvaluateOverlappingTargets(CPathfindInformation *, Vector, unsigned long, float, float, float, int, int, unsigned long *);
    void EventHandler(unsigned long, unsigned long, void *, unsigned long, unsigned long);
    int ExploreArea(CNWSCreature *, int, int, int);
    int GenerateInterTilePath(int *, int, int, int);
    int GetAmbientSound();
    int GetAreaListenCheckModifier();
    int GetAreaName();
    int GetAreaSpotCheckModifier();
    int GetCurrentWeather();
    int GetCustomScriptEventId();
    unsigned long GetDoorCrossed(Vector, Vector);
    int GetFirstObjectInArea(unsigned long &);
    int GetFirstObjectIndiceByX(int *, float);
    int GetGameObjectsArray();
    int GetInterAreaDFSVisited();
    int GetIsIDInExcludeList(unsigned long, CExoArrayList<CGameObject *> *);
    int GetLastEntered();
    int GetLastLeft();
    unsigned short GetLoadScreenID();
    int GetMapSize();
    int GetNextObjectInArea(unsigned long &);
    int GetNumPlayersInArea();
    int GetObjectByNameIndex();
    int GetObjectsArrayPosition();
    int GetOverrideWeather();
    unsigned char GetPVPSetting();
    int GetScriptName(int);
    CNWSScriptVarTable * GetScriptVarTable();
    int GetSoundPathInformation();
    int GetSurfaceMaterial(Vector);
    CExoString GetTag();
    int GetTileSetResRef();
    CNWSTile * GetTile(Vector);
    int GetTile(int, int);
    int GetTrapList();
    int GoalMoveDenied(int, int, int);
    int GridDFSGenerateSuccessors(int, int, int, int, int, CNWSAreaGridSuccessors **);
    int GridDFSTransTableGet(int, int, int *, int *);
    int GridDFSTransTableHash(int, int);
    int GridDFSTransTableInitialize();
    void GridDFSTransTablePut(int, int, int, int);
    int GridDFSearch(int, int, int, int, int, int);
    int HandleTransparentDoors(float, float, float, float, float, float, float, unsigned long, unsigned long &, int, CExoArrayList<CGameObject *> *, int);
    int InSubAreas(Vector, CExoArrayList<unsigned long> *);
    void IncreaseAILevelPriority();
    void IncrementPlayersInArea();
    void InterTileDFSExploreArea(unsigned char *, int, int, int, float, float);
    int InterTileDFSGenerateSuccessors(int, int, int, int);
    int InterTileDFSSoundPath(unsigned char *, int, int, int, int);
    int InterTileDFS(int, int, int, int, int);
    int IntersectingLineSegment(Vector, Vector, CExoArrayList<unsigned long> *);
    int LoadAreaEffects(CResGFF *, CResStruct *, int);
    int LoadAreaHeader(CResStruct *);
    int LoadArea(int);
    int LoadCreatures(CResGFF *, CResStruct *, int);
    int LoadDoors(CResGFF *, CResStruct *, int);
    int LoadEncounters(CResGFF *, CResStruct *, int);
    int LoadGIT(int);
    int LoadItems(CResGFF *, CResStruct *, int);
    int LoadPlaceables(CResGFF *, CResStruct *, int);
    int LoadPlayers(CResGFF *, CResStruct *);
    int LoadProperties(CResGFF *, CResStruct *);
    int LoadSounds(CResGFF *, CResStruct *, int);
    int LoadStores(CResGFF *, CResStruct *, int);
    int LoadTileSetInfo(CResStruct *);
    int LoadTriggers(CResGFF *, CResStruct *, int);
    int LoadWaypoints(CResGFF *, CResStruct *, int);
    CNWSArea * NWAreaAsNWSArea();
    int NoCreaturesOnLine(float, float, float, float, CPathfindInformation *, int, int, unsigned long *, int);
    int NoNoneWalkPolysInStaticObject(unsigned long, float, float, float, float, float, float, float, unsigned long, int);
    int PackAreaIntoMessage(int, int, int, CNWSPlayer *);
    void PlayVisualEffect(unsigned short, Vector);
    int PlotGridPath(CPathfindInformation *, unsigned long long);
    int PlotPath(CPathfindInformation *, unsigned long long);
    int PlotSoundPath(CPathfindInformation *);
    int PositionWalkable(Vector);
    int RemoveInterTileExit(int, int, int, int);
    int RemoveObjectFromArea(unsigned long);
    int RemoveSubArea(CGameObject *);
    void SaveAreaEffects(CResGFF *, CResStruct *, CExoArrayList<unsigned long> &);
    int SaveArea(CERFFile *, CExoString &);
    void SaveCreatures(CResGFF *, CResStruct *, CExoArrayList<unsigned long> &);
    void SaveDoors(CResGFF *, CResStruct *, CExoArrayList<unsigned long> &);
    void SaveEncounters(CResGFF *, CResStruct *, CExoArrayList<unsigned long> &);
    void SaveGIT(CERFFile *, CExoString &, CExoArrayList<unsigned long> &);
    void SaveItems(CResGFF *, CResStruct *, CExoArrayList<unsigned long> &);
    void SavePlaceables(CResGFF *, CResStruct *, CExoArrayList<unsigned long> &);
    int SaveProperties(CResGFF *, CResStruct *);
    void SaveSounds(CResGFF *, CResStruct *, CExoArrayList<unsigned long> &);
    void SaveStores(CResGFF *, CResStruct *, CExoArrayList<unsigned long> &);
    void SaveTriggers(CResGFF *, CResStruct *, CExoArrayList<unsigned long> &);
    void SaveWaypoints(CResGFF *, CResStruct *, CExoArrayList<unsigned long> &);
    void SetCurrentWeather(unsigned char, int);
    int SetCustomScriptEventId(int);
    int SetInterAreaDFSVisited(int);
    int SetLastEntered(unsigned long);
    int SetLastLeft(unsigned long);
    int SetMapSize(unsigned char);
    int SetObjectByNameIndex(int);
    int SetObjectsArrayPosition(int);
    int SetOverrideWeather(unsigned char);
    int SetPVPSetting(unsigned char);
    void SetScriptName(int, CExoString);
    int SetSearchInfo(CPathfindInformation *);
    int SetTag(CExoString);
    int SmoothCornerOptimize(int, float *, int *, float **);
    int SmoothPointsOnPath();
    int SmoothSelectNodes(int, float *, int *, float **, int, int);
    int SmoothSelection(int, float *, int *, float **);
    int TestDirectLine(float, float, float, float, float, float, int);
    int TestLineWalkable(float, float, float, float, float);
    int TestSafeLocationPoint(Vector, CPathfindInformation *);
    void UnloadArea();
    void UpdatePlayerAutomaps();
    int UpdatePositionInObjectsArray(CGameObject *);
    ~CNWSArea();
    CNWSArea(CResRef, int, unsigned long);

    /* 0x0/0 */ unsigned long Flags;
    /* 0x4/4 */ unsigned long Width;
    /* 0x8/8 */ unsigned long Height;
    /* 0xC/12 */ unsigned long field_C;
    /* 0x10/16 */ unsigned long field_10;
    /* 0x14/20 */ unsigned long field_14;
    /* 0x18/24 */ unsigned long field_18;
    /* 0x1C/28 */ unsigned long field_1C;
    /* 0x20/32 */ unsigned long field_20;
    /* 0x24/36 */ unsigned long field_24;
    /* 0x28/40 */ unsigned long field_28;
    /* 0x2C/44 */ unsigned long field_2C;
    /* 0x30/48 */ unsigned long field_30;
    /* 0x34/52 */ unsigned long field_34;
    /* 0x38/56 */ unsigned long field_38;
    /* 0x3C/60 */ unsigned long field_3C;
    /* 0x40/64 */ unsigned long field_40;
    /* 0x44/68 */ unsigned long field_44;
    /* 0x48/72 */ unsigned long field_48;
    /* 0x4C/76 */ unsigned long field_4C;
    /* 0x50/80 */ unsigned long field_50;
    /* 0x54/84 */ unsigned long field_54;
    /* 0x58/88 */ unsigned long field_58;
    /* 0x5C/92 */ unsigned long field_5C;
    /* 0x60/96 */ unsigned long MoonAmbientColor;
    /* 0x64/100 */ unsigned long MoonDiffuseColor;
    /* 0x68/104 */ unsigned long MoonFogColor;
    /* 0x6C/108 */ unsigned long MoonFogAmount;
    /* 0x70/112 */ unsigned long MoonShadows;
    /* 0x74/116 */ unsigned long SunAmbientColor;
    /* 0x78/120 */ unsigned long SunDiffuseColor;
    /* 0x7C/124 */ unsigned long SunFogColor;
    /* 0x80/128 */ unsigned long SunFogAmount;
    /* 0x84/132 */ unsigned long SunShadows;
    /* 0x88/136 */ unsigned long DayNightCycle;
    /* 0x8C/140 */ unsigned long IsNight;
    /* 0x90/144 */ unsigned long SkyBox;
    /* 0x94/148 */ unsigned long field_94;
    /* 0x98/152 */ unsigned long NoRest;
    /* 0x9C/156 */ unsigned long ShadowOpacity;
    /* 0xA0/160 */ unsigned long field_A0;
    /* 0xA4/164 */ unsigned long vtable;
    /* 0xA8/168 */ unsigned long field_A8;
    /* 0xAC/172 */ unsigned long field_AC;
    /* 0xB0/176 */ CResRef ResRef;
    /* 0xC0/192 */ unsigned long CResARE;
    /* 0xC4/196 */ CGameObject GameObject;
    /* 0xD4/212 */ unsigned long NumPlayers;
    /* 0xD8/216 */ unsigned long field_D8;
    /* 0xDC/220 */ unsigned long field_DC;
    /* 0xE0/224 */ unsigned long field_E0;
    /* 0xE4/228 */ unsigned long field_E4;
    /* 0xE8/232 */ unsigned long m_nLastHeartbeatScriptCalendarDay;
    /* 0xEC/236 */ unsigned long m_nLastHeartbeatScriptTimeOfDay;
    /* 0xF0/240 */ unsigned long field_F0;
    /* 0xF8/248 */ char rsvd1[4];
    /* 0xF8/248 */ unsigned long field_F8;
    /* 0xFC/252 */ CExoLocString Name;
    /* 0x104/260 */ CExoString Tag;
    /* 0x120/288 */ char rsvd2[20];
    /* 0x120/288 */ unsigned long field_120;
    /* 0x124/292 */ unsigned long field_124;
    /* 0x128/296 */ CExoString m_sHeartbeatScript;
    /* 0x130/304 */ unsigned long field_130;
    /* 0x134/308 */ unsigned long field_134;
    /* 0x154/340 */ char rsvd3[28];
    /* (mtype:CExoArrayList<unsigned long>) */
    /* 0x154/340 */ CExoArrayList<unsigned long> ObjectList;
    /* 0x160/352 */ unsigned long CurrentObjectIndex;
    /* 0x1D4/468 */ char rsvd4[112];
    /* 0x1D4/468 */ unsigned long field_1D4;
    /* 0x1D8/472 */ unsigned long field_1D8;
    /* 0x1DC/476 */ unsigned long field_1DC;
    /* 0x1E0/480 */ unsigned long field_1E0;
    /* 0x1E4/484 */ unsigned long field_1E4;
    /* 0x1E8/488 */ unsigned long field_1E8;
    /* 0x1EC/492 */ char CurrentWeather;
    /* 0x1F0/496 */ char rsvd5[3];
    /* 0x1F0/496 */ char WeatherStarted;
    /* 0x1F4/500 */ char rsvd6[3];
    /* 0x1F4/500 */ unsigned long NightDayDawnDusk;
    /* 0x1F8/504 */ unsigned long m_nLastUpdateCalendarDay;
    /* 0x1FC/508 */ unsigned long m_nLastUpdateTimeOfDay;
    /* 0x200/512 */ unsigned long field_200;
    /* 0x204/516 */ unsigned long tilecount;
    /* 0x208/520 */ unsigned long field_208;
    /* 0x20C/524 */ unsigned long field_20C;
};
#endif
