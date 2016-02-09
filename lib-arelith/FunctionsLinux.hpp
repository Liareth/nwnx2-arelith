#ifndef NWNX_UNIFIED__FUNCTIONS_LINUX_HPP
#define NWNX_UNIFIED__FUNCTIONS_LINUX_HPP

#include <cstdint>

namespace Functions {

// public C2DA::C2DA(CResRef, int32_t)
constexpr uintptr_t C2DA__C2DACtor__0 = 0x082BEBCC;
// public C2DA::C2DA(void)
constexpr uintptr_t C2DA__C2DACtor__1 = 0x082BEC80;
// public C2DA::~C2DA(void)
constexpr uintptr_t C2DA__C2DADtor = 0x082BED24;
// public int32_t C2DA::GetCExoStringEntry(const CExoString&, const CExoString&, CExoString*)
constexpr uintptr_t C2DA__GetCExoStringEntry__0 = 0x082BD000;
// public int32_t C2DA::GetCExoStringEntry(int32_t, const CExoString&, CExoString*)
constexpr uintptr_t C2DA__GetCExoStringEntry__1 = 0x082BD0D4;
// public int32_t C2DA::GetCExoStringEntry(int32_t, int32_t, CExoString*)
constexpr uintptr_t C2DA__GetCExoStringEntry__2 = 0x082BEDBC;
// public int32_t C2DA::GetCExoStringEntry(const CExoString&, int32_t, CExoString*)
constexpr uintptr_t C2DA__GetCExoStringEntry__3 = 0x082BEE60;
// public int32_t C2DA::GetColumnIndex(const CExoString&)
constexpr uintptr_t C2DA__GetColumnIndex = 0x082BED74;
// public int32_t C2DA::GetFLOATEntry(int32_t, int32_t, float*)
constexpr uintptr_t C2DA__GetFLOATEntry__0 = 0x082BEFA4;
// public int32_t C2DA::GetFLOATEntry(const CExoString&, const CExoString&, float*)
constexpr uintptr_t C2DA__GetFLOATEntry__1 = 0x082BF038;
// public int32_t C2DA::GetFLOATEntry(int32_t, const CExoString&, float*)
constexpr uintptr_t C2DA__GetFLOATEntry__2 = 0x082BF100;
// public int32_t C2DA::GetFLOATEntry(const CExoString&, int32_t, float*)
constexpr uintptr_t C2DA__GetFLOATEntry__3 = 0x082BF1C0;
// public int32_t C2DA::GetINTEntry(int32_t, int32_t, int32_t*)
constexpr uintptr_t C2DA__GetINTEntry__0 = 0x082BD77C;
// public int32_t C2DA::GetINTEntry(const CExoString&, const CExoString&, int32_t*)
constexpr uintptr_t C2DA__GetINTEntry__1 = 0x082BD8A8;
// public int32_t C2DA::GetINTEntry(int32_t, const CExoString&, int32_t*)
constexpr uintptr_t C2DA__GetINTEntry__2 = 0x082BDA04;
// public int32_t C2DA::GetINTEntry(const CExoString&, int32_t, int32_t*)
constexpr uintptr_t C2DA__GetINTEntry__3 = 0x082BDB58;
// void C2DA::GetNextLineLength(char*, uint32_t)
constexpr uintptr_t C2DA__GetNextLineLength = 0x082BF580;
// protected int32_t C2DA::GetNextToken(char**, uint32_t*, char*, uint32_t*)
constexpr uintptr_t C2DA__GetNextToken = 0x082BE0C0;
// void C2DA::GetNumColumns(void)
constexpr uintptr_t C2DA__GetNumColumns = 0x082BF6D0;
// void C2DA::GetNumRows(void)
constexpr uintptr_t C2DA__GetNumRows = 0x082BF6DC;
// void C2DA::GetRowIndex(const CExoString&)
constexpr uintptr_t C2DA__GetRowIndex = 0x082BF5A8;
// public int32_t C2DA::Load2DArray(void)
constexpr uintptr_t C2DA__Load2DArray = 0x082BE1A8;
// void C2DA::SetBlankEntry(CExoString, CExoString)
constexpr uintptr_t C2DA__SetBlankEntry__0 = 0x082BDEBC;
// void C2DA::SetBlankEntry(int32_t, CExoString)
constexpr uintptr_t C2DA__SetBlankEntry__1 = 0x082BDFEC;
// void C2DA::SetBlankEntry(int32_t, int32_t)
constexpr uintptr_t C2DA__SetBlankEntry__2 = 0x082BF488;
// void C2DA::SetBlankEntry(CExoString, int32_t)
constexpr uintptr_t C2DA__SetBlankEntry__3 = 0x082BF4D4;
// void C2DA::SetCExoStringEntry(CExoString, CExoString, CExoString)
constexpr uintptr_t C2DA__SetCExoStringEntry__0 = 0x082BD1A0;
// void C2DA::SetCExoStringEntry(int32_t, CExoString, CExoString)
constexpr uintptr_t C2DA__SetCExoStringEntry__1 = 0x082BD320;
// void C2DA::SetCExoStringEntry(CExoString, int32_t, CExoString)
constexpr uintptr_t C2DA__SetCExoStringEntry__2 = 0x082BD448;
// void C2DA::SetCExoStringEntry(int32_t, int32_t, CExoString)
constexpr uintptr_t C2DA__SetCExoStringEntry__3 = 0x082BEF04;
// void C2DA::SetFLOATEntry(CExoString, CExoString, float)
constexpr uintptr_t C2DA__SetFLOATEntry__0 = 0x082BD544;
// void C2DA::SetFLOATEntry(int32_t, CExoString, float)
constexpr uintptr_t C2DA__SetFLOATEntry__1 = 0x082BD68C;
// void C2DA::SetFLOATEntry(int32_t, int32_t, float)
constexpr uintptr_t C2DA__SetFLOATEntry__2 = 0x082BF224;
// void C2DA::SetFLOATEntry(CExoString, int32_t, float)
constexpr uintptr_t C2DA__SetFLOATEntry__3 = 0x082BF28C;
// void C2DA::SetINTEntry(CExoString, CExoString, int32_t)
constexpr uintptr_t C2DA__SetINTEntry__0 = 0x082BDC8C;
// void C2DA::SetINTEntry(int32_t, CExoString, int32_t)
constexpr uintptr_t C2DA__SetINTEntry__1 = 0x082BDDD0;
// void C2DA::SetINTEntry(int32_t, int32_t, int32_t)
constexpr uintptr_t C2DA__SetINTEntry__2 = 0x082BF35C;
// void C2DA::SetINTEntry(CExoString, int32_t, int32_t)
constexpr uintptr_t C2DA__SetINTEntry__3 = 0x082BF3C0;
// protected int32_t C2DA::SkipNewLines(char**, uint32_t*)
constexpr uintptr_t C2DA__SkipNewLines = 0x082BF5F0;
// public void C2DA::Unload2DArray(void)
constexpr uintptr_t C2DA__Unload2DArray = 0x082BEA88;

// public CAppManager::CAppManager(void)
constexpr uintptr_t CAppManager__CAppManagerCtor = 0x0805134C;
// public CAppManager::~CAppManager(void)
constexpr uintptr_t CAppManager__CAppManagerDtor = 0x08051510;
// public void CAppManager::CreateServer(void)
constexpr uintptr_t CAppManager__CreateServer = 0x08052318;
// void CAppManager::DestroyScriptDebuggerPopup(void)
constexpr uintptr_t CAppManager__DestroyScriptDebuggerPopup = 0x080523F4;
// public void CAppManager::DestroyServer(void)
constexpr uintptr_t CAppManager__DestroyServer = 0x08052388;
// void CAppManager::DisplayScriptDebuggerPopup(void)
constexpr uintptr_t CAppManager__DisplayScriptDebuggerPopup = 0x080523EC;
// void CAppManager::DoSaveGameScreenShot(CExoString&)
constexpr uintptr_t CAppManager__DoSaveGameScreenShot = 0x08052308;
// public int32_t CAppManager::GetDungeonMasterEXERunning(void)
constexpr uintptr_t CAppManager__GetDungeonMasterEXERunning = 0x080523E0;
// public CObjectTableManager* CAppManager::GetObjectTableManager(uint32_t)
constexpr uintptr_t CAppManager__GetObjectTableManager = 0x080522E8;
// public unsigned char CAppManager::GetProgressFromCodeword(CExoString&)
constexpr uintptr_t CAppManager__GetProgressFromCodeword = 0x08051E2C;
// public unsigned char CAppManager::ReadProgressFromINI(unsigned char)
constexpr uintptr_t CAppManager__ReadProgressFromINI = 0x080515C0;
// void CAppManager::SetDungeonMasterEXERunning(int32_t)
constexpr uintptr_t CAppManager__SetDungeonMasterEXERunning = 0x080523D0;
// void CAppManager::ShowServerMem(void)
constexpr uintptr_t CAppManager__ShowServerMem = 0x08052310;
// void CAppManager::SpawnExternalScriptDebugger(void)
constexpr uintptr_t CAppManager__SpawnExternalScriptDebugger = 0x080523FC;

// public CBWCBlowFish::CBWCBlowFish(void)
constexpr uintptr_t CBWCBlowFish__CBWCBlowFishCtor__0 = 0x08308384;
// public CBWCBlowFish::CBWCBlowFish(const CBWCBlowFish&)
constexpr uintptr_t CBWCBlowFish__CBWCBlowFishCtor__1 = 0x0830865C;
// public CBWCBlowFish::~CBWCBlowFish(void)
constexpr uintptr_t CBWCBlowFish__CBWCBlowFishDtor = 0x083083B4;
// private void CBWCBlowFish::BlockToBytes(const CBWCBlowFishBlock&, unsigned char*)
constexpr uintptr_t CBWCBlowFish__BlockToBytes = 0x08308520;
// private void CBWCBlowFish::BytesToBlock(const unsigned char*, CBWCBlowFishBlock&)
constexpr uintptr_t CBWCBlowFish__BytesToBlock = 0x083084D4;
// public int32_t CBWCBlowFish::Decrypt(unsigned char*, uint32_t, unsigned char*, uint32_t&, unsigned char&)
constexpr uintptr_t CBWCBlowFish__Decrypt__0 = 0x08308014;
// public int32_t CBWCBlowFish::Decrypt(unsigned char*, uint32_t, uint32_t&, unsigned char&)
constexpr uintptr_t CBWCBlowFish__Decrypt__1 = 0x08308164;
// private void CBWCBlowFish::DecryptBlock(CBWCBlowFishBlock&)
constexpr uintptr_t CBWCBlowFish__DecryptBlock = 0x08307C6C;
// public int32_t CBWCBlowFish::Encrypt(unsigned char*, uint32_t, unsigned char*, uint32_t&, unsigned char&)
constexpr uintptr_t CBWCBlowFish__Encrypt__0 = 0x08307D78;
// public int32_t CBWCBlowFish::Encrypt(unsigned char*, uint32_t, uint32_t&, unsigned char&)
constexpr uintptr_t CBWCBlowFish__Encrypt__1 = 0x08307EC8;
// private void CBWCBlowFish::EncryptBlock(CBWCBlowFishBlock&)
constexpr uintptr_t CBWCBlowFish__EncryptBlock = 0x08307B60;
// private uint32_t CBWCBlowFish::F(uint32_t)
constexpr uintptr_t CBWCBlowFish__F = 0x083085D0;
// public int32_t CBWCBlowFish::GetDecryptedSize(uint32_t, uint32_t&)
constexpr uintptr_t CBWCBlowFish__GetDecryptedSize = 0x083085A8;
// public int32_t CBWCBlowFish::GetEncryptedSize(uint32_t, uint32_t&)
constexpr uintptr_t CBWCBlowFish__GetEncryptedSize = 0x08308584;
// private unsigned char CBWCBlowFish::GetLowOrderByte(uint32_t)
constexpr uintptr_t CBWCBlowFish__GetLowOrderByte = 0x083085C8;
// public int32_t CBWCBlowFish::GetState(void*)
constexpr uintptr_t CBWCBlowFish__GetState = 0x083084B0;
// public int32_t CBWCBlowFish::GetStateSize(uint32_t&)
constexpr uintptr_t CBWCBlowFish__GetStateSize = 0x0830849C;
// void CBWCBlowFish::ResetChain(void)
constexpr uintptr_t CBWCBlowFish__ResetChain = 0x08308450;
// public int32_t CBWCBlowFish::ResetKey(void)
constexpr uintptr_t CBWCBlowFish__ResetKey = 0x083083F4;
// public int32_t CBWCBlowFish::SetKey(unsigned char*, uint32_t, unsigned char&)
constexpr uintptr_t CBWCBlowFish__SetKey = 0x08307980;
// public int32_t CBWCBlowFish::SetState(void*, uint32_t)
constexpr uintptr_t CBWCBlowFish__SetState = 0x0830846C;

// public CBWCBlowFishBlock::CBWCBlowFishBlock(uint32_t, uint32_t)
constexpr uintptr_t CBWCBlowFishBlock__CBWCBlowFishBlockCtor__1 = 0x083082B0;
// public CBWCBlowFishBlock::CBWCBlowFishBlock(const CBWCBlowFishBlock&)
constexpr uintptr_t CBWCBlowFishBlock__CBWCBlowFishBlockCtor__2 = 0x083082EC;
// public CBWCBlowFishBlock::~CBWCBlowFishBlock(void)
constexpr uintptr_t CBWCBlowFishBlock__CBWCBlowFishBlockDtor = 0x083082C4;
// void CBWCBlowFishBlock::__aer(CBWCBlowFishBlock&)
constexpr uintptr_t CBWCBlowFishBlock____aer = 0x08308304;

// public CBWCBlowFishState::CBWCBlowFishState(const CBWCBlowFishState&)
constexpr uintptr_t CBWCBlowFishState__CBWCBlowFishStateCtor__1 = 0x083078AC;
// public CBWCBlowFishState::CBWCBlowFishState(CBWCBlowFishBlock)
constexpr uintptr_t CBWCBlowFishState__CBWCBlowFishStateCtor__2 = 0x08307910;
// public CBWCBlowFishState::~CBWCBlowFishState(void)
constexpr uintptr_t CBWCBlowFishState__CBWCBlowFishStateDtor = 0x08307818;
// void CBWCBlowFishState::GetChain(void)
constexpr uintptr_t CBWCBlowFishState__GetChain = 0x0830836C;
// void CBWCBlowFishState::ResetChain(void)
constexpr uintptr_t CBWCBlowFishState__ResetChain = 0x08308354;
// void CBWCBlowFishState::SetChain(CBWCBlowFishBlock)
constexpr uintptr_t CBWCBlowFishState__SetChain = 0x0830831C;

// public CBWCMD5::CBWCMD5(void)
constexpr uintptr_t CBWCMD5__CBWCMD5Ctor = 0x08308EB4;
// public CBWCMD5::~CBWCMD5(void)
constexpr uintptr_t CBWCMD5__CBWCMD5Dtor = 0x08308ECC;
// public int32_t CBWCMD5::Decrypt(unsigned char*, uint32_t, unsigned char*, uint32_t&, unsigned char&)
constexpr uintptr_t CBWCMD5__Decrypt__0 = 0x08309028;
// public int32_t CBWCMD5::Decrypt(unsigned char*, uint32_t, uint32_t&, unsigned char&)
constexpr uintptr_t CBWCMD5__Decrypt__1 = 0x08309030;
// public int32_t CBWCMD5::Encrypt(unsigned char*, uint32_t, unsigned char*, uint32_t&, unsigned char&)
constexpr uintptr_t CBWCMD5__Encrypt__0 = 0x08308D64;
// public int32_t CBWCMD5::Encrypt(unsigned char*, uint32_t, uint32_t&, unsigned char&)
constexpr uintptr_t CBWCMD5__Encrypt__1 = 0x08309020;
// private void CBWCMD5::EncryptBlock(const uint32_t*)
constexpr uintptr_t CBWCMD5__EncryptBlock = 0x083086B8;
// private void CBWCMD5::EncryptFinalBlock(const uint32_t*, uint32_t)
constexpr uintptr_t CBWCMD5__EncryptFinalBlock = 0x08308F80;
// private uint32_t CBWCMD5::F(uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CBWCMD5__F = 0x08309090;
// private uint32_t CBWCMD5::G(uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CBWCMD5__G = 0x083090A4;
// public int32_t CBWCMD5::GetDecryptedSize(uint32_t, uint32_t&)
constexpr uintptr_t CBWCMD5__GetDecryptedSize = 0x0830904C;
// public int32_t CBWCMD5::GetEncryptedSize(uint32_t, uint32_t&)
constexpr uintptr_t CBWCMD5__GetEncryptedSize = 0x08309038;
// public int32_t CBWCMD5::GetState(void*)
constexpr uintptr_t CBWCMD5__GetState = 0x08308F68;
// public int32_t CBWCMD5::GetStateSize(uint32_t&)
constexpr uintptr_t CBWCMD5__GetStateSize = 0x08308F54;
// private uint32_t CBWCMD5::H(uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CBWCMD5__H = 0x083090B8;
// private uint32_t CBWCMD5::I(uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CBWCMD5__I = 0x083090C8;
// public void CBWCMD5::Reset(void)
constexpr uintptr_t CBWCMD5__Reset = 0x08308EF0;
// public int32_t CBWCMD5::SetKey(unsigned char*, uint32_t, unsigned char&)
constexpr uintptr_t CBWCMD5__SetKey = 0x08308F14;
// public int32_t CBWCMD5::SetState(void*, uint32_t)
constexpr uintptr_t CBWCMD5__SetState = 0x08308F30;

// public CCodeBase::CCodeBase(void)
constexpr uintptr_t CCodeBase__CCodeBaseCtor = 0x082D9A24;
// public CCodeBase::~CCodeBase(void)
constexpr uintptr_t CCodeBase__CCodeBaseDtor = 0x082D9A6C;
// public int32_t CCodeBase::AddBinaryData(CExoString&, CExoString&, CExoString&, char, void*, int32_t)
constexpr uintptr_t CCodeBase__AddBinaryData = 0x082D9C44;
// public int32_t CCodeBase::AddFloat(CExoString&, CExoString&, CExoString&, float)
constexpr uintptr_t CCodeBase__AddFloat = 0x082D9B90;
// public int32_t CCodeBase::AddInt(CExoString&, CExoString&, CExoString&, int32_t)
constexpr uintptr_t CCodeBase__AddInt = 0x082D9BB4;
// public int32_t CCodeBase::AddLocation(CExoString&, CExoString&, CExoString&, const CScriptLocation&)
constexpr uintptr_t CCodeBase__AddLocation = 0x082D9BFC;
// public int32_t CCodeBase::AddString(CExoString&, CExoString&, CExoString&, CExoString&)
constexpr uintptr_t CCodeBase__AddString = 0x082D9C20;
// public int32_t CCodeBase::AddVector(CExoString&, CExoString&, CExoString&, const Vector&)
constexpr uintptr_t CCodeBase__AddVector = 0x082D9BD8;
// void CCodeBase::CloseAllFiles(void)
constexpr uintptr_t CCodeBase__CloseAllFiles = 0x082D9CAC;
// public int32_t CCodeBase::DeleteVar(CExoString&, CExoString&, CExoString&)
constexpr uintptr_t CCodeBase__DeleteVar = 0x082D9C88;
// public void CCodeBase::DestroyDatabase(CExoString&)
constexpr uintptr_t CCodeBase__DestroyDatabase = 0x082D9CCC;
// public void* CCodeBase::GetBinaryData(CExoString&, CExoString&, CExoString&, char&, int32_t&)
constexpr uintptr_t CCodeBase__GetBinaryData = 0x082D9B60;
// public float CCodeBase::GetFloat(CExoString&, CExoString&, CExoString&)
constexpr uintptr_t CCodeBase__GetFloat = 0x082D9AAC;
// public int32_t CCodeBase::GetInt(CExoString&, CExoString&, CExoString&)
constexpr uintptr_t CCodeBase__GetInt = 0x082D9AD0;
// public CScriptLocation* CCodeBase::GetLocation(CExoString&, CExoString&, CExoString&)
constexpr uintptr_t CCodeBase__GetLocation = 0x082D9B18;
// public CExoString* CCodeBase::GetString(CExoString&, CExoString&, CExoString&)
constexpr uintptr_t CCodeBase__GetString = 0x082D9B3C;
// public Vector* CCodeBase::GetVector(CExoString&, CExoString&, CExoString&)
constexpr uintptr_t CCodeBase__GetVector = 0x082D9AF4;

// public CCodeBaseInternal::CCodeBaseInternal(void)
constexpr uintptr_t CCodeBaseInternal__CCodeBaseInternalCtor = 0x082DABA0;
// public CCodeBaseInternal::~CCodeBaseInternal(void)
constexpr uintptr_t CCodeBaseInternal__CCodeBaseInternalDtor = 0x082DAC30;
// public int32_t CCodeBaseInternal::AddBinaryData(CExoString&, CExoString&, CExoString&, char, void*, int32_t)
constexpr uintptr_t CCodeBaseInternal__AddBinaryData = 0x082DB040;
// public int32_t CCodeBaseInternal::AddFloat(CExoString&, CExoString&, CExoString&, float)
constexpr uintptr_t CCodeBaseInternal__AddFloat = 0x082DAE40;
// public int32_t CCodeBaseInternal::AddInt(CExoString&, CExoString&, CExoString&, int32_t)
constexpr uintptr_t CCodeBaseInternal__AddInt = 0x082DAEB4;
// public int32_t CCodeBaseInternal::AddLocation(CExoString&, CExoString&, CExoString&, const CScriptLocation&)
constexpr uintptr_t CCodeBaseInternal__AddLocation = 0x082D9F30;
// public int32_t CCodeBaseInternal::AddString(CExoString&, CExoString&, CExoString&, CExoString&)
constexpr uintptr_t CCodeBaseInternal__AddString = 0x082DAFBC;
// protected int32_t CCodeBaseInternal::AddVarEnd(SCodeBaseData*, int32_t)
constexpr uintptr_t CCodeBaseInternal__AddVarEnd = 0x082DB0B8;
// protected int32_t CCodeBaseInternal::AddVarStart(SCodeBaseData*, CExoString&, CExoString&, int32_t&)
constexpr uintptr_t CCodeBaseInternal__AddVarStart = 0x082DA944;
// public int32_t CCodeBaseInternal::AddVector(CExoString&, CExoString&, CExoString&, const Vector&)
constexpr uintptr_t CCodeBaseInternal__AddVector = 0x082DAF24;
// public void CCodeBaseInternal::CloseAllFiles(void)
constexpr uintptr_t CCodeBaseInternal__CloseAllFiles = 0x082DAC88;
// protected void CCodeBaseInternal::CloseFile(int32_t)
constexpr uintptr_t CCodeBaseInternal__CloseFile = 0x082DA664;
// public int32_t CCodeBaseInternal::DeleteVar(CExoString&, CExoString&, CExoString&)
constexpr uintptr_t CCodeBaseInternal__DeleteVar = 0x082DA000;
// public void CCodeBaseInternal::DestroyDatabase(CExoString&)
constexpr uintptr_t CCodeBaseInternal__DestroyDatabase = 0x082DA0C0;
// public void* CCodeBaseInternal::GetBinaryData(CExoString&, CExoString&, CExoString&, char&, int32_t&)
constexpr uintptr_t CCodeBaseInternal__GetBinaryData = 0x082DADA8;
// protected SCodeBaseData* CCodeBaseInternal::GetFile(CExoString&, int32_t)
constexpr uintptr_t CCodeBaseInternal__GetFile = 0x082DA57C;
// public float CCodeBaseInternal::GetFloat(CExoString&, CExoString&, CExoString&)
constexpr uintptr_t CCodeBaseInternal__GetFloat = 0x082DACB4;
// public int32_t CCodeBaseInternal::GetInt(CExoString&, CExoString&, CExoString&)
constexpr uintptr_t CCodeBaseInternal__GetInt = 0x082DAD30;
// public CScriptLocation* CCodeBaseInternal::GetLocation(CExoString&, CExoString&, CExoString&)
constexpr uintptr_t CCodeBaseInternal__GetLocation = 0x082D9D9C;
// public CExoString* CCodeBaseInternal::GetString(CExoString&, CExoString&, CExoString&)
constexpr uintptr_t CCodeBaseInternal__GetString = 0x082D9E74;
// void CCodeBaseInternal::GetVar(SCodeBaseData*, CExoString&, CExoString&)
constexpr uintptr_t CCodeBaseInternal__GetVar = 0x082DA6E0;
// public Vector* CCodeBaseInternal::GetVector(CExoString&, CExoString&, CExoString&)
constexpr uintptr_t CCodeBaseInternal__GetVector = 0x082D9CF0;
// protected int32_t CCodeBaseInternal::OpenFile(CExoString&, int32_t)
constexpr uintptr_t CCodeBaseInternal__OpenFile = 0x082DA22C;

// public CCombatInformation::CCombatInformation(void)
constexpr uintptr_t CCombatInformation__CCombatInformationCtor = 0x080C4E88;
// public CCombatInformation::~CCombatInformation(void)
constexpr uintptr_t CCombatInformation__CCombatInformationDtor = 0x080C4FC8;
// void CCombatInformation::__as(CCombatInformation&)
constexpr uintptr_t CCombatInformation____as = 0x080C5FA4;
// void CCombatInformation::__eq(CCombatInformation&)
constexpr uintptr_t CCombatInformation____eq = 0x080C5CF0;
// void CCombatInformation::__ne(CCombatInformation&)
constexpr uintptr_t CCombatInformation____ne = 0x080C5E10;
// public int32_t CCombatInformation::LoadData(CResGFF*, CResStruct*)
constexpr uintptr_t CCombatInformation__LoadData = 0x080C55C4;
// public int32_t CCombatInformation::SaveData(CResGFF*, CResStruct*)
constexpr uintptr_t CCombatInformation__SaveData = 0x080C50B0;

// public CCombatInformationNode::CCombatInformationNode(void)
constexpr uintptr_t CCombatInformationNode__CCombatInformationNodeCtor = 0x080CB51C;
// void CCombatInformationNode::__as(const CCombatInformationNode&)
constexpr uintptr_t CCombatInformationNode____as = 0x080CB5C8;
// void CCombatInformationNode::__eq(CCombatInformationNode&)
constexpr uintptr_t CCombatInformationNode____eq = 0x080CB540;
// void CCombatInformationNode::__ne(CCombatInformationNode&)
constexpr uintptr_t CCombatInformationNode____ne = 0x080CB584;

// public CConnectionLib::CConnectionLib(CBaseExoApp*)
constexpr uintptr_t CConnectionLib__CConnectionLibCtor__1 = 0x08271D24;
// public CConnectionLib::~CConnectionLib(void)
constexpr uintptr_t CConnectionLib__CConnectionLibDtor = 0x08271FB0;
// void CConnectionLib::AddServer(void*, char*, char*, int32_t, int32_t, int32_t, int32_t, char*, int32_t, int32_t, char*, int32_t, int32_t, int32_t, char*, char*, int32_t, int32_t, int32_t, int32_t, int32_t, bool)
constexpr uintptr_t CConnectionLib__AddServer = 0x08272A98;
// void CConnectionLib::ChatNameMangle(CExoString&)
constexpr uintptr_t CConnectionLib__ChatNameMangle = 0x08272D34;
// void CConnectionLib::ClearServers(void)
constexpr uintptr_t CConnectionLib__ClearServers = 0x08272B74;
// void CConnectionLib::ClientConnectToGameSpy(const CExoString&)
constexpr uintptr_t CConnectionLib__ClientConnectToGameSpy = 0x08271EF8;
// void CConnectionLib::ErrorClientShuttingDown(unsigned char)
constexpr uintptr_t CConnectionLib__ErrorClientShuttingDown = 0x08272924;
// public CExoString CConnectionLib::GenerateCommunityNameResponse(const CExoString&, const CExoString&)
constexpr uintptr_t CConnectionLib__GenerateCommunityNameResponse = 0x082726C0;
// void CConnectionLib::GenerateResponse(const CExoString&, const CExoString&, CExoString&, CExoString&)
constexpr uintptr_t CConnectionLib__GenerateResponse = 0x082721A0;
// void CConnectionLib::GetAvailability(void)
constexpr uintptr_t CConnectionLib__GetAvailability = 0x0827283C;
// void CConnectionLib::GetAvailabilityStatus(void)
constexpr uintptr_t CConnectionLib__GetAvailabilityStatus = 0x0827282C;
// void CConnectionLib::GetClientConnectionPhase(void)
constexpr uintptr_t CConnectionLib__GetClientConnectionPhase = 0x08272918;
// void CConnectionLib::GetClientError(void)
constexpr uintptr_t CConnectionLib__GetClientError = 0x0827293C;
// public uint16_t CConnectionLib::GetCommunityNameStatus(const CExoString&, unsigned char**)
constexpr uintptr_t CConnectionLib__GetCommunityNameStatus = 0x082726AC;
// void CConnectionLib::GetDigiDistModuleCipher(CExoString&, int32_t)
constexpr uintptr_t CConnectionLib__GetDigiDistModuleCipher = 0x08272860;
// void CConnectionLib::GetGameFilters(CExoString*)
constexpr uintptr_t CConnectionLib__GetGameFilters = 0x08272CCC;
// void CConnectionLib::GetGameTypeFromGroupId(int32_t)
constexpr uintptr_t CConnectionLib__GetGameTypeFromGroupId = 0x08272C54;
// public int32_t CConnectionLib::GetGroupIdFromGameType(int32_t)
constexpr uintptr_t CConnectionLib__GetGroupIdFromGameType = 0x08272C9C;
// void CConnectionLib::GetGSClientGameRegion(void)
constexpr uintptr_t CConnectionLib__GetGSClientGameRegion = 0x08272A80;
// public CExoString CConnectionLib::GetKeyAuthDemand(CExoString&)
constexpr uintptr_t CConnectionLib__GetKeyAuthDemand = 0x08272634;
// public CExoString CConnectionLib::GetKeyCollision(void)
constexpr uintptr_t CConnectionLib__GetKeyCollision = 0x08272658;
// public uint32_t CConnectionLib::GetKeyRejectionReason(uint16_t)
constexpr uintptr_t CConnectionLib__GetKeyRejectionReason = 0x08272690;
// public uint16_t CConnectionLib::GetKeyStatus(const CExoString&, uint16_t&)
constexpr uintptr_t CConnectionLib__GetKeyStatus = 0x0827267C;
// public CExoString CConnectionLib::GetMasterServerInternetName(void)
constexpr uintptr_t CConnectionLib__GetMasterServerInternetName = 0x08272208;
// public uint32_t CConnectionLib::GetMasterServerPort(void)
constexpr uintptr_t CConnectionLib__GetMasterServerPort = 0x0827222C;
// public uint16_t CConnectionLib::GetMasterServerStatus(void)
constexpr uintptr_t CConnectionLib__GetMasterServerStatus = 0x08272778;
// void CConnectionLib::GetMessageOfTheDay(void)
constexpr uintptr_t CConnectionLib__GetMessageOfTheDay = 0x082726E8;
// public uint32_t CConnectionLib::GetMessagesIn(void)
constexpr uintptr_t CConnectionLib__GetMessagesIn = 0x08272610;
// public int32_t CConnectionLib::GetNetConnectionUp(void)
constexpr uintptr_t CConnectionLib__GetNetConnectionUp = 0x08272044;
// public CNetLayer* CConnectionLib::GetNetLayer(void)
constexpr uintptr_t CConnectionLib__GetNetLayer = 0x08272524;
// void CConnectionLib::GetNextBuddyEntry(void)
constexpr uintptr_t CConnectionLib__GetNextBuddyEntry = 0x08272818;
// public CExoString CConnectionLib::GetPublicPartFromCDKey(const CExoString&)
constexpr uintptr_t CConnectionLib__GetPublicPartFromCDKey = 0x082721C8;
// public uint32_t CConnectionLib::GetStrrefFromGameType(int32_t)
constexpr uintptr_t CConnectionLib__GetStrrefFromGameType = 0x08272C24;
// void CConnectionLib::GetStrrefFromGroupId(int32_t)
constexpr uintptr_t CConnectionLib__GetStrrefFromGroupId = 0x08272BD4;
// void CConnectionLib::GetVersion(void)
constexpr uintptr_t CConnectionLib__GetVersion = 0x08272788;
// void CConnectionLib::GetVersionNumber(void)
constexpr uintptr_t CConnectionLib__GetVersionNumber = 0x0827253C;
// void CConnectionLib::GSClientGetBuildFilter(void)
constexpr uintptr_t CConnectionLib__GSClientGetBuildFilter = 0x08272A50;
// void CConnectionLib::GSClientGetGroupRoomNumber(void)
constexpr uintptr_t CConnectionLib__GSClientGetGroupRoomNumber = 0x08272A10;
// void CConnectionLib::GSClientGroupRoomAdded(int32_t, uint32_t)
constexpr uintptr_t CConnectionLib__GSClientGroupRoomAdded = 0x08272948;
// void CConnectionLib::GSClientJoinGroupRoom(int32_t)
constexpr uintptr_t CConnectionLib__GSClientJoinGroupRoom = 0x082729F0;
// void CConnectionLib::GSClientMessage(int32_t, const CExoString&, const CExoString&)
constexpr uintptr_t CConnectionLib__GSClientMessage = 0x082729AC;
// void CConnectionLib::GSClientRoomPlayerChange(int32_t, const CExoString&, const CExoString&)
constexpr uintptr_t CConnectionLib__GSClientRoomPlayerChange = 0x08272968;
// void CConnectionLib::GSClientSetBuildFilter(const CExoString&)
constexpr uintptr_t CConnectionLib__GSClientSetBuildFilter = 0x08272A2C;
// public void CConnectionLib::HandleGameSpyToServerMessage(int32_t, void*, int32_t)
constexpr uintptr_t CConnectionLib__HandleGameSpyToServerMessage = 0x08272154;
// public int32_t CConnectionLib::HandleMasterServerToGameMessage(unsigned char*, uint32_t)
constexpr uintptr_t CConnectionLib__HandleMasterServerToGameMessage = 0x082725F0;
// public int32_t CConnectionLib::HandleServerGameSpyMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CConnectionLib__HandleServerGameSpyMessage = 0x08272130;
// public void CConnectionLib::InitializeGameSpyRooms(void)
constexpr uintptr_t CConnectionLib__InitializeGameSpyRooms = 0x08271E04;
// void CConnectionLib::NewClientChallenge(uint32_t)
constexpr uintptr_t CConnectionLib__NewClientChallenge = 0x0827218C;
// void CConnectionLib::RemoveServer(void*)
constexpr uintptr_t CConnectionLib__RemoveServer = 0x08272AF8;
// public void CConnectionLib::ResetMessagesInFlag(uint32_t)
constexpr uintptr_t CConnectionLib__ResetMessagesInFlag = 0x08272620;
// void CConnectionLib::SendAddBuddyRequest(const CExoString&, const CExoString&)
constexpr uintptr_t CConnectionLib__SendAddBuddyRequest = 0x0827247C;
// void CConnectionLib::SendClientToMasterCreateAccountPartOne(const CExoString&)
constexpr uintptr_t CConnectionLib__SendClientToMasterCreateAccountPartOne = 0x082723DC;
// void CConnectionLib::SendClientToMasterCreateAccountPartTwo(const CExoString&, const CExoString&, const CExoString&, unsigned char*, const CExoString&)
constexpr uintptr_t CConnectionLib__SendClientToMasterCreateAccountPartTwo = 0x082723FC;
// void CConnectionLib::SendClientToMasterMOTDRequest(uint16_t)
constexpr uintptr_t CConnectionLib__SendClientToMasterMOTDRequest = 0x0827242C;
// void CConnectionLib::SendClientToMasterVersionRequest(uint16_t)
constexpr uintptr_t CConnectionLib__SendClientToMasterVersionRequest = 0x08272454;
// void CConnectionLib::SendDigiDistAuthRequest(CExoArrayListTemplatedCExoString*, const CExoString&)
constexpr uintptr_t CConnectionLib__SendDigiDistAuthRequest = 0x0827284C;
// public int32_t CConnectionLib::SendGameToMasterAuthorizationRequest(uint32_t, int32_t)
constexpr uintptr_t CConnectionLib__SendGameToMasterAuthorizationRequest__0 = 0x08272240;
// public int32_t CConnectionLib::SendGameToMasterAuthorizationRequest(void*, int32_t)
constexpr uintptr_t CConnectionLib__SendGameToMasterAuthorizationRequest__1 = 0x08272260;
// public int32_t CConnectionLib::SendGameToMasterCommunityNameAuth(const CExoString&, const CExoString&, const CExoString&, uint16_t, unsigned char)
constexpr uintptr_t CConnectionLib__SendGameToMasterCommunityNameAuth = 0x08272398;
// public int32_t CConnectionLib::SendGameToMasterDisconnect(uint32_t)
constexpr uintptr_t CConnectionLib__SendGameToMasterDisconnect__0 = 0x082722A0;
// public int32_t CConnectionLib::SendGameToMasterDisconnect(void*, int32_t)
constexpr uintptr_t CConnectionLib__SendGameToMasterDisconnect__1 = 0x082722C0;
// public int32_t CConnectionLib::SendGameToMasterHeartbeat(void*, int32_t)
constexpr uintptr_t CConnectionLib__SendGameToMasterHeartbeat = 0x08272280;
// public int32_t CConnectionLib::SendGameToMasterModule(unsigned char, const CExoString&)
constexpr uintptr_t CConnectionLib__SendGameToMasterModule = 0x08272370;
// public int32_t CConnectionLib::SendGameToMasterShutDown(void)
constexpr uintptr_t CConnectionLib__SendGameToMasterShutDown = 0x08272350;
// public int32_t CConnectionLib::SendGameToMasterStartup(unsigned char, uint32_t, int32_t, unsigned char, unsigned char)
constexpr uintptr_t CConnectionLib__SendGameToMasterStartup = 0x08272300;
// public int32_t CConnectionLib::SendGameToMasterStatusRequest(void)
constexpr uintptr_t CConnectionLib__SendGameToMasterStatusRequest = 0x082722E0;
// void CConnectionLib::SendGetAvailabilityRequest(const CExoString&)
constexpr uintptr_t CConnectionLib__SendGetAvailabilityRequest = 0x08272504;
// void CConnectionLib::SendGetBuddyListRequest(const CExoString&)
constexpr uintptr_t CConnectionLib__SendGetBuddyListRequest = 0x082724BC;
// void CConnectionLib::SendMessageToNick(const char*, const char*)
constexpr uintptr_t CConnectionLib__SendMessageToNick = 0x08272BB0;
// void CConnectionLib::SendMessageToRoom(const char*)
constexpr uintptr_t CConnectionLib__SendMessageToRoom = 0x08272B8C;
// void CConnectionLib::SendRemoveBuddyRequest(const CExoString&, const CExoString&)
constexpr uintptr_t CConnectionLib__SendRemoveBuddyRequest = 0x0827249C;
// void CConnectionLib::SendSetAvailabilityRequest(const CExoString&, uint16_t)
constexpr uintptr_t CConnectionLib__SendSetAvailabilityRequest = 0x082724DC;
// public int32_t CConnectionLib::ServerConnectToGameSpy(uint32_t)
constexpr uintptr_t CConnectionLib__ServerConnectToGameSpy = 0x08272050;
// void CConnectionLib::SetGameFilters(uint32_t, CExoString*)
constexpr uintptr_t CConnectionLib__SetGameFilters = 0x08272CF4;
// void CConnectionLib::SetGSClientGameRegion(int32_t)
constexpr uintptr_t CConnectionLib__SetGSClientGameRegion = 0x08272A68;
// public void CConnectionLib::SetLanguage(int32_t)
constexpr uintptr_t CConnectionLib__SetLanguage = 0x08272010;
// public void CConnectionLib::SetNetConnectionUp(int32_t)
constexpr uintptr_t CConnectionLib__SetNetConnectionUp = 0x08272034;
// void CConnectionLib::ShutDownClientGameSpyConnection(void)
constexpr uintptr_t CConnectionLib__ShutDownClientGameSpyConnection = 0x08272874;
// public void CConnectionLib::ShutDownServerGameSpyConnection(void)
constexpr uintptr_t CConnectionLib__ShutDownServerGameSpyConnection = 0x082720E4;
// public void CConnectionLib::StartMstHeartbeatTimer(uint64_t)
constexpr uintptr_t CConnectionLib__StartMstHeartbeatTimer = 0x08272560;
// public void CConnectionLib::StartSystemUpdateTimer(uint64_t)
constexpr uintptr_t CConnectionLib__StartSystemUpdateTimer = 0x08272588;
// public void CConnectionLib::StartTimeOutTimer(uint64_t)
constexpr uintptr_t CConnectionLib__StartTimeOutTimer = 0x082725B0;
// public int32_t CConnectionLib::TimeOutTimerRunning(void)
constexpr uintptr_t CConnectionLib__TimeOutTimerRunning = 0x082725D8;
// void CConnectionLib::UpdateConnectionPhase(unsigned char, const CExoString&)
constexpr uintptr_t CConnectionLib__UpdateConnectionPhase = 0x082728E8;
// void CConnectionLib::UpdateGameSpyClient(void)
constexpr uintptr_t CConnectionLib__UpdateGameSpyClient = 0x082728A0;
// public void CConnectionLib::UpdateGameSpyServer(void)
constexpr uintptr_t CConnectionLib__UpdateGameSpyServer = 0x08272110;
// public int32_t CConnectionLib::UpdateMstHeartbeatTimer(uint64_t)
constexpr uintptr_t CConnectionLib__UpdateMstHeartbeatTimer = 0x08272574;
// void CConnectionLib::UpdateServer(void*, char*, char*, int32_t, int32_t, int32_t, int32_t, char*, int32_t, int32_t, char*, int32_t, int32_t, int32_t, char*, char*, int32_t, int32_t, int32_t, int32_t, int32_t, bool)
constexpr uintptr_t CConnectionLib__UpdateServer = 0x08272B14;
// public int32_t CConnectionLib::UpdateSystemUpdateTimer(uint64_t)
constexpr uintptr_t CConnectionLib__UpdateSystemUpdateTimer = 0x0827259C;
// public int32_t CConnectionLib::UpdateTimeOutTimer(uint64_t)
constexpr uintptr_t CConnectionLib__UpdateTimeOutTimer = 0x082725C4;
// void CConnectionLib::ValidateCdKey(char*)
constexpr uintptr_t CConnectionLib__ValidateCdKey = 0x08272178;

// void CDUtil::CalculateCRC(char*, int32_t, char*, int32_t, char*, int32_t)
constexpr uintptr_t CDUtil__CalculateCRC = 0x08299168;
// void CDUtil::CreateChallengeString(uint32_t)
constexpr uintptr_t CDUtil__CreateChallengeString = 0x08293F04;
// void CDUtil::DecodeBase(char*, int32_t)
constexpr uintptr_t CDUtil__DecodeBase = 0x082992E8;
// void CDUtil::EncodeBase(uint64_t, char*, int32_t)
constexpr uintptr_t CDUtil__EncodeBase = 0x0829925C;
// void CDUtil::GenerateResponse(const CExoString&, const CExoString&, CExoString&, CExoString&)
constexpr uintptr_t CDUtil__GenerateResponse = 0x08293FC8;
// void CDUtil::Initialize(void)
constexpr uintptr_t CDUtil__Initialize = 0x082940A0;
// void CDUtil::InitializeBaseConvert(void)
constexpr uintptr_t CDUtil__InitializeBaseConvert = 0x08299208;
// void CDUtil::InitializeCrc(void)
constexpr uintptr_t CDUtil__InitializeCrc = 0x0829912C;
// void CDUtil::ScrambleKey(char*, const char*, const char*, const char*, int32_t)
constexpr uintptr_t CDUtil__ScrambleKey = 0x08298ED8;
// void CDUtil::UnScrambleKey(const char*, char*, char*, char*)
constexpr uintptr_t CDUtil__UnScrambleKey = 0x08298FA8;
// void CDUtil::ValidateKey(char*)
constexpr uintptr_t CDUtil__ValidateKey = 0x08299074;

// public CERFFile::CERFFile(void)
constexpr uintptr_t CERFFile__CERFFileCtor = 0x082B647C;
// public CERFFile::~CERFFile(void)
constexpr uintptr_t CERFFile__CERFFileDtor = 0x082B7AF8;
// void CERFFile::AddResource(char*, uint16_t, CRes*)
constexpr uintptr_t CERFFile__AddResource__0 = 0x082B65F4;
// void CERFFile::AddResource(CExoString&)
constexpr uintptr_t CERFFile__AddResource__1 = 0x082B7B74;
// public int32_t CERFFile::AddString(CERFString*)
constexpr uintptr_t CERFFile__AddString = 0x082B6844;
// public int32_t CERFFile::Create(CExoString&)
constexpr uintptr_t CERFFile__Create = 0x082B7B8C;
// public int32_t CERFFile::Finish(void)
constexpr uintptr_t CERFFile__Finish = 0x082B7CAC;
// void CERFFile::Read(void)
constexpr uintptr_t CERFFile__Read = 0x082B7B84;
// void CERFFile::ReadModuleDescription(const CExoString&, uint16_t, uint32_t*, CExoString*)
constexpr uintptr_t CERFFile__ReadModuleDescription = 0x082B7280;
// void CERFFile::RecalculateOffsets(void)
constexpr uintptr_t CERFFile__RecalculateOffsets = 0x082B71D8;
// void CERFFile::RemoveResource(CExoString&, uint16_t)
constexpr uintptr_t CERFFile__RemoveResource__0 = 0x082B6704;
// void CERFFile::RemoveResource(CERFRes*)
constexpr uintptr_t CERFFile__RemoveResource__1 = 0x082B7B7C;
// public int32_t CERFFile::Reset(void)
constexpr uintptr_t CERFFile__Reset = 0x082B652C;
// public int32_t CERFFile::SetNumEntries(uint32_t)
constexpr uintptr_t CERFFile__SetNumEntries = 0x082B6A54;
// public void CERFFile::SetVersion(char*)
constexpr uintptr_t CERFFile__SetVersion = 0x082B7B5C;
// void CERFFile::Write(CExoString&)
constexpr uintptr_t CERFFile__Write = 0x082B6EE8;
// public int32_t CERFFile::WriteHeader(void)
constexpr uintptr_t CERFFile__WriteHeader = 0x082B7C44;
// public int32_t CERFFile::WriteResource(char*, uint16_t, CRes*, int32_t)
constexpr uintptr_t CERFFile__WriteResource = 0x082B6BF8;
// public int32_t CERFFile::WriteStringTable(void)
constexpr uintptr_t CERFFile__WriteStringTable = 0x082B68FC;

// CERFKey::CERFKey(void)
constexpr uintptr_t CERFKey__CERFKeyCtor = 0x082B7CF8;
// CERFKey::~CERFKey(void)
constexpr uintptr_t CERFKey__CERFKeyDtor = 0x082B7D24;
// void CERFKey::Read(void)
constexpr uintptr_t CERFKey__Read = 0x082B7DC4;
// void CERFKey::Reset(void)
constexpr uintptr_t CERFKey__Reset = 0x082B7D58;
// void CERFKey::SetName(CExoString&)
constexpr uintptr_t CERFKey__SetName = 0x082B7D80;
// void CERFKey::Write(CExoFile&)
constexpr uintptr_t CERFKey__Write = 0x082B7DCC;

// CERFRes::CERFRes(void)
constexpr uintptr_t CERFRes__CERFResCtor = 0x082B7E20;
// public CERFRes::~CERFRes(void)
constexpr uintptr_t CERFRes__CERFResDtor = 0x082B7E3C;
// void CERFRes::Read(void)
constexpr uintptr_t CERFRes__Read = 0x082B7EAC;
// void CERFRes::Reset(void)
constexpr uintptr_t CERFRes__Reset = 0x082B7E70;
// void CERFRes::Write(CExoFile&, uint32_t)
constexpr uintptr_t CERFRes__Write = 0x082B7EB4;

// public CERFString::CERFString(void)
constexpr uintptr_t CERFString__CERFStringCtor = 0x082B7F1C;
// CERFString::~CERFString(void)
constexpr uintptr_t CERFString__CERFStringDtor = 0x082B7F38;
// public CExoString CERFString::GetText(void)
constexpr uintptr_t CERFString__GetText = 0x082B7FA8;
// void CERFString::Read(void)
constexpr uintptr_t CERFString__Read = 0x082B8038;
// void CERFString::Reset(void)
constexpr uintptr_t CERFString__Reset = 0x082B7F6C;
// public void CERFString::SetText(CExoString&)
constexpr uintptr_t CERFString__SetText = 0x082B7FD0;
// void CERFString::Write(CExoFile&)
constexpr uintptr_t CERFString__Write = 0x082B8040;

// public CExoAliasList::CExoAliasList(void)
constexpr uintptr_t CExoAliasList__CExoAliasListCtor = 0x082C92DC;
// public CExoAliasList::~CExoAliasList(void)
constexpr uintptr_t CExoAliasList__CExoAliasListDtor = 0x082C9324;
// public void CExoAliasList::Add(CExoString, CExoString)
constexpr uintptr_t CExoAliasList__Add = 0x082C9364;
// void CExoAliasList::Clear(void)
constexpr uintptr_t CExoAliasList__Clear = 0x082C940C;
// public void CExoAliasList::Delete(CExoString)
constexpr uintptr_t CExoAliasList__Delete = 0x082C9420;
// public const CExoString& CExoAliasList::GetAliasPath(const CExoString&, int32_t) const
constexpr uintptr_t CExoAliasList__GetAliasPath = 0x082C9484;
// public CExoString CExoAliasList::ResolveFileName(const CExoString&, uint16_t) const
constexpr uintptr_t CExoAliasList__ResolveFileName = 0x082C9498;

// public CExoAliasListInternal::CExoAliasListInternal(void)
constexpr uintptr_t CExoAliasListInternal__CExoAliasListInternalCtor = 0x082D06CC;
// public CExoAliasListInternal::~CExoAliasListInternal(void)
constexpr uintptr_t CExoAliasListInternal__CExoAliasListInternalDtor = 0x082D0720;
// public void CExoAliasListInternal::Add(CExoString, CExoString)
constexpr uintptr_t CExoAliasListInternal__Add = 0x082CFE54;
// void CExoAliasListInternal::Clear(void)
constexpr uintptr_t CExoAliasListInternal__Clear = 0x082D079C;
// public void CExoAliasListInternal::Delete(CExoString)
constexpr uintptr_t CExoAliasListInternal__Delete = 0x082D00F0;
// public const CExoString& CExoAliasListInternal::GetAliasPath(const CExoString&, int32_t) const
constexpr uintptr_t CExoAliasListInternal__GetAliasPath = 0x082D07F0;
// public CExoString CExoAliasListInternal::ResolveFileName(const CExoString&, uint16_t) const
constexpr uintptr_t CExoAliasListInternal__ResolveFileName = 0x082D0260;

// CExoArrayListTemplatedCCombatInformationNodePtr::CExoArrayListTemplatedCCombatInformationNodePtr(void)
constexpr uintptr_t CExoArrayListTemplatedCCombatInformationNodePtr__CExoArrayListTemplatedCCombatInformationNodePtrCtor__0 = 0x080CBC2C;
// CExoArrayListTemplatedCCombatInformationNodePtr::CExoArrayListTemplatedCCombatInformationNodePtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCCombatInformationNodePtr__CExoArrayListTemplatedCCombatInformationNodePtrCtor__1 = 0x080CBBF8;
// void CExoArrayListTemplatedCCombatInformationNodePtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCCombatInformationNodePtr____vc = 0x08083438;
// void CExoArrayListTemplatedCCombatInformationNodePtr::Add(CCombatInformationNode*)
constexpr uintptr_t CExoArrayListTemplatedCCombatInformationNodePtr__Add = 0x080CBBB8;
// void CExoArrayListTemplatedCCombatInformationNodePtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCCombatInformationNodePtr__Allocate = 0x080CBCDC;
// void CExoArrayListTemplatedCCombatInformationNodePtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCCombatInformationNodePtr__DelIndex = 0x080CBC64;
// void CExoArrayListTemplatedCCombatInformationNodePtr::SetSize(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCCombatInformationNodePtr__SetSize = 0x080CBC94;

// CExoArrayListTemplatedCEffectIconObjectPtr::CExoArrayListTemplatedCEffectIconObjectPtr(void)
constexpr uintptr_t CExoArrayListTemplatedCEffectIconObjectPtr__CExoArrayListTemplatedCEffectIconObjectPtrCtor__0 = 0x08094814;
// CExoArrayListTemplatedCEffectIconObjectPtr::CExoArrayListTemplatedCEffectIconObjectPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCEffectIconObjectPtr__CExoArrayListTemplatedCEffectIconObjectPtrCtor__1 = 0x080947E0;
// void CExoArrayListTemplatedCEffectIconObjectPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCEffectIconObjectPtr____vc = 0x08083428;
// void CExoArrayListTemplatedCEffectIconObjectPtr::Add(CEffectIconObject*)
constexpr uintptr_t CExoArrayListTemplatedCEffectIconObjectPtr__Add = 0x08083520;
// void CExoArrayListTemplatedCEffectIconObjectPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCEffectIconObjectPtr__Allocate = 0x08083BB8;
// void CExoArrayListTemplatedCEffectIconObjectPtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCEffectIconObjectPtr__DelIndex = 0x080834F0;
// public void CExoArrayListTemplatedCEffectIconObjectPtr::SetSize(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCEffectIconObjectPtr__SetSize = 0x081E4B14;

// CExoArrayListTemplatedCExoString::CExoArrayListTemplatedCExoString(void)
constexpr uintptr_t CExoArrayListTemplatedCExoString__CExoArrayListTemplatedCExoStringCtor__0 = 0x08050F60;
// CExoArrayListTemplatedCExoString::CExoArrayListTemplatedCExoString(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCExoString__CExoArrayListTemplatedCExoStringCtor__1 = 0x08050F2C;
// void CExoArrayListTemplatedCExoString::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCExoString____vc__0 = 0x08050FC4;
// public void CExoArrayListTemplatedCExoString::Add(CExoString)
constexpr uintptr_t CExoArrayListTemplatedCExoString__Add = 0x080512CC;
// public int32_t CExoArrayListTemplatedCExoString::AddUnique(CExoString)
constexpr uintptr_t CExoArrayListTemplatedCExoString__AddUnique = 0x08050FF4;
// public void CExoArrayListTemplatedCExoString::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCExoString__Allocate = 0x080510B0;
// public int32_t CExoArrayListTemplatedCExoString::Contains(CExoString)
constexpr uintptr_t CExoArrayListTemplatedCExoString__Contains = 0x08051248;
// void CExoArrayListTemplatedCExoString::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCExoString__DelIndex = 0x080B18B0;
// public void CExoArrayListTemplatedCExoString::Insert(CExoString, int32_t)
constexpr uintptr_t CExoArrayListTemplatedCExoString__Insert = 0x082CEB9C;
// public void CExoArrayListTemplatedCExoString::Remove(CExoString)
constexpr uintptr_t CExoArrayListTemplatedCExoString__Remove = 0x080B17C8;
// void CExoArrayListTemplatedCExoString::SetSize(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCExoString__SetSize = 0x08061CB0;

// CExoArrayListTemplatedCExoStringPtr::CExoArrayListTemplatedCExoStringPtr(void)
constexpr uintptr_t CExoArrayListTemplatedCExoStringPtr__CExoArrayListTemplatedCExoStringPtrCtor__0 = 0x081D64F0;
// CExoArrayListTemplatedCExoStringPtr::CExoArrayListTemplatedCExoStringPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCExoStringPtr__CExoArrayListTemplatedCExoStringPtrCtor__1 = 0x081D64BC;
// CExoArrayListTemplatedCExoStringPtr::CExoArrayListTemplatedCExoStringPtr(const CExoArrayListTemplatedCExoStringPtr&)
constexpr uintptr_t CExoArrayListTemplatedCExoStringPtr__CExoArrayListTemplatedCExoStringPtrCtor__2 = 0x08236D04;
// void CExoArrayListTemplatedCExoStringPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCExoStringPtr____vc__0 = 0x081139A0;
// void CExoArrayListTemplatedCExoStringPtr::Add(CExoString*)
constexpr uintptr_t CExoArrayListTemplatedCExoStringPtr__Add = 0x081D6690;
// void CExoArrayListTemplatedCExoStringPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCExoStringPtr__Allocate = 0x081D676C;
// void CExoArrayListTemplatedCExoStringPtr::SetSize(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCExoStringPtr__SetSize = 0x081D66D0;

// CExoArrayListTemplatedCFeatUseListEntryPtr::CExoArrayListTemplatedCFeatUseListEntryPtr(void)
constexpr uintptr_t CExoArrayListTemplatedCFeatUseListEntryPtr__CExoArrayListTemplatedCFeatUseListEntryPtrCtor__0 = 0x08165910;
// CExoArrayListTemplatedCFeatUseListEntryPtr::CExoArrayListTemplatedCFeatUseListEntryPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCFeatUseListEntryPtr__CExoArrayListTemplatedCFeatUseListEntryPtrCtor__1 = 0x081658DC;
// void CExoArrayListTemplatedCFeatUseListEntryPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCFeatUseListEntryPtr____vc = 0x08082DB8;
// void CExoArrayListTemplatedCFeatUseListEntryPtr::Add(CFeatUseListEntry*)
constexpr uintptr_t CExoArrayListTemplatedCFeatUseListEntryPtr__Add = 0x080832D0;
// void CExoArrayListTemplatedCFeatUseListEntryPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCFeatUseListEntryPtr__Allocate = 0x08083A04;
// void CExoArrayListTemplatedCFeatUseListEntryPtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCFeatUseListEntryPtr__DelIndex = 0x080832A0;

// CExoArrayListTemplatedCFileInfo::CExoArrayListTemplatedCFileInfo(void)
constexpr uintptr_t CExoArrayListTemplatedCFileInfo__CExoArrayListTemplatedCFileInfoCtor__0 = 0x081E86F0;
// CExoArrayListTemplatedCFileInfo::CExoArrayListTemplatedCFileInfo(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCFileInfo__CExoArrayListTemplatedCFileInfoCtor__1 = 0x081E86BC;
// void CExoArrayListTemplatedCFileInfo::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCFileInfo____vc = 0x081E8758;
// public void CExoArrayListTemplatedCFileInfo::Add(CFileInfo)
constexpr uintptr_t CExoArrayListTemplatedCFileInfo__Add = 0x082CEAE0;
// void CExoArrayListTemplatedCFileInfo::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCFileInfo__Allocate = 0x081E876C;
// public void CExoArrayListTemplatedCFileInfo::Insert(CFileInfo, int32_t)
constexpr uintptr_t CExoArrayListTemplatedCFileInfo__Insert = 0x082CE994;

// CExoArrayListTemplatedCGameEffectPtr::CExoArrayListTemplatedCGameEffectPtr(void)
constexpr uintptr_t CExoArrayListTemplatedCGameEffectPtr__CExoArrayListTemplatedCGameEffectPtrCtor__0 = 0x080E55D8;
// CExoArrayListTemplatedCGameEffectPtr::CExoArrayListTemplatedCGameEffectPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCGameEffectPtr__CExoArrayListTemplatedCGameEffectPtrCtor__1 = 0x080E55A4;
// CExoArrayListTemplatedCGameEffectPtr::CExoArrayListTemplatedCGameEffectPtr(const CExoArrayListTemplatedCGameEffectPtr&)
constexpr uintptr_t CExoArrayListTemplatedCGameEffectPtr__CExoArrayListTemplatedCGameEffectPtrCtor__2 = 0x0813F0B0;
// void CExoArrayListTemplatedCGameEffectPtr::__as(const CExoArrayListTemplatedCGameEffectPtr&)
constexpr uintptr_t CExoArrayListTemplatedCGameEffectPtr____as = 0x08165A6C;
// void CExoArrayListTemplatedCGameEffectPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCGameEffectPtr____vc__0 = 0x0805F234;
// void CExoArrayListTemplatedCGameEffectPtr::Add(CGameEffect*)
constexpr uintptr_t CExoArrayListTemplatedCGameEffectPtr__Add = 0x08061028;
// void CExoArrayListTemplatedCGameEffectPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCGameEffectPtr__Allocate = 0x08061068;
// void CExoArrayListTemplatedCGameEffectPtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCGameEffectPtr__DelIndex = 0x08060E38;
// void CExoArrayListTemplatedCGameEffectPtr::IndexOf(CGameEffect*)
constexpr uintptr_t CExoArrayListTemplatedCGameEffectPtr__IndexOf = 0x081D6624;
// void CExoArrayListTemplatedCGameEffectPtr::Insert(CGameEffect*, int32_t)
constexpr uintptr_t CExoArrayListTemplatedCGameEffectPtr__Insert = 0x081D65D8;
// void CExoArrayListTemplatedCGameEffectPtr::SetSize(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCGameEffectPtr__SetSize = 0x081D6538;

// CExoArrayListTemplatedCGameObjectPtr::CExoArrayListTemplatedCGameObjectPtr(void)
constexpr uintptr_t CExoArrayListTemplatedCGameObjectPtr__CExoArrayListTemplatedCGameObjectPtrCtor__0 = 0x080BD1E0;
// CExoArrayListTemplatedCGameObjectPtr::CExoArrayListTemplatedCGameObjectPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCGameObjectPtr__CExoArrayListTemplatedCGameObjectPtrCtor__1 = 0x080BD1AC;
// void CExoArrayListTemplatedCGameObjectPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCGameObjectPtr____vc = 0x080D5E38;
// void CExoArrayListTemplatedCGameObjectPtr::Add(CGameObject*)
constexpr uintptr_t CExoArrayListTemplatedCGameObjectPtr__Add = 0x080D5C68;
// void CExoArrayListTemplatedCGameObjectPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCGameObjectPtr__Allocate = 0x080BD218;

// CExoArrayListTemplatedchar::CExoArrayListTemplatedchar(void)
constexpr uintptr_t CExoArrayListTemplatedchar__CExoArrayListTemplatedcharCtor__0 = 0x080830E8;
// CExoArrayListTemplatedchar::CExoArrayListTemplatedchar(int32_t)
constexpr uintptr_t CExoArrayListTemplatedchar__CExoArrayListTemplatedcharCtor__1 = 0x080830B4;
// void CExoArrayListTemplatedchar::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedchar____vc = 0x08083164;
// void CExoArrayListTemplatedchar::Add(char)
constexpr uintptr_t CExoArrayListTemplatedchar__Add = 0x08083120;
// void CExoArrayListTemplatedchar::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedchar__Allocate = 0x08083964;

// CExoArrayListTemplatedCLoopingVisualEffectPtr::CExoArrayListTemplatedCLoopingVisualEffectPtr(void)
constexpr uintptr_t CExoArrayListTemplatedCLoopingVisualEffectPtr__CExoArrayListTemplatedCLoopingVisualEffectPtrCtor__0 = 0x081D6418;
// CExoArrayListTemplatedCLoopingVisualEffectPtr::CExoArrayListTemplatedCLoopingVisualEffectPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCLoopingVisualEffectPtr__CExoArrayListTemplatedCLoopingVisualEffectPtrCtor__1 = 0x081D63E4;
// void CExoArrayListTemplatedCLoopingVisualEffectPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCLoopingVisualEffectPtr____vc = 0x0813F0A0;
// void CExoArrayListTemplatedCLoopingVisualEffectPtr::Add(CLoopingVisualEffect*)
constexpr uintptr_t CExoArrayListTemplatedCLoopingVisualEffectPtr__Add = 0x080836FC;
// void CExoArrayListTemplatedCLoopingVisualEffectPtr::AddUnique(CLoopingVisualEffect*)
constexpr uintptr_t CExoArrayListTemplatedCLoopingVisualEffectPtr__AddUnique = 0x08082CFC;
// void CExoArrayListTemplatedCLoopingVisualEffectPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCLoopingVisualEffectPtr__Allocate = 0x08083680;
// void CExoArrayListTemplatedCLoopingVisualEffectPtr::Contains(CLoopingVisualEffect*)
constexpr uintptr_t CExoArrayListTemplatedCLoopingVisualEffectPtr__Contains = 0x080836D4;
// void CExoArrayListTemplatedCLoopingVisualEffectPtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCLoopingVisualEffectPtr__DelIndex = 0x081D6580;
// void CExoArrayListTemplatedCLoopingVisualEffectPtr::SetSize(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCLoopingVisualEffectPtr__SetSize = 0x08082CB4;

// CExoArrayListTemplatedCNetLayerPlayerCDKeyInfo::CExoArrayListTemplatedCNetLayerPlayerCDKeyInfo(void)
constexpr uintptr_t CExoArrayListTemplatedCNetLayerPlayerCDKeyInfo__CExoArrayListTemplatedCNetLayerPlayerCDKeyInfoCtor__0 = 0x082ACE64;
// CExoArrayListTemplatedCNetLayerPlayerCDKeyInfo::CExoArrayListTemplatedCNetLayerPlayerCDKeyInfo(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNetLayerPlayerCDKeyInfo__CExoArrayListTemplatedCNetLayerPlayerCDKeyInfoCtor__1 = 0x082ACE30;
// void CExoArrayListTemplatedCNetLayerPlayerCDKeyInfo::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNetLayerPlayerCDKeyInfo____vc = 0x08050E34;
// public void CExoArrayListTemplatedCNetLayerPlayerCDKeyInfo::Add(CNetLayerPlayerCDKeyInfo)
constexpr uintptr_t CExoArrayListTemplatedCNetLayerPlayerCDKeyInfo__Add = 0x082ACAC4;
// void CExoArrayListTemplatedCNetLayerPlayerCDKeyInfo::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNetLayerPlayerCDKeyInfo__Allocate = 0x082ACB80;
// void CExoArrayListTemplatedCNetLayerPlayerCDKeyInfo::SetSize(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNetLayerPlayerCDKeyInfo__SetSize = 0x082ACED8;

// CExoArrayListTemplatedCNWCCMessageDataPtr::CExoArrayListTemplatedCNWCCMessageDataPtr(void)
constexpr uintptr_t CExoArrayListTemplatedCNWCCMessageDataPtr__CExoArrayListTemplatedCNWCCMessageDataPtrCtor__0 = 0x080E56B0;
// CExoArrayListTemplatedCNWCCMessageDataPtr::CExoArrayListTemplatedCNWCCMessageDataPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWCCMessageDataPtr__CExoArrayListTemplatedCNWCCMessageDataPtrCtor__1 = 0x080E567C;
// void CExoArrayListTemplatedCNWCCMessageDataPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWCCMessageDataPtr____vc = 0x080F5CDC;
// void CExoArrayListTemplatedCNWCCMessageDataPtr::Add(CNWCCMessageData*)
constexpr uintptr_t CExoArrayListTemplatedCNWCCMessageDataPtr__Add = 0x080F5C9C;
// void CExoArrayListTemplatedCNWCCMessageDataPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWCCMessageDataPtr__Allocate = 0x080E58D4;

// CExoArrayListTemplatedCNWItemProperty::CExoArrayListTemplatedCNWItemProperty(void)
constexpr uintptr_t CExoArrayListTemplatedCNWItemProperty__CExoArrayListTemplatedCNWItemPropertyCtor__0 = 0x081A7328;
// CExoArrayListTemplatedCNWItemProperty::CExoArrayListTemplatedCNWItemProperty(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWItemProperty__CExoArrayListTemplatedCNWItemPropertyCtor__1 = 0x081A72F4;
// void CExoArrayListTemplatedCNWItemProperty::__as(const CExoArrayListTemplatedCNWItemProperty&)
constexpr uintptr_t CExoArrayListTemplatedCNWItemProperty____as = 0x081A73D0;
// void CExoArrayListTemplatedCNWItemProperty::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWItemProperty____vc__0 = 0x081A73A8;
// void CExoArrayListTemplatedCNWItemProperty::Add(CNWItemProperty)
constexpr uintptr_t CExoArrayListTemplatedCNWItemProperty__Add = 0x081A7440;
// public void CExoArrayListTemplatedCNWItemProperty::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWItemProperty__Allocate = 0x081A74F8;
// void CExoArrayListTemplatedCNWItemProperty::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWItemProperty__DelIndex = 0x081A7490;
// void CExoArrayListTemplatedCNWItemProperty::SetSize(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWItemProperty__SetSize = 0x081A7360;

// CExoArrayListTemplatedCNWLevelStatsPtr::CExoArrayListTemplatedCNWLevelStatsPtr(void)
constexpr uintptr_t CExoArrayListTemplatedCNWLevelStatsPtr__CExoArrayListTemplatedCNWLevelStatsPtrCtor__0 = 0x0816597C;
// CExoArrayListTemplatedCNWLevelStatsPtr::CExoArrayListTemplatedCNWLevelStatsPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWLevelStatsPtr__CExoArrayListTemplatedCNWLevelStatsPtrCtor__1 = 0x08165948;
// void CExoArrayListTemplatedCNWLevelStatsPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWLevelStatsPtr____vc = 0x081659F4;
// void CExoArrayListTemplatedCNWLevelStatsPtr::Add(CNWLevelStats*)
constexpr uintptr_t CExoArrayListTemplatedCNWLevelStatsPtr__Add = 0x081659B4;
// public void CExoArrayListTemplatedCNWLevelStatsPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWLevelStatsPtr__Allocate = 0x08165CD0;
// public void CExoArrayListTemplatedCNWLevelStatsPtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWLevelStatsPtr__DelIndex = 0x08165A04;
// void CExoArrayListTemplatedCNWLevelStatsPtr::Remove(CNWLevelStats*)
constexpr uintptr_t CExoArrayListTemplatedCNWLevelStatsPtr__Remove = 0x08165B4C;

// CExoArrayListTemplatedCNWSExpressionListPtr::CExoArrayListTemplatedCNWSExpressionListPtr(void)
constexpr uintptr_t CExoArrayListTemplatedCNWSExpressionListPtr__CExoArrayListTemplatedCNWSExpressionListPtrCtor__0 = 0x08240240;
// CExoArrayListTemplatedCNWSExpressionListPtr::CExoArrayListTemplatedCNWSExpressionListPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSExpressionListPtr__CExoArrayListTemplatedCNWSExpressionListPtrCtor__1 = 0x0824020C;
// void CExoArrayListTemplatedCNWSExpressionListPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSExpressionListPtr____vc = 0x082402B8;
// void CExoArrayListTemplatedCNWSExpressionListPtr::Add(CNWSExpressionList*)
constexpr uintptr_t CExoArrayListTemplatedCNWSExpressionListPtr__Add = 0x08240278;
// void CExoArrayListTemplatedCNWSExpressionListPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSExpressionListPtr__Allocate = 0x082403E4;
// void CExoArrayListTemplatedCNWSExpressionListPtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSExpressionListPtr__DelIndex = 0x082402C8;

// CExoArrayListTemplatedCNWSExpressionNodePtr::CExoArrayListTemplatedCNWSExpressionNodePtr(void)
constexpr uintptr_t CExoArrayListTemplatedCNWSExpressionNodePtr__CExoArrayListTemplatedCNWSExpressionNodePtrCtor__0 = 0x0824032C;
// CExoArrayListTemplatedCNWSExpressionNodePtr::CExoArrayListTemplatedCNWSExpressionNodePtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSExpressionNodePtr__CExoArrayListTemplatedCNWSExpressionNodePtrCtor__1 = 0x082402F8;
// void CExoArrayListTemplatedCNWSExpressionNodePtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSExpressionNodePtr____vc = 0x082403A4;
// void CExoArrayListTemplatedCNWSExpressionNodePtr::Add(CNWSExpressionNode*)
constexpr uintptr_t CExoArrayListTemplatedCNWSExpressionNodePtr__Add = 0x08240364;
// void CExoArrayListTemplatedCNWSExpressionNodePtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSExpressionNodePtr__Allocate = 0x08240438;
// void CExoArrayListTemplatedCNWSExpressionNodePtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSExpressionNodePtr__DelIndex = 0x082403B4;

// CExoArrayListTemplatedCNWSExpressionPtr::CExoArrayListTemplatedCNWSExpressionPtr(void)
constexpr uintptr_t CExoArrayListTemplatedCNWSExpressionPtr__CExoArrayListTemplatedCNWSExpressionPtrCtor__0 = 0x081D6484;
// CExoArrayListTemplatedCNWSExpressionPtr::CExoArrayListTemplatedCNWSExpressionPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSExpressionPtr__CExoArrayListTemplatedCNWSExpressionPtrCtor__1 = 0x081D6450;
// void CExoArrayListTemplatedCNWSExpressionPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSExpressionPtr____vc = 0x081D6528;
// void CExoArrayListTemplatedCNWSExpressionPtr::Add(CNWSExpression*)
constexpr uintptr_t CExoArrayListTemplatedCNWSExpressionPtr__Add = 0x081D6650;
// void CExoArrayListTemplatedCNWSExpressionPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSExpressionPtr__Allocate = 0x081D6718;

// CExoArrayListTemplatedCNWSFactionPtr::CExoArrayListTemplatedCNWSFactionPtr(void)
constexpr uintptr_t CExoArrayListTemplatedCNWSFactionPtr__CExoArrayListTemplatedCNWSFactionPtrCtor__0 = 0x080BABD8;
// CExoArrayListTemplatedCNWSFactionPtr::CExoArrayListTemplatedCNWSFactionPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSFactionPtr__CExoArrayListTemplatedCNWSFactionPtrCtor__1 = 0x080BABA4;
// void CExoArrayListTemplatedCNWSFactionPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSFactionPtr____vc = 0x080BAB7C;
// void CExoArrayListTemplatedCNWSFactionPtr::Add(CNWSFaction*)
constexpr uintptr_t CExoArrayListTemplatedCNWSFactionPtr__Add = 0x081D8560;
// void CExoArrayListTemplatedCNWSFactionPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSFactionPtr__Allocate = 0x080BAC10;

// CExoArrayListTemplatedCNWSInvitationDetails::CExoArrayListTemplatedCNWSInvitationDetails(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSInvitationDetails__CExoArrayListTemplatedCNWSInvitationDetailsCtor__1 = 0x08113BCC;
// void CExoArrayListTemplatedCNWSInvitationDetails::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSInvitationDetails____vc = 0x08113AE0;
// void CExoArrayListTemplatedCNWSInvitationDetails::Add(CNWSInvitationDetails)
constexpr uintptr_t CExoArrayListTemplatedCNWSInvitationDetails__Add = 0x08113C00;
// void CExoArrayListTemplatedCNWSInvitationDetails::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSInvitationDetails__Allocate = 0x08113D10;
// void CExoArrayListTemplatedCNWSInvitationDetails::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSInvitationDetails__DelIndex = 0x08113AF4;

// CExoArrayListTemplatedCNWSItemPtr::CExoArrayListTemplatedCNWSItemPtr(void)
constexpr uintptr_t CExoArrayListTemplatedCNWSItemPtr__CExoArrayListTemplatedCNWSItemPtrCtor__0 = 0x08086544;
// CExoArrayListTemplatedCNWSItemPtr::CExoArrayListTemplatedCNWSItemPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSItemPtr__CExoArrayListTemplatedCNWSItemPtrCtor__1 = 0x08086510;
// void CExoArrayListTemplatedCNWSItemPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSItemPtr____vc = 0x0808657C;
// void CExoArrayListTemplatedCNWSItemPtr::Add(CNWSItem*)
constexpr uintptr_t CExoArrayListTemplatedCNWSItemPtr__Add = 0x080865D8;
// void CExoArrayListTemplatedCNWSItemPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSItemPtr__Allocate = 0x08086704;
// void CExoArrayListTemplatedCNWSItemPtr::Insert(CNWSItem*, int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSItemPtr__Insert = 0x0808658C;

// CExoArrayListTemplatedCNWSPersonalReputation::CExoArrayListTemplatedCNWSPersonalReputation(void)
constexpr uintptr_t CExoArrayListTemplatedCNWSPersonalReputation__CExoArrayListTemplatedCNWSPersonalReputationCtor__0 = 0x0805F0D4;
// CExoArrayListTemplatedCNWSPersonalReputation::CExoArrayListTemplatedCNWSPersonalReputation(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSPersonalReputation__CExoArrayListTemplatedCNWSPersonalReputationCtor__1 = 0x08060E68;
// void CExoArrayListTemplatedCNWSPersonalReputation::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSPersonalReputation____vc = 0x08060F20;
// void CExoArrayListTemplatedCNWSPersonalReputation::Add(CNWSPersonalReputation)
constexpr uintptr_t CExoArrayListTemplatedCNWSPersonalReputation__Add = 0x08060E9C;
// public void CExoArrayListTemplatedCNWSPersonalReputation::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSPersonalReputation__Allocate = 0x08060F34;
// void CExoArrayListTemplatedCNWSPersonalReputation::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSPersonalReputation__DelIndex = 0x08113A54;

// CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates::CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates(void)
constexpr uintptr_t CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates__CExoArrayListTemplatedCNWSPlayerJournalQuestUpdatesCtor__0 = 0x0805EF84;
// CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates::CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates__CExoArrayListTemplatedCNWSPlayerJournalQuestUpdatesCtor__1 = 0x0805EF50;
// void CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates____vc = 0x08083464;
// public void CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates::Add(CNWSPlayerJournalQuestUpdates)
constexpr uintptr_t CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates__Add = 0x081B2754;
// void CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates__Allocate = 0x0805F3A8;
// void CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates::SetSize(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates__SetSize = 0x08083478;

// CExoArrayListTemplatedCNWSPVPEntry::CExoArrayListTemplatedCNWSPVPEntry(void)
constexpr uintptr_t CExoArrayListTemplatedCNWSPVPEntry__CExoArrayListTemplatedCNWSPVPEntryCtor__0 = 0x0813F040;
// CExoArrayListTemplatedCNWSPVPEntry::CExoArrayListTemplatedCNWSPVPEntry(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSPVPEntry__CExoArrayListTemplatedCNWSPVPEntryCtor__1 = 0x08113B98;
// void CExoArrayListTemplatedCNWSPVPEntry::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSPVPEntry____vc = 0x08113B84;
// void CExoArrayListTemplatedCNWSPVPEntry::Add(CNWSPVPEntry)
constexpr uintptr_t CExoArrayListTemplatedCNWSPVPEntry__Add = 0x08113B34;
// void CExoArrayListTemplatedCNWSPVPEntry::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSPVPEntry__Allocate = 0x08113CA0;
// void CExoArrayListTemplatedCNWSPVPEntry::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSPVPEntry__DelIndex = 0x08113C50;

// CExoArrayListTemplatedCNWSScriptVar::CExoArrayListTemplatedCNWSScriptVar(void)
constexpr uintptr_t CExoArrayListTemplatedCNWSScriptVar__CExoArrayListTemplatedCNWSScriptVarCtor__0 = 0x081F45E0;
// CExoArrayListTemplatedCNWSScriptVar::CExoArrayListTemplatedCNWSScriptVar(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSScriptVar__CExoArrayListTemplatedCNWSScriptVarCtor__1 = 0x080D5A58;
// void CExoArrayListTemplatedCNWSScriptVar::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSScriptVar____vc = 0x0819BE30;
// public void CExoArrayListTemplatedCNWSScriptVar::Add(CNWSScriptVar)
constexpr uintptr_t CExoArrayListTemplatedCNWSScriptVar__Add = 0x081F44F0;
// void CExoArrayListTemplatedCNWSScriptVar::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSScriptVar__Allocate = 0x080D5CA8;
// void CExoArrayListTemplatedCNWSScriptVar::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSScriptVar__DelIndex = 0x081F4584;

// CExoArrayListTemplatedCNWSSpellScriptDataPtr::CExoArrayListTemplatedCNWSSpellScriptDataPtr(void)
constexpr uintptr_t CExoArrayListTemplatedCNWSSpellScriptDataPtr__CExoArrayListTemplatedCNWSSpellScriptDataPtrCtor__0 = 0x080E5644;
// CExoArrayListTemplatedCNWSSpellScriptDataPtr::CExoArrayListTemplatedCNWSSpellScriptDataPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSSpellScriptDataPtr__CExoArrayListTemplatedCNWSSpellScriptDataPtrCtor__1 = 0x080E5610;
// void CExoArrayListTemplatedCNWSSpellScriptDataPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSSpellScriptDataPtr____vc = 0x080F5CEC;
// void CExoArrayListTemplatedCNWSSpellScriptDataPtr::Add(CNWSSpellScriptData*)
constexpr uintptr_t CExoArrayListTemplatedCNWSSpellScriptDataPtr__Add = 0x080F5CFC;
// void CExoArrayListTemplatedCNWSSpellScriptDataPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSSpellScriptDataPtr__Allocate = 0x080E5880;

// CExoArrayListTemplatedCNWSStats_SpellLikeAbility::CExoArrayListTemplatedCNWSStats_SpellLikeAbility(void)
constexpr uintptr_t CExoArrayListTemplatedCNWSStats_SpellLikeAbility__CExoArrayListTemplatedCNWSStats_SpellLikeAbilityCtor__0 = 0x08165A34;
// CExoArrayListTemplatedCNWSStats_SpellLikeAbility::CExoArrayListTemplatedCNWSStats_SpellLikeAbility(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSStats_SpellLikeAbility__CExoArrayListTemplatedCNWSStats_SpellLikeAbilityCtor__1 = 0x08082E48;
// void CExoArrayListTemplatedCNWSStats_SpellLikeAbility::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSStats_SpellLikeAbility____vc = 0x08165AB4;
// void CExoArrayListTemplatedCNWSStats_SpellLikeAbility::Add(CNWSStats_SpellLikeAbility)
constexpr uintptr_t CExoArrayListTemplatedCNWSStats_SpellLikeAbility__Add = 0x08165C2C;
// void CExoArrayListTemplatedCNWSStats_SpellLikeAbility::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSStats_SpellLikeAbility__Allocate = 0x08083560;
// void CExoArrayListTemplatedCNWSStats_SpellLikeAbility::SetSize(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSStats_SpellLikeAbility__SetSize = 0x08082E7C;

// CExoArrayListTemplatedCNWSStats_SpellPtr::CExoArrayListTemplatedCNWSStats_SpellPtr(void)
constexpr uintptr_t CExoArrayListTemplatedCNWSStats_SpellPtr__CExoArrayListTemplatedCNWSStats_SpellPtrCtor__0 = 0x08165824;
// CExoArrayListTemplatedCNWSStats_SpellPtr::CExoArrayListTemplatedCNWSStats_SpellPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSStats_SpellPtr__CExoArrayListTemplatedCNWSStats_SpellPtrCtor__1 = 0x081657F0;
// void CExoArrayListTemplatedCNWSStats_SpellPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSStats_SpellPtr____vc = 0x0816585C;
// void CExoArrayListTemplatedCNWSStats_SpellPtr::Add(CNWSStats_Spell*)
constexpr uintptr_t CExoArrayListTemplatedCNWSStats_SpellPtr__Add = 0x0816586C;
// void CExoArrayListTemplatedCNWSStats_SpellPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSStats_SpellPtr__Allocate = 0x08165C7C;
// void CExoArrayListTemplatedCNWSStats_SpellPtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSStats_SpellPtr__DelIndex = 0x081658AC;

// CExoArrayListTemplatedCNWSTagNode::CExoArrayListTemplatedCNWSTagNode(void)
constexpr uintptr_t CExoArrayListTemplatedCNWSTagNode__CExoArrayListTemplatedCNWSTagNodeCtor__0 = 0x081C1B00;
// CExoArrayListTemplatedCNWSTagNode::CExoArrayListTemplatedCNWSTagNode(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSTagNode__CExoArrayListTemplatedCNWSTagNodeCtor__1 = 0x081C1ACC;
// void CExoArrayListTemplatedCNWSTagNode::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSTagNode____vc = 0x081C1DE8;
// void CExoArrayListTemplatedCNWSTagNode::Add(CNWSTagNode)
constexpr uintptr_t CExoArrayListTemplatedCNWSTagNode__Add = 0x081C1FEC;
// void CExoArrayListTemplatedCNWSTagNode::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSTagNode__Allocate = 0x081C20CC;
// void CExoArrayListTemplatedCNWSTagNode::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSTagNode__DelIndex = 0x081C1E6C;
// void CExoArrayListTemplatedCNWSTagNode::Insert(CNWSTagNode, int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWSTagNode__Insert = 0x081C1DFC;

// CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr::CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr(void)
constexpr uintptr_t CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr__CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtrCtor__0 = 0x08094404;
// CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr::CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr__CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtrCtor__1 = 0x080943D0;
// void CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr::Add(CNWTileSurfaceMeshAABBNode*)
constexpr uintptr_t CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr__Add = 0x0809443C;
// void CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr__Allocate = 0x080944D8;
// void CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr__DelIndex = 0x0809447C;

// CExoArrayListTemplatedCNWVisibilityNodePtr::CExoArrayListTemplatedCNWVisibilityNodePtr(void)
constexpr uintptr_t CExoArrayListTemplatedCNWVisibilityNodePtr__CExoArrayListTemplatedCNWVisibilityNodePtrCtor__0 = 0x08083268;
// CExoArrayListTemplatedCNWVisibilityNodePtr::CExoArrayListTemplatedCNWVisibilityNodePtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWVisibilityNodePtr__CExoArrayListTemplatedCNWVisibilityNodePtrCtor__1 = 0x08083234;
// void CExoArrayListTemplatedCNWVisibilityNodePtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWVisibilityNodePtr____vc = 0x08082D38;
// void CExoArrayListTemplatedCNWVisibilityNodePtr::Add(CNWVisibilityNode*)
constexpr uintptr_t CExoArrayListTemplatedCNWVisibilityNodePtr__Add = 0x08082D78;
// void CExoArrayListTemplatedCNWVisibilityNodePtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWVisibilityNodePtr__Allocate = 0x08083774;
// void CExoArrayListTemplatedCNWVisibilityNodePtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCNWVisibilityNodePtr__DelIndex = 0x08082D48;

// CExoArrayListTemplatedCResRef::CExoArrayListTemplatedCResRef(void)
constexpr uintptr_t CExoArrayListTemplatedCResRef__CExoArrayListTemplatedCResRefCtor__0 = 0x080B1564;
// CExoArrayListTemplatedCResRef::CExoArrayListTemplatedCResRef(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCResRef__CExoArrayListTemplatedCResRefCtor__1 = 0x080B1530;
// CExoArrayListTemplatedCResRef::CExoArrayListTemplatedCResRef(const CExoArrayListTemplatedCResRef&)
constexpr uintptr_t CExoArrayListTemplatedCResRef__CExoArrayListTemplatedCResRefCtor__2 = 0x081E9DF0;
// void CExoArrayListTemplatedCResRef::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCResRef____vc__0 = 0x081E9DE0;
// void CExoArrayListTemplatedCResRef::Add(CResRef)
constexpr uintptr_t CExoArrayListTemplatedCResRef__Add = 0x080B159C;
// void CExoArrayListTemplatedCResRef::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCResRef__Allocate = 0x080B1704;
// void CExoArrayListTemplatedCResRef::Contains(CResRef)
constexpr uintptr_t CExoArrayListTemplatedCResRef__Contains = 0x080B15EC;

// CExoArrayListTemplatedCScriptLogPtr::CExoArrayListTemplatedCScriptLogPtr(void)
constexpr uintptr_t CExoArrayListTemplatedCScriptLogPtr__CExoArrayListTemplatedCScriptLogPtrCtor__0 = 0x08264964;
// CExoArrayListTemplatedCScriptLogPtr::CExoArrayListTemplatedCScriptLogPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCScriptLogPtr__CExoArrayListTemplatedCScriptLogPtrCtor__1 = 0x08264930;
// void CExoArrayListTemplatedCScriptLogPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCScriptLogPtr____vc = 0x0826499C;
// void CExoArrayListTemplatedCScriptLogPtr::Add(CScriptLog*)
constexpr uintptr_t CExoArrayListTemplatedCScriptLogPtr__Add = 0x082649F4;
// void CExoArrayListTemplatedCScriptLogPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCScriptLogPtr__Allocate = 0x08264AB4;
// void CExoArrayListTemplatedCScriptLogPtr::SetSize(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCScriptLogPtr__SetSize = 0x082649AC;

// CExoArrayListTemplatedCSpell_AddPtr::CExoArrayListTemplatedCSpell_AddPtr(void)
constexpr uintptr_t CExoArrayListTemplatedCSpell_AddPtr__CExoArrayListTemplatedCSpell_AddPtrCtor__0 = 0x081E49EC;
// CExoArrayListTemplatedCSpell_AddPtr::CExoArrayListTemplatedCSpell_AddPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCSpell_AddPtr__CExoArrayListTemplatedCSpell_AddPtrCtor__1 = 0x081E49B8;
// void CExoArrayListTemplatedCSpell_AddPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCSpell_AddPtr____vc = 0x080830A4;
// void CExoArrayListTemplatedCSpell_AddPtr::Add(CSpell_Add*)
constexpr uintptr_t CExoArrayListTemplatedCSpell_AddPtr__Add = 0x08082E08;
// void CExoArrayListTemplatedCSpell_AddPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCSpell_AddPtr__Allocate = 0x0808381C;
// void CExoArrayListTemplatedCSpell_AddPtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCSpell_AddPtr__DelIndex = 0x081E4A54;

// CExoArrayListTemplatedCSpell_DeletePtr::CExoArrayListTemplatedCSpell_DeletePtr(void)
constexpr uintptr_t CExoArrayListTemplatedCSpell_DeletePtr__CExoArrayListTemplatedCSpell_DeletePtrCtor__0 = 0x081E4980;
// CExoArrayListTemplatedCSpell_DeletePtr::CExoArrayListTemplatedCSpell_DeletePtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCSpell_DeletePtr__CExoArrayListTemplatedCSpell_DeletePtrCtor__1 = 0x081E494C;
// void CExoArrayListTemplatedCSpell_DeletePtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCSpell_DeletePtr____vc = 0x08083094;
// void CExoArrayListTemplatedCSpell_DeletePtr::Add(CSpell_Delete*)
constexpr uintptr_t CExoArrayListTemplatedCSpell_DeletePtr__Add = 0x08082DC8;
// void CExoArrayListTemplatedCSpell_DeletePtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCSpell_DeletePtr__Allocate = 0x080837C8;
// void CExoArrayListTemplatedCSpell_DeletePtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCSpell_DeletePtr__DelIndex = 0x081E4A24;

// CExoArrayListTemplatedCStoreCustomerPtr::CExoArrayListTemplatedCStoreCustomerPtr(void)
constexpr uintptr_t CExoArrayListTemplatedCStoreCustomerPtr__CExoArrayListTemplatedCStoreCustomerPtrCtor__0 = 0x080864C8;
// CExoArrayListTemplatedCStoreCustomerPtr::CExoArrayListTemplatedCStoreCustomerPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCStoreCustomerPtr__CExoArrayListTemplatedCStoreCustomerPtrCtor__1 = 0x08086494;
// void CExoArrayListTemplatedCStoreCustomerPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCStoreCustomerPtr____vc = 0x08086500;
// void CExoArrayListTemplatedCStoreCustomerPtr::Add(CStoreCustomer*)
constexpr uintptr_t CExoArrayListTemplatedCStoreCustomerPtr__Add = 0x08086640;
// void CExoArrayListTemplatedCStoreCustomerPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCStoreCustomerPtr__Allocate = 0x080866B0;
// void CExoArrayListTemplatedCStoreCustomerPtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCStoreCustomerPtr__DelIndex = 0x08086680;

// CExoArrayListTemplatedCVirtualMachineFilePtr::CExoArrayListTemplatedCVirtualMachineFilePtr(void)
constexpr uintptr_t CExoArrayListTemplatedCVirtualMachineFilePtr__CExoArrayListTemplatedCVirtualMachineFilePtrCtor__0 = 0x082647AC;
// CExoArrayListTemplatedCVirtualMachineFilePtr::CExoArrayListTemplatedCVirtualMachineFilePtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCVirtualMachineFilePtr__CExoArrayListTemplatedCVirtualMachineFilePtrCtor__1 = 0x08264778;
// void CExoArrayListTemplatedCVirtualMachineFilePtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCVirtualMachineFilePtr____vc = 0x082648F0;
// void CExoArrayListTemplatedCVirtualMachineFilePtr::Add(CVirtualMachineFile*)
constexpr uintptr_t CExoArrayListTemplatedCVirtualMachineFilePtr__Add = 0x082648B0;
// void CExoArrayListTemplatedCVirtualMachineFilePtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCVirtualMachineFilePtr__Allocate = 0x08264A60;
// void CExoArrayListTemplatedCVirtualMachineFilePtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCVirtualMachineFilePtr__DelIndex = 0x08264900;

// CExoArrayListTemplatedCWorldJournalEntry::CExoArrayListTemplatedCWorldJournalEntry(void)
constexpr uintptr_t CExoArrayListTemplatedCWorldJournalEntry__CExoArrayListTemplatedCWorldJournalEntryCtor__0 = 0x081C1B6C;
// CExoArrayListTemplatedCWorldJournalEntry::CExoArrayListTemplatedCWorldJournalEntry(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCWorldJournalEntry__CExoArrayListTemplatedCWorldJournalEntryCtor__1 = 0x081C1B38;
// void CExoArrayListTemplatedCWorldJournalEntry::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCWorldJournalEntry____vc = 0x081C1EAC;
// public void CExoArrayListTemplatedCWorldJournalEntry::Add(CWorldJournalEntry)
constexpr uintptr_t CExoArrayListTemplatedCWorldJournalEntry__Add = 0x081C0D20;
// void CExoArrayListTemplatedCWorldJournalEntry::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCWorldJournalEntry__Allocate = 0x081C0DF0;
// void CExoArrayListTemplatedCWorldJournalEntry::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCWorldJournalEntry__DelIndex = 0x081C1EC0;
// void CExoArrayListTemplatedCWorldJournalEntry::SetSize(int32_t)
constexpr uintptr_t CExoArrayListTemplatedCWorldJournalEntry__SetSize = 0x081C1F40;

// CExoArrayListTemplatedfloat::CExoArrayListTemplatedfloat(void)
constexpr uintptr_t CExoArrayListTemplatedfloat__CExoArrayListTemplatedfloatCtor__0 = 0x08061BA0;
// CExoArrayListTemplatedfloat::CExoArrayListTemplatedfloat(int32_t)
constexpr uintptr_t CExoArrayListTemplatedfloat__CExoArrayListTemplatedfloatCtor__1 = 0x08061B6C;
// void CExoArrayListTemplatedfloat::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedfloat____vc = 0x08061D24;
// public void CExoArrayListTemplatedfloat::Add(float)
constexpr uintptr_t CExoArrayListTemplatedfloat__Add = 0x08061D34;
// void CExoArrayListTemplatedfloat::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedfloat__Allocate = 0x08061D74;
// void CExoArrayListTemplatedfloat::Insert(float, int32_t)
constexpr uintptr_t CExoArrayListTemplatedfloat__Insert = 0x08236CB8;
// void CExoArrayListTemplatedfloat::SetSize(int32_t)
constexpr uintptr_t CExoArrayListTemplatedfloat__SetSize = 0x08061C20;

// public CExoArrayListTemplatedint::CExoArrayListTemplatedint(void)
constexpr uintptr_t CExoArrayListTemplatedint__CExoArrayListTemplatedintCtor__0 = 0x08050E7C;
// public CExoArrayListTemplatedint::CExoArrayListTemplatedint(int32_t)
constexpr uintptr_t CExoArrayListTemplatedint__CExoArrayListTemplatedintCtor__1 = 0x08050E48;
// void CExoArrayListTemplatedint::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedint____vc = 0x08050EF0;
// void CExoArrayListTemplatedint::Add(int32_t)
constexpr uintptr_t CExoArrayListTemplatedint__Add = 0x08050EB4;
// void CExoArrayListTemplatedint::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedint__Allocate = 0x080511F4;
// void CExoArrayListTemplatedint::Contains(int32_t)
constexpr uintptr_t CExoArrayListTemplatedint__Contains = 0x08086618;
// void CExoArrayListTemplatedint::IndexOf(int32_t)
constexpr uintptr_t CExoArrayListTemplatedint__IndexOf = 0x08050F00;
// void CExoArrayListTemplatedint::Pack(void)
constexpr uintptr_t CExoArrayListTemplatedint__Pack = 0x080BAB8C;
// void CExoArrayListTemplatedint::SetSize(int32_t)
constexpr uintptr_t CExoArrayListTemplatedint__SetSize = 0x08061BD8;

// CExoArrayListTemplatedNWPlayerCharacterList_stPtr::CExoArrayListTemplatedNWPlayerCharacterList_stPtr(void)
constexpr uintptr_t CExoArrayListTemplatedNWPlayerCharacterList_stPtr__CExoArrayListTemplatedNWPlayerCharacterList_stPtrCtor__0 = 0x08082F24;
// CExoArrayListTemplatedNWPlayerCharacterList_stPtr::CExoArrayListTemplatedNWPlayerCharacterList_stPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedNWPlayerCharacterList_stPtr__CExoArrayListTemplatedNWPlayerCharacterList_stPtrCtor__1 = 0x08082EF0;
// void CExoArrayListTemplatedNWPlayerCharacterList_stPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedNWPlayerCharacterList_stPtr____vc = 0x0808304C;
// void CExoArrayListTemplatedNWPlayerCharacterList_stPtr::Add(NWPlayerCharacterList_st*)
constexpr uintptr_t CExoArrayListTemplatedNWPlayerCharacterList_stPtr__Add = 0x080838EC;
// void CExoArrayListTemplatedNWPlayerCharacterList_stPtr::AddUnique(NWPlayerCharacterList_st*)
constexpr uintptr_t CExoArrayListTemplatedNWPlayerCharacterList_stPtr__AddUnique = 0x08083010;
// void CExoArrayListTemplatedNWPlayerCharacterList_stPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedNWPlayerCharacterList_stPtr__Allocate = 0x08083870;
// void CExoArrayListTemplatedNWPlayerCharacterList_stPtr::Contains(NWPlayerCharacterList_st*)
constexpr uintptr_t CExoArrayListTemplatedNWPlayerCharacterList_stPtr__Contains = 0x080838C4;
// void CExoArrayListTemplatedNWPlayerCharacterList_stPtr::DerefContains(NWPlayerCharacterList_st*)
constexpr uintptr_t CExoArrayListTemplatedNWPlayerCharacterList_stPtr__DerefContains = 0x08082FA8;

// CExoArrayListTemplatedNWPlayerCharacterListClass_st::CExoArrayListTemplatedNWPlayerCharacterListClass_st(void)
constexpr uintptr_t CExoArrayListTemplatedNWPlayerCharacterListClass_st__CExoArrayListTemplatedNWPlayerCharacterListClass_stCtor__0 = 0x08082C7C;
// CExoArrayListTemplatedNWPlayerCharacterListClass_st::CExoArrayListTemplatedNWPlayerCharacterListClass_st(int32_t)
constexpr uintptr_t CExoArrayListTemplatedNWPlayerCharacterListClass_st__CExoArrayListTemplatedNWPlayerCharacterListClass_stCtor__1 = 0x08082C48;
// void CExoArrayListTemplatedNWPlayerCharacterListClass_st::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedNWPlayerCharacterListClass_st____vc = 0x0808305C;
// void CExoArrayListTemplatedNWPlayerCharacterListClass_st::Add(NWPlayerCharacterListClass_st)
constexpr uintptr_t CExoArrayListTemplatedNWPlayerCharacterListClass_st__Add = 0x08082F5C;
// public void CExoArrayListTemplatedNWPlayerCharacterListClass_st::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedNWPlayerCharacterListClass_st__Allocate = 0x08083620;

// CExoArrayListTemplatedSCodeBaseDataPtr::CExoArrayListTemplatedSCodeBaseDataPtr(void)
constexpr uintptr_t CExoArrayListTemplatedSCodeBaseDataPtr__CExoArrayListTemplatedSCodeBaseDataPtrCtor__0 = 0x082DB1BC;
// CExoArrayListTemplatedSCodeBaseDataPtr::CExoArrayListTemplatedSCodeBaseDataPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedSCodeBaseDataPtr__CExoArrayListTemplatedSCodeBaseDataPtrCtor__1 = 0x082DB188;
// void CExoArrayListTemplatedSCodeBaseDataPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedSCodeBaseDataPtr____vc = 0x082DB108;
// void CExoArrayListTemplatedSCodeBaseDataPtr::Add(SCodeBaseData*)
constexpr uintptr_t CExoArrayListTemplatedSCodeBaseDataPtr__Add = 0x082DB118;
// void CExoArrayListTemplatedSCodeBaseDataPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedSCodeBaseDataPtr__Allocate = 0x082DB1F4;
// void CExoArrayListTemplatedSCodeBaseDataPtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedSCodeBaseDataPtr__DelIndex = 0x082DB158;

// CExoArrayListTemplatedSGameSpyRoomEntry::CExoArrayListTemplatedSGameSpyRoomEntry(void)
constexpr uintptr_t CExoArrayListTemplatedSGameSpyRoomEntry__CExoArrayListTemplatedSGameSpyRoomEntryCtor__0 = 0x08272D8C;
// CExoArrayListTemplatedSGameSpyRoomEntry::CExoArrayListTemplatedSGameSpyRoomEntry(int32_t)
constexpr uintptr_t CExoArrayListTemplatedSGameSpyRoomEntry__CExoArrayListTemplatedSGameSpyRoomEntryCtor__1 = 0x08272D58;
// void CExoArrayListTemplatedSGameSpyRoomEntry::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedSGameSpyRoomEntry____vc = 0x08272E10;
// void CExoArrayListTemplatedSGameSpyRoomEntry::Add(SGameSpyRoomEntry)
constexpr uintptr_t CExoArrayListTemplatedSGameSpyRoomEntry__Add = 0x08272DC4;
// void CExoArrayListTemplatedSGameSpyRoomEntry::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedSGameSpyRoomEntry__Allocate = 0x08272E20;

// CExoArrayListTemplatedSMstBuddyEntryPtr::CExoArrayListTemplatedSMstBuddyEntryPtr(void)
constexpr uintptr_t CExoArrayListTemplatedSMstBuddyEntryPtr__CExoArrayListTemplatedSMstBuddyEntryPtrCtor__0 = 0x08298A78;
// CExoArrayListTemplatedSMstBuddyEntryPtr::CExoArrayListTemplatedSMstBuddyEntryPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedSMstBuddyEntryPtr__CExoArrayListTemplatedSMstBuddyEntryPtrCtor__1 = 0x08298A44;
// void CExoArrayListTemplatedSMstBuddyEntryPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedSMstBuddyEntryPtr____vc = 0x08298C6C;
// void CExoArrayListTemplatedSMstBuddyEntryPtr::Add(SMstBuddyEntry*)
constexpr uintptr_t CExoArrayListTemplatedSMstBuddyEntryPtr__Add = 0x08298C2C;
// void CExoArrayListTemplatedSMstBuddyEntryPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedSMstBuddyEntryPtr__Allocate = 0x08298E30;
// void CExoArrayListTemplatedSMstBuddyEntryPtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedSMstBuddyEntryPtr__DelIndex = 0x08298C7C;

// CExoArrayListTemplatedSMstDigiDistInfoPtr::CExoArrayListTemplatedSMstDigiDistInfoPtr(void)
constexpr uintptr_t CExoArrayListTemplatedSMstDigiDistInfoPtr__CExoArrayListTemplatedSMstDigiDistInfoPtrCtor__0 = 0x08298AE4;
// CExoArrayListTemplatedSMstDigiDistInfoPtr::CExoArrayListTemplatedSMstDigiDistInfoPtr(int32_t)
constexpr uintptr_t CExoArrayListTemplatedSMstDigiDistInfoPtr__CExoArrayListTemplatedSMstDigiDistInfoPtrCtor__1 = 0x08298AB0;
// void CExoArrayListTemplatedSMstDigiDistInfoPtr::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedSMstDigiDistInfoPtr____vc = 0x08298B1C;
// void CExoArrayListTemplatedSMstDigiDistInfoPtr::Add(SMstDigiDistInfo*)
constexpr uintptr_t CExoArrayListTemplatedSMstDigiDistInfoPtr__Add = 0x08298B5C;
// void CExoArrayListTemplatedSMstDigiDistInfoPtr::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedSMstDigiDistInfoPtr__Allocate = 0x08298E84;
// void CExoArrayListTemplatedSMstDigiDistInfoPtr::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedSMstDigiDistInfoPtr__DelIndex = 0x08298B2C;
// void CExoArrayListTemplatedSMstDigiDistInfoPtr::Remove(SMstDigiDistInfo*)
constexpr uintptr_t CExoArrayListTemplatedSMstDigiDistInfoPtr__Remove = 0x08298CDC;

// CExoArrayListTemplatedunsignedchar::CExoArrayListTemplatedunsignedchar(void)
constexpr uintptr_t CExoArrayListTemplatedunsignedchar__CExoArrayListTemplatedunsignedcharCtor__0 = 0x080831A8;
// CExoArrayListTemplatedunsignedchar::CExoArrayListTemplatedunsignedchar(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedchar__CExoArrayListTemplatedunsignedcharCtor__1 = 0x08083174;
// void CExoArrayListTemplatedunsignedchar::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedchar____vc = 0x08083224;
// void CExoArrayListTemplatedunsignedchar::Add(unsigned char)
constexpr uintptr_t CExoArrayListTemplatedunsignedchar__Add = 0x080831E0;
// public void CExoArrayListTemplatedunsignedchar::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedchar__Allocate = 0x080839B4;
// void CExoArrayListTemplatedunsignedchar::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedchar__DelIndex = 0x08165C00;
// void CExoArrayListTemplatedunsignedchar::SetSize(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedchar__SetSize = 0x08165BB8;

// CExoArrayListTemplatedunsignedlong::CExoArrayListTemplatedunsignedlong(void)
constexpr uintptr_t CExoArrayListTemplatedunsignedlong__CExoArrayListTemplatedunsignedlongCtor__0 = 0x0805F2E4;
// CExoArrayListTemplatedunsignedlong::CExoArrayListTemplatedunsignedlong(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedlong__CExoArrayListTemplatedunsignedlongCtor__1 = 0x0805F2B0;
// CExoArrayListTemplatedunsignedlong::CExoArrayListTemplatedunsignedlong(const CExoArrayListTemplatedunsignedlong&)
constexpr uintptr_t CExoArrayListTemplatedunsignedlong__CExoArrayListTemplatedunsignedlongCtor__2 = 0x081E9E6C;
// void CExoArrayListTemplatedunsignedlong::__as(const CExoArrayListTemplatedunsignedlong&)
constexpr uintptr_t CExoArrayListTemplatedunsignedlong____as = 0x081139E8;
// void CExoArrayListTemplatedunsignedlong::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedlong____vc__0 = 0x0805EFF0;
// public void CExoArrayListTemplatedunsignedlong::Add(uint32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedlong__Add = 0x0805EEE0;
// void CExoArrayListTemplatedunsignedlong::AddUnique(uint32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedlong__AddUnique = 0x08098688;
// void CExoArrayListTemplatedunsignedlong::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedlong__Allocate = 0x0805F580;
// public int32_t CExoArrayListTemplatedunsignedlong::Contains(uint32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedlong__Contains = 0x0805F34C;
// void CExoArrayListTemplatedunsignedlong::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedlong__DelIndex = 0x0805F550;
// public int32_t CExoArrayListTemplatedunsignedlong::IndexOf(uint32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedlong__IndexOf = 0x080986C4;
// void CExoArrayListTemplatedunsignedlong::Insert(uint32_t, int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedlong__Insert = 0x080D5BC4;
// public void CExoArrayListTemplatedunsignedlong::Remove(uint32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedlong__Remove = 0x0805EE88;
// void CExoArrayListTemplatedunsignedlong::SetSize(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedlong__SetSize = 0x08061C68;

// CExoArrayListTemplatedunsignedlonglong::CExoArrayListTemplatedunsignedlonglong(void)
constexpr uintptr_t CExoArrayListTemplatedunsignedlonglong__CExoArrayListTemplatedunsignedlonglongCtor__0 = 0x080833A0;
// CExoArrayListTemplatedunsignedlonglong::CExoArrayListTemplatedunsignedlonglong(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedlonglong__CExoArrayListTemplatedunsignedlonglongCtor__1 = 0x0808336C;
// void CExoArrayListTemplatedunsignedlonglong::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedlonglong____vc = 0x080833D8;
// void CExoArrayListTemplatedunsignedlonglong::Add(uint64_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedlonglong__Add = 0x08083B0C;
// void CExoArrayListTemplatedunsignedlonglong::AddUnique(uint64_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedlonglong__AddUnique = 0x080833E8;
// void CExoArrayListTemplatedunsignedlonglong::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedlonglong__Allocate = 0x08083A58;
// void CExoArrayListTemplatedunsignedlonglong::Contains(uint64_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedlonglong__Contains = 0x08083AB8;

// CExoArrayListTemplatedunsignedshort::CExoArrayListTemplatedunsignedshort(void)
constexpr uintptr_t CExoArrayListTemplatedunsignedshort__CExoArrayListTemplatedunsignedshortCtor__0 = 0x0805F278;
// CExoArrayListTemplatedunsignedshort::CExoArrayListTemplatedunsignedshort(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedshort__CExoArrayListTemplatedunsignedshortCtor__1 = 0x0805F244;
// void CExoArrayListTemplatedunsignedshort::__vc(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedshort____vc = 0x0805F000;
// public void CExoArrayListTemplatedunsignedshort::Add(uint16_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedshort__Add = 0x0805F038;
// void CExoArrayListTemplatedunsignedshort::AddUnique(uint16_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedshort__AddUnique = 0x08165AC8;
// public void CExoArrayListTemplatedunsignedshort::Allocate(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedshort__Allocate = 0x0805F5D4;
// public int32_t CExoArrayListTemplatedunsignedshort::Contains(uint16_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedshort__Contains = 0x0805F010;
// void CExoArrayListTemplatedunsignedshort::DelIndex(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedshort__DelIndex = 0x0805F31C;
// void CExoArrayListTemplatedunsignedshort::Insert(uint16_t, int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedshort__Insert = 0x080E5804;
// public void CExoArrayListTemplatedunsignedshort::Remove(uint16_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedshort__Remove = 0x0805F07C;
// public void CExoArrayListTemplatedunsignedshort::SetSize(int32_t)
constexpr uintptr_t CExoArrayListTemplatedunsignedshort__SetSize = 0x080BFAEC;

// public CExoBase::CExoBase(void)
constexpr uintptr_t CExoBase__CExoBaseCtor = 0x082C8AA8;
// public CExoBase::~CExoBase(void)
constexpr uintptr_t CExoBase__CExoBaseDtor = 0x082C8C14;
// void CExoBase::CheckForCD(uint32_t)
constexpr uintptr_t CExoBase__CheckForCD = 0x082C8E9C;
// public int32_t CExoBase::GetAugmentedDirectoryList(CExoArrayListTemplatedCFileInfo*, CExoString, uint16_t, int32_t)
constexpr uintptr_t CExoBase__GetAugmentedDirectoryList = 0x082C8D5C;
// public int32_t CExoBase::GetDirectoryList(CExoArrayListTemplatedCExoString*, CExoString, uint16_t, int32_t, int32_t)
constexpr uintptr_t CExoBase__GetDirectoryList = 0x082C8CE0;
// public const CExoString& CExoBase::GetResourceExtension(uint16_t)
constexpr uintptr_t CExoBase__GetResourceExtension = 0x082C8DD4;
// public uint16_t CExoBase::GetResTypeFromExtension(const CExoString&)
constexpr uintptr_t CExoBase__GetResTypeFromExtension = 0x082C8DF0;
// public void CExoBase::LoadAliases(CExoString)
constexpr uintptr_t CExoBase__LoadAliases = 0x082C8E08;
// void CExoBase::ShutDown(void)
constexpr uintptr_t CExoBase__ShutDown = 0x082C8E6C;
// void CExoBase::SpawnExternalApplication(const CExoString&, const CExoString&, int32_t)
constexpr uintptr_t CExoBase__SpawnExternalApplication = 0x082C8E84;

// public CExoBaseInternal::CExoBaseInternal(void)
constexpr uintptr_t CExoBaseInternal__CExoBaseInternalCtor = 0x082CE7D0;
// public CExoBaseInternal::~CExoBaseInternal(void)
constexpr uintptr_t CExoBaseInternal__CExoBaseInternalDtor = 0x082CE7DC;
// public void CExoBaseInternal::AddAlias(CExoString, CExoString, CExoString)
constexpr uintptr_t CExoBaseInternal__AddAlias = 0x082CD1B0;
// void CExoBaseInternal::CheckForCD(uint32_t)
constexpr uintptr_t CExoBaseInternal__CheckForCD = 0x082CE988;
// public void CExoBaseInternal::CreateResourceExtensionTable(void)
constexpr uintptr_t CExoBaseInternal__CreateResourceExtensionTable = 0x082CC7BC;
// public int32_t CExoBaseInternal::GetAugmentedDirectoryList(CExoArrayListTemplatedCFileInfo*, CExoString, uint16_t, int32_t)
constexpr uintptr_t CExoBaseInternal__GetAugmentedDirectoryList = 0x082CD8E8;
// public int32_t CExoBaseInternal::GetDirectoryList(CExoArrayListTemplatedCExoString*, CExoString, uint16_t, int32_t, int32_t)
constexpr uintptr_t CExoBaseInternal__GetDirectoryList = 0x082CD33C;
// public const CExoString& CExoBaseInternal::GetResourceExtension(uint16_t)
constexpr uintptr_t CExoBaseInternal__GetResourceExtension = 0x082CE854;
// public uint16_t CExoBaseInternal::GetResTypeFromExtension(const CExoString&)
constexpr uintptr_t CExoBaseInternal__GetResTypeFromExtension = 0x082CE890;
// public void CExoBaseInternal::LoadAliases(CExoString)
constexpr uintptr_t CExoBaseInternal__LoadAliases = 0x082CDE74;
// void CExoBaseInternal::ShutDown(void)
constexpr uintptr_t CExoBaseInternal__ShutDown = 0x082CE8E0;
// void CExoBaseInternal::SpawnExternalApplication(const CExoString&, const CExoString&, int32_t)
constexpr uintptr_t CExoBaseInternal__SpawnExternalApplication = 0x082CE8E8;

// public CExoCriticalSection::CExoCriticalSection(void)
constexpr uintptr_t CExoCriticalSection__CExoCriticalSectionCtor = 0x082C8EB4;
// public CExoCriticalSection::~CExoCriticalSection(void)
constexpr uintptr_t CExoCriticalSection__CExoCriticalSectionDtor = 0x082C8EFC;
// public void CExoCriticalSection::EnterCriticalSection(void)
constexpr uintptr_t CExoCriticalSection__EnterCriticalSection = 0x082C8F38;
// public void CExoCriticalSection::LeaveCriticalSection(void)
constexpr uintptr_t CExoCriticalSection__LeaveCriticalSection = 0x082C8F4C;

// public CExoCriticalSectionInternal::CExoCriticalSectionInternal(void)
constexpr uintptr_t CExoCriticalSectionInternal__CExoCriticalSectionInternalCtor = 0x082CEC40;
// public CExoCriticalSectionInternal::~CExoCriticalSectionInternal(void)
constexpr uintptr_t CExoCriticalSectionInternal__CExoCriticalSectionInternalDtor = 0x082CEC70;
// void CExoCriticalSectionInternal::EnterCriticalSection(void)
constexpr uintptr_t CExoCriticalSectionInternal__EnterCriticalSection = 0x082CECA4;
// void CExoCriticalSectionInternal::LeaveCriticalSection(void)
constexpr uintptr_t CExoCriticalSectionInternal__LeaveCriticalSection = 0x082CECB8;

// public CExoDebug::CExoDebug(void)
constexpr uintptr_t CExoDebug__CExoDebugCtor = 0x082C8F78;
// public CExoDebug::~CExoDebug(void)
constexpr uintptr_t CExoDebug__CExoDebugDtor = 0x082C8FF0;
// void CExoDebug::Assert(int32_t, char*, const char*)
constexpr uintptr_t CExoDebug__Assert = 0x082C904C;
// void CExoDebug::CloseLogFiles(void)
constexpr uintptr_t CExoDebug__CloseLogFiles = 0x082C9084;
// void CExoDebug::FlushErrorFile(void)
constexpr uintptr_t CExoDebug__FlushErrorFile = 0x082C90A4;
// public void CExoDebug::FlushLogFile(void)
constexpr uintptr_t CExoDebug__FlushLogFile = 0x082C90AC;
// void CExoDebug::GetCurrentAllocatedMemory(void)
constexpr uintptr_t CExoDebug__GetCurrentAllocatedMemory = 0x082C90CC;
// void CExoDebug::GetCurrentMemoryAllocations(void)
constexpr uintptr_t CExoDebug__GetCurrentMemoryAllocations = 0x082C90E4;
// public void CExoDebug::GetCurrentTimestamp(CExoString&)
constexpr uintptr_t CExoDebug__GetCurrentTimestamp = 0x082C9198;
// void CExoDebug::GetMaxAllocatedMemory(void)
constexpr uintptr_t CExoDebug__GetMaxAllocatedMemory = 0x082C90D4;
// void CExoDebug::GetTotalMemoryAllocations(void)
constexpr uintptr_t CExoDebug__GetTotalMemoryAllocations = 0x082C90DC;
// void CExoDebug::NoLog(...)
constexpr uintptr_t CExoDebug__NoLog = 0x08094078;
// public void CExoDebug::OpenLogFiles(CExoString, int32_t)
constexpr uintptr_t CExoDebug__OpenLogFiles = 0x082C90EC;
// public void CExoDebug::SetRotateLogFile(int32_t)
constexpr uintptr_t CExoDebug__SetRotateLogFile = 0x082C91BC;
// public void CExoDebug::Warning(int32_t, char*, const char*)
constexpr uintptr_t CExoDebug__Warning = 0x082C9164;
// public void CExoDebug::WriteToErrorFile(const CExoString&)
constexpr uintptr_t CExoDebug__WriteToErrorFile = 0x082C916C;
// public void CExoDebug::WriteToLogFile(const CExoString&)
constexpr uintptr_t CExoDebug__WriteToLogFile = 0x082C9174;

// public CExoDebugInternal::CExoDebugInternal(void)
constexpr uintptr_t CExoDebugInternal__CExoDebugInternalCtor = 0x082CFB1C;
// public CExoDebugInternal::~CExoDebugInternal(void)
constexpr uintptr_t CExoDebugInternal__CExoDebugInternalDtor = 0x082CFB78;
// void CExoDebugInternal::Assert(int32_t, char*, const char*)
constexpr uintptr_t CExoDebugInternal__Assert = 0x082CFBB8;
// public void CExoDebugInternal::CloseLogFiles(void)
constexpr uintptr_t CExoDebugInternal__CloseLogFiles = 0x082CFC44;
// void CExoDebugInternal::CreateDirectory(CExoString)
constexpr uintptr_t CExoDebugInternal__CreateDirectory = 0x082CF9CC;
// void CExoDebugInternal::FlushErrorFile(void)
constexpr uintptr_t CExoDebugInternal__FlushErrorFile = 0x082CFC9C;
// void CExoDebugInternal::FlushLogFile(void)
constexpr uintptr_t CExoDebugInternal__FlushLogFile = 0x082CFCBC;
// public void CExoDebugInternal::GetCurrentTimestamp(CExoString&)
constexpr uintptr_t CExoDebugInternal__GetCurrentTimestamp = 0x082CFD78;
// public void CExoDebugInternal::OpenLogFiles(CExoString, int32_t)
constexpr uintptr_t CExoDebugInternal__OpenLogFiles = 0x082CECCC;
// void CExoDebugInternal::Warning(int32_t, char*, const char*)
constexpr uintptr_t CExoDebugInternal__Warning = 0x082CFCDC;
// void CExoDebugInternal::WriteToErrorFile(const CExoString&)
constexpr uintptr_t CExoDebugInternal__WriteToErrorFile = 0x082CF4CC;
// public void CExoDebugInternal::WriteToLogFile(const CExoString&)
constexpr uintptr_t CExoDebugInternal__WriteToLogFile = 0x082CF764;

// CExoEncapsulatedFile::CExoEncapsulatedFile(void)
constexpr uintptr_t CExoEncapsulatedFile__CExoEncapsulatedFileCtor = 0x082C2F80;
// public CExoEncapsulatedFile::~CExoEncapsulatedFile(void)
constexpr uintptr_t CExoEncapsulatedFile__CExoEncapsulatedFileDtor = 0x082C4A38;
// public void CExoEncapsulatedFile::AddAsyncRefCount(void)
constexpr uintptr_t CExoEncapsulatedFile__AddAsyncRefCount = 0x082C4AC0;
// public void CExoEncapsulatedFile::AddRefCount(void)
constexpr uintptr_t CExoEncapsulatedFile__AddRefCount = 0x082C4A90;
// void CExoEncapsulatedFile::CloseAsyncFile(void)
constexpr uintptr_t CExoEncapsulatedFile__CloseAsyncFile = 0x082C4B30;
// public int32_t CExoEncapsulatedFile::CloseFile(void)
constexpr uintptr_t CExoEncapsulatedFile__CloseFile = 0x082C4AF0;
// public void CExoEncapsulatedFile::DeleteAsyncRefCount(void)
constexpr uintptr_t CExoEncapsulatedFile__DeleteAsyncRefCount = 0x082C4C04;
// void CExoEncapsulatedFile::DeleteRefCount(void)
constexpr uintptr_t CExoEncapsulatedFile__DeleteRefCount = 0x082C4BD4;
// void CExoEncapsulatedFile::GetDescription(void)
constexpr uintptr_t CExoEncapsulatedFile__GetDescription = 0x082C5124;
// public uint32_t CExoEncapsulatedFile::GetResourceSize(uint32_t)
constexpr uintptr_t CExoEncapsulatedFile__GetResourceSize = 0x082C4C34;
// public int32_t CExoEncapsulatedFile::Initialize(void)
constexpr uintptr_t CExoEncapsulatedFile__Initialize = 0x082C4C4C;
// public int32_t CExoEncapsulatedFile::LoadHeader(unsigned char)
constexpr uintptr_t CExoEncapsulatedFile__LoadHeader = 0x082C3688;
// public int32_t CExoEncapsulatedFile::OpenAsyncFile(void)
constexpr uintptr_t CExoEncapsulatedFile__OpenAsyncFile = 0x082C334C;
// public int32_t CExoEncapsulatedFile::OpenFile(void)
constexpr uintptr_t CExoEncapsulatedFile__OpenFile__0 = 0x082C3010;
// public int32_t CExoEncapsulatedFile::OpenFile(unsigned char*)
constexpr uintptr_t CExoEncapsulatedFile__OpenFile__1 = 0x082C4CA4;
// public uint32_t CExoEncapsulatedFile::ReadResource(uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CExoEncapsulatedFile__ReadResource = 0x082C4CBC;
// public void CExoEncapsulatedFile::ReadResourceAsync(uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CExoEncapsulatedFile__ReadResourceAsync = 0x082C4D3C;
// public int32_t CExoEncapsulatedFile::UnloadHeader(void)
constexpr uintptr_t CExoEncapsulatedFile__UnloadHeader = 0x082C4B70;

// public CExoString CExoEncrypt::EncryptString(const CExoString&)
constexpr uintptr_t CExoEncrypt__EncryptString = 0x082C91D4;
// public CExoString CExoEncrypt::GenerateChallenge(uint16_t)
constexpr uintptr_t CExoEncrypt__GenerateChallenge = 0x082C92B0;

// public CExoFile::CExoFile(const CExoString&, uint16_t, const CExoString&)
constexpr uintptr_t CExoFile__CExoFileCtor__1 = 0x082C94C0;
// public CExoFile::~CExoFile(void)
constexpr uintptr_t CExoFile__CExoFileDtor = 0x082C9518;
// void CExoFile::Eof(void)
constexpr uintptr_t CExoFile__Eof = 0x082C9558;
// public int32_t CExoFile::FileOpened(void)
constexpr uintptr_t CExoFile__FileOpened = 0x082C957C;
// public int32_t CExoFile::Flush(void)
constexpr uintptr_t CExoFile__Flush = 0x082C9590;
// public uint32_t CExoFile::GetOffset(void)
constexpr uintptr_t CExoFile__GetOffset = 0x082C95BC;
// public int32_t CExoFile::GetSize(void)
constexpr uintptr_t CExoFile__GetSize = 0x082C95D0;
// public uint32_t CExoFile::Read(void*, uint32_t, uint32_t)
constexpr uintptr_t CExoFile__Read__0 = 0x082C95E4;
// public uint32_t CExoFile::Read(CExoString&, uint32_t)
constexpr uintptr_t CExoFile__Read__1 = 0x082C9614;
// public void CExoFile::ReadAsync(void*, uint32_t, uint32_t)
constexpr uintptr_t CExoFile__ReadAsync = 0x082C9628;
// void CExoFile::ReadAsyncBytesRead(void)
constexpr uintptr_t CExoFile__ReadAsyncBytesRead = 0x082C9654;
// public int32_t CExoFile::ReadAsyncComplete(void)
constexpr uintptr_t CExoFile__ReadAsyncComplete = 0x082C9640;
// void CExoFile::ReadStringLineFromBuffer(unsigned char**, uint32_t*, unsigned char*, uint32_t)
constexpr uintptr_t CExoFile__ReadStringLineFromBuffer = 0x082C9780;
// public int32_t CExoFile::Seek(int32_t, int32_t)
constexpr uintptr_t CExoFile__Seek = 0x082C96EC;
// public int32_t CExoFile::SeekBeginning(void)
constexpr uintptr_t CExoFile__SeekBeginning = 0x082C9720;
// public int32_t CExoFile::SeekEnd(void)
constexpr uintptr_t CExoFile__SeekEnd = 0x082C9750;
// public uint32_t CExoFile::Write(const void*, uint32_t, uint32_t)
constexpr uintptr_t CExoFile__Write__0 = 0x082C9668;
// public uint32_t CExoFile::Write(const char*)
constexpr uintptr_t CExoFile__Write__1 = 0x082C9698;
// public uint32_t CExoFile::Write(const CExoString&)
constexpr uintptr_t CExoFile__Write__2 = 0x082C96AC;

// public CExoFileInternal::CExoFileInternal(const CExoString&, uint16_t, const CExoString&)
constexpr uintptr_t CExoFileInternal__CExoFileInternalCtor__1 = 0x082D0868;
// public CExoFileInternal::~CExoFileInternal(void)
constexpr uintptr_t CExoFileInternal__CExoFileInternalDtor = 0x082D092C;
// void CExoFileInternal::GetOffset(void)
constexpr uintptr_t CExoFileInternal__GetOffset = 0x082D096C;
// void CExoFileInternal::GetSize(void)
constexpr uintptr_t CExoFileInternal__GetSize = 0x082D0988;
// public uint32_t CExoFileInternal::Read(CExoString*, uint32_t)
constexpr uintptr_t CExoFileInternal__Read = 0x082D09F0;
// public void CExoFileInternal::ReadAsync(void*, uint32_t, uint32_t)
constexpr uintptr_t CExoFileInternal__ReadAsync = 0x082D0A54;
// void CExoFileInternal::ReadAsyncBytesRead(void)
constexpr uintptr_t CExoFileInternal__ReadAsyncBytesRead = 0x082D0ADC;
// void CExoFileInternal::ReadAsyncComplete(void)
constexpr uintptr_t CExoFileInternal__ReadAsyncComplete = 0x082D0AD0;
// void CExoFileInternal::Write(const char*)
constexpr uintptr_t CExoFileInternal__Write = 0x082D0AE8;

// public CExoFileThread::CExoFileThread(void)
constexpr uintptr_t CExoFileThread__CExoFileThreadCtor = 0x082CFDBC;
// void CExoFileThread::AsyncRead(void)
constexpr uintptr_t CExoFileThread__AsyncRead = 0x082D05E4;
// void CExoFileThread::Read(void*, uint32_t, uint32_t, _IO_FILE*)
constexpr uintptr_t CExoFileThread__Read = 0x082D0654;

// public CExoIni::CExoIni(void)
constexpr uintptr_t CExoIni__CExoIniCtor = 0x082C97F8;
// CExoIni::~CExoIni(void)
constexpr uintptr_t CExoIni__CExoIniDtor = 0x082C9840;
// public int32_t CExoIni::ReadIniEntry(CExoString&, const CExoString&, const CExoString&, const CExoString&)
constexpr uintptr_t CExoIni__ReadIniEntry = 0x082C987C;
// public int32_t CExoIni::WriteIniEntry(const CExoString&, const CExoString&, const CExoString&, const CExoString&)
constexpr uintptr_t CExoIni__WriteIniEntry = 0x082C9894;

// public CExoIniInternal::CExoIniInternal(void)
constexpr uintptr_t CExoIniInternal__CExoIniInternalCtor = 0x082D0B50;
// CExoIniInternal::~CExoIniInternal(void)
constexpr uintptr_t CExoIniInternal__CExoIniInternalDtor = 0x082D0B58;
// public int32_t CExoIniInternal::ReadIniEntry(CExoString&, const CExoString&, const CExoString&, const CExoString&)
constexpr uintptr_t CExoIniInternal__ReadIniEntry = 0x082D0B74;
// public int32_t CExoIniInternal::WriteIniEntry(const CExoString&, const CExoString&, const CExoString&, const CExoString&)
constexpr uintptr_t CExoIniInternal__WriteIniEntry = 0x082D0BE4;

// public CExoKeyTable::CExoKeyTable(void)
constexpr uintptr_t CExoKeyTable__CExoKeyTableCtor = 0x082BF930;
// public CExoKeyTable::~CExoKeyTable(void)
constexpr uintptr_t CExoKeyTable__CExoKeyTableDtor = 0x082BFA18;
// public int32_t CExoKeyTable::AddDirectoryContents(int32_t)
constexpr uintptr_t CExoKeyTable__AddDirectoryContents = 0x082BFB1C;
// public int32_t CExoKeyTable::AddEncapsulatedContents(int32_t)
constexpr uintptr_t CExoKeyTable__AddEncapsulatedContents = 0x082BFD04;
// public CKeyTableEntry* CExoKeyTable::AddKey(const CResRef&, uint16_t, uint32_t, int32_t)
constexpr uintptr_t CExoKeyTable__AddKey = 0x082C0AAC;
// public int32_t CExoKeyTable::AddKeyTableContents(int32_t)
constexpr uintptr_t CExoKeyTable__AddKeyTableContents = 0x082C0D5C;
// public int32_t CExoKeyTable::AddResourceImageContents(int32_t, unsigned char*)
constexpr uintptr_t CExoKeyTable__AddResourceImageContents = 0x082C084C;
// void CExoKeyTable::AllocateTable(uint32_t, int32_t)
constexpr uintptr_t CExoKeyTable__AllocateTable = 0x082C2038;
// public int32_t CExoKeyTable::BuildNewTable(uint32_t, const CExoString&, uint32_t, int32_t, unsigned char*)
constexpr uintptr_t CExoKeyTable__BuildNewTable = 0x082C42F8;
// void CExoKeyTable::DeleteTableList(CExoLinkedListTemplatedCKeyTableInfo*)
constexpr uintptr_t CExoKeyTable__DeleteTableList = 0x082C4400;
// public void CExoKeyTable::DestroyTable(void)
constexpr uintptr_t CExoKeyTable__DestroyTable = 0x082C21DC;
// public CKeyTableEntry* CExoKeyTable::FindKey(const CResRef&, uint16_t)
constexpr uintptr_t CExoKeyTable__FindKey__0 = 0x082C23F4;
// public CKeyTableEntry* CExoKeyTable::FindKey(CRes*)
constexpr uintptr_t CExoKeyTable__FindKey__1 = 0x082C4484;
// public int32_t CExoKeyTable::GetEntryCount(int32_t)
constexpr uintptr_t CExoKeyTable__GetEntryCount = 0x082C4288;
// public CExoStringList* CExoKeyTable::GetKeysOfType(uint16_t)
constexpr uintptr_t CExoKeyTable__GetKeysOfType = 0x082C2500;
// void CExoKeyTable::GetRes(const CResRef&, uint16_t)
constexpr uintptr_t CExoKeyTable__GetRes = 0x082C44B4;
// void CExoKeyTable::GetResID(const CResRef&, uint16_t)
constexpr uintptr_t CExoKeyTable__GetResID = 0x082C44DC;
// void CExoKeyTable::GetTableEntry(uint32_t, CResRef&, uint16_t&)
constexpr uintptr_t CExoKeyTable__GetTableEntry = 0x082C4508;
// void CExoKeyTable::GetTableIndex(uint32_t&, const CResRef&, uint16_t)
constexpr uintptr_t CExoKeyTable__GetTableIndex = 0x082C455C;
// void CExoKeyTable::Hash(const CResRef&, uint16_t)
constexpr uintptr_t CExoKeyTable__Hash = 0x082C45CC;
// public int32_t CExoKeyTable::LocateBifFile(const CExoString&)
constexpr uintptr_t CExoKeyTable__LocateBifFile = 0x082C20FC;
// public void CExoKeyTable::RebuildTable(unsigned char*)
constexpr uintptr_t CExoKeyTable__RebuildTable = 0x082C2640;

// public CExoLinkedListInternal::~CExoLinkedListInternal(void)
constexpr uintptr_t CExoLinkedListInternal__CExoLinkedListInternalDtor = 0x082C98AC;
// public CExoLinkedListNode* CExoLinkedListInternal::AddAfter(void*, CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListInternal__AddAfter = 0x082C99A0;
// public CExoLinkedListNode* CExoLinkedListInternal::AddBefore(void*, CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListInternal__AddBefore = 0x082C9A30;
// public CExoLinkedListNode* CExoLinkedListInternal::AddHead(void*)
constexpr uintptr_t CExoLinkedListInternal__AddHead = 0x082C98F8;
// public CExoLinkedListNode* CExoLinkedListInternal::AddTail(void*)
constexpr uintptr_t CExoLinkedListInternal__AddTail = 0x082C994C;
// public void* CExoLinkedListInternal::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListInternal__GetAtPos = 0x082C9AB4;
// public void* CExoLinkedListInternal::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListInternal__GetNext = 0x082C9AEC;
// public void* CExoLinkedListInternal::GetPrev(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListInternal__GetPrev = 0x082C9B3C;
// public void* CExoLinkedListInternal::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListInternal__Remove = 0x082C9B88;
// public void* CExoLinkedListInternal::RemoveHead(void)
constexpr uintptr_t CExoLinkedListInternal__RemoveHead = 0x082C9BFC;
// public void* CExoLinkedListInternal::RemoveTail(void)
constexpr uintptr_t CExoLinkedListInternal__RemoveTail = 0x082C9C68;

// CExoLinkedListTemplatedC2DA::CExoLinkedListTemplatedC2DA(void)
constexpr uintptr_t CExoLinkedListTemplatedC2DA__CExoLinkedListTemplatedC2DACtor = 0x080B9AE8;
// void CExoLinkedListTemplatedC2DA::AddHead(C2DA*)
constexpr uintptr_t CExoLinkedListTemplatedC2DA__AddHead = 0x080B9B4C;
// void CExoLinkedListTemplatedC2DA::Count(void)
constexpr uintptr_t CExoLinkedListTemplatedC2DA__Count = 0x080B9B9C;
// void CExoLinkedListTemplatedC2DA::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedC2DA__GetAtPos = 0x080B9B24;
// void CExoLinkedListTemplatedC2DA::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedC2DA__GetHeadPos = 0x080B9B18;
// void CExoLinkedListTemplatedC2DA::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedC2DA__GetNext = 0x080B9B60;
// void CExoLinkedListTemplatedC2DA::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedC2DA__IsEmpty = 0x080B9B74;
// void CExoLinkedListTemplatedC2DA::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedC2DA__Remove = 0x080B9B38;
// void CExoLinkedListTemplatedC2DA::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedC2DA__RemoveHead = 0x080B9B88;
// void CExoLinkedListTemplatedC2DA::RemoveTail(void)
constexpr uintptr_t CExoLinkedListTemplatedC2DA__RemoveTail = 0x080B9BAC;

// CExoLinkedListTemplatedCERFKey::CExoLinkedListTemplatedCERFKey(void)
constexpr uintptr_t CExoLinkedListTemplatedCERFKey__CExoLinkedListTemplatedCERFKeyCtor__0 = 0x082B8120;
// void CExoLinkedListTemplatedCERFKey::AddTail(CERFKey*)
constexpr uintptr_t CExoLinkedListTemplatedCERFKey__AddTail = 0x082B8204;
// void CExoLinkedListTemplatedCERFKey::Count(void)
constexpr uintptr_t CExoLinkedListTemplatedCERFKey__Count = 0x082B8324;
// void CExoLinkedListTemplatedCERFKey::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCERFKey__GetAtPos = 0x082B8238;
// void CExoLinkedListTemplatedCERFKey::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCERFKey__GetHeadPos = 0x082B822C;
// void CExoLinkedListTemplatedCERFKey::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCERFKey__GetNext = 0x082B82F4;
// void CExoLinkedListTemplatedCERFKey::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedCERFKey__IsEmpty = 0x082B81B4;
// void CExoLinkedListTemplatedCERFKey::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCERFKey__Remove = 0x082B8260;
// void CExoLinkedListTemplatedCERFKey::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCERFKey__RemoveHead = 0x082B81C8;

// CExoLinkedListTemplatedCERFRes::CExoLinkedListTemplatedCERFRes(void)
constexpr uintptr_t CExoLinkedListTemplatedCERFRes__CExoLinkedListTemplatedCERFResCtor__0 = 0x082B8334;
// void CExoLinkedListTemplatedCERFRes::AddTail(CERFRes*)
constexpr uintptr_t CExoLinkedListTemplatedCERFRes__AddTail = 0x082B8218;
// void CExoLinkedListTemplatedCERFRes::Count(void)
constexpr uintptr_t CExoLinkedListTemplatedCERFRes__Count = 0x082B8308;
// void CExoLinkedListTemplatedCERFRes::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCERFRes__GetAtPos = 0x082B824C;
// void CExoLinkedListTemplatedCERFRes::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCERFRes__GetHeadPos = 0x082B8318;
// void CExoLinkedListTemplatedCERFRes::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCERFRes__GetNext = 0x082B8288;
// void CExoLinkedListTemplatedCERFRes::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedCERFRes__IsEmpty = 0x082B81DC;
// void CExoLinkedListTemplatedCERFRes::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCERFRes__Remove = 0x082B8274;
// void CExoLinkedListTemplatedCERFRes::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCERFRes__RemoveHead = 0x082B81F0;

// CExoLinkedListTemplatedCERFString::CExoLinkedListTemplatedCERFString(void)
constexpr uintptr_t CExoLinkedListTemplatedCERFString__CExoLinkedListTemplatedCERFStringCtor__0 = 0x082B80B4;
// void CExoLinkedListTemplatedCERFString::AddTail(CERFString*)
constexpr uintptr_t CExoLinkedListTemplatedCERFString__AddTail = 0x082B829C;
// void CExoLinkedListTemplatedCERFString::Count(void)
constexpr uintptr_t CExoLinkedListTemplatedCERFString__Count = 0x082B82B0;
// void CExoLinkedListTemplatedCERFString::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCERFString__GetAtPos = 0x082B82CC;
// void CExoLinkedListTemplatedCERFString::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCERFString__GetHeadPos = 0x082B82C0;
// void CExoLinkedListTemplatedCERFString::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCERFString__GetNext = 0x082B82E0;
// void CExoLinkedListTemplatedCERFString::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedCERFString__IsEmpty = 0x082B818C;
// void CExoLinkedListTemplatedCERFString::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCERFString__RemoveHead = 0x082B81A0;

// CExoLinkedListTemplatedCExoKeyTable::CExoLinkedListTemplatedCExoKeyTable(void)
constexpr uintptr_t CExoLinkedListTemplatedCExoKeyTable__CExoLinkedListTemplatedCExoKeyTableCtor__0 = 0x082B4048;
// void CExoLinkedListTemplatedCExoKeyTable::AddHead(CExoKeyTable*)
constexpr uintptr_t CExoLinkedListTemplatedCExoKeyTable__AddHead = 0x082B4190;
// void CExoLinkedListTemplatedCExoKeyTable::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCExoKeyTable__GetAtPos = 0x082B4130;
// void CExoLinkedListTemplatedCExoKeyTable::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCExoKeyTable__GetHeadPos = 0x082B4124;
// void CExoLinkedListTemplatedCExoKeyTable::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCExoKeyTable__GetNext = 0x082B4144;
// void CExoLinkedListTemplatedCExoKeyTable::GetPrev(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCExoKeyTable__GetPrev = 0x082B417C;
// void CExoLinkedListTemplatedCExoKeyTable::GetTailPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCExoKeyTable__GetTailPos = 0x082B4158;
// void CExoLinkedListTemplatedCExoKeyTable::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCExoKeyTable__Remove = 0x082B4168;

// CExoLinkedListTemplatedCExoString::CExoLinkedListTemplatedCExoString(void)
constexpr uintptr_t CExoLinkedListTemplatedCExoString__CExoLinkedListTemplatedCExoStringCtor__0 = 0x081F5C4C;
// void CExoLinkedListTemplatedCExoString::AddTail(CExoString*)
constexpr uintptr_t CExoLinkedListTemplatedCExoString__AddTail = 0x081F5CB0;
// void CExoLinkedListTemplatedCExoString::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCExoString__GetAtPos = 0x082ACF78;
// void CExoLinkedListTemplatedCExoString::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCExoString__GetHeadPos = 0x082ACF6C;
// void CExoLinkedListTemplatedCExoString::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCExoString__GetNext = 0x082ACF8C;
// void CExoLinkedListTemplatedCExoString::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedCExoString__IsEmpty = 0x081F5C88;
// void CExoLinkedListTemplatedCExoString::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCExoString__Remove = 0x082ACFA0;
// void CExoLinkedListTemplatedCExoString::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCExoString__RemoveHead = 0x081F5C9C;

// CExoLinkedListTemplatedCKeyTableInfo::CExoLinkedListTemplatedCKeyTableInfo(void)
constexpr uintptr_t CExoLinkedListTemplatedCKeyTableInfo__CExoLinkedListTemplatedCKeyTableInfoCtor__0 = 0x082C51B0;
// void CExoLinkedListTemplatedCKeyTableInfo::AddTail(CKeyTableInfo*)
constexpr uintptr_t CExoLinkedListTemplatedCKeyTableInfo__AddTail = 0x082C51EC;
// void CExoLinkedListTemplatedCKeyTableInfo::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCKeyTableInfo__GetAtPos = 0x082C520C;
// void CExoLinkedListTemplatedCKeyTableInfo::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCKeyTableInfo__GetHeadPos = 0x082C5200;
// void CExoLinkedListTemplatedCKeyTableInfo::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCKeyTableInfo__RemoveHead = 0x082C5220;

// CExoLinkedListTemplatedCLastUpdateObject::CExoLinkedListTemplatedCLastUpdateObject(void)
constexpr uintptr_t CExoLinkedListTemplatedCLastUpdateObject__CExoLinkedListTemplatedCLastUpdateObjectCtor__0 = 0x0805F1D0;
// void CExoLinkedListTemplatedCLastUpdateObject::AddHead(CLastUpdateObject*)
constexpr uintptr_t CExoLinkedListTemplatedCLastUpdateObject__AddHead = 0x0808306C;
// void CExoLinkedListTemplatedCLastUpdateObject::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCLastUpdateObject__GetAtPos = 0x0805F528;
// void CExoLinkedListTemplatedCLastUpdateObject::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCLastUpdateObject__GetHeadPos = 0x0805F51C;
// void CExoLinkedListTemplatedCLastUpdateObject::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCLastUpdateObject__GetNext = 0x0805F53C;
// void CExoLinkedListTemplatedCLastUpdateObject::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedCLastUpdateObject__IsEmpty = 0x0805F1A8;
// void CExoLinkedListTemplatedCLastUpdateObject::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCLastUpdateObject__Remove = 0x08083080;
// void CExoLinkedListTemplatedCLastUpdateObject::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCLastUpdateObject__RemoveHead = 0x0805F1BC;

// CExoLinkedListTemplatedCLastUpdatePartyObject::CExoLinkedListTemplatedCLastUpdatePartyObject(void)
constexpr uintptr_t CExoLinkedListTemplatedCLastUpdatePartyObject__CExoLinkedListTemplatedCLastUpdatePartyObjectCtor__0 = 0x0805F16C;
// void CExoLinkedListTemplatedCLastUpdatePartyObject::AddHead(CLastUpdatePartyObject*)
constexpr uintptr_t CExoLinkedListTemplatedCLastUpdatePartyObject__AddHead = 0x08083330;
// void CExoLinkedListTemplatedCLastUpdatePartyObject::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCLastUpdatePartyObject__GetAtPos = 0x0808331C;
// void CExoLinkedListTemplatedCLastUpdatePartyObject::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCLastUpdatePartyObject__GetHeadPos = 0x08083310;
// void CExoLinkedListTemplatedCLastUpdatePartyObject::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCLastUpdatePartyObject__GetNext = 0x08083344;
// void CExoLinkedListTemplatedCLastUpdatePartyObject::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCLastUpdatePartyObject__Remove = 0x08083358;

// CExoLinkedListTemplatedCLinuxFileKey::CExoLinkedListTemplatedCLinuxFileKey(void)
constexpr uintptr_t CExoLinkedListTemplatedCLinuxFileKey__CExoLinkedListTemplatedCLinuxFileKeyCtor__0 = 0x082D31CC;
// void CExoLinkedListTemplatedCLinuxFileKey::AddHead(CLinuxFileKey*)
constexpr uintptr_t CExoLinkedListTemplatedCLinuxFileKey__AddHead = 0x082D32A0;
// void CExoLinkedListTemplatedCLinuxFileKey::AddTail(CLinuxFileKey*)
constexpr uintptr_t CExoLinkedListTemplatedCLinuxFileKey__AddTail = 0x082D321C;
// void CExoLinkedListTemplatedCLinuxFileKey::GetHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCLinuxFileKey__GetHead = 0x082D3268;
// void CExoLinkedListTemplatedCLinuxFileKey::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCLinuxFileKey__GetHeadPos = 0x082D3280;
// void CExoLinkedListTemplatedCLinuxFileKey::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCLinuxFileKey__GetNext = 0x082D328C;
// void CExoLinkedListTemplatedCLinuxFileKey::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedCLinuxFileKey__IsEmpty = 0x082D32C8;
// void CExoLinkedListTemplatedCLinuxFileKey::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCLinuxFileKey__Remove = 0x082D32B4;
// void CExoLinkedListTemplatedCLinuxFileKey::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCLinuxFileKey__RemoveHead = 0x082D32DC;

// CExoLinkedListTemplatedCLinuxFileSection::CExoLinkedListTemplatedCLinuxFileSection(void)
constexpr uintptr_t CExoLinkedListTemplatedCLinuxFileSection__CExoLinkedListTemplatedCLinuxFileSectionCtor__0 = 0x082D335C;
// void CExoLinkedListTemplatedCLinuxFileSection::AddTail(CLinuxFileSection*)
constexpr uintptr_t CExoLinkedListTemplatedCLinuxFileSection__AddTail = 0x082D3208;
// void CExoLinkedListTemplatedCLinuxFileSection::GetHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCLinuxFileSection__GetHead = 0x082D3230;
// void CExoLinkedListTemplatedCLinuxFileSection::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCLinuxFileSection__GetHeadPos = 0x082D3248;
// void CExoLinkedListTemplatedCLinuxFileSection::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCLinuxFileSection__GetNext = 0x082D3254;
// void CExoLinkedListTemplatedCLinuxFileSection::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedCLinuxFileSection__IsEmpty = 0x082D3304;
// void CExoLinkedListTemplatedCLinuxFileSection::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCLinuxFileSection__Remove = 0x082D32F0;
// void CExoLinkedListTemplatedCLinuxFileSection::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCLinuxFileSection__RemoveHead = 0x082D3318;

// CExoLinkedListTemplatedCNWSClient::CExoLinkedListTemplatedCNWSClient(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSClient__CExoLinkedListTemplatedCNWSClientCtor__0 = 0x080B14B8;
// void CExoLinkedListTemplatedCNWSClient::AddHead(CNWSClient*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSClient__AddHead = 0x080B1648;
// void CExoLinkedListTemplatedCNWSClient::Count(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSClient__Count = 0x080B1638;
// void CExoLinkedListTemplatedCNWSClient::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSClient__GetAtPos = 0x0805F380;
// void CExoLinkedListTemplatedCNWSClient::GetHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSClient__GetHead = 0x08082ED8;
// void CExoLinkedListTemplatedCNWSClient::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSClient__GetHeadPos = 0x0805F374;
// void CExoLinkedListTemplatedCNWSClient::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSClient__GetNext = 0x0805F394;
// void CExoLinkedListTemplatedCNWSClient::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSClient__IsEmpty = 0x080B1490;
// void CExoLinkedListTemplatedCNWSClient::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSClient__Remove = 0x080B165C;
// void CExoLinkedListTemplatedCNWSClient::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSClient__RemoveHead = 0x080B14A4;

// CExoLinkedListTemplatedCNWSCombatRoundAction::CExoLinkedListTemplatedCNWSCombatRoundAction(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSCombatRoundAction__CExoLinkedListTemplatedCNWSCombatRoundActionCtor__0 = 0x080E5740;
// void CExoLinkedListTemplatedCNWSCombatRoundAction::AddBefore(CNWSCombatRoundAction*, CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSCombatRoundAction__AddBefore = 0x080E57DC;
// void CExoLinkedListTemplatedCNWSCombatRoundAction::AddTail(CNWSCombatRoundAction*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSCombatRoundAction__AddTail = 0x080E57F0;
// void CExoLinkedListTemplatedCNWSCombatRoundAction::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSCombatRoundAction__GetAtPos = 0x080E57C8;
// void CExoLinkedListTemplatedCNWSCombatRoundAction::GetHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSCombatRoundAction__GetHead = 0x080E5788;
// void CExoLinkedListTemplatedCNWSCombatRoundAction::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSCombatRoundAction__GetHeadPos = 0x080E577C;
// void CExoLinkedListTemplatedCNWSCombatRoundAction::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSCombatRoundAction__GetNext = 0x080E57A0;
// void CExoLinkedListTemplatedCNWSCombatRoundAction::GetPrev(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSCombatRoundAction__GetPrev = 0x0813F144;
// void CExoLinkedListTemplatedCNWSCombatRoundAction::GetTailPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSCombatRoundAction__GetTailPos = 0x0813F134;
// void CExoLinkedListTemplatedCNWSCombatRoundAction::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSCombatRoundAction__IsEmpty = 0x080E5718;
// void CExoLinkedListTemplatedCNWSCombatRoundAction::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSCombatRoundAction__Remove = 0x080E57B4;
// void CExoLinkedListTemplatedCNWSCombatRoundAction::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSCombatRoundAction__RemoveHead = 0x080E572C;

// CExoLinkedListTemplatedCNWSDialogPlayer::CExoLinkedListTemplatedCNWSDialogPlayer(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSDialogPlayer__CExoLinkedListTemplatedCNWSDialogPlayerCtor__0 = 0x081D6328;
// void CExoLinkedListTemplatedCNWSDialogPlayer::AddTail(CNWSDialogPlayer*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSDialogPlayer__AddTail = 0x081D6364;
// public uint32_t CExoLinkedListTemplatedCNWSDialogPlayer::Count(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSDialogPlayer__Count = 0x0823E70C;
// void CExoLinkedListTemplatedCNWSDialogPlayer::GetHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSDialogPlayer__GetHead = 0x0823E6F4;
// void CExoLinkedListTemplatedCNWSDialogPlayer::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSDialogPlayer__GetHeadPos = 0x0823E6E8;
// void CExoLinkedListTemplatedCNWSDialogPlayer::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSDialogPlayer__GetNext = 0x0823E730;
// void CExoLinkedListTemplatedCNWSDialogPlayer::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSDialogPlayer__IsEmpty = 0x081C86C0;
// void CExoLinkedListTemplatedCNWSDialogPlayer::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSDialogPlayer__Remove = 0x0823E71C;
// void CExoLinkedListTemplatedCNWSDialogPlayer::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSDialogPlayer__RemoveHead = 0x0823E6D4;

// CExoLinkedListTemplatedCNWSObjectActionNode::CExoLinkedListTemplatedCNWSObjectActionNode(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSObjectActionNode__CExoLinkedListTemplatedCNWSObjectActionNodeCtor__0 = 0x081D63A8;
// void CExoLinkedListTemplatedCNWSObjectActionNode::AddBefore(CNWSObjectActionNode*, CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSObjectActionNode__AddBefore = 0x081D65C4;
// void CExoLinkedListTemplatedCNWSObjectActionNode::AddHead(CNWSObjectActionNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSObjectActionNode__AddHead = 0x081C86D4;
// void CExoLinkedListTemplatedCNWSObjectActionNode::AddTail(CNWSObjectActionNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSObjectActionNode__AddTail = 0x081D65B0;
// void CExoLinkedListTemplatedCNWSObjectActionNode::Count(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSObjectActionNode__Count = 0x081C86E8;
// void CExoLinkedListTemplatedCNWSObjectActionNode::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSObjectActionNode__GetAtPos = 0x0813F078;
// void CExoLinkedListTemplatedCNWSObjectActionNode::GetHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSObjectActionNode__GetHead = 0x081139B0;
// void CExoLinkedListTemplatedCNWSObjectActionNode::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSObjectActionNode__GetHeadPos = 0x081139C8;
// void CExoLinkedListTemplatedCNWSObjectActionNode::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSObjectActionNode__GetNext = 0x081139D4;
// void CExoLinkedListTemplatedCNWSObjectActionNode::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSObjectActionNode__IsEmpty = 0x0805F20C;
// void CExoLinkedListTemplatedCNWSObjectActionNode::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSObjectActionNode__Remove = 0x0813F08C;
// void CExoLinkedListTemplatedCNWSObjectActionNode::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSObjectActionNode__RemoveHead = 0x0805F220;

// void CExoLinkedListTemplatedCNWSPlayer::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayer__GetAtPos = 0x08050FE0;
// void CExoLinkedListTemplatedCNWSPlayer::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayer__GetHeadPos = 0x08050FD4;
// void CExoLinkedListTemplatedCNWSPlayer::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayer__GetNext = 0x0805109C;

// CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem::CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem__CExoLinkedListTemplatedCNWSPlayerLUOInventoryItemCtor__0 = 0x081E48E8;
// void CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem::AddHead(CNWSPlayerLUOInventoryItem*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem__AddHead = 0x081E4B00;
// void CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem::Count(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem__Count = 0x081E4AF0;
// void CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem__GetAtPos = 0x081E4924;
// void CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem__GetHeadPos = 0x081E4AAC;
// void CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem__GetNext = 0x081E4AC8;
// void CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem::GetPrev(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem__GetPrev = 0x081E4ADC;
// void CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem::GetTailPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem__GetTailPos = 0x081E4AB8;
// void CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem__IsEmpty = 0x081E4A84;
// void CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem__Remove = 0x081E4938;
// void CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem__RemoveHead = 0x081E4A98;

// void CExoLinkedListTemplatedCNWSPlayerPtr::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerPtr__GetAtPos = 0x0813F164;
// void CExoLinkedListTemplatedCNWSPlayerPtr::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerPtr__GetHeadPos = 0x0813F158;
// void CExoLinkedListTemplatedCNWSPlayerPtr::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerPtr__GetNext = 0x0813F178;

// CExoLinkedListTemplatedCNWSPlayerTURD::CExoLinkedListTemplatedCNWSPlayerTURD(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerTURD__CExoLinkedListTemplatedCNWSPlayerTURDCtor__0 = 0x081C1A90;
// void CExoLinkedListTemplatedCNWSPlayerTURD::AddHead(CNWSPlayerTURD*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerTURD__AddHead = 0x081C1FD8;
// void CExoLinkedListTemplatedCNWSPlayerTURD::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerTURD__GetAtPos = 0x081C1D14;
// void CExoLinkedListTemplatedCNWSPlayerTURD::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerTURD__GetHeadPos = 0x081C1D08;
// void CExoLinkedListTemplatedCNWSPlayerTURD::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerTURD__GetNext = 0x081C1D28;
// void CExoLinkedListTemplatedCNWSPlayerTURD::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCNWSPlayerTURD__Remove = 0x081C1FC4;

// CExoLinkedListTemplatedCRes::CExoLinkedListTemplatedCRes(void)
constexpr uintptr_t CExoLinkedListTemplatedCRes__CExoLinkedListTemplatedCResCtor__0 = 0x082B40B4;
// void CExoLinkedListTemplatedCRes::AddHead(CRes*)
constexpr uintptr_t CExoLinkedListTemplatedCRes__AddHead = 0x082B41E4;
// void CExoLinkedListTemplatedCRes::AddTail(CRes*)
constexpr uintptr_t CExoLinkedListTemplatedCRes__AddTail = 0x082B420C;
// void CExoLinkedListTemplatedCRes::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCRes__GetAtPos = 0x082B40FC;
// void CExoLinkedListTemplatedCRes::GetHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCRes__GetHead = 0x082B41A4;
// void CExoLinkedListTemplatedCRes::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCRes__GetHeadPos = 0x082B40F0;
// void CExoLinkedListTemplatedCRes::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCRes__GetNext = 0x082B41BC;
// void CExoLinkedListTemplatedCRes::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedCRes__IsEmpty = 0x082B41D0;
// void CExoLinkedListTemplatedCRes::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCRes__Remove = 0x082B4110;
// void CExoLinkedListTemplatedCRes::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCRes__RemoveHead = 0x082B41F8;

// CExoLinkedListTemplatedCResRef::CExoLinkedListTemplatedCResRef(void)
constexpr uintptr_t CExoLinkedListTemplatedCResRef__CExoLinkedListTemplatedCResRefCtor__0 = 0x081C19B8;
// void CExoLinkedListTemplatedCResRef::AddTail(CResRef*)
constexpr uintptr_t CExoLinkedListTemplatedCResRef__AddTail = 0x081C1C80;
// void CExoLinkedListTemplatedCResRef::GetHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCResRef__GetHead = 0x081C1CB4;
// void CExoLinkedListTemplatedCResRef::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCResRef__GetHeadPos = 0x081C1CA8;
// void CExoLinkedListTemplatedCResRef::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCResRef__GetNext = 0x081C1CCC;
// void CExoLinkedListTemplatedCResRef::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedCResRef__IsEmpty = 0x081C1CE0;
// void CExoLinkedListTemplatedCResRef::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCResRef__RemoveHead = 0x081C1CF4;

// CExoLinkedListTemplatedCServerAIEventNode::CExoLinkedListTemplatedCServerAIEventNode(void)
constexpr uintptr_t CExoLinkedListTemplatedCServerAIEventNode__CExoLinkedListTemplatedCServerAIEventNodeCtor__0 = 0x08098720;
// void CExoLinkedListTemplatedCServerAIEventNode::AddAfter(CServerAIEventNode*, CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCServerAIEventNode__AddAfter = 0x080987F0;
// void CExoLinkedListTemplatedCServerAIEventNode::AddBefore(CServerAIEventNode*, CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCServerAIEventNode__AddBefore = 0x080987A4;
// void CExoLinkedListTemplatedCServerAIEventNode::AddHead(CServerAIEventNode*)
constexpr uintptr_t CExoLinkedListTemplatedCServerAIEventNode__AddHead = 0x08098818;
// void CExoLinkedListTemplatedCServerAIEventNode::AddTail(CServerAIEventNode*)
constexpr uintptr_t CExoLinkedListTemplatedCServerAIEventNode__AddTail = 0x080987CC;
// void CExoLinkedListTemplatedCServerAIEventNode::Count(void)
constexpr uintptr_t CExoLinkedListTemplatedCServerAIEventNode__Count = 0x08098844;
// void CExoLinkedListTemplatedCServerAIEventNode::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCServerAIEventNode__GetAtPos = 0x08098790;
// void CExoLinkedListTemplatedCServerAIEventNode::GetHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCServerAIEventNode__GetHead = 0x0809882C;
// void CExoLinkedListTemplatedCServerAIEventNode::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCServerAIEventNode__GetHeadPos = 0x08098784;
// void CExoLinkedListTemplatedCServerAIEventNode::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCServerAIEventNode__GetNext = 0x080987B8;
// void CExoLinkedListTemplatedCServerAIEventNode::GetPrev(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedCServerAIEventNode__GetPrev = 0x08098804;
// void CExoLinkedListTemplatedCServerAIEventNode::GetTailPos(void)
constexpr uintptr_t CExoLinkedListTemplatedCServerAIEventNode__GetTailPos = 0x080987E0;
// void CExoLinkedListTemplatedCServerAIEventNode::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedCServerAIEventNode__IsEmpty = 0x0809875C;
// void CExoLinkedListTemplatedCServerAIEventNode::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedCServerAIEventNode__RemoveHead = 0x08098770;

// CExoLinkedListTemplatedExoLocString_st::CExoLinkedListTemplatedExoLocString_st(void)
constexpr uintptr_t CExoLinkedListTemplatedExoLocString_st__CExoLinkedListTemplatedExoLocString_stCtor__0 = 0x082D129C;
// void CExoLinkedListTemplatedExoLocString_st::AddTail(ExoLocString_st*)
constexpr uintptr_t CExoLinkedListTemplatedExoLocString_st__AddTail = 0x082D1258;
// void CExoLinkedListTemplatedExoLocString_st::GetHead(void)
constexpr uintptr_t CExoLinkedListTemplatedExoLocString_st__GetHead = 0x082D122C;
// void CExoLinkedListTemplatedExoLocString_st::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedExoLocString_st__GetHeadPos = 0x082D1220;
// void CExoLinkedListTemplatedExoLocString_st::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedExoLocString_st__GetNext = 0x082D1244;
// void CExoLinkedListTemplatedExoLocString_st::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedExoLocString_st__IsEmpty = 0x082D12D8;
// void CExoLinkedListTemplatedExoLocString_st::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedExoLocString_st__Remove = 0x082D1300;
// void CExoLinkedListTemplatedExoLocString_st::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedExoLocString_st__RemoveHead = 0x082D12EC;

// CExoLinkedListTemplatedNWAreaExpansion_st::CExoLinkedListTemplatedNWAreaExpansion_st(void)
constexpr uintptr_t CExoLinkedListTemplatedNWAreaExpansion_st__CExoLinkedListTemplatedNWAreaExpansion_stCtor__0 = 0x080D5B88;
// void CExoLinkedListTemplatedNWAreaExpansion_st::AddTail(NWAreaExpansion_st*)
constexpr uintptr_t CExoLinkedListTemplatedNWAreaExpansion_st__AddTail = 0x080D5C2C;
// void CExoLinkedListTemplatedNWAreaExpansion_st::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedNWAreaExpansion_st__IsEmpty = 0x080D5C40;
// void CExoLinkedListTemplatedNWAreaExpansion_st::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedNWAreaExpansion_st__RemoveHead = 0x080D5C54;

// CExoLinkedListTemplatedNWModuleCutScene_st::CExoLinkedListTemplatedNWModuleCutScene_st(void)
constexpr uintptr_t CExoLinkedListTemplatedNWModuleCutScene_st__CExoLinkedListTemplatedNWModuleCutScene_stCtor__0 = 0x081C194C;
// void CExoLinkedListTemplatedNWModuleCutScene_st::AddTail(NWModuleCutScene_st*)
constexpr uintptr_t CExoLinkedListTemplatedNWModuleCutScene_st__AddTail = 0x081C1C6C;
// void CExoLinkedListTemplatedNWModuleCutScene_st::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedNWModuleCutScene_st__GetAtPos = 0x081C1D7C;
// void CExoLinkedListTemplatedNWModuleCutScene_st::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedNWModuleCutScene_st__GetHeadPos = 0x081C1D70;
// void CExoLinkedListTemplatedNWModuleCutScene_st::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedNWModuleCutScene_st__GetNext = 0x081C1D90;
// void CExoLinkedListTemplatedNWModuleCutScene_st::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedNWModuleCutScene_st__IsEmpty = 0x081C1C08;
// void CExoLinkedListTemplatedNWModuleCutScene_st::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedNWModuleCutScene_st__RemoveHead = 0x081C1C1C;

// CExoLinkedListTemplatedNWModuleExpansion_st::CExoLinkedListTemplatedNWModuleExpansion_st(void)
constexpr uintptr_t CExoLinkedListTemplatedNWModuleExpansion_st__CExoLinkedListTemplatedNWModuleExpansion_stCtor__0 = 0x081C18E0;
// void CExoLinkedListTemplatedNWModuleExpansion_st::AddTail(NWModuleExpansion_st*)
constexpr uintptr_t CExoLinkedListTemplatedNWModuleExpansion_st__AddTail = 0x081C1C58;
// void CExoLinkedListTemplatedNWModuleExpansion_st::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedNWModuleExpansion_st__GetAtPos = 0x081C1D48;
// void CExoLinkedListTemplatedNWModuleExpansion_st::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedNWModuleExpansion_st__GetHeadPos = 0x081C1D3C;
// void CExoLinkedListTemplatedNWModuleExpansion_st::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedNWModuleExpansion_st__GetNext = 0x081C1D5C;
// void CExoLinkedListTemplatedNWModuleExpansion_st::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedNWModuleExpansion_st__IsEmpty = 0x081C1C30;
// void CExoLinkedListTemplatedNWModuleExpansion_st::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedNWModuleExpansion_st__RemoveHead = 0x081C1C44;

// CExoLinkedListTemplatedNWPlayerListItem_st::CExoLinkedListTemplatedNWPlayerListItem_st(void)
constexpr uintptr_t CExoLinkedListTemplatedNWPlayerListItem_st__CExoLinkedListTemplatedNWPlayerListItem_stCtor__0 = 0x081C1A24;
// void CExoLinkedListTemplatedNWPlayerListItem_st::AddTail(NWPlayerListItem_st*)
constexpr uintptr_t CExoLinkedListTemplatedNWPlayerListItem_st__AddTail = 0x081C1C94;
// void CExoLinkedListTemplatedNWPlayerListItem_st::Count(void)
constexpr uintptr_t CExoLinkedListTemplatedNWPlayerListItem_st__Count = 0x081C1DA4;
// void CExoLinkedListTemplatedNWPlayerListItem_st::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedNWPlayerListItem_st__GetAtPos = 0x081C1DC0;
// void CExoLinkedListTemplatedNWPlayerListItem_st::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedNWPlayerListItem_st__GetHeadPos = 0x081C1DB4;
// void CExoLinkedListTemplatedNWPlayerListItem_st::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedNWPlayerListItem_st__GetNext = 0x081C1DD4;
// void CExoLinkedListTemplatedNWPlayerListItem_st::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedNWPlayerListItem_st__IsEmpty = 0x081C1BE0;
// void CExoLinkedListTemplatedNWPlayerListItem_st::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedNWPlayerListItem_st__RemoveHead = 0x081C1BF4;

// CExoLinkedListTemplatedunsignedlong::CExoLinkedListTemplatedunsignedlong(void)
constexpr uintptr_t CExoLinkedListTemplatedunsignedlong__CExoLinkedListTemplatedunsignedlongCtor__0 = 0x080B14F4;
// void CExoLinkedListTemplatedunsignedlong::AddHead(uint32_t*)
constexpr uintptr_t CExoLinkedListTemplatedunsignedlong__AddHead = 0x081A73BC;
// void CExoLinkedListTemplatedunsignedlong::AddTail(uint32_t*)
constexpr uintptr_t CExoLinkedListTemplatedunsignedlong__AddTail = 0x080B1670;
// void CExoLinkedListTemplatedunsignedlong::Count(void)
constexpr uintptr_t CExoLinkedListTemplatedunsignedlong__Count = 0x0805EF40;
// void CExoLinkedListTemplatedunsignedlong::GetAtPos(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedunsignedlong__GetAtPos = 0x08082EC4;
// void CExoLinkedListTemplatedunsignedlong::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedunsignedlong__GetHeadPos = 0x0805EF20;
// void CExoLinkedListTemplatedunsignedlong::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedunsignedlong__GetNext = 0x0805EF2C;
// void CExoLinkedListTemplatedunsignedlong::GetPrev(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedunsignedlong__GetPrev = 0x08082C34;
// void CExoLinkedListTemplatedunsignedlong::GetTailPos(void)
constexpr uintptr_t CExoLinkedListTemplatedunsignedlong__GetTailPos = 0x08082C24;
// void CExoLinkedListTemplatedunsignedlong::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedunsignedlong__IsEmpty = 0x081A74D0;
// void CExoLinkedListTemplatedunsignedlong::Remove(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedunsignedlong__Remove = 0x08086480;
// void CExoLinkedListTemplatedunsignedlong::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedunsignedlong__RemoveHead = 0x081A74E4;

// CExoLinkedListTemplatedunsignedshort::CExoLinkedListTemplatedunsignedshort(void)
constexpr uintptr_t CExoLinkedListTemplatedunsignedshort__CExoLinkedListTemplatedunsignedshortCtor__0 = 0x082ACD80;
// void CExoLinkedListTemplatedunsignedshort::AddTail(uint16_t*)
constexpr uintptr_t CExoLinkedListTemplatedunsignedshort__AddTail = 0x082ACDE4;
// void CExoLinkedListTemplatedunsignedshort::GetHead(void)
constexpr uintptr_t CExoLinkedListTemplatedunsignedshort__GetHead = 0x082ACDF8;
// void CExoLinkedListTemplatedunsignedshort::GetHeadPos(void)
constexpr uintptr_t CExoLinkedListTemplatedunsignedshort__GetHeadPos = 0x082ACE10;
// void CExoLinkedListTemplatedunsignedshort::GetNext(CExoLinkedListNode*)
constexpr uintptr_t CExoLinkedListTemplatedunsignedshort__GetNext = 0x082ACE1C;
// void CExoLinkedListTemplatedunsignedshort::IsEmpty(void)
constexpr uintptr_t CExoLinkedListTemplatedunsignedshort__IsEmpty = 0x082ACDBC;
// void CExoLinkedListTemplatedunsignedshort::RemoveHead(void)
constexpr uintptr_t CExoLinkedListTemplatedunsignedshort__RemoveHead = 0x082ACDD0;

// public CExoLocString::CExoLocString(void)
constexpr uintptr_t CExoLocString__CExoLocStringCtor__0 = 0x082C9EB8;
// public CExoLocString::CExoLocString(const CExoLocString&)
constexpr uintptr_t CExoLocString__CExoLocStringCtor__1 = 0x082C9F08;
// public CExoLocString::~CExoLocString(void)
constexpr uintptr_t CExoLocString__CExoLocStringDtor = 0x082C9F60;
// void CExoLocString::__as(const CExoLocString&)
constexpr uintptr_t CExoLocString____as = 0x082CA010;
// void CExoLocString::__eq(CExoLocString&)
constexpr uintptr_t CExoLocString____eq = 0x082C9F9C;
// void CExoLocString::__ne(CExoLocString&)
constexpr uintptr_t CExoLocString____ne = 0x082C9FD4;
// public int32_t CExoLocString::AddString(int32_t, CExoString, unsigned char)
constexpr uintptr_t CExoLocString__AddString = 0x082CA040;
// public void CExoLocString::ClearLocString(void)
constexpr uintptr_t CExoLocString__ClearLocString = 0x082CA0C0;
// public int32_t CExoLocString::GetString(int32_t, CExoString*, unsigned char, bool)
constexpr uintptr_t CExoLocString__GetString__0 = 0x082C9CD0;
// public int32_t CExoLocString::GetString(uint32_t, int32_t*, CExoString*, unsigned char*)
constexpr uintptr_t CExoLocString__GetString__1 = 0x082CA0D4;
// public uint32_t CExoLocString::GetStringCount(void)
constexpr uintptr_t CExoLocString__GetStringCount = 0x082CA148;
// void CExoLocString::GetStringInternal(int32_t, CExoString*)
constexpr uintptr_t CExoLocString__GetStringInternal = 0x082CA170;
// public int32_t CExoLocString::GetStringLength(uint32_t)
constexpr uintptr_t CExoLocString__GetStringLength = 0x082CA15C;
// public int32_t CExoLocString::GetStringLoc(int32_t, CExoString*, unsigned char)
constexpr uintptr_t CExoLocString__GetStringLoc = 0x082CA118;
// void CExoLocString::RemoveString(int32_t)
constexpr uintptr_t CExoLocString__RemoveString__0 = 0x082CA184;
// void CExoLocString::RemoveString(int32_t, unsigned char)
constexpr uintptr_t CExoLocString__RemoveString__1 = 0x082CA1B0;

// public CExoLocStringInternal::CExoLocStringInternal(void)
constexpr uintptr_t CExoLocStringInternal__CExoLocStringInternalCtor = 0x082D0F98;
// public CExoLocStringInternal::~CExoLocStringInternal(void)
constexpr uintptr_t CExoLocStringInternal__CExoLocStringInternalDtor = 0x082D0FB8;
// public int32_t CExoLocStringInternal::AddString(int32_t, CExoString)
constexpr uintptr_t CExoLocStringInternal__AddString = 0x082D0C34;
// public int32_t CExoLocStringInternal::Assign(CExoLocStringInternal*)
constexpr uintptr_t CExoLocStringInternal__Assign = 0x082D0D70;
// void CExoLocStringInternal::ClearLocString(void)
constexpr uintptr_t CExoLocStringInternal__ClearLocString = 0x082D0FF4;
// public int32_t CExoLocStringInternal::Compare(CExoLocString&)
constexpr uintptr_t CExoLocStringInternal__Compare = 0x082D0E20;
// public int32_t CExoLocStringInternal::GetString(uint32_t, int32_t*, CExoString*)
constexpr uintptr_t CExoLocStringInternal__GetString__0 = 0x082D104C;
// public int32_t CExoLocStringInternal::GetString(int32_t, CExoString*)
constexpr uintptr_t CExoLocStringInternal__GetString__1 = 0x082D10CC;
// public uint32_t CExoLocStringInternal::GetStringCount(void)
constexpr uintptr_t CExoLocStringInternal__GetStringCount = 0x082D1130;
// public int32_t CExoLocStringInternal::GetStringLength(uint32_t)
constexpr uintptr_t CExoLocStringInternal__GetStringLength = 0x082D113C;
// void CExoLocStringInternal::RemoveString(int32_t)
constexpr uintptr_t CExoLocStringInternal__RemoveString = 0x082D11AC;

// void CExoMemman::AddFreeRecord(uint32_t)
constexpr uintptr_t CExoMemman__AddFreeRecord = 0x082AE884;
// void CExoMemman::Alloc(uint32_t, int32_t)
constexpr uintptr_t CExoMemman__Alloc = 0x082ADEA8;
// void CExoMemman::CheckHeaps(void)
constexpr uintptr_t CExoMemman__CheckHeaps = 0x082AE660;
// public void CExoMemman::Clear(void)
constexpr uintptr_t CExoMemman__Clear = 0x082ADBF4;
// void CExoMemman::Destroy(void)
constexpr uintptr_t CExoMemman__Destroy = 0x082AE64C;
// void CExoMemman::DoHeapWalk(void)
constexpr uintptr_t CExoMemman__DoHeapWalk = 0x082ADCD4;
// void CExoMemman::FillRecordPtrArray(void)
constexpr uintptr_t CExoMemman__FillRecordPtrArray = 0x082AE928;
// void CExoMemman::FinalReport(void)
constexpr uintptr_t CExoMemman__FinalReport = 0x082AE1C8;
// void CExoMemman::Free(void*)
constexpr uintptr_t CExoMemman__Free = 0x082AE668;
// void CExoMemman::GetFreeRecord(void)
constexpr uintptr_t CExoMemman__GetFreeRecord = 0x082AE868;
// void CExoMemman::GetHeaps(void)
constexpr uintptr_t CExoMemman__GetHeaps = 0x082AE658;
// public void CExoMemman::OutputTypeTrackingReport(void)
constexpr uintptr_t CExoMemman__OutputTypeTrackingReport = 0x082AE298;
// void CExoMemman::PopType(uint32_t)
constexpr uintptr_t CExoMemman__PopType = 0x082AE788;
// void CExoMemman::PushType(uint32_t)
constexpr uintptr_t CExoMemman__PushType = 0x082AE750;
// void CExoMemman::ReportEntry(CMemRecord&)
constexpr uintptr_t CExoMemman__ReportEntry = 0x082ADFE4;
// void CExoMemman::ReportRemoval(CMemRecord&, int32_t)
constexpr uintptr_t CExoMemman__ReportRemoval = 0x082AE0CC;
// void CExoMemman::SnapShotReportPrint(void)
constexpr uintptr_t CExoMemman__SnapShotReportPrint = 0x082AE368;
// void CExoMemman::SnapShotReportWithSort(void)
constexpr uintptr_t CExoMemman__SnapShotReportWithSort = 0x082AE8F0;
// void CExoMemman::StartReport(void)
constexpr uintptr_t CExoMemman__StartReport = 0x082AE7B8;

// public CExoNet::CExoNet(void)
constexpr uintptr_t CExoNet__CExoNetCtor = 0x082C6090;
// public CExoNet::~CExoNet(void)
constexpr uintptr_t CExoNet__CExoNetDtor = 0x082C60D8;
// public uint32_t CExoNet::AddressTranslationAvailable(void)
constexpr uintptr_t CExoNet__AddressTranslationAvailable = 0x082C63AC;
// public void CExoNet::ClearNetworkAddressProtect(void)
constexpr uintptr_t CExoNet__ClearNetworkAddressProtect = 0x082C62B4;
// public int32_t CExoNet::ClearUnusedNetworkAddresses(uint32_t)
constexpr uintptr_t CExoNet__ClearUnusedNetworkAddresses = 0x082C6318;
// public int32_t CExoNet::CloseTCPConnection(int32_t)
constexpr uintptr_t CExoNet__CloseTCPConnection = 0x082C6524;
// public int32_t CExoNet::CompareToLocalAddress(uint32_t, unsigned char*, unsigned char*)
constexpr uintptr_t CExoNet__CompareToLocalAddress = 0x082C629C;
// public int32_t CExoNet::CompareToSpecificInternetAddress(unsigned char*)
constexpr uintptr_t CExoNet__CompareToSpecificInternetAddress = 0x082C6434;
// public void CExoNet::EndAddressTranslation(void)
constexpr uintptr_t CExoNet__EndAddressTranslation = 0x082C63D4;
// public int32_t CExoNet::EndIncomingMessageProcessing(void)
constexpr uintptr_t CExoNet__EndIncomingMessageProcessing = 0x082C61E0;
// public int32_t CExoNet::FetchIncomingMessage(uint32_t*, unsigned char**, uint32_t*)
constexpr uintptr_t CExoNet__FetchIncomingMessage = 0x082C61F4;
// public void CExoNet::GetAddressTranslation(unsigned char*)
constexpr uintptr_t CExoNet__GetAddressTranslation = 0x082C63C0;
// void CExoNet::GetLocalAdapterString(uint32_t, uint32_t)
constexpr uintptr_t CExoNet__GetLocalAdapterString = 0x082C62F0;
// public int32_t CExoNet::GetNetworkAddressData(uint32_t, uint32_t*, unsigned char**, unsigned char**, uint32_t*)
constexpr uintptr_t CExoNet__GetNetworkAddressData = 0x082C6264;
// public CExoString CExoNet::GetNetworkAddressString(uint32_t)
constexpr uintptr_t CExoNet__GetNetworkAddressString = 0x082C6220;
// void CExoNet::GetNumberLocalAdapters(uint32_t)
constexpr uintptr_t CExoNet__GetNumberLocalAdapters = 0x082C62DC;
// public int32_t CExoNet::GetProtocolInitialized(uint32_t)
constexpr uintptr_t CExoNet__GetProtocolInitialized = 0x082C612C;
// public uint32_t CExoNet::GetProtocolReceivePort(uint32_t)
constexpr uintptr_t CExoNet__GetProtocolReceivePort = 0x082C6140;
// void CExoNet::GetProtocolSendPort(uint32_t)
constexpr uintptr_t CExoNet__GetProtocolSendPort = 0x082C6154;
// void CExoNet::GetSendUDPSocket(void)
constexpr uintptr_t CExoNet__GetSendUDPSocket = 0x082C6474;
// public void CExoNet::GetSpecificInternetAddress(unsigned char*, uint16_t*)
constexpr uintptr_t CExoNet__GetSpecificInternetAddress = 0x082C640C;
// public int32_t CExoNet::GetTCPMessage(int32_t*, char**, int32_t*)
constexpr uintptr_t CExoNet__GetTCPMessage = 0x082C64F4;
// public int32_t CExoNet::InitializeProtocol(uint32_t, uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CExoNet__InitializeProtocol = 0x082C6114;
// public int32_t CExoNet::MessageArrived(uint32_t, uint32_t, uint32_t, int32_t)
constexpr uintptr_t CExoNet__MessageArrived = 0x082C619C;
// public int32_t CExoNet::OpenTCPConnection(int32_t, CExoString, int32_t)
constexpr uintptr_t CExoNet__OpenTCPConnection = 0x082C6488;
// public int32_t CExoNet::RemoveIncomingMessage(void)
constexpr uintptr_t CExoNet__RemoveIncomingMessage = 0x082C620C;
// public int32_t CExoNet::SendDirectMessage(uint32_t, unsigned char*, uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CExoNet__SendDirectMessage = 0x082C617C;
// public int32_t CExoNet::SendTCPMessage(int32_t, char*, int32_t)
constexpr uintptr_t CExoNet__SendTCPMessage = 0x082C650C;
// public void CExoNet::SetMasterServerInternetAddress(const unsigned char*, uint32_t)
constexpr uintptr_t CExoNet__SetMasterServerInternetAddress = 0x082C6460;
// public uint32_t CExoNet::SetNetworkAddressData(uint32_t, unsigned char*, unsigned char*, uint32_t)
constexpr uintptr_t CExoNet__SetNetworkAddressData = 0x082C6284;
// public int32_t CExoNet::SetNetworkAddressProtect(uint32_t, int32_t)
constexpr uintptr_t CExoNet__SetNetworkAddressProtect = 0x082C62C8;
// void CExoNet::SetSpecificInternetAddress(unsigned char*, uint16_t)
constexpr uintptr_t CExoNet__SetSpecificInternetAddress = 0x082C63E8;
// public int32_t CExoNet::ShutDownProtocol(uint32_t)
constexpr uintptr_t CExoNet__ShutDownProtocol = 0x082C6168;
// public void CExoNet::StartAddressTranslation(CExoString, uint32_t)
constexpr uintptr_t CExoNet__StartAddressTranslation = 0x082C6344;
// public int32_t CExoNet::StartIncomingMessageProcessing(void)
constexpr uintptr_t CExoNet__StartIncomingMessageProcessing = 0x082C61CC;
// public void CExoNet::StoreMessage(unsigned char*, uint32_t, uint32_t)
constexpr uintptr_t CExoNet__StoreMessage = 0x082C61B4;
// public int32_t CExoNet::TranslateAddressFromString(char*, uint32_t*, unsigned char*, unsigned char*, uint32_t*)
constexpr uintptr_t CExoNet__TranslateAddressFromString = 0x082C6244;

// public CExoNetExtendableBuffer::CExoNetExtendableBuffer(void)
constexpr uintptr_t CExoNetExtendableBuffer__CExoNetExtendableBufferCtor = 0x082C541C;
// public CExoNetExtendableBuffer::~CExoNetExtendableBuffer(void)
constexpr uintptr_t CExoNetExtendableBuffer__CExoNetExtendableBufferDtor = 0x082C5A6C;
// public uint32_t CExoNetExtendableBuffer::ChangeFrameReference(uint16_t, int32_t, int32_t)
constexpr uintptr_t CExoNetExtendableBuffer__ChangeFrameReference = 0x082C57C4;
// void CExoNetExtendableBuffer::GetCurrentUsage(uint32_t*, uint32_t*)
constexpr uintptr_t CExoNetExtendableBuffer__GetCurrentUsage = 0x082C5D78;
// public uint16_t CExoNetExtendableBuffer::GetFirstUsedFrame(int32_t)
constexpr uintptr_t CExoNetExtendableBuffer__GetFirstUsedFrame = 0x082C5BAC;
// void CExoNetExtendableBuffer::GetFrameConnectionId(uint16_t, int32_t)
constexpr uintptr_t CExoNetExtendableBuffer__GetFrameConnectionId = 0x082C5CF8;
// public int32_t CExoNetExtendableBuffer::GetFrameData(uint16_t, unsigned char**, uint32_t*, uint32_t*, uint16_t*, int32_t)
constexpr uintptr_t CExoNetExtendableBuffer__GetFrameData = 0x082C56A8;
// public unsigned char* CExoNetExtendableBuffer::GetFramePointer(uint16_t, int32_t)
constexpr uintptr_t CExoNetExtendableBuffer__GetFramePointer = 0x082C5C00;
// void CExoNetExtendableBuffer::GetFrameSize(uint16_t, int32_t)
constexpr uintptr_t CExoNetExtendableBuffer__GetFrameSize = 0x082C5C7C;
// void CExoNetExtendableBuffer::GetMaximumUsage(uint32_t*, uint32_t*)
constexpr uintptr_t CExoNetExtendableBuffer__GetMaximumUsage = 0x082C5D94;
// public uint16_t CExoNetExtendableBuffer::GetUnusedFrame(int32_t)
constexpr uintptr_t CExoNetExtendableBuffer__GetUnusedFrame = 0x082C54E8;
// public int32_t CExoNetExtendableBuffer::LockExtBufferInstance(void)
constexpr uintptr_t CExoNetExtendableBuffer__LockExtBufferInstance = 0x082C5AD8;
// public int32_t CExoNetExtendableBuffer::SetFrameData(uint16_t, unsigned char*, uint32_t, uint32_t, uint32_t, int32_t)
constexpr uintptr_t CExoNetExtendableBuffer__SetFrameData = 0x082C5B18;
// public int32_t CExoNetExtendableBuffer::UnlockExtBufferInstance(void)
constexpr uintptr_t CExoNetExtendableBuffer__UnlockExtBufferInstance = 0x082C5AF8;

// CExoNetFrameBuffer::CExoNetFrameBuffer(void)
constexpr uintptr_t CExoNetFrameBuffer__CExoNetFrameBufferCtor = 0x082C5DB0;
// CExoNetFrameBuffer::~CExoNetFrameBuffer(void)
constexpr uintptr_t CExoNetFrameBuffer__CExoNetFrameBufferDtor = 0x082C5E10;
// public uint32_t CExoNetFrameBuffer::ChangeRefCount(unsigned char, int32_t)
constexpr uintptr_t CExoNetFrameBuffer__ChangeRefCount = 0x082C5EA8;
// void CExoNetFrameBuffer::GetFrameConnectionId(unsigned char)
constexpr uintptr_t CExoNetFrameBuffer__GetFrameConnectionId = 0x082C5F60;
// void CExoNetFrameBuffer::GetFrameData(unsigned char, unsigned char**, uint32_t*, uint32_t*, unsigned char*)
constexpr uintptr_t CExoNetFrameBuffer__GetFrameData = 0x082C5FA4;
// void CExoNetFrameBuffer::GetFramePointer(unsigned char)
constexpr uintptr_t CExoNetFrameBuffer__GetFramePointer = 0x082C5F80;
// void CExoNetFrameBuffer::GetFrameSize(unsigned char)
constexpr uintptr_t CExoNetFrameBuffer__GetFrameSize = 0x082C5F40;
// void CExoNetFrameBuffer::GetRefCount(unsigned char)
constexpr uintptr_t CExoNetFrameBuffer__GetRefCount = 0x082C5E88;
// void CExoNetFrameBuffer::GetUnusedFrame(void)
constexpr uintptr_t CExoNetFrameBuffer__GetUnusedFrame = 0x082C5E4C;
// void CExoNetFrameBuffer::GetUsedFrame(void)
constexpr uintptr_t CExoNetFrameBuffer__GetUsedFrame = 0x082C5E5C;
// void CExoNetFrameBuffer::SetFrameData(unsigned char, unsigned char*, uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CExoNetFrameBuffer__SetFrameData = 0x082C602C;

// public CExoNetInternal::CExoNetInternal(void)
constexpr uintptr_t CExoNetInternal__CExoNetInternalCtor = 0x082C7264;
// public CExoNetInternal::~CExoNetInternal(void)
constexpr uintptr_t CExoNetInternal__CExoNetInternalDtor = 0x082C7444;
// void CExoNetInternal::AddressTranslationAvailable(void)
constexpr uintptr_t CExoNetInternal__AddressTranslationAvailable = 0x082C88CC;
// void CExoNetInternal::ClearNetworkAddressProtect(void)
constexpr uintptr_t CExoNetInternal__ClearNetworkAddressProtect = 0x082C8774;
// public void CExoNetInternal::ClearUnusedNetworkAddresses(uint32_t)
constexpr uintptr_t CExoNetInternal__ClearUnusedNetworkAddresses = 0x082C87EC;
// public int32_t CExoNetInternal::CloseTCPConnection(int32_t)
constexpr uintptr_t CExoNetInternal__CloseTCPConnection = 0x082C8A50;
// public int32_t CExoNetInternal::CompareToLocalAddress(uint32_t, unsigned char*, unsigned char*)
constexpr uintptr_t CExoNetInternal__CompareToLocalAddress = 0x082C8598;
// void CExoNetInternal::EndAddressTranslation(void)
constexpr uintptr_t CExoNetInternal__EndAddressTranslation = 0x082C8974;
// void CExoNetInternal::EndIncomingMessageProcessing(void)
constexpr uintptr_t CExoNetInternal__EndIncomingMessageProcessing = 0x082C83C0;
// public int32_t CExoNetInternal::EnumerateLocalAddresses(uint32_t)
constexpr uintptr_t CExoNetInternal__EnumerateLocalAddresses = 0x082C7C64;
// private void CExoNetInternal::ExoWarningOnError(void)
constexpr uintptr_t CExoNetInternal__ExoWarningOnError = 0x082C89F4;
// public int32_t CExoNetInternal::FetchIncomingMessage(uint32_t*, unsigned char**, uint32_t*)
constexpr uintptr_t CExoNetInternal__FetchIncomingMessage = 0x082C831C;
// public void CExoNetInternal::GetAddressTranslation(unsigned char*)
constexpr uintptr_t CExoNetInternal__GetAddressTranslation = 0x082C8928;
// void CExoNetInternal::GetLocalAdapterString(uint32_t, uint32_t)
constexpr uintptr_t CExoNetInternal__GetLocalAdapterString = 0x082C8658;
// public int32_t CExoNetInternal::GetNetworkAddressData(uint32_t, uint32_t*, unsigned char**, unsigned char**, uint32_t*)
constexpr uintptr_t CExoNetInternal__GetNetworkAddressData = 0x082C853C;
// public CExoString CExoNetInternal::GetNetworkAddressString(uint32_t)
constexpr uintptr_t CExoNetInternal__GetNetworkAddressString = 0x082C8400;
// void CExoNetInternal::GetNumberLocalAdapters(uint32_t)
constexpr uintptr_t CExoNetInternal__GetNumberLocalAdapters = 0x082C861C;
// public int32_t CExoNetInternal::GetProtocolInitialized(uint32_t)
constexpr uintptr_t CExoNetInternal__GetProtocolInitialized = 0x082C814C;
// public uint32_t CExoNetInternal::GetProtocolReceivePort(uint32_t)
constexpr uintptr_t CExoNetInternal__GetProtocolReceivePort = 0x082C8170;
// void CExoNetInternal::GetProtocolSendPort(uint32_t)
constexpr uintptr_t CExoNetInternal__GetProtocolSendPort = 0x082C8194;
// void CExoNetInternal::GetSendUDPSocket(void)
constexpr uintptr_t CExoNetInternal__GetSendUDPSocket = 0x082C89E8;
// public int32_t CExoNetInternal::GetTCPMessage(int32_t*, char**, int32_t*)
constexpr uintptr_t CExoNetInternal__GetTCPMessage = 0x082C8078;
// public int32_t CExoNetInternal::InitializeProtocol(uint32_t, uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CExoNetInternal__InitializeProtocol = 0x082C755C;
// public int32_t CExoNetInternal::MessageArrived(uint32_t, uint32_t, uint32_t, int32_t)
constexpr uintptr_t CExoNetInternal__MessageArrived = 0x082C7734;
// public int32_t CExoNetInternal::OpenTCPConnection(int32_t, CExoString, int32_t)
constexpr uintptr_t CExoNetInternal__OpenTCPConnection = 0x082C7EDC;
// void CExoNetInternal::RemoveIncomingMessage(void)
constexpr uintptr_t CExoNetInternal__RemoveIncomingMessage = 0x082C8374;
// void CExoNetInternal::SendMessage(uint32_t, unsigned char*, uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CExoNetInternal__SendMessage = 0x082C789C;
// public int32_t CExoNetInternal::SendTCPMessage(int32_t, char*, int32_t)
constexpr uintptr_t CExoNetInternal__SendTCPMessage = 0x082C89FC;
// void CExoNetInternal::SetConnectionIdTimer(uint32_t)
constexpr uintptr_t CExoNetInternal__SetConnectionIdTimer = 0x082C872C;
// public void CExoNetInternal::SetMasterServerInternetAddress(const unsigned char*, uint32_t)
constexpr uintptr_t CExoNetInternal__SetMasterServerInternetAddress = 0x082C89BC;
// public uint32_t CExoNetInternal::SetNetworkAddressData(uint32_t, unsigned char*, unsigned char*, uint32_t)
constexpr uintptr_t CExoNetInternal__SetNetworkAddressData = 0x082C79A4;
// public int32_t CExoNetInternal::SetNetworkAddressProtect(uint32_t, int32_t)
constexpr uintptr_t CExoNetInternal__SetNetworkAddressProtect = 0x082C8798;
// public int32_t CExoNetInternal::ShutDownProtocol(uint32_t)
constexpr uintptr_t CExoNetInternal__ShutDownProtocol = 0x082C81B8;
// public void CExoNetInternal::StartAddressTranslation(CExoString, uint32_t)
constexpr uintptr_t CExoNetInternal__StartAddressTranslation = 0x082C7CFC;
// void CExoNetInternal::StartIncomingMessageProcessing(void)
constexpr uintptr_t CExoNetInternal__StartIncomingMessageProcessing = 0x082C82CC;
// public void CExoNetInternal::StoreMessage(unsigned char*, uint32_t, uint32_t)
constexpr uintptr_t CExoNetInternal__StoreMessage = 0x082C823C;
// public int32_t CExoNetInternal::TranslateAddressFromString(char*, uint32_t*, unsigned char*, unsigned char*, uint32_t*)
constexpr uintptr_t CExoNetInternal__TranslateAddressFromString = 0x082C84BC;
// void CExoNetInternal::WinSockInitialize(void)
constexpr uintptr_t CExoNetInternal__WinSockInitialize = 0x082C822C;

// CExoPackedFile::CExoPackedFile(void)
constexpr uintptr_t CExoPackedFile__CExoPackedFileCtor = 0x082C4654;
// public CExoPackedFile::~CExoPackedFile(void)
constexpr uintptr_t CExoPackedFile__CExoPackedFileDtor = 0x082C4684;
// void CExoPackedFile::GetAsyncFile(void)
constexpr uintptr_t CExoPackedFile__GetAsyncFile = 0x082C46CC;
// public CExoFile* CExoPackedFile::GetFile(void)
constexpr uintptr_t CExoPackedFile__GetFile = 0x082C46C0;

// public CExoRand::CExoRand(void)
constexpr uintptr_t CExoRand__CExoRandCtor = 0x082CA1DC;
// public CExoRand::~CExoRand(void)
constexpr uintptr_t CExoRand__CExoRandDtor = 0x082CA224;
// public CExoString CExoRand::GetString(uint16_t)
constexpr uintptr_t CExoRand__GetString = 0x082CA278;
// public uint32_t CExoRand::Rand(void)
constexpr uintptr_t CExoRand__Rand = 0x082CA264;
// public void CExoRand::SignalEvent(void)
constexpr uintptr_t CExoRand__SignalEvent__0 = 0x082CA2A0;
// public void CExoRand::SignalEvent(uint32_t)
constexpr uintptr_t CExoRand__SignalEvent__1 = 0x082CA2B4;

// public CExoRandInternal::CExoRandInternal(void)
constexpr uintptr_t CExoRandInternal__CExoRandInternalCtor = 0x082D1314;
// public CExoRandInternal::~CExoRandInternal(void)
constexpr uintptr_t CExoRandInternal__CExoRandInternalDtor = 0x082D1B24;
// void CExoRandInternal::Add(unsigned char*, int32_t)
constexpr uintptr_t CExoRandInternal__Add = 0x082D1C80;
// void CExoRandInternal::GenSeed(void)
constexpr uintptr_t CExoRandInternal__GenSeed = 0x082D1C58;
// public CExoString CExoRandInternal::GetString(uint16_t)
constexpr uintptr_t CExoRandInternal__GetString = 0x082D15E0;
// public uint32_t CExoRandInternal::Rand(void)
constexpr uintptr_t CExoRandInternal__Rand = 0x082D1B64;
// private void CExoRandInternal::ReSeed(uint32_t, uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CExoRandInternal__ReSeed = 0x082D19F0;
// public void CExoRandInternal::SignalEvent(void)
constexpr uintptr_t CExoRandInternal__SignalEvent__0 = 0x082D1850;
// public void CExoRandInternal::SignalEvent(uint32_t)
constexpr uintptr_t CExoRandInternal__SignalEvent__1 = 0x082D1C18;

// CExoResFile::CExoResFile(void)
constexpr uintptr_t CExoResFile__CExoResFileCtor = 0x082C2B10;
// public CExoResFile::~CExoResFile(void)
constexpr uintptr_t CExoResFile__CExoResFileDtor = 0x082C46D8;
// void CExoResFile::AddAsyncRefCount(void)
constexpr uintptr_t CExoResFile__AddAsyncRefCount = 0x082C4754;
// void CExoResFile::AddRefCount(void)
constexpr uintptr_t CExoResFile__AddRefCount = 0x082C4724;
// public int32_t CExoResFile::CloseAsyncFile(void)
constexpr uintptr_t CExoResFile__CloseAsyncFile = 0x082C47C4;
// void CExoResFile::CloseFile(void)
constexpr uintptr_t CExoResFile__CloseFile = 0x082C4784;
// void CExoResFile::DeleteAsyncRefCount(void)
constexpr uintptr_t CExoResFile__DeleteAsyncRefCount = 0x082C4888;
// public void CExoResFile::DeleteRefCount(void)
constexpr uintptr_t CExoResFile__DeleteRefCount = 0x082C4858;
// public uint32_t CExoResFile::GetResourceSize(uint32_t)
constexpr uintptr_t CExoResFile__GetResourceSize = 0x082C48B8;
// public int32_t CExoResFile::Initialize(void)
constexpr uintptr_t CExoResFile__Initialize = 0x082C48D4;
// public int32_t CExoResFile::LoadHeader(unsigned char)
constexpr uintptr_t CExoResFile__LoadHeader = 0x082C2D84;
// public int32_t CExoResFile::OpenAsyncFile(void)
constexpr uintptr_t CExoResFile__OpenAsyncFile = 0x082C2C80;
// public int32_t CExoResFile::OpenFile(void)
constexpr uintptr_t CExoResFile__OpenFile__0 = 0x082C2B7C;
// public int32_t CExoResFile::OpenFile(unsigned char*)
constexpr uintptr_t CExoResFile__OpenFile__1 = 0x082C4928;
// public uint32_t CExoResFile::ReadResource(uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CExoResFile__ReadResource = 0x082C4940;
// public void CExoResFile::ReadResourceAsync(uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CExoResFile__ReadResourceAsync = 0x082C49C4;
// public int32_t CExoResFile::UnloadHeader(void)
constexpr uintptr_t CExoResFile__UnloadHeader = 0x082C4804;

// public CExoResMan::CExoResMan(void)
constexpr uintptr_t CExoResMan__CExoResManCtor = 0x082AECA0;
// public CExoResMan::~CExoResMan(void)
constexpr uintptr_t CExoResMan__CExoResManDtor = 0x082AEEB4;
// public int32_t CExoResMan::AddEncapsulatedResourceFile(const CExoString&)
constexpr uintptr_t CExoResMan__AddEncapsulatedResourceFile = 0x082B37E4;
// public int32_t CExoResMan::AddFixedKeyTableFile(const CExoString&)
constexpr uintptr_t CExoResMan__AddFixedKeyTableFile = 0x082B381C;
// private int32_t CExoResMan::AddKeyTable(const CExoString&, uint32_t, unsigned char*)
constexpr uintptr_t CExoResMan__AddKeyTable = 0x082AEFAC;
// public int32_t CExoResMan::AddResourceDirectory(const CExoString&)
constexpr uintptr_t CExoResMan__AddResourceDirectory = 0x082B3838;
// public int32_t CExoResMan::AddResourceImageFile(const CExoString&, unsigned char*)
constexpr uintptr_t CExoResMan__AddResourceImageFile = 0x082B3800;
// public int32_t CExoResMan::CancelRequest(CRes*)
constexpr uintptr_t CExoResMan__CancelRequest = 0x082AF2E4;
// public int32_t CExoResMan::CleanDirectory(CExoString, int32_t, int32_t)
constexpr uintptr_t CExoResMan__CleanDirectory = 0x082B3ED0;
// void CExoResMan::CreateDirectory(CExoString)
constexpr uintptr_t CExoResMan__CreateDirectory = 0x082B2410;
// public void* CExoResMan::Demand(CRes*)
constexpr uintptr_t CExoResMan__Demand = 0x082AF408;
// void CExoResMan::Dump(CRes*, int32_t)
constexpr uintptr_t CExoResMan__Dump = 0x082B38FC;
// void CExoResMan::DumpAll(void)
constexpr uintptr_t CExoResMan__DumpAll = 0x082AF600;
// public int32_t CExoResMan::Exists(const CResRef&, uint16_t, uint32_t*)
constexpr uintptr_t CExoResMan__Exists = 0x082B393C;
// private int32_t CExoResMan::Free(CRes*)
constexpr uintptr_t CExoResMan__Free = 0x082AFBB8;
// private int32_t CExoResMan::FreeChunk(void)
constexpr uintptr_t CExoResMan__FreeChunk = 0x082AFC7C;
// void CExoResMan::FreeResourceData(CRes*)
constexpr uintptr_t CExoResMan__FreeResourceData = 0x082B3990;
// void CExoResMan::GetEncapsulatedFileDescription(const CExoString&)
constexpr uintptr_t CExoResMan__GetEncapsulatedFileDescription = 0x082AFDDC;
// public int32_t CExoResMan::GetFreeDiskSpace(const CExoString&, uint64_t*)
constexpr uintptr_t CExoResMan__GetFreeDiskSpace = 0x082B2278;
// public int32_t CExoResMan::GetIsStaticType(uint16_t)
constexpr uintptr_t CExoResMan__GetIsStaticType = 0x082B3C90;
// public int32_t CExoResMan::GetKeyEntry(const CResRef&, uint16_t, CExoKeyTable**, CKeyTableEntry**)
constexpr uintptr_t CExoResMan__GetKeyEntry = 0x082AFF20;
// void CExoResMan::GetNewResRef(const CResRef&, uint16_t, CResRef&)
constexpr uintptr_t CExoResMan__GetNewResRef = 0x082AF8E0;
// void CExoResMan::GetResID(const CResRef&, uint16_t)
constexpr uintptr_t CExoResMan__GetResID = 0x082B3AE4;
// public CRes* CExoResMan::GetResObject(const CResRef&, uint16_t)
constexpr uintptr_t CExoResMan__GetResObject = 0x082B3A30;
// public CExoStringList* CExoResMan::GetResOfType(uint16_t, int32_t)
constexpr uintptr_t CExoResMan__GetResOfType__0 = 0x082B0124;
// public CExoStringList* CExoResMan::GetResOfType(uint16_t, CRes*)
constexpr uintptr_t CExoResMan__GetResOfType__1 = 0x082B39F4;
// public void CExoResMan::GetResRefFromFile(CResRef&, const CExoString&)
constexpr uintptr_t CExoResMan__GetResRefFromFile = 0x082B0450;
// public uint16_t CExoResMan::GetResTypeFromFile(const CExoString&)
constexpr uintptr_t CExoResMan__GetResTypeFromFile = 0x082B056C;
// private CExoKeyTable* CExoResMan::GetTable(CRes*)
constexpr uintptr_t CExoResMan__GetTable = 0x082B3B30;
// public int32_t CExoResMan::GetTableCount(CRes*, int32_t)
constexpr uintptr_t CExoResMan__GetTableCount = 0x082B0684;
// void CExoResMan::GetTotalPhysicalMemory(void)
constexpr uintptr_t CExoResMan__GetTotalPhysicalMemory = 0x082B3CB4;
// private int32_t CExoResMan::Malloc(CRes*)
constexpr uintptr_t CExoResMan__Malloc = 0x082B3CC0;
// public int32_t CExoResMan::NukeDirectory(CExoString, int32_t, int32_t)
constexpr uintptr_t CExoResMan__NukeDirectory = 0x082B3F40;
// void CExoResMan::ReadRaw(CRes*, int32_t, char*)
constexpr uintptr_t CExoResMan__ReadRaw = 0x082B3E60;
// public int32_t CExoResMan::Release(CRes*)
constexpr uintptr_t CExoResMan__Release = 0x082B075C;
// public int32_t CExoResMan::ReleaseResObject(CRes*)
constexpr uintptr_t CExoResMan__ReleaseResObject = 0x082B3D48;
// public int32_t CExoResMan::RemoveEncapsulatedResourceFile(const CExoString&)
constexpr uintptr_t CExoResMan__RemoveEncapsulatedResourceFile = 0x082B3854;
// public int32_t CExoResMan::RemoveFile(const CExoString&, uint16_t)
constexpr uintptr_t CExoResMan__RemoveFile = 0x082B2F1C;
// public int32_t CExoResMan::RemoveFixedKeyTableFile(const CExoString&)
constexpr uintptr_t CExoResMan__RemoveFixedKeyTableFile = 0x082B3884;
// void CExoResMan::RemoveFromToBeFreedList(CRes*)
constexpr uintptr_t CExoResMan__RemoveFromToBeFreedList = 0x082B3BEC;
// private int32_t CExoResMan::RemoveKeyTable(const CExoString&, uint32_t)
constexpr uintptr_t CExoResMan__RemoveKeyTable = 0x082B0888;
// public int32_t CExoResMan::RemoveResourceDirectory(const CExoString&)
constexpr uintptr_t CExoResMan__RemoveResourceDirectory = 0x082B389C;
// public int32_t CExoResMan::RemoveResourceImageFile(const CExoString&)
constexpr uintptr_t CExoResMan__RemoveResourceImageFile = 0x082B386C;
// void CExoResMan::Request(CRes*)
constexpr uintptr_t CExoResMan__Request = 0x082B3DB0;
// void CExoResMan::ResumeServicing(void)
constexpr uintptr_t CExoResMan__ResumeServicing = 0x082B3E00;
// public int32_t CExoResMan::ServiceCurrentAsyncRes(void)
constexpr uintptr_t CExoResMan__ServiceCurrentAsyncRes = 0x082B30A0;
// private int32_t CExoResMan::ServiceFromDirectory(CRes*, int32_t)
constexpr uintptr_t CExoResMan__ServiceFromDirectory = 0x082B0970;
// void CExoResMan::ServiceFromDirectoryRaw(CRes*, int32_t, char*)
constexpr uintptr_t CExoResMan__ServiceFromDirectoryRaw = 0x082B19B0;
// private int32_t CExoResMan::ServiceFromEncapsulated(CRes*, int32_t)
constexpr uintptr_t CExoResMan__ServiceFromEncapsulated = 0x082B1020;
// void CExoResMan::ServiceFromEncapsulatedRaw(CRes*, int32_t, char*)
constexpr uintptr_t CExoResMan__ServiceFromEncapsulatedRaw = 0x082B1E38;
// private int32_t CExoResMan::ServiceFromImage(CRes*, int32_t)
constexpr uintptr_t CExoResMan__ServiceFromImage = 0x082B1670;
// void CExoResMan::ServiceFromImageRaw(CRes*, int32_t, char*)
constexpr uintptr_t CExoResMan__ServiceFromImageRaw = 0x082B20F8;
// private int32_t CExoResMan::ServiceFromResFile(CRes*, int32_t)
constexpr uintptr_t CExoResMan__ServiceFromResFile = 0x082B1330;
// void CExoResMan::ServiceFromResFileRaw(CRes*, int32_t, char*)
constexpr uintptr_t CExoResMan__ServiceFromResFileRaw = 0x082B1FC0;
// public void CExoResMan::SetResObject(const CResRef&, uint16_t, CRes*)
constexpr uintptr_t CExoResMan__SetResObject = 0x082B3A80;
// public int32_t CExoResMan::SetTotalResourceMemory(int32_t)
constexpr uintptr_t CExoResMan__SetTotalResourceMemory = 0x082B3E10;
// void CExoResMan::SuspendServicing(void)
constexpr uintptr_t CExoResMan__SuspendServicing = 0x082B3E50;
// void CExoResMan::Update(uint32_t)
constexpr uintptr_t CExoResMan__Update = 0x082B1750;
// void CExoResMan::UpdateEncapsulatedResourceFile(const CExoString&)
constexpr uintptr_t CExoResMan__UpdateEncapsulatedResourceFile = 0x082B38B4;
// void CExoResMan::UpdateFixedKeyTableFile(const CExoString&)
constexpr uintptr_t CExoResMan__UpdateFixedKeyTableFile = 0x082B38CC;
// private int32_t CExoResMan::UpdateKeyTable(const CExoString&, uint32_t)
constexpr uintptr_t CExoResMan__UpdateKeyTable = 0x082B1858;
// public int32_t CExoResMan::UpdateResourceDirectory(const CExoString&)
constexpr uintptr_t CExoResMan__UpdateResourceDirectory = 0x082B38E4;
// private int32_t CExoResMan::WipeDirectory(CExoString, int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CExoResMan__WipeDirectory = 0x082B2560;

// CExoResourceImageFile::CExoResourceImageFile(void)
constexpr uintptr_t CExoResourceImageFile__CExoResourceImageFileCtor = 0x082C3F30;
// public CExoResourceImageFile::~CExoResourceImageFile(void)
constexpr uintptr_t CExoResourceImageFile__CExoResourceImageFileDtor = 0x082C4DA8;
// void CExoResourceImageFile::AddAsyncRefCount(void)
constexpr uintptr_t CExoResourceImageFile__AddAsyncRefCount = 0x082C5028;
// void CExoResourceImageFile::AddRefCount(void)
constexpr uintptr_t CExoResourceImageFile__AddRefCount = 0x082C4DF4;
// public int32_t CExoResourceImageFile::CloseAsyncFile(void)
constexpr uintptr_t CExoResourceImageFile__CloseAsyncFile = 0x082C5030;
// public int32_t CExoResourceImageFile::CloseFile(void)
constexpr uintptr_t CExoResourceImageFile__CloseFile = 0x082C4E24;
// void CExoResourceImageFile::DeleteAsyncRefCount(void)
constexpr uintptr_t CExoResourceImageFile__DeleteAsyncRefCount = 0x082C503C;
// public void CExoResourceImageFile::DeleteRefCount(void)
constexpr uintptr_t CExoResourceImageFile__DeleteRefCount = 0x082C4E6C;
// void CExoResourceImageFile::GetHeader(void)
constexpr uintptr_t CExoResourceImageFile__GetHeader = 0x082C4F18;
// void CExoResourceImageFile::GetKeyList(void)
constexpr uintptr_t CExoResourceImageFile__GetKeyList = 0x082C4E8C;
// void CExoResourceImageFile::GetKeyListEntry(uint32_t)
constexpr uintptr_t CExoResourceImageFile__GetKeyListEntry = 0x082C4EAC;
// public void* CExoResourceImageFile::GetResource(uint32_t)
constexpr uintptr_t CExoResourceImageFile__GetResource = 0x082C4F40;
// public EncapsulatedResListEntry_st* CExoResourceImageFile::GetResourceListEntry(uint32_t)
constexpr uintptr_t CExoResourceImageFile__GetResourceListEntry = 0x082C4EE8;
// public uint32_t CExoResourceImageFile::GetResourceSize(uint32_t)
constexpr uintptr_t CExoResourceImageFile__GetResourceSize = 0x082C4F24;
// public int32_t CExoResourceImageFile::Initialize(void)
constexpr uintptr_t CExoResourceImageFile__Initialize = 0x082C4F5C;
// public int32_t CExoResourceImageFile::LoadHeader(unsigned char)
constexpr uintptr_t CExoResourceImageFile__LoadHeader = 0x082C5050;
// void CExoResourceImageFile::OpenAsyncFile(void)
constexpr uintptr_t CExoResourceImageFile__OpenAsyncFile = 0x082C5044;
// public int32_t CExoResourceImageFile::OpenFile(unsigned char*)
constexpr uintptr_t CExoResourceImageFile__OpenFile__0 = 0x082C3F9C;
// public int32_t CExoResourceImageFile::OpenFile(void)
constexpr uintptr_t CExoResourceImageFile__OpenFile__1 = 0x082C4F94;
// public uint32_t CExoResourceImageFile::ReadResource(uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CExoResourceImageFile__ReadResource = 0x082C4FAC;
// public void CExoResourceImageFile::ReadResourceAsync(uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CExoResourceImageFile__ReadResourceAsync = 0x082C5004;
// void CExoResourceImageFile::UnloadHeader(void)
constexpr uintptr_t CExoResourceImageFile__UnloadHeader = 0x082C4E60;

// public CExoString::CExoString(void)
constexpr uintptr_t CExoString__CExoStringCtor__0 = 0x082CBFB4;
// public CExoString::CExoString(const char*)
constexpr uintptr_t CExoString__CExoStringCtor__1 = 0x082CBFCC;
// public CExoString::CExoString(const CExoString&)
constexpr uintptr_t CExoString__CExoStringCtor__2 = 0x082CC030;
// public CExoString::CExoString(const char*, int32_t)
constexpr uintptr_t CExoString__CExoStringCtor__3 = 0x082CC09C;
// public CExoString::CExoString(int32_t)
constexpr uintptr_t CExoString__CExoStringCtor__4 = 0x082CC0EC;
// public CExoString::~CExoString(void)
constexpr uintptr_t CExoString__CExoStringDtor = 0x082CC138;
// void CExoString::__as(const CExoString&)
constexpr uintptr_t CExoString____as__0 = 0x082CAD34;
// void CExoString::__as(const char*)
constexpr uintptr_t CExoString____as__1 = 0x082CAE0C;
// void CExoString::__eq(const CExoString&) const
constexpr uintptr_t CExoString____eq__0 = 0x082CC180;
// void CExoString::__eq(const char*) const
constexpr uintptr_t CExoString____eq__1 = 0x082CC1DC;
// void CExoString::__ge(const CExoString&) const
constexpr uintptr_t CExoString____ge__0 = 0x082CC480;
// void CExoString::__ge(const char*) const
constexpr uintptr_t CExoString____ge__1 = 0x082CC4D0;
// void CExoString::__gt(const CExoString&) const
constexpr uintptr_t CExoString____gt__0 = 0x082CC34C;
// void CExoString::__gt(const char*) const
constexpr uintptr_t CExoString____gt__1 = 0x082CC394;
// void CExoString::__le(const CExoString&) const
constexpr uintptr_t CExoString____le__0 = 0x082CC3D8;
// void CExoString::__le(const char*) const
constexpr uintptr_t CExoString____le__1 = 0x082CC430;
// void CExoString::__lt(const CExoString&) const
constexpr uintptr_t CExoString____lt__0 = 0x082CC2CC;
// void CExoString::__lt(const char*) const
constexpr uintptr_t CExoString____lt__1 = 0x082CC30C;
// void CExoString::__ne(const CExoString&) const
constexpr uintptr_t CExoString____ne__0 = 0x082CC230;
// void CExoString::__ne(const char*) const
constexpr uintptr_t CExoString____ne__1 = 0x082CC280;
// void CExoString::__pl(const CExoString&) const
constexpr uintptr_t CExoString____pl = 0x082CAEC0;
// void CExoString::__vc(int32_t) const
constexpr uintptr_t CExoString____vc = 0x082CC51C;
// public float CExoString::AsFLOAT(void) const
constexpr uintptr_t CExoString__AsFLOAT = 0x082CB150;
// public int32_t CExoString::AsINT(void) const
constexpr uintptr_t CExoString__AsINT = 0x082CB12C;
// public CExoString CExoString::AsTAG(void) const
constexpr uintptr_t CExoString__AsTAG = 0x082CBE58;
// public int32_t CExoString::CompareNoCase(const CExoString&) const
constexpr uintptr_t CExoString__CompareNoCase = 0x082CBB84;
// public int32_t CExoString::ComparePrefixNoCase(const CExoString&, int32_t) const
constexpr uintptr_t CExoString__ComparePrefixNoCase = 0x082CC6BC;
// public char* CExoString::CStr(void) const
constexpr uintptr_t CExoString__CStr = 0x082CC550;
// public int32_t CExoString::Find(const CExoString&, int32_t) const
constexpr uintptr_t CExoString__Find__0 = 0x082CB17C;
// public int32_t CExoString::Find(char, int32_t) const
constexpr uintptr_t CExoString__Find__1 = 0x082CC564;
// void CExoString::FindNot(char, int32_t) const
constexpr uintptr_t CExoString__FindNot = 0x082CC5F0;
// public void CExoString::Format(char*, ...)
constexpr uintptr_t CExoString__Format = 0x082CB258;
// public int32_t CExoString::GetLength(void) const
constexpr uintptr_t CExoString__GetLength = 0x082CC678;
// public void CExoString::Insert(const CExoString&, int32_t)
constexpr uintptr_t CExoString__Insert = 0x082CB330;
// public int32_t CExoString::IsEmpty(void) const
constexpr uintptr_t CExoString__IsEmpty = 0x082CC6A0;
// public CExoString CExoString::Left(int32_t) const
constexpr uintptr_t CExoString__Left = 0x082CB3E4;
// public CExoString CExoString::LowerCase(void) const
constexpr uintptr_t CExoString__LowerCase = 0x082CB548;
// public CExoString CExoString::Right(int32_t) const
constexpr uintptr_t CExoString__Right = 0x082CB6E0;
// public int32_t CExoString::StripNonAlphaNumeric(int32_t, int32_t, int32_t)
constexpr uintptr_t CExoString__StripNonAlphaNumeric = 0x082CBCFC;
// public CExoString CExoString::SubString(int32_t, int32_t) const
constexpr uintptr_t CExoString__SubString = 0x082CB85C;
// public CExoString CExoString::UpperCase(void) const
constexpr uintptr_t CExoString__UpperCase = 0x082CB9EC;

// public CExoStringList::CExoStringList(CExoStringList*)
constexpr uintptr_t CExoStringList__CExoStringListCtor__0 = 0x082CA4EC;
// public CExoStringList::CExoStringList(void)
constexpr uintptr_t CExoStringList__CExoStringListCtor__1 = 0x082CAB78;
// public CExoStringList::CExoStringList(int32_t, int32_t, int32_t)
constexpr uintptr_t CExoStringList__CExoStringListCtor__2 = 0x082CABA4;
// public CExoStringList::~CExoStringList(void)
constexpr uintptr_t CExoStringList__CExoStringListDtor = 0x082CABE0;
// void CExoStringList::__as(CExoStringList&)
constexpr uintptr_t CExoStringList____as = 0x082CA9E4;
// void CExoStringList::__vc(int32_t)
constexpr uintptr_t CExoStringList____vc = 0x082CAD24;
// public void CExoStringList::Add(CExoString*)
constexpr uintptr_t CExoStringList__Add = 0x082CA5D4;
// private void CExoStringList::AddSorted(CExoString*)
constexpr uintptr_t CExoStringList__AddSorted = 0x082CA2C8;
// void CExoStringList::Clear(void)
constexpr uintptr_t CExoStringList__Clear = 0x082CAC4C;
// void CExoStringList::Delete(CExoString*)
constexpr uintptr_t CExoStringList__Delete = 0x082CA714;
// void CExoStringList::GetCount(void)
constexpr uintptr_t CExoStringList__GetCount = 0x082CAC98;
// void CExoStringList::GetDuplicate(void)
constexpr uintptr_t CExoStringList__GetDuplicate = 0x082CACA4;
// void CExoStringList::GetSize(void)
constexpr uintptr_t CExoStringList__GetSize = 0x082CACB0;
// void CExoStringList::GetSorted(void)
constexpr uintptr_t CExoStringList__GetSorted = 0x082CACBC;
// public CExoString* CExoStringList::GetString(int32_t)
constexpr uintptr_t CExoStringList__GetString = 0x082CACC8;
// void CExoStringList::Insert(CExoString*, int32_t)
constexpr uintptr_t CExoStringList__Insert = 0x082CA7F0;
// private void CExoStringList::Introduce(CExoString*, int32_t)
constexpr uintptr_t CExoStringList__Introduce = 0x082CAAD0;
// void CExoStringList::Merge(CExoStringList*, int32_t, int32_t)
constexpr uintptr_t CExoStringList__Merge = 0x082CA8A0;
// void CExoStringList::Remove(int32_t)
constexpr uintptr_t CExoStringList__Remove = 0x082CACD8;

// public CExoTimers::CExoTimers(void)
constexpr uintptr_t CExoTimers__CExoTimersCtor = 0x082CC710;
// public CExoTimers::~CExoTimers(void)
constexpr uintptr_t CExoTimers__CExoTimersDtor = 0x082CC758;
// public uint64_t CExoTimers::GetHighResolutionTimer(void)
constexpr uintptr_t CExoTimers__GetHighResolutionTimer = 0x082CC7A8;
// public uint32_t CExoTimers::GetLowResolutionTimer(void)
constexpr uintptr_t CExoTimers__GetLowResolutionTimer = 0x082CC794;

// public CExoTimersInternal::CExoTimersInternal(void)
constexpr uintptr_t CExoTimersInternal__CExoTimersInternalCtor = 0x082D1CFC;
// CExoTimersInternal::~CExoTimersInternal(void)
constexpr uintptr_t CExoTimersInternal__CExoTimersInternalDtor = 0x082D1D28;
// public uint64_t CExoTimersInternal::GetHighResolutionTimer(void)
constexpr uintptr_t CExoTimersInternal__GetHighResolutionTimer = 0x082D1D50;
// public uint32_t CExoTimersInternal::GetLowResolutionTimer(void)
constexpr uintptr_t CExoTimersInternal__GetLowResolutionTimer = 0x082D1D44;

// void CExtendedServerInfo::__as(CNetLayerSessionInfo&)
constexpr uintptr_t CExtendedServerInfo____as = 0x0829F8B0;

// public CFactionManager::CFactionManager(void)
constexpr uintptr_t CFactionManager__CFactionManagerCtor = 0x080BA898;
// public CFactionManager::~CFactionManager(void)
constexpr uintptr_t CFactionManager__CFactionManagerDtor = 0x080BA914;
// public void CFactionManager::CreateDefaultFactions(void)
constexpr uintptr_t CFactionManager__CreateDefaultFactions = 0x080BA230;
// public void CFactionManager::DeleteFaction(int32_t)
constexpr uintptr_t CFactionManager__DeleteFaction = 0x080BAB0C;
// public CExoArrayListTemplatedint* CFactionManager::GetDefaultPCReputation(void)
constexpr uintptr_t CFactionManager__GetDefaultPCReputation = 0x080B9C68;
// public CNWSFaction* CFactionManager::GetFaction(int32_t)
constexpr uintptr_t CFactionManager__GetFaction = 0x080BA9A0;
// void CFactionManager::GetFactionIdByName(const CExoString&)
constexpr uintptr_t CFactionManager__GetFactionIdByName = 0x080BA3D8;
// public int32_t CFactionManager::GetIsNPCFaction(int32_t)
constexpr uintptr_t CFactionManager__GetIsNPCFaction = 0x080BAA40;
// public int32_t CFactionManager::GetNPCFactionReputation(int32_t, int32_t)
constexpr uintptr_t CFactionManager__GetNPCFactionReputation = 0x080B9BC0;
// public int32_t CFactionManager::LoadFactions(CResGFF*, CResList*)
constexpr uintptr_t CFactionManager__LoadFactions = 0x080B9CFC;
// public int32_t CFactionManager::LoadReputations(CResGFF*, CResList*)
constexpr uintptr_t CFactionManager__LoadReputations = 0x080B9F68;
// public int32_t CFactionManager::SaveFactions(CResGFF*, CResList*)
constexpr uintptr_t CFactionManager__SaveFactions = 0x080BA130;
// public int32_t CFactionManager::SaveReputations(CResGFF*, CResList*)
constexpr uintptr_t CFactionManager__SaveReputations = 0x080BAA60;
// public void CFactionManager::SetNPCFactionReputation(int32_t, int32_t, int32_t)
constexpr uintptr_t CFactionManager__SetNPCFactionReputation = 0x080BA9D0;

// public CGameEffect::CGameEffect(int32_t)
constexpr uintptr_t CGameEffect__CGameEffectCtor__1 = 0x0817DC70;
// public CGameEffect::CGameEffect(CGameEffect*, int32_t)
constexpr uintptr_t CGameEffect__CGameEffectCtor__2 = 0x0817DE10;
// public CGameEffect::~CGameEffect(void)
constexpr uintptr_t CGameEffect__CGameEffectDtor = 0x0817DFDC;
// void CGameEffect::__as(const CGameEffect&)
constexpr uintptr_t CGameEffect____as = 0x0817E294;
// void CGameEffect::__eq(const CGameEffect&) const
constexpr uintptr_t CGameEffect____eq = 0x0817E47C;
// void CGameEffect::__ne(const CGameEffect&) const
constexpr uintptr_t CGameEffect____ne = 0x0817F730;
// public void CGameEffect::CopyEffect(CGameEffect*, int32_t)
constexpr uintptr_t CGameEffect__CopyEffect = 0x0817E08C;
// public void CGameEffect::GetExpiryTime(uint32_t*, uint32_t*)
constexpr uintptr_t CGameEffect__GetExpiryTime = 0x0817F714;
// public float CGameEffect::GetFloat(int32_t)
constexpr uintptr_t CGameEffect__GetFloat = 0x0817F620;
// public int32_t CGameEffect::GetInteger(int32_t)
constexpr uintptr_t CGameEffect__GetInteger = 0x0817F5F8;
// public uint32_t CGameEffect::GetObjectID(int32_t)
constexpr uintptr_t CGameEffect__GetObjectID = 0x0817F64C;
// public int32_t CGameEffect::GetScriptEffectType(void)
constexpr uintptr_t CGameEffect__GetScriptEffectType = 0x0817EFB8;
// public CExoString CGameEffect::GetString(int32_t)
constexpr uintptr_t CGameEffect__GetString = 0x0817F678;
// public void CGameEffect::LoadGameEffect(CResGFF*, CResStruct*)
constexpr uintptr_t CGameEffect__LoadGameEffect = 0x0817E6F0;
// public void CGameEffect::SaveGameEffect(CResGFF*, CResStruct*)
constexpr uintptr_t CGameEffect__SaveGameEffect = 0x0817EBC4;
// public void CGameEffect::SetCreator(uint32_t)
constexpr uintptr_t CGameEffect__SetCreator = 0x0817EECC;
// public void CGameEffect::SetExpiryTime(uint32_t, uint32_t)
constexpr uintptr_t CGameEffect__SetExpiryTime = 0x0817F700;
// public void CGameEffect::SetFloat(int32_t, float)
constexpr uintptr_t CGameEffect__SetFloat = 0x0817F634;
// public void CGameEffect::SetInteger(int32_t, int32_t)
constexpr uintptr_t CGameEffect__SetInteger = 0x0817F60C;
// public void CGameEffect::SetLinked(CGameEffect*, CGameEffect*)
constexpr uintptr_t CGameEffect__SetLinked = 0x0817F750;
// public void CGameEffect::SetNumIntegers(int32_t)
constexpr uintptr_t CGameEffect__SetNumIntegers = 0x0817F54C;
// public void CGameEffect::SetNumIntegersInitializeToNegativeOne(int32_t)
constexpr uintptr_t CGameEffect__SetNumIntegersInitializeToNegativeOne = 0x0817F5A0;
// public void CGameEffect::SetObjectID(int32_t, uint32_t)
constexpr uintptr_t CGameEffect__SetObjectID = 0x0817F660;
// public void CGameEffect::SetString(int32_t, CExoString)
constexpr uintptr_t CGameEffect__SetString = 0x0817F6A4;
// public void CGameEffect::UpdateLinked(void)
constexpr uintptr_t CGameEffect__UpdateLinked = 0x0817E57C;

// CGameEffectApplierRemover::~CGameEffectApplierRemover(void)
constexpr uintptr_t CGameEffectApplierRemover__CGameEffectApplierRemoverDtor = 0x0817DC4C;

// public CGameObject::CGameObject(unsigned char, uint32_t)
constexpr uintptr_t CGameObject__CGameObjectCtor__1 = 0x080BB160;
// CGameObject::~CGameObject(void)
constexpr uintptr_t CGameObject__CGameObjectDtor = 0x080BB388;
// void CGameObject::AsNWCArea(void)
constexpr uintptr_t CGameObject__AsNWCArea = 0x08060C18;
// void CGameObject::AsNWCAreaOfEffectObject(void)
constexpr uintptr_t CGameObject__AsNWCAreaOfEffectObject = 0x08060C78;
// void CGameObject::AsNWCCreature(void)
constexpr uintptr_t CGameObject__AsNWCCreature = 0x08060C28;
// void CGameObject::AsNWCDoor(void)
constexpr uintptr_t CGameObject__AsNWCDoor = 0x08060BF8;
// void CGameObject::AsNWCItem(void)
constexpr uintptr_t CGameObject__AsNWCItem = 0x08060C38;
// void CGameObject::AsNWCModule(void)
constexpr uintptr_t CGameObject__AsNWCModule = 0x08060C08;
// void CGameObject::AsNWCObject(void)
constexpr uintptr_t CGameObject__AsNWCObject = 0x08060BF0;
// void CGameObject::AsNWCPlaceable(void)
constexpr uintptr_t CGameObject__AsNWCPlaceable = 0x08060C68;
// void CGameObject::AsNWCProjectile(void)
constexpr uintptr_t CGameObject__AsNWCProjectile = 0x08060C58;
// void CGameObject::AsNWCSoundObject(void)
constexpr uintptr_t CGameObject__AsNWCSoundObject = 0x08060CA8;
// void CGameObject::AsNWCStore(void)
constexpr uintptr_t CGameObject__AsNWCStore = 0x08060C90;
// void CGameObject::AsNWCTrigger(void)
constexpr uintptr_t CGameObject__AsNWCTrigger = 0x08060C48;
// void CGameObject::AsNWSArea(void)
constexpr uintptr_t CGameObject__AsNWSArea = 0x08060C20;
// public CNWSAreaOfEffectObject* CGameObject::AsNWSAreaOfEffectObject(void)
constexpr uintptr_t CGameObject__AsNWSAreaOfEffectObject = 0x08060C70;
// void CGameObject::AsNWSCreature(void)
constexpr uintptr_t CGameObject__AsNWSCreature = 0x08060C30;
// void CGameObject::AsNWSDoor(void)
constexpr uintptr_t CGameObject__AsNWSDoor = 0x08060C00;
// void CGameObject::AsNWSEncounter(void)
constexpr uintptr_t CGameObject__AsNWSEncounter = 0x08060C88;
// void CGameObject::AsNWSItem(void)
constexpr uintptr_t CGameObject__AsNWSItem = 0x08060C40;
// void CGameObject::AsNWSModule(void)
constexpr uintptr_t CGameObject__AsNWSModule = 0x08060C10;
// void CGameObject::AsNWSObject(void)
constexpr uintptr_t CGameObject__AsNWSObject = 0x080BB3AC;
// void CGameObject::AsNWSPlaceable(void)
constexpr uintptr_t CGameObject__AsNWSPlaceable = 0x08060C60;
// void CGameObject::AsNWSPlayerTURD(void)
constexpr uintptr_t CGameObject__AsNWSPlayerTURD = 0x08086108;
// void CGameObject::AsNWSSoundObject(void)
constexpr uintptr_t CGameObject__AsNWSSoundObject = 0x08060CA0;
// void CGameObject::AsNWSStore(void)
constexpr uintptr_t CGameObject__AsNWSStore = 0x08060C98;
// void CGameObject::AsNWSTrigger(void)
constexpr uintptr_t CGameObject__AsNWSTrigger = 0x08060C50;
// void CGameObject::AsNWSWaypoint(void)
constexpr uintptr_t CGameObject__AsNWSWaypoint = 0x08060C80;
// void CGameObject::ResetUpdateTimes(uint32_t, uint32_t)
constexpr uintptr_t CGameObject__ResetUpdateTimes = 0x08060BE8;
// void CGameObject::SetId(uint32_t)
constexpr uintptr_t CGameObject__SetId = 0x08060BE0;

// public CGameObjectArray::CGameObjectArray(int32_t)
constexpr uintptr_t CGameObjectArray__CGameObjectArrayCtor__1 = 0x080BB17C;
// public CGameObjectArray::~CGameObjectArray(void)
constexpr uintptr_t CGameObjectArray__CGameObjectArrayDtor = 0x080BAC64;
// void CGameObjectArray::AddCharacterObjectAtPos(uint32_t, CGameObject*)
constexpr uintptr_t CGameObjectArray__AddCharacterObjectAtPos = 0x080BAE78;
// void CGameObjectArray::AddExternalObject(uint32_t&, CGameObject*, int32_t)
constexpr uintptr_t CGameObjectArray__AddExternalObject = 0x080BAF5C;
// public unsigned char CGameObjectArray::AddInternalObject(uint32_t&, CGameObject*, int32_t)
constexpr uintptr_t CGameObjectArray__AddInternalObject = 0x080BB04C;
// public unsigned char CGameObjectArray::AddObjectAtPos(uint32_t, CGameObject*)
constexpr uintptr_t CGameObjectArray__AddObjectAtPos = 0x080BAD30;
// void CGameObjectArray::Clean(uint16_t)
constexpr uintptr_t CGameObjectArray__Clean = 0x080BB2C4;
// public unsigned char CGameObjectArray::Delete(uint32_t)
constexpr uintptr_t CGameObjectArray__Delete__0 = 0x080BB200;
// public unsigned char CGameObjectArray::Delete(uint32_t, CGameObject**)
constexpr uintptr_t CGameObjectArray__Delete__1 = 0x080BB21C;
// public unsigned char CGameObjectArray::GetGameObject(uint32_t, CGameObject**)
constexpr uintptr_t CGameObjectArray__GetGameObject = 0x080BB2CC;

// CGameSpyClient::CGameSpyClient(CConnectionLib*, int32_t&, const CExoString&)
constexpr uintptr_t CGameSpyClient__CGameSpyClientCtor__1 = 0x082730C4;
// CGameSpyClient::~CGameSpyClient(void)
constexpr uintptr_t CGameSpyClient__CGameSpyClientDtor = 0x08274508;
// void CGameSpyClient::ChatNameMangle(CExoString&)
constexpr uintptr_t CGameSpyClient__ChatNameMangle = 0x082740F0;
// void CGameSpyClient::ConnectCallback(void*, PEERBool, void*)
constexpr uintptr_t CGameSpyClient__ConnectCallback = 0x0827456C;
// void CGameSpyClient::DisconnectedCallback(void*, const char*, void*)
constexpr uintptr_t CGameSpyClient__DisconnectedCallback = 0x08274600;
// void CGameSpyClient::EnumPlayersCallback(void*, PEERBool, RoomType, int32_t, const char*, int32_t, void*)
constexpr uintptr_t CGameSpyClient__EnumPlayersCallback = 0x082747C4;
// void CGameSpyClient::JoinGroupRoom(int32_t)
constexpr uintptr_t CGameSpyClient__JoinGroupRoom = 0x082746F8;
// void CGameSpyClient::JoinGroupRoomCallback(void*, PEERBool, PEERJoinResult, RoomType, void*)
constexpr uintptr_t CGameSpyClient__JoinGroupRoomCallback = 0x0827367C;
// void CGameSpyClient::ListGroupRoomsCallback(void*, PEERBool, int32_t, _SBServer*, const char*, int32_t, int32_t, int32_t, int32_t, void*)
constexpr uintptr_t CGameSpyClient__ListGroupRoomsCallback = 0x0827461C;
// void CGameSpyClient::ListingGamesCallback(void*, PEERBool, const char*, _SBServer*, PEERBool, int32_t, int32_t, void*)
constexpr uintptr_t CGameSpyClient__ListingGamesCallback = 0x082737B0;
// void CGameSpyClient::NickErrorCallback(void*, int32_t, const char*, void*)
constexpr uintptr_t CGameSpyClient__NickErrorCallback = 0x08273418;
// void CGameSpyClient::PlayerChangedNickCallback(void*, RoomType, const char*, const char*, void*)
constexpr uintptr_t CGameSpyClient__PlayerChangedNickCallback = 0x0827499C;
// void CGameSpyClient::PlayerJoinedCallback(void*, RoomType, const char*, void*)
constexpr uintptr_t CGameSpyClient__PlayerJoinedCallback = 0x08274874;
// void CGameSpyClient::PlayerLeftCallback(void*, RoomType, const char*, const char*, void*)
constexpr uintptr_t CGameSpyClient__PlayerLeftCallback = 0x08274908;
// void CGameSpyClient::PlayerMessageCallback(void*, const char*, const char*, MessageType, void*)
constexpr uintptr_t CGameSpyClient__PlayerMessageCallback = 0x08274AC4;
// void CGameSpyClient::RoomMessageCallback(void*, RoomType, const char*, const char*, MessageType, void*)
constexpr uintptr_t CGameSpyClient__RoomMessageCallback = 0x08274A30;
// void CGameSpyClient::SendMessageToNick(const char*, const char*)
constexpr uintptr_t CGameSpyClient__SendMessageToNick = 0x08274B90;
// void CGameSpyClient::SendMessageToRoom(const char*)
constexpr uintptr_t CGameSpyClient__SendMessageToRoom = 0x08274B74;
// void CGameSpyClient::SetGameBuildFilter(const CExoString&)
constexpr uintptr_t CGameSpyClient__SetGameBuildFilter = 0x08274C44;
// void CGameSpyClient::SetGameFilters(void)
constexpr uintptr_t CGameSpyClient__SetGameFilters = 0x08274BB0;
// void CGameSpyClient::Update(void)
constexpr uintptr_t CGameSpyClient__Update = 0x08274558;

// public CGameSpyServer::CGameSpyServer(int32_t, CConnectionLib*, int32_t&)
constexpr uintptr_t CGameSpyServer__CGameSpyServerCtor__1 = 0x0827428C;
// public CGameSpyServer::~CGameSpyServer(void)
constexpr uintptr_t CGameSpyServer__CGameSpyServerDtor = 0x08274338;
// void CGameSpyServer::AddErrorCallback(qr2_error_t, char*, void*)
constexpr uintptr_t CGameSpyServer__AddErrorCallback = 0x082744A4;
// void CGameSpyServer::CountCallback(qr2_key_type, void*)
constexpr uintptr_t CGameSpyServer__CountCallback = 0x0827449C;
// public int32_t CGameSpyServer::HandleGameSpyMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CGameSpyServer__HandleGameSpyMessage = 0x08272FBC;
// void CGameSpyServer::KeyListCallback(qr2_key_type, qr2_keybuffer_s*, void*)
constexpr uintptr_t CGameSpyServer__KeyListCallback = 0x08272E80;
// void CGameSpyServer::PlayerTeamKeyCallback(int32_t, int32_t, qr2_buffer_s*, void*)
constexpr uintptr_t CGameSpyServer__PlayerTeamKeyCallback = 0x0827447C;
// public void CGameSpyServer::RegisterAllKeys(void)
constexpr uintptr_t CGameSpyServer__RegisterAllKeys = 0x08274374;
// void CGameSpyServer::ServerKeyCallback(int32_t, qr2_buffer_s*, void*)
constexpr uintptr_t CGameSpyServer__ServerKeyCallback = 0x08274460;
// void CGameSpyServer::Update(void)
constexpr uintptr_t CGameSpyServer__Update = 0x082744E8;

// CItemPropertyApplierRemover::~CItemPropertyApplierRemover(void)
constexpr uintptr_t CItemPropertyApplierRemover__CItemPropertyApplierRemoverDtor = 0x081B0C30;

// public CItemRepository::CItemRepository(uint32_t, unsigned char, unsigned char, uint32_t, int32_t)
constexpr uintptr_t CItemRepository__CItemRepositoryCtor__1 = 0x081A6928;
// public CItemRepository::~CItemRepository(void)
constexpr uintptr_t CItemRepository__CItemRepositoryDtor = 0x081A699C;
// public int32_t CItemRepository::AddItem(CNWSItem**, unsigned char, unsigned char, int32_t, int32_t)
constexpr uintptr_t CItemRepository__AddItem = 0x081A32D0;
// void CItemRepository::AddPanel(void)
constexpr uintptr_t CItemRepository__AddPanel = 0x081A6B48;
// public int32_t CItemRepository::CalculateContentsWeight(void)
constexpr uintptr_t CItemRepository__CalculateContentsWeight = 0x081A4A54;
// public unsigned char CItemRepository::CalculatePage(unsigned char, unsigned char)
constexpr uintptr_t CItemRepository__CalculatePage = 0x081A6A38;
// public int32_t CItemRepository::CheckFit(CNWSItem*, unsigned char, unsigned char)
constexpr uintptr_t CItemRepository__CheckFit = 0x081A3BB4;
// public int32_t CItemRepository::CheckItemOverlaps(CNWSItem*, CNWSItem*, unsigned char, unsigned char)
constexpr uintptr_t CItemRepository__CheckItemOverlaps = 0x081A3DD8;
// public uint32_t CItemRepository::FindItemWithBaseItemId(uint32_t, int32_t)
constexpr uintptr_t CItemRepository__FindItemWithBaseItemId = 0x081A3EE4;
// public uint32_t CItemRepository::FindItemWithTag(CExoString*)
constexpr uintptr_t CItemRepository__FindItemWithTag = 0x081A3F9C;
// public int32_t CItemRepository::FindPosition(CNWSItem*, unsigned char&, unsigned char&, int32_t)
constexpr uintptr_t CItemRepository__FindPosition = 0x081A4114;
// public int32_t CItemRepository::GetItemInRepository(CNWSItem*, int32_t)
constexpr uintptr_t CItemRepository__GetItemInRepository__0 = 0x081A4744;
// public int32_t CItemRepository::GetItemInRepository(unsigned char, unsigned char)
constexpr uintptr_t CItemRepository__GetItemInRepository__1 = 0x081A6AB8;
// public CNWSItem* CItemRepository::ItemListGetItem(CExoLinkedListNode*)
constexpr uintptr_t CItemRepository__ItemListGetItem = 0x081A6A58;
// public uint32_t CItemRepository::ItemListGetItemObjectID(CExoLinkedListNode*)
constexpr uintptr_t CItemRepository__ItemListGetItemObjectID = 0x081A6A90;
// public int32_t CItemRepository::MoveItem(CNWSItem*, unsigned char, unsigned char)
constexpr uintptr_t CItemRepository__MoveItem = 0x081A497C;
// public int32_t CItemRepository::RemoveItem(CNWSItem*)
constexpr uintptr_t CItemRepository__RemoveItem = 0x081A4844;

// public CLastUpdateObject::CLastUpdateObject(void)
constexpr uintptr_t CLastUpdateObject__CLastUpdateObjectCtor = 0x081E2C24;
// public CLastUpdateObject::~CLastUpdateObject(void)
constexpr uintptr_t CLastUpdateObject__CLastUpdateObjectDtor = 0x081E2FDC;
// public void CLastUpdateObject::InitializeQuickbar(void)
constexpr uintptr_t CLastUpdateObject__InitializeQuickbar = 0x081E42A0;

// public int32_t CLoopingVisualEffect::GetIsBeam(void)
constexpr uintptr_t CLoopingVisualEffect__GetIsBeam = 0x081C8800;

// void CMemRecord::Clear(void)
constexpr uintptr_t CMemRecord__Clear = 0x082AE60C;

// public CMstNetLayer::CMstNetLayer(CConnectionLib*)
constexpr uintptr_t CMstNetLayer__CMstNetLayerCtor__1 = 0x082940B4;
// public CMstNetLayer::~CMstNetLayer(void)
constexpr uintptr_t CMstNetLayer__CMstNetLayerDtor = 0x08297F54;
// public CExoString CMstNetLayer::GenerateCommunityNameResponse(const CExoString&, const CExoString&)
constexpr uintptr_t CMstNetLayer__GenerateCommunityNameResponse = 0x082943D8;
// public uint16_t CMstNetLayer::GetCommunityNameStatus(const CExoString&, unsigned char**)
constexpr uintptr_t CMstNetLayer__GetCommunityNameStatus = 0x082987FC;
// private SMstDigiDistInfo* CMstNetLayer::GetDigiDistInfo(CExoString&)
constexpr uintptr_t CMstNetLayer__GetDigiDistInfo = 0x082988C8;
// void CMstNetLayer::GetDigiDistModuleCipher(CExoString&, int32_t)
constexpr uintptr_t CMstNetLayer__GetDigiDistModuleCipher = 0x08297D60;
// public CExoString CMstNetLayer::GetKeyAuthDemand(CExoString&)
constexpr uintptr_t CMstNetLayer__GetKeyAuthDemand = 0x08297990;
// public CExoString CMstNetLayer::GetKeyCollision(void)
constexpr uintptr_t CMstNetLayer__GetKeyCollision = 0x08297B0C;
// public uint32_t CMstNetLayer::GetKeyRejectionReason(uint16_t)
constexpr uintptr_t CMstNetLayer__GetKeyRejectionReason = 0x082987AC;
// public uint16_t CMstNetLayer::GetKeyStatus(const CExoString&, uint16_t&)
constexpr uintptr_t CMstNetLayer__GetKeyStatus = 0x08297C78;
// public CExoString CMstNetLayer::GetMasterServerInternetName(void)
constexpr uintptr_t CMstNetLayer__GetMasterServerInternetName = 0x08297FDC;
// void CMstNetLayer::GetMasterServerPort(void)
constexpr uintptr_t CMstNetLayer__GetMasterServerPort = 0x08298000;
// void CMstNetLayer::GetNextBuddyEntry(void)
constexpr uintptr_t CMstNetLayer__GetNextBuddyEntry = 0x0829888C;
// public void CMstNetLayer::HandleAddBuddyResponse(unsigned char*, uint32_t)
constexpr uintptr_t CMstNetLayer__HandleAddBuddyResponse = 0x08297560;
// public void CMstNetLayer::HandleAuthorizationResponse(unsigned char*, uint32_t)
constexpr uintptr_t CMstNetLayer__HandleAuthorizationResponse = 0x08296F08;
// public void CMstNetLayer::HandleCommunityNameAuthResponse(unsigned char*, uint32_t)
constexpr uintptr_t CMstNetLayer__HandleCommunityNameAuthResponse = 0x08297280;
// public void CMstNetLayer::HandleCreateAccountPartOne(unsigned char*, uint32_t)
constexpr uintptr_t CMstNetLayer__HandleCreateAccountPartOne = 0x082973C4;
// public void CMstNetLayer::HandleCreateAccountPartTwo(unsigned char*, uint32_t)
constexpr uintptr_t CMstNetLayer__HandleCreateAccountPartTwo = 0x082974A8;
// public void CMstNetLayer::HandleDemandAuthorization(unsigned char*, uint32_t)
constexpr uintptr_t CMstNetLayer__HandleDemandAuthorization = 0x0829688C;
// public void CMstNetLayer::HandleDemandHeartbeat(unsigned char*, uint32_t)
constexpr uintptr_t CMstNetLayer__HandleDemandHeartbeat = 0x08298544;
// public void CMstNetLayer::HandleDigiDistAuthResponse(unsigned char*, uint32_t)
constexpr uintptr_t CMstNetLayer__HandleDigiDistAuthResponse = 0x0829789C;
// public void CMstNetLayer::HandleGetAvailabilityResponse(unsigned char*, uint32_t)
constexpr uintptr_t CMstNetLayer__HandleGetAvailabilityResponse = 0x08298768;
// public void CMstNetLayer::HandleGetBuddyListResponse(unsigned char*, uint32_t)
constexpr uintptr_t CMstNetLayer__HandleGetBuddyListResponse = 0x08297700;
// public int32_t CMstNetLayer::HandleMasterServerToGameMessage(unsigned char*, uint32_t)
constexpr uintptr_t CMstNetLayer__HandleMasterServerToGameMessage = 0x082965A4;
// public void CMstNetLayer::HandleMOTDResponse(unsigned char*, uint32_t)
constexpr uintptr_t CMstNetLayer__HandleMOTDResponse = 0x0829866C;
// public void CMstNetLayer::HandleNotifyCollision(unsigned char*, uint32_t)
constexpr uintptr_t CMstNetLayer__HandleNotifyCollision = 0x08296C40;
// public void CMstNetLayer::HandleRemoveBuddyResponse(unsigned char*, uint32_t)
constexpr uintptr_t CMstNetLayer__HandleRemoveBuddyResponse = 0x08297630;
// public void CMstNetLayer::HandleSetAvailabilityResponse(unsigned char*, uint32_t)
constexpr uintptr_t CMstNetLayer__HandleSetAvailabilityResponse = 0x0829872C;
// public void CMstNetLayer::HandleStatusResponse(unsigned char*, uint32_t)
constexpr uintptr_t CMstNetLayer__HandleStatusResponse = 0x082985C8;
// public void CMstNetLayer::HandleVersionResponse(unsigned char*, uint32_t)
constexpr uintptr_t CMstNetLayer__HandleVersionResponse = 0x082986CC;
// void CMstNetLayer::SendAddBuddyRequest(const CExoString&, const CExoString&)
constexpr uintptr_t CMstNetLayer__SendAddBuddyRequest = 0x08295AB8;
// void CMstNetLayer::SendClientToMasterCreateAccountPartOne(const CExoString&)
constexpr uintptr_t CMstNetLayer__SendClientToMasterCreateAccountPartOne = 0x08295414;
// void CMstNetLayer::SendClientToMasterCreateAccountPartTwo(const CExoString&, const CExoString&, const CExoString&, unsigned char*, const CExoString&)
constexpr uintptr_t CMstNetLayer__SendClientToMasterCreateAccountPartTwo = 0x08295508;
// void CMstNetLayer::SendClientToMasterMOTDRequest(uint16_t)
constexpr uintptr_t CMstNetLayer__SendClientToMasterMOTDRequest = 0x08298438;
// void CMstNetLayer::SendClientToMasterVersionRequest(uint16_t)
constexpr uintptr_t CMstNetLayer__SendClientToMasterVersionRequest = 0x082984BC;
// void CMstNetLayer::SendDigiDistAuthRequest(CExoArrayListTemplatedCExoString*, const CExoString&)
constexpr uintptr_t CMstNetLayer__SendDigiDistAuthRequest = 0x08295F54;
// public int32_t CMstNetLayer::SendGameToMasterAuthorizationRequest(uint32_t, int32_t)
constexpr uintptr_t CMstNetLayer__SendGameToMasterAuthorizationRequest__0 = 0x08294530;
// public int32_t CMstNetLayer::SendGameToMasterAuthorizationRequest(void*, int32_t)
constexpr uintptr_t CMstNetLayer__SendGameToMasterAuthorizationRequest__1 = 0x08294E64;
// public int32_t CMstNetLayer::SendGameToMasterCommunityNameAuth(const CExoString&, const CExoString&, const CExoString&, uint16_t, unsigned char)
constexpr uintptr_t CMstNetLayer__SendGameToMasterCommunityNameAuth = 0x0829521C;
// public int32_t CMstNetLayer::SendGameToMasterDisconnect(uint32_t)
constexpr uintptr_t CMstNetLayer__SendGameToMasterDisconnect__0 = 0x08294FD0;
// public int32_t CMstNetLayer::SendGameToMasterDisconnect(void*, int32_t)
constexpr uintptr_t CMstNetLayer__SendGameToMasterDisconnect__1 = 0x0829515C;
// public int32_t CMstNetLayer::SendGameToMasterHeartbeat(void*, int32_t)
constexpr uintptr_t CMstNetLayer__SendGameToMasterHeartbeat = 0x08294F10;
// public int32_t CMstNetLayer::SendGameToMasterModule(unsigned char, const CExoString&)
constexpr uintptr_t CMstNetLayer__SendGameToMasterModule = 0x08298394;
// public int32_t CMstNetLayer::SendGameToMasterShutDown(void)
constexpr uintptr_t CMstNetLayer__SendGameToMasterShutDown = 0x08298328;
// public int32_t CMstNetLayer::SendGameToMasterStartup(unsigned char, uint32_t, int32_t, unsigned char, unsigned char)
constexpr uintptr_t CMstNetLayer__SendGameToMasterStartup = 0x082982B0;
// public int32_t CMstNetLayer::SendGameToMasterStatusRequest(void)
constexpr uintptr_t CMstNetLayer__SendGameToMasterStatusRequest = 0x0829824C;
// void CMstNetLayer::SendGetAvailabilityRequest(const CExoString&)
constexpr uintptr_t CMstNetLayer__SendGetAvailabilityRequest = 0x08295E90;
// void CMstNetLayer::SendGetBuddyListRequest(const CExoString&)
constexpr uintptr_t CMstNetLayer__SendGetBuddyListRequest = 0x08295CE8;
// void CMstNetLayer::SendRemoveBuddyRequest(const CExoString&, const CExoString&)
constexpr uintptr_t CMstNetLayer__SendRemoveBuddyRequest = 0x08295BD0;
// void CMstNetLayer::SendSetAvailabilityRequest(const CExoString&, uint16_t)
constexpr uintptr_t CMstNetLayer__SendSetAvailabilityRequest = 0x08295DAC;
// public void CMstNetLayer::SetLanguage(int32_t)
constexpr uintptr_t CMstNetLayer__SetLanguage = 0x08294290;
// public void CMstNetLayer::StartHeartbeatTimer(uint64_t)
constexpr uintptr_t CMstNetLayer__StartHeartbeatTimer = 0x0829800C;
// public void CMstNetLayer::StartSystemUpdateTimer(uint64_t)
constexpr uintptr_t CMstNetLayer__StartSystemUpdateTimer = 0x082980CC;
// public void CMstNetLayer::StartTimeOutTimer(uint64_t)
constexpr uintptr_t CMstNetLayer__StartTimeOutTimer = 0x0829818C;
// public int32_t CMstNetLayer::UpdateHeartbeatTimer(uint64_t)
constexpr uintptr_t CMstNetLayer__UpdateHeartbeatTimer = 0x08298030;
// public int32_t CMstNetLayer::UpdateSystemUpdateTimer(uint64_t)
constexpr uintptr_t CMstNetLayer__UpdateSystemUpdateTimer = 0x082980F0;
// public int32_t CMstNetLayer::UpdateTimeOutTimer(uint64_t)
constexpr uintptr_t CMstNetLayer__UpdateTimeOutTimer = 0x082981B0;

// public CNetLayer::CNetLayer(void)
constexpr uintptr_t CNetLayer__CNetLayerCtor = 0x082ACFF0;
// public CNetLayer::~CNetLayer(void)
constexpr uintptr_t CNetLayer__CNetLayerDtor = 0x082AD038;
// void CNetLayer::CleanUpEnumerateSpecific(void)
constexpr uintptr_t CNetLayer__CleanUpEnumerateSpecific = 0x082AD3E0;
// void CNetLayer::ClearSessionInfoChanged(uint32_t)
constexpr uintptr_t CNetLayer__ClearSessionInfoChanged = 0x082AD5E0;
// public int32_t CNetLayer::CloseStandardConnection(int32_t)
constexpr uintptr_t CNetLayer__CloseStandardConnection = 0x082ADB5C;
// void CNetLayer::DisconnectFromSession(void)
constexpr uintptr_t CNetLayer__DisconnectFromSession = 0x082AD43C;
// public int32_t CNetLayer::DisconnectPlayer(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNetLayer__DisconnectPlayer = 0x082AD478;
// void CNetLayer::DropConnectionToServer(void)
constexpr uintptr_t CNetLayer__DropConnectionToServer = 0x082AD450;
// void CNetLayer::EndConnectToSession(void)
constexpr uintptr_t CNetLayer__EndConnectToSession = 0x082AD414;
// void CNetLayer::EndEnumerateSessions(void)
constexpr uintptr_t CNetLayer__EndEnumerateSessions = 0x082AD3CC;
// public int32_t CNetLayer::EndInternetAddressTranslation(void)
constexpr uintptr_t CNetLayer__EndInternetAddressTranslation = 0x082AD774;
// void CNetLayer::EndPing(uint32_t)
constexpr uintptr_t CNetLayer__EndPing = 0x082AD538;
// public int32_t CNetLayer::EndProtocol(uint32_t)
constexpr uintptr_t CNetLayer__EndProtocol = 0x082AD130;
// public int32_t CNetLayer::EndServerMode(void)
constexpr uintptr_t CNetLayer__EndServerMode = 0x082AD37C;
// void CNetLayer::EnumerateSessionsList(unsigned char)
constexpr uintptr_t CNetLayer__EnumerateSessionsList = 0x082AD7DC;
// void CNetLayer::GetAnySessionsEnumerated(void)
constexpr uintptr_t CNetLayer__GetAnySessionsEnumerated = 0x082AD7F8;
// public int32_t CNetLayer::GetAnyWindowBehind(void)
constexpr uintptr_t CNetLayer__GetAnyWindowBehind = 0x082ADA64;
// void CNetLayer::GetClientConnected(void)
constexpr uintptr_t CNetLayer__GetClientConnected = 0x082AD79C;
// void CNetLayer::GetConnectionError(void)
constexpr uintptr_t CNetLayer__GetConnectionError = 0x082AD428;
// public int32_t CNetLayer::GetConnectionsMustBeValidated(void)
constexpr uintptr_t CNetLayer__GetConnectionsMustBeValidated = 0x082ADBAC;
// void CNetLayer::GetDisconnectStrref(void)
constexpr uintptr_t CNetLayer__GetDisconnectStrref = 0x082AD498;
// void CNetLayer::GetExoApp(void)
constexpr uintptr_t CNetLayer__GetExoApp = 0x082AD094;
// void CNetLayer::GetExoNet(void)
constexpr uintptr_t CNetLayer__GetExoNet = 0x082AD8B4;
// public uint16_t CNetLayer::GetExpansionPackReqd(void)
constexpr uintptr_t CNetLayer__GetExpansionPackReqd = 0x082ADA2C;
// public CExoString CNetLayer::GetGameMasterPassword(void)
constexpr uintptr_t CNetLayer__GetGameMasterPassword = 0x082AD264;
// void CNetLayer::GetGameMasterPermision(void) const
constexpr uintptr_t CNetLayer__GetGameMasterPermision = 0x082AD87C;
// public uint32_t CNetLayer::GetInternetAddressTranslationStatus(unsigned char*)
constexpr uintptr_t CNetLayer__GetInternetAddressTranslationStatus = 0x082AD760;
// void CNetLayer::GetIPBySessionId(uint32_t, CExoString*)
constexpr uintptr_t CNetLayer__GetIPBySessionId = 0x082ADB78;
// void CNetLayer::GetLocalAdapterString(uint32_t, uint32_t)
constexpr uintptr_t CNetLayer__GetLocalAdapterString = 0x082AD4D0;
// void CNetLayer::GetLocalPrivileges(uint32_t)
constexpr uintptr_t CNetLayer__GetLocalPrivileges = 0x082AD820;
// public int32_t CNetLayer::GetMessageFromStandardConnection(int32_t*, char**, int32_t*)
constexpr uintptr_t CNetLayer__GetMessageFromStandardConnection = 0x082ADB14;
// void CNetLayer::GetNumberLocalAdapters(uint32_t)
constexpr uintptr_t CNetLayer__GetNumberLocalAdapters = 0x082AD4BC;
// public int32_t CNetLayer::GetPasswordRequired(void)
constexpr uintptr_t CNetLayer__GetPasswordRequired = 0x082AD1C4;
// public CExoString CNetLayer::GetPlayerAddress(uint32_t)
constexpr uintptr_t CNetLayer__GetPlayerAddress = 0x082AD858;
// public int32_t CNetLayer::GetPlayerAddressData(uint32_t, uint32_t*, unsigned char**, unsigned char**, uint32_t*)
constexpr uintptr_t CNetLayer__GetPlayerAddressData = 0x082AD54C;
// public CNetLayerPlayerInfo* CNetLayer::GetPlayerInfo(uint32_t)
constexpr uintptr_t CNetLayer__GetPlayerInfo = 0x082AD834;
// public CExoString CNetLayer::GetPlayerPassword(void)
constexpr uintptr_t CNetLayer__GetPlayerPassword = 0x082AD1D8;
// void CNetLayer::GetPortBySessionId(uint32_t)
constexpr uintptr_t CNetLayer__GetPortBySessionId = 0x082AD6B8;
// public uint32_t CNetLayer::GetSendUDPSocket(void)
constexpr uintptr_t CNetLayer__GetSendUDPSocket = 0x082AD92C;
// public CExoString CNetLayer::GetServerAdminPassword(void)
constexpr uintptr_t CNetLayer__GetServerAdminPassword = 0x082AD2F0;
// void CNetLayer::GetServerConnected(void)
constexpr uintptr_t CNetLayer__GetServerConnected = 0x082AD7C8;
// void CNetLayer::GetServerNetworkAddress(void)
constexpr uintptr_t CNetLayer__GetServerNetworkAddress = 0x082AD8CC;
// void CNetLayer::GetSessionInfo(uint32_t)
constexpr uintptr_t CNetLayer__GetSessionInfo = 0x082AD6CC;
// void CNetLayer::GetSessionInfoChanged(uint32_t)
constexpr uintptr_t CNetLayer__GetSessionInfoChanged = 0x082AD5C8;
// public uint32_t CNetLayer::GetSessionMaxPlayers(void)
constexpr uintptr_t CNetLayer__GetSessionMaxPlayers = 0x082AD5F4;
// public CExoString CNetLayer::GetSessionName(void)
constexpr uintptr_t CNetLayer__GetSessionName = 0x082AD61C;
// public uint32_t CNetLayer::GetUDPRecievePort(void)
constexpr uintptr_t CNetLayer__GetUDPRecievePort = 0x082AD6A4;
// public int32_t CNetLayer::Initialize(CBaseExoApp*)
constexpr uintptr_t CNetLayer__Initialize = 0x082AD080;
// void CNetLayer::IsConnectedToLocalhost(void)
constexpr uintptr_t CNetLayer__IsConnectedToLocalhost = 0x082AD464;
// public int32_t CNetLayer::MessageArrived(uint32_t, uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNetLayer__MessageArrived = 0x082AD0D0;
// public int32_t CNetLayer::OpenStandardConnection(int32_t, CExoString, int32_t)
constexpr uintptr_t CNetLayer__OpenStandardConnection = 0x082ADA7C;
// public int32_t CNetLayer::PlayerIdToConnectionId(uint32_t, uint32_t*)
constexpr uintptr_t CNetLayer__PlayerIdToConnectionId = 0x082ADA48;
// public void CNetLayer::ProcessReceivedFrames(int32_t)
constexpr uintptr_t CNetLayer__ProcessReceivedFrames = 0x082AD0A8;
// void CNetLayer::RequestExtendedServerInfo(uint32_t, int32_t, int32_t)
constexpr uintptr_t CNetLayer__RequestExtendedServerInfo = 0x082AD4F8;
// void CNetLayer::RequestServerDetails(uint32_t)
constexpr uintptr_t CNetLayer__RequestServerDetails = 0x082AD510;
// public int32_t CNetLayer::SendMessageToAddress(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayer__SendMessageToAddress = 0x082AD100;
// public int32_t CNetLayer::SendMessageToPlayer(uint32_t, unsigned char*, uint32_t, uint32_t)
constexpr uintptr_t CNetLayer__SendMessageToPlayer = 0x082AD0E8;
// public int32_t CNetLayer::SendMessageToStandardConnection(int32_t, char*, int32_t)
constexpr uintptr_t CNetLayer__SendMessageToStandardConnection = 0x082ADB38;
// public void CNetLayer::SetConnectionsDisallowed(int32_t)
constexpr uintptr_t CNetLayer__SetConnectionsDisallowed = 0x082ADB94;
// public void CNetLayer::SetConnectionsMustBeValidated(int32_t)
constexpr uintptr_t CNetLayer__SetConnectionsMustBeValidated = 0x082ADBC4;
// void CNetLayer::SetDisconnectStrref(uint32_t)
constexpr uintptr_t CNetLayer__SetDisconnectStrref = 0x082AD4A8;
// public void CNetLayer::SetExpansionPackReqd(uint16_t)
constexpr uintptr_t CNetLayer__SetExpansionPackReqd = 0x082ADA14;
// public int32_t CNetLayer::SetGameMasterPassword(CExoString)
constexpr uintptr_t CNetLayer__SetGameMasterPassword = 0x082AD288;
// public void CNetLayer::SetMasterServerInternetAddress(const unsigned char*, uint32_t)
constexpr uintptr_t CNetLayer__SetMasterServerInternetAddress = 0x082AD908;
// void CNetLayer::SetMstServerPassword(CExoString)
constexpr uintptr_t CNetLayer__SetMstServerPassword = 0x082AD970;
// public int32_t CNetLayer::SetPlayerPassword(CExoString)
constexpr uintptr_t CNetLayer__SetPlayerPassword = 0x082AD1FC;
// public int32_t CNetLayer::SetServerAdminPassword(CExoString)
constexpr uintptr_t CNetLayer__SetServerAdminPassword = 0x082AD314;
// public void CNetLayer::SetServerLanguage(int32_t)
constexpr uintptr_t CNetLayer__SetServerLanguage = 0x082AD144;
// void CNetLayer::SetSessionInfoChanged(uint32_t, int32_t)
constexpr uintptr_t CNetLayer__SetSessionInfoChanged = 0x082AD580;
// public void CNetLayer::SetSessionMaxPlayers(uint32_t)
constexpr uintptr_t CNetLayer__SetSessionMaxPlayers = 0x082AD608;
// public void CNetLayer::SetSessionName(CExoString)
constexpr uintptr_t CNetLayer__SetSessionName = 0x082AD640;
// void CNetLayer::SetUpPlayBackConnection(void)
constexpr uintptr_t CNetLayer__SetUpPlayBackConnection = 0x082AD6E0;
// public int32_t CNetLayer::ShutDown(void)
constexpr uintptr_t CNetLayer__ShutDown = 0x082AD0BC;
// void CNetLayer::ShutDownClientInterfaceWithReason(uint32_t)
constexpr uintptr_t CNetLayer__ShutDownClientInterfaceWithReason = 0x082AD94C;
// void CNetLayer::StartConnectToSession(uint32_t, const CExoString&, int32_t, int32_t, const CExoString&, uint32_t, uint32_t, const CExoString&)
constexpr uintptr_t CNetLayer__StartConnectToSession = 0x082AD3F4;
// void CNetLayer::StartEnumerateSessions(uint32_t, int32_t, unsigned char*, uint16_t, int32_t, uint16_t, CExoString*, uint16_t, CExoString*, uint16_t, CExoString*)
constexpr uintptr_t CNetLayer__StartEnumerateSessions = 0x082AD390;
// public int32_t CNetLayer::StartInternetAddressTranslation(CExoString, uint32_t, uint32_t)
constexpr uintptr_t CNetLayer__StartInternetAddressTranslation = 0x082AD6F4;
// void CNetLayer::StartPing(uint32_t)
constexpr uintptr_t CNetLayer__StartPing = 0x082AD524;
// public int32_t CNetLayer::StartProtocol(uint32_t, uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CNetLayer__StartProtocol = 0x082AD118;
// public int32_t CNetLayer::StartServerMode(CExoString, uint32_t)
constexpr uintptr_t CNetLayer__StartServerMode = 0x082AD158;
// public void CNetLayer::StoreMessage(unsigned char*, uint32_t)
constexpr uintptr_t CNetLayer__StoreMessage = 0x082AD56C;
// public int32_t CNetLayer::TranslateAddressFromString(char*, uint32_t*, unsigned char*, unsigned char*, uint32_t*)
constexpr uintptr_t CNetLayer__TranslateAddressFromString = 0x082AD894;
// public int32_t CNetLayer::UpdateStatusLoop(uint32_t)
constexpr uintptr_t CNetLayer__UpdateStatusLoop = 0x082AD788;

// public CNetLayerInternal::CNetLayerInternal(void)
constexpr uintptr_t CNetLayerInternal__CNetLayerInternalCtor = 0x0829FC80;
// public CNetLayerInternal::~CNetLayerInternal(void)
constexpr uintptr_t CNetLayerInternal__CNetLayerInternalDtor = 0x082A00AC;
// void CNetLayerInternal::BroadcastMessageToAddress(uint32_t, uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__BroadcastMessageToAddress = 0x082AB924;
// protected void CNetLayerInternal::CheckMasterServerTimeouts(void)
constexpr uintptr_t CNetLayerInternal__CheckMasterServerTimeouts = 0x082AAB20;
// void CNetLayerInternal::CleanUpEnumerateSpecific(void)
constexpr uintptr_t CNetLayerInternal__CleanUpEnumerateSpecific = 0x082ABFFC;
// void CNetLayerInternal::ClearSessionInfoChanged(uint32_t)
constexpr uintptr_t CNetLayerInternal__ClearSessionInfoChanged = 0x082AC070;
// public int32_t CNetLayerInternal::CloseStandardConnection(int32_t)
constexpr uintptr_t CNetLayerInternal__CloseStandardConnection = 0x082ACA44;
// void CNetLayerInternal::ConnectionIdToSlidingWindow(uint32_t, uint32_t*)
constexpr uintptr_t CNetLayerInternal__ConnectionIdToSlidingWindow = 0x082AB95C;
// void CNetLayerInternal::ConnectToSessionLoop(void)
constexpr uintptr_t CNetLayerInternal__ConnectToSessionLoop = 0x082AC3A0;
// void CNetLayerInternal::CRCBlock(unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__CRCBlock = 0x082AC810;
// void CNetLayerInternal::CRCBuildTable(void)
constexpr uintptr_t CNetLayerInternal__CRCBuildTable = 0x082AC7D0;
// void CNetLayerInternal::CRCEncodeFrame(unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__CRCEncodeFrame = 0x082AC848;
// void CNetLayerInternal::CRCVerifyFrame(unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__CRCVerifyFrame = 0x082AC8A8;
// void CNetLayerInternal::DisconnectFromSession(void)
constexpr uintptr_t CNetLayerInternal__DisconnectFromSession = 0x082AC418;
// public int32_t CNetLayerInternal::DisconnectPlayer(uint32_t, uint32_t, int32_t, int32_t)
constexpr uintptr_t CNetLayerInternal__DisconnectPlayer = 0x082A9F68;
// void CNetLayerInternal::DropConnectionToServer(void)
constexpr uintptr_t CNetLayerInternal__DropConnectionToServer = 0x082AC468;
// void CNetLayerInternal::EndConnectToSession(void)
constexpr uintptr_t CNetLayerInternal__EndConnectToSession = 0x082AC300;
// void CNetLayerInternal::EndEnumerateSessions(void)
constexpr uintptr_t CNetLayerInternal__EndEnumerateSessions = 0x082ABF74;
// void CNetLayerInternal::EndInternetAddressTranslation(void)
constexpr uintptr_t CNetLayerInternal__EndInternetAddressTranslation = 0x082AC678;
// public int32_t CNetLayerInternal::EndPing(uint32_t)
constexpr uintptr_t CNetLayerInternal__EndPing = 0x082A968C;
// public int32_t CNetLayerInternal::EndProtocol(uint32_t)
constexpr uintptr_t CNetLayerInternal__EndProtocol = 0x082ABB1C;
// void CNetLayerInternal::EndServerMode(void)
constexpr uintptr_t CNetLayerInternal__EndServerMode = 0x082ABF04;
// public int32_t CNetLayerInternal::EnumerateSessionsList(unsigned char)
constexpr uintptr_t CNetLayerInternal__EnumerateSessionsList = 0x082A7780;
// public int32_t CNetLayerInternal::EnumerateSessionsLoop(void)
constexpr uintptr_t CNetLayerInternal__EnumerateSessionsLoop = 0x082A75F4;
// public int32_t CNetLayerInternal::FindPlayerName(CExoString, uint32_t)
constexpr uintptr_t CNetLayerInternal__FindPlayerName = 0x082AA80C;
// void CNetLayerInternal::GetConnectionError(void)
constexpr uintptr_t CNetLayerInternal__GetConnectionError = 0x082AC360;
// void CNetLayerInternal::GetExoApp(void)
constexpr uintptr_t CNetLayerInternal__GetExoApp = 0x082AB800;
// public CExoString CNetLayerInternal::GetGameMasterPassword(void)
constexpr uintptr_t CNetLayerInternal__GetGameMasterPassword = 0x082ABD6C;
// public uint32_t CNetLayerInternal::GetInternetAddressTranslationStatus(unsigned char*)
constexpr uintptr_t CNetLayerInternal__GetInternetAddressTranslationStatus = 0x082AC5BC;
// void CNetLayerInternal::GetIPBySessionId(uint32_t, CExoString*)
constexpr uintptr_t CNetLayerInternal__GetIPBySessionId = 0x082ACA5C;
// void CNetLayerInternal::GetLocalAdapterString(uint32_t, uint32_t)
constexpr uintptr_t CNetLayerInternal__GetLocalAdapterString = 0x082ABB60;
// void CNetLayerInternal::GetLocalPrivileges(uint32_t)
constexpr uintptr_t CNetLayerInternal__GetLocalPrivileges = 0x082ABF2C;
// public int32_t CNetLayerInternal::GetMessageFromStandardConnection(int32_t*, char**, int32_t*)
constexpr uintptr_t CNetLayerInternal__GetMessageFromStandardConnection = 0x082ACA14;
// void CNetLayerInternal::GetNumberLocalAdapters(uint32_t)
constexpr uintptr_t CNetLayerInternal__GetNumberLocalAdapters = 0x082ABB48;
// void CNetLayerInternal::GetPasswordRequired(void)
constexpr uintptr_t CNetLayerInternal__GetPasswordRequired = 0x082ABC78;
// public CExoString CNetLayerInternal::GetPlayerAddress(uint32_t)
constexpr uintptr_t CNetLayerInternal__GetPlayerAddress = 0x082AC4D4;
// public int32_t CNetLayerInternal::GetPlayerAddressData(uint32_t, uint32_t*, unsigned char**, unsigned char**, uint32_t*)
constexpr uintptr_t CNetLayerInternal__GetPlayerAddressData = 0x082AC0CC;
// public CExoString CNetLayerInternal::GetPlayerPassword(void)
constexpr uintptr_t CNetLayerInternal__GetPlayerPassword = 0x082ABCA0;
// void CNetLayerInternal::GetPortBySessionId(uint32_t)
constexpr uintptr_t CNetLayerInternal__GetPortBySessionId = 0x082A98E8;
// void CNetLayerInternal::GetSendUDPSocket(void)
constexpr uintptr_t CNetLayerInternal__GetSendUDPSocket = 0x082AC798;
// public CExoString CNetLayerInternal::GetServerAdminPassword(void)
constexpr uintptr_t CNetLayerInternal__GetServerAdminPassword = 0x082ABE38;
// void CNetLayerInternal::GetServerConnected(void)
constexpr uintptr_t CNetLayerInternal__GetServerConnected = 0x082AC6D0;
// void CNetLayerInternal::GetServerNetworkAddress(void)
constexpr uintptr_t CNetLayerInternal__GetServerNetworkAddress = 0x082AA620;
// void CNetLayerInternal::GetServerPlayerCount(void)
constexpr uintptr_t CNetLayerInternal__GetServerPlayerCount = 0x082AC704;
// void CNetLayerInternal::GetSessionInfo(uint32_t)
constexpr uintptr_t CNetLayerInternal__GetSessionInfo = 0x082AC2CC;
// void CNetLayerInternal::GetSessionMaxPlayers(void)
constexpr uintptr_t CNetLayerInternal__GetSessionMaxPlayers = 0x082AC204;
// public CExoString CNetLayerInternal::GetSessionName(void)
constexpr uintptr_t CNetLayerInternal__GetSessionName = 0x082AC230;
// void CNetLayerInternal::GetUDPRecievePort(void)
constexpr uintptr_t CNetLayerInternal__GetUDPRecievePort = 0x082AC2B0;
// void CNetLayerInternal::GetWindowSendIdByReceiveId(uint32_t, uint32_t*)
constexpr uintptr_t CNetLayerInternal__GetWindowSendIdByReceiveId = 0x082AC738;
// public int32_t CNetLayerInternal::HandleBNCRMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__HandleBNCRMessage = 0x082A36F4;
// public int32_t CNetLayerInternal::HandleBNCSMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__HandleBNCSMessage = 0x082A1E38;
// void CNetLayerInternal::HandleBNDMMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__HandleBNDMMessage = 0x082ABA30;
// void CNetLayerInternal::HandleBNDPMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__HandleBNDPMessage = 0x082A6FA0;
// public int32_t CNetLayerInternal::HandleBNDRMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__HandleBNDRMessage = 0x082A8A70;
// public int32_t CNetLayerInternal::HandleBNDSMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__HandleBNDSMessage = 0x082A85B4;
// public int32_t CNetLayerInternal::HandleBNERMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__HandleBNERMessage = 0x082A696C;
// public int32_t CNetLayerInternal::HandleBNESMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__HandleBNESMessage = 0x082A18F4;
// public int32_t CNetLayerInternal::HandleBNLMMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__HandleBNLMMessage = 0x082A936C;
// public int32_t CNetLayerInternal::HandleBNLRMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__HandleBNLRMessage = 0x082A94C4;
// public int32_t CNetLayerInternal::HandleBNVRMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__HandleBNVRMessage = 0x082A67DC;
// public int32_t CNetLayerInternal::HandleBNVSMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__HandleBNVSMessage = 0x082A4A54;
// public int32_t CNetLayerInternal::HandleBNXIMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__HandleBNXIMessage = 0x082A7B38;
// public int32_t CNetLayerInternal::HandleBNXRMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__HandleBNXRMessage = 0x082A7F44;
// public int32_t CNetLayerInternal::Initialize(CBaseExoApp*)
constexpr uintptr_t CNetLayerInternal__Initialize = 0x082A0258;
// public int32_t CNetLayerInternal::IsConnectedToLocalhost(void)
constexpr uintptr_t CNetLayerInternal__IsConnectedToLocalhost = 0x082A9C48;
// public int32_t CNetLayerInternal::IsPlayerIpSameAsConnection(uint32_t, uint32_t)
constexpr uintptr_t CNetLayerInternal__IsPlayerIpSameAsConnection = 0x082AA920;
// public int32_t CNetLayerInternal::MessageArrived(uint32_t, uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNetLayerInternal__MessageArrived = 0x082AB8D0;
// public int32_t CNetLayerInternal::NonWindowMessages(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__NonWindowMessages = 0x082A7098;
// public int32_t CNetLayerInternal::OpenStandardConnection(int32_t, CExoString, int32_t)
constexpr uintptr_t CNetLayerInternal__OpenStandardConnection = 0x082AC9A4;
// public int32_t CNetLayerInternal::PacketizeSendMessageToPlayer(uint32_t, unsigned char*, uint32_t, uint32_t)
constexpr uintptr_t CNetLayerInternal__PacketizeSendMessageToPlayer = 0x082A0D94;
// public int32_t CNetLayerInternal::PacketizeSmallMessageToPlayer(uint32_t, unsigned char*, uint32_t, uint32_t)
constexpr uintptr_t CNetLayerInternal__PacketizeSmallMessageToPlayer = 0x082A1338;
// public int32_t CNetLayerInternal::PlacePacketInSendQueues(uint32_t, int32_t, unsigned char*, uint32_t, int32_t)
constexpr uintptr_t CNetLayerInternal__PlacePacketInSendQueues = 0x082A112C;
// public int32_t CNetLayerInternal::PlayerIdToConnectionId(uint32_t, uint32_t*)
constexpr uintptr_t CNetLayerInternal__PlayerIdToConnectionId = 0x082AB9E4;
// void CNetLayerInternal::PlayerIdToSlidingWindow(uint32_t, uint32_t*)
constexpr uintptr_t CNetLayerInternal__PlayerIdToSlidingWindow = 0x082AB9A0;
// public void CNetLayerInternal::ProcessReceivedFrames(int32_t)
constexpr uintptr_t CNetLayerInternal__ProcessReceivedFrames = 0x082A0640;
// public int32_t CNetLayerInternal::PurgeConnections(void)
constexpr uintptr_t CNetLayerInternal__PurgeConnections = 0x082A1700;
// public int32_t CNetLayerInternal::RequestExtendedServerInfo(uint32_t, int32_t, int32_t)
constexpr uintptr_t CNetLayerInternal__RequestExtendedServerInfo = 0x082A9020;
// public int32_t CNetLayerInternal::SendBNCRMessage(uint32_t, unsigned char, uint32_t)
constexpr uintptr_t CNetLayerInternal__SendBNCRMessage = 0x082A3208;
// void CNetLayerInternal::SendBNCSMessage(uint32_t, unsigned char, int32_t, int32_t, const CExoString&, const CExoString&, uint32_t&)
constexpr uintptr_t CNetLayerInternal__SendBNCSMessage = 0x082A1BD8;
// void CNetLayerInternal::SendBNDMMessage(void)
constexpr uintptr_t CNetLayerInternal__SendBNDMMessage = 0x082AC540;
// public void CNetLayerInternal::SendBNDPMessage(uint32_t, uint32_t)
constexpr uintptr_t CNetLayerInternal__SendBNDPMessage = 0x082AA1F4;
// void CNetLayerInternal::SendBNDSMessage(uint32_t)
constexpr uintptr_t CNetLayerInternal__SendBNDSMessage = 0x082A981C;
// public int32_t CNetLayerInternal::SendBNLMMessage(uint32_t, uint32_t)
constexpr uintptr_t CNetLayerInternal__SendBNLMMessage = 0x082A925C;
// public int32_t CNetLayerInternal::SendBNVRMessage(uint32_t, unsigned char)
constexpr uintptr_t CNetLayerInternal__SendBNVRMessage = 0x082A673C;
// public int32_t CNetLayerInternal::SendBNVSMessage(const CExoArrayListTemplatedCExoString*, const CExoString&, const CExoString&)
constexpr uintptr_t CNetLayerInternal__SendBNVSMessage = 0x082A4818;
// void CNetLayerInternal::SendDirectMessage(uint32_t, unsigned char*, uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CNetLayerInternal__SendDirectMessage = 0x082AC924;
// public int32_t CNetLayerInternal::SendMessageToAddress(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__SendMessageToAddress = 0x082AB8F4;
// public int32_t CNetLayerInternal::SendMessageToPlayer(uint32_t, unsigned char*, uint32_t, uint32_t)
constexpr uintptr_t CNetLayerInternal__SendMessageToPlayer = 0x082A0B04;
// public int32_t CNetLayerInternal::SendMessageToStandardConnection(int32_t, char*, int32_t)
constexpr uintptr_t CNetLayerInternal__SendMessageToStandardConnection = 0x082ACA2C;
// public int32_t CNetLayerInternal::SetGameMasterPassword(CExoString)
constexpr uintptr_t CNetLayerInternal__SetGameMasterPassword = 0x082ABDAC;
// public void CNetLayerInternal::SetMasterServerInternetAddress(const unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__SetMasterServerInternetAddress = 0x082AC780;
// void CNetLayerInternal::SetNetworkAddressData(uint32_t, unsigned char*, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__SetNetworkAddressData = 0x082AC178;
// public void CNetLayerInternal::SetPlayerConnected(uint32_t)
constexpr uintptr_t CNetLayerInternal__SetPlayerConnected = 0x082A9D88;
// public int32_t CNetLayerInternal::SetPlayerPassword(CExoString)
constexpr uintptr_t CNetLayerInternal__SetPlayerPassword = 0x082ABCE0;
// public int32_t CNetLayerInternal::SetServerAdminPassword(CExoString)
constexpr uintptr_t CNetLayerInternal__SetServerAdminPassword = 0x082ABE78;
// public void CNetLayerInternal::SetServerLanguage(int32_t)
constexpr uintptr_t CNetLayerInternal__SetServerLanguage = 0x082ABB34;
// public void CNetLayerInternal::SetSessionMaxPlayers(uint32_t)
constexpr uintptr_t CNetLayerInternal__SetSessionMaxPlayers = 0x082AC214;
// public void CNetLayerInternal::SetSessionName(CExoString)
constexpr uintptr_t CNetLayerInternal__SetSessionName = 0x082AC258;
// public int32_t CNetLayerInternal::SetSlidingWindow(uint32_t, uint32_t, uint32_t*)
constexpr uintptr_t CNetLayerInternal__SetSlidingWindow = 0x082A177C;
// void CNetLayerInternal::SetUpPlayBackConnection(void)
constexpr uintptr_t CNetLayerInternal__SetUpPlayBackConnection = 0x082AB80C;
// public int32_t CNetLayerInternal::ShutDown(void)
constexpr uintptr_t CNetLayerInternal__ShutDown = 0x082AB82C;
// void CNetLayerInternal::ShutDownClientInterfaceWithReason(uint32_t)
constexpr uintptr_t CNetLayerInternal__ShutDownClientInterfaceWithReason = 0x082AC7B0;
// void CNetLayerInternal::StartConnectToSession(uint32_t, const CExoString&, int32_t, int32_t, const CExoString&, uint32_t, uint32_t, const CExoString&)
constexpr uintptr_t CNetLayerInternal__StartConnectToSession = 0x082A99E0;
// void CNetLayerInternal::StartEnumerateSessions(uint32_t, int32_t, unsigned char*, uint16_t, int32_t, uint16_t, CExoString*, uint16_t, CExoString*, uint16_t, CExoString*)
constexpr uintptr_t CNetLayerInternal__StartEnumerateSessions = 0x082A7314;
// public int32_t CNetLayerInternal::StartInternetAddressTranslation(CExoString, uint32_t, uint32_t)
constexpr uintptr_t CNetLayerInternal__StartInternetAddressTranslation = 0x082AA27C;
// public int32_t CNetLayerInternal::StartPing(uint32_t)
constexpr uintptr_t CNetLayerInternal__StartPing = 0x082A912C;
// public int32_t CNetLayerInternal::StartProtocol(uint32_t, uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CNetLayerInternal__StartProtocol = 0x082ABAAC;
// public int32_t CNetLayerInternal::StartServerMode(CExoString, uint32_t)
constexpr uintptr_t CNetLayerInternal__StartServerMode = 0x082ABB88;
// public void CNetLayerInternal::StoreMessage(unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__StoreMessage = 0x082AC1E4;
// public int32_t CNetLayerInternal::UncompressMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerInternal__UncompressMessage = 0x082A0844;
// public int32_t CNetLayerInternal::UpdateStatusLoop(uint32_t)
constexpr uintptr_t CNetLayerInternal__UpdateStatusLoop = 0x082AA398;
// public int32_t CNetLayerInternal::ValidatePlayerAgainstLastSuccessfulLogin(CExoString, CExoString)
constexpr uintptr_t CNetLayerInternal__ValidatePlayerAgainstLastSuccessfulLogin = 0x082AAF0C;

// CNetLayerPlayerInfo::CNetLayerPlayerInfo(void)
constexpr uintptr_t CNetLayerPlayerInfo__CNetLayerPlayerInfoCtor = 0x0829FA54;
// void CNetLayerPlayerInfo::AddCDKey(const CExoString&, const CExoString&)
constexpr uintptr_t CNetLayerPlayerInfo__AddCDKey = 0x0829FB8C;
// public int32_t CNetLayerPlayerInfo::AllKeysAuthed(uint32_t&)
constexpr uintptr_t CNetLayerPlayerInfo__AllKeysAuthed = 0x082AB744;
// public void CNetLayerPlayerInfo::Initialize(void)
constexpr uintptr_t CNetLayerPlayerInfo__Initialize = 0x082AB5B0;
// public void CNetLayerPlayerInfo::SetCDKey(int32_t, const CExoString&, const CExoString&)
constexpr uintptr_t CNetLayerPlayerInfo__SetCDKey = 0x082AB7AC;
// void CNetLayerPlayerInfo::StartMstTimer(uint64_t)
constexpr uintptr_t CNetLayerPlayerInfo__StartMstTimer = 0x082AB684;
// void CNetLayerPlayerInfo::UpdateMstTimer(uint64_t)
constexpr uintptr_t CNetLayerPlayerInfo__UpdateMstTimer = 0x082AB6A8;

// CNetLayerSessionInfo::CNetLayerSessionInfo(void)
constexpr uintptr_t CNetLayerSessionInfo__CNetLayerSessionInfoCtor = 0x0829F608;
// CNetLayerSessionInfo::~CNetLayerSessionInfo(void)
constexpr uintptr_t CNetLayerSessionInfo__CNetLayerSessionInfoDtor = 0x0829F818;

// CNetLayerWindow::CNetLayerWindow(void)
constexpr uintptr_t CNetLayerWindow__CNetLayerWindowCtor = 0x0829E29C;
// CNetLayerWindow::~CNetLayerWindow(void)
constexpr uintptr_t CNetLayerWindow__CNetLayerWindowDtor = 0x082AB140;
// void CNetLayerWindow::AddToHighOutgoingQueue(uint16_t)
constexpr uintptr_t CNetLayerWindow__AddToHighOutgoingQueue = 0x082AB1B8;
// void CNetLayerWindow::AddToLowOutgoingQueue(uint16_t)
constexpr uintptr_t CNetLayerWindow__AddToLowOutgoingQueue = 0x082AB228;
// public void CNetLayerWindow::CutOutgoingBufferSize(void)
constexpr uintptr_t CNetLayerWindow__CutOutgoingBufferSize = 0x0829F4CC;
// void CNetLayerWindow::DoubleOutgoingBufferSize(void)
constexpr uintptr_t CNetLayerWindow__DoubleOutgoingBufferSize = 0x082AB594;
// void CNetLayerWindow::FauxNagle(void)
constexpr uintptr_t CNetLayerWindow__FauxNagle = 0x0829F068;
// void CNetLayerWindow::FrameNumberBetween(uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CNetLayerWindow__FrameNumberBetween = 0x082AB308;
// public int32_t CNetLayerWindow::FrameReceive(unsigned char*, uint32_t)
constexpr uintptr_t CNetLayerWindow__FrameReceive = 0x0829EA4C;
// public void CNetLayerWindow::FrameSend(unsigned char, uint16_t, uint16_t)
constexpr uintptr_t CNetLayerWindow__FrameSend = 0x0829E8BC;
// public int32_t CNetLayerWindow::FrameTimeout(uint32_t)
constexpr uintptr_t CNetLayerWindow__FrameTimeout = 0x0829EE40;
// public void CNetLayerWindow::Initialize(CNetLayerInternal*)
constexpr uintptr_t CNetLayerWindow__Initialize = 0x0829E390;
// public void CNetLayerWindow::InitializeCompressionBuffers(void)
constexpr uintptr_t CNetLayerWindow__InitializeCompressionBuffers = 0x0829E6AC;
// public void CNetLayerWindow::LoadWindowWithFrames(void)
constexpr uintptr_t CNetLayerWindow__LoadWindowWithFrames = 0x0829E7B0;
// void CNetLayerWindow::PlaceFrameInOutgoingBuffers(uint16_t)
constexpr uintptr_t CNetLayerWindow__PlaceFrameInOutgoingBuffers = 0x082AB2B4;
// void CNetLayerWindow::SetAckTimer(void)
constexpr uintptr_t CNetLayerWindow__SetAckTimer = 0x082AB3D4;
// void CNetLayerWindow::SetFauxNagleTimer(void)
constexpr uintptr_t CNetLayerWindow__SetFauxNagleTimer = 0x082AB430;
// void CNetLayerWindow::SetInFrameTimer(void)
constexpr uintptr_t CNetLayerWindow__SetInFrameTimer = 0x082AB338;
// void CNetLayerWindow::SetOutFrameTimer(uint32_t)
constexpr uintptr_t CNetLayerWindow__SetOutFrameTimer = 0x082AB4F4;
// public void CNetLayerWindow::ShutDown(void)
constexpr uintptr_t CNetLayerWindow__ShutDown = 0x0829E4CC;
// void CNetLayerWindow::TestAckTimer(uint32_t)
constexpr uintptr_t CNetLayerWindow__TestAckTimer = 0x082AB410;
// void CNetLayerWindow::TestFauxNagleTimer(uint32_t)
constexpr uintptr_t CNetLayerWindow__TestFauxNagleTimer = 0x082AB46C;
// void CNetLayerWindow::TestInFrameTimer(uint32_t)
constexpr uintptr_t CNetLayerWindow__TestInFrameTimer = 0x082AB394;
// void CNetLayerWindow::TestOutFrameTimer(uint32_t, uint32_t)
constexpr uintptr_t CNetLayerWindow__TestOutFrameTimer = 0x082AB550;
// public int32_t CNetLayerWindow::UnpacketizeFullMessages(int32_t)
constexpr uintptr_t CNetLayerWindow__UnpacketizeFullMessages = 0x0829F0F0;

// public CNetworkProfiler::CNetworkProfiler(void)
constexpr uintptr_t CNetworkProfiler__CNetworkProfilerCtor = 0x082C6FF8;
// CNetworkProfiler::~CNetworkProfiler(void)
constexpr uintptr_t CNetworkProfiler__CNetworkProfilerDtor = 0x082C70E8;
// public void CNetworkProfiler::AddMessageToFrameProfile(unsigned char, uint32_t)
constexpr uintptr_t CNetworkProfiler__AddMessageToFrameProfile = 0x082C6C3C;
// public void CNetworkProfiler::AddMessageToProfile(unsigned char, unsigned char, unsigned char, uint32_t)
constexpr uintptr_t CNetworkProfiler__AddMessageToProfile = 0x082C6A54;
// void CNetworkProfiler::GetFrameLastTime(void)
constexpr uintptr_t CNetworkProfiler__GetFrameLastTime = 0x082C7210;
// void CNetworkProfiler::GetFrameStartTime(void)
constexpr uintptr_t CNetworkProfiler__GetFrameStartTime = 0x082C71C8;
// void CNetworkProfiler::GetLastTime(void)
constexpr uintptr_t CNetworkProfiler__GetLastTime = 0x082C71EC;
// void CNetworkProfiler::GetStartTime(void)
constexpr uintptr_t CNetworkProfiler__GetStartTime = 0x082C71A4;
// public void CNetworkProfiler::OutputReport(void)
constexpr uintptr_t CNetworkProfiler__OutputReport = 0x082C6748;
// void CNetworkProfiler::SetOutputFilename(char*)
constexpr uintptr_t CNetworkProfiler__SetOutputFilename = 0x082C715C;
// public int32_t CNetworkProfiler::SetState(int32_t)
constexpr uintptr_t CNetworkProfiler__SetState = 0x082C6538;

// public CNWArea::CNWArea(void)
constexpr uintptr_t CNWArea__CNWAreaCtor = 0x080BB3B4;
// public CNWArea::~CNWArea(void)
constexpr uintptr_t CNWArea__CNWAreaDtor = 0x080BB4F8;
// public int32_t CNWArea::AddStaticBoundingBox(uint32_t, const Vector&, const Vector&)
constexpr uintptr_t CNWArea__AddStaticBoundingBox = 0x080BCB98;
// public int32_t CNWArea::AddStaticObject(uint32_t, const Vector&, const Vector&, int32_t, Vector*, int32_t, int32_t*)
constexpr uintptr_t CNWArea__AddStaticObject = 0x080BB5D4;
// void CNWArea::GetFlags(void)
constexpr uintptr_t CNWArea__GetFlags = 0x080BD088;
// void CNWArea::GetFog(int32_t*, Vector*)
constexpr uintptr_t CNWArea__GetFog = 0x080BCF20;
// void CNWArea::GetFogClipDistance(void)
constexpr uintptr_t CNWArea__GetFogClipDistance = 0x080BD0DC;
// void CNWArea::GetHeight(void)
constexpr uintptr_t CNWArea__GetHeight = 0x080BD0A0;
// public int32_t CNWArea::GetIsIDInExcludeList(uint32_t, CExoArrayListTemplatedCGameObjectPtr*)
constexpr uintptr_t CNWArea__GetIsIDInExcludeList = 0x080BD0B4;
// void CNWArea::GetIsNight(void)
constexpr uintptr_t CNWArea__GetIsNight = 0x080BCF44;
// void CNWArea::GetMoonFogAmount(void)
constexpr uintptr_t CNWArea__GetMoonFogAmount = 0x080BD16C;
// void CNWArea::GetMoonFogColor(void)
constexpr uintptr_t CNWArea__GetMoonFogColor = 0x080BD154;
// void CNWArea::GetNoRestingAllowed(void)
constexpr uintptr_t CNWArea__GetNoRestingAllowed = 0x080BD0BC;
// void CNWArea::GetShadowOpacity(void)
constexpr uintptr_t CNWArea__GetShadowOpacity = 0x080BD0CC;
// void CNWArea::GetSkyBox(void)
constexpr uintptr_t CNWArea__GetSkyBox = 0x080BD110;
// void CNWArea::GetSunFogAmount(void)
constexpr uintptr_t CNWArea__GetSunFogAmount = 0x080BD188;
// void CNWArea::GetSunFogColor(void)
constexpr uintptr_t CNWArea__GetSunFogColor = 0x080BD160;
// void CNWArea::GetUseDayNightCycle(void)
constexpr uintptr_t CNWArea__GetUseDayNightCycle = 0x080BD0EC;
// void CNWArea::GetWidth(void)
constexpr uintptr_t CNWArea__GetWidth = 0x080BD094;
// public void CNWArea::GrowStaticObjectArray(void)
constexpr uintptr_t CNWArea__GrowStaticObjectArray = 0x080BB768;
// public void CNWArea::GrowStaticObjectTriangles(int32_t)
constexpr uintptr_t CNWArea__GrowStaticObjectTriangles = 0x080BCDE0;
// public void CNWArea::GrowStaticObjectVertices(int32_t)
constexpr uintptr_t CNWArea__GrowStaticObjectVertices = 0x080BB8AC;
// public int32_t CNWArea::HandleTransparentDoors(float, float, float, float, float, float, float, uint32_t, uint32_t&, int32_t, CExoArrayListTemplatedCGameObjectPtr*, int32_t)
constexpr uintptr_t CNWArea__HandleTransparentDoors = 0x080BD0AC;
// public void CNWArea::InitializeStaticObjects(void)
constexpr uintptr_t CNWArea__InitializeStaticObjects = 0x080BCE68;
// public int32_t CNWArea::IntersectLineSegments(float, float, float, float, float, float, float, float, float*, float*)
constexpr uintptr_t CNWArea__IntersectLineSegments = 0x080BB970;
// public int32_t CNWArea::NoCreaturesOnLine(float, float, float, float, CPathfindInformation*)
constexpr uintptr_t CNWArea__NoCreaturesOnLine = 0x080BD07C;
// public int32_t CNWArea::NoNonWalkPolys(float, float, float, float, float, float, float, uint32_t)
constexpr uintptr_t CNWArea__NoNonWalkPolys = 0x080BCEE8;
// public int32_t CNWArea::NoNonWalkPolysDetailed(float, float, float, float, float, float, float, uint32_t, uint32_t&, int32_t, CExoArrayListTemplatedCGameObjectPtr*, int32_t)
constexpr uintptr_t CNWArea__NoNonWalkPolysDetailed = 0x080BBE60;
// public int32_t CNWArea::NoNonWalkPolysInDoors(float, float, float, float, float, float, float, uint32_t, uint32_t&, int32_t, CExoArrayListTemplatedCGameObjectPtr*, int32_t)
constexpr uintptr_t CNWArea__NoNonWalkPolysInDoors = 0x080BC6A8;
// public int32_t CNWArea::RemoveStaticBoundingBox(uint32_t)
constexpr uintptr_t CNWArea__RemoveStaticBoundingBox = 0x080BCFAC;
// public void CNWArea::RemoveStaticObject(int32_t)
constexpr uintptr_t CNWArea__RemoveStaticObject = 0x080BCA58;
// public void CNWArea::ReplaceStaticObject(int32_t, uint32_t, const Vector&, const Vector&, int32_t, Vector*, int32_t, int32_t*)
constexpr uintptr_t CNWArea__ReplaceStaticObject = 0x080BCCE0;
// public int32_t CNWArea::SetFog(int32_t, Vector)
constexpr uintptr_t CNWArea__SetFog = 0x080BCF54;
// public int32_t CNWArea::SetIsNight(int32_t)
constexpr uintptr_t CNWArea__SetIsNight = 0x080BCF7C;
// void CNWArea::SetMoonFogAmount(unsigned char)
constexpr uintptr_t CNWArea__SetMoonFogAmount = 0x080BD178;
// void CNWArea::SetMoonFogColor(uint32_t)
constexpr uintptr_t CNWArea__SetMoonFogColor = 0x080BD134;
// void CNWArea::SetSkyBox(unsigned char)
constexpr uintptr_t CNWArea__SetSkyBox = 0x080BD120;
// void CNWArea::SetSunFogAmount(unsigned char)
constexpr uintptr_t CNWArea__SetSunFogAmount = 0x080BD198;
// void CNWArea::SetSunFogColor(uint32_t)
constexpr uintptr_t CNWArea__SetSunFogColor = 0x080BD144;
// void CNWArea::SetUseDayNightCycle(int32_t)
constexpr uintptr_t CNWArea__SetUseDayNightCycle = 0x080BD0FC;
// public int32_t CNWArea::SetWind(unsigned char)
constexpr uintptr_t CNWArea__SetWind = 0x080BCF94;

// CNWBaseItem::CNWBaseItem(void)
constexpr uintptr_t CNWBaseItem__CNWBaseItemCtor = 0x080C175C;
// CNWBaseItem::~CNWBaseItem(void)
constexpr uintptr_t CNWBaseItem__CNWBaseItemDtor = 0x080C17D8;
// void CNWBaseItem::GetIconResRef(unsigned char, int16_t, char)
constexpr uintptr_t CNWBaseItem__GetIconResRef = 0x080C1814;
// public CResRef CNWBaseItem::GetModelResRef(unsigned char, int16_t, char)
constexpr uintptr_t CNWBaseItem__GetModelResRef = 0x080C1954;
// void CNWBaseItem::GetNameText(void)
constexpr uintptr_t CNWBaseItem__GetNameText = 0x080BFB34;
// public uint16_t CNWBaseItem::GetRequiredFeat(unsigned char)
constexpr uintptr_t CNWBaseItem__GetRequiredFeat = 0x080C192C;
// void CNWBaseItem::SetRequiredFeat(unsigned char, uint16_t)
constexpr uintptr_t CNWBaseItem__SetRequiredFeat = 0x080C1904;
// void CNWBaseItem::SetRequiredFeatCount(unsigned char)
constexpr uintptr_t CNWBaseItem__SetRequiredFeatCount = 0x080C18A8;

// CNWBaseItemArray::CNWBaseItemArray(void)
constexpr uintptr_t CNWBaseItemArray__CNWBaseItemArrayCtor = 0x080C19E8;
// public CNWBaseItemArray::~CNWBaseItemArray(void)
constexpr uintptr_t CNWBaseItemArray__CNWBaseItemArrayDtor = 0x080C1A00;
// public CNWBaseItem* CNWBaseItemArray::GetBaseItem(int32_t) const
constexpr uintptr_t CNWBaseItemArray__GetBaseItem = 0x080C1A80;
// public void CNWBaseItemArray::Load(void)
constexpr uintptr_t CNWBaseItemArray__Load = 0x080BFBE4;

// public CNWCCMessageData::CNWCCMessageData(void)
constexpr uintptr_t CNWCCMessageData__CNWCCMessageDataCtor = 0x080C1B6C;
// public CNWCCMessageData::~CNWCCMessageData(void)
constexpr uintptr_t CNWCCMessageData__CNWCCMessageDataDtor = 0x080C2F88;
// void CNWCCMessageData::ClearData(void)
constexpr uintptr_t CNWCCMessageData__ClearData = 0x080C31FC;
// public void CNWCCMessageData::CopyTo(CNWCCMessageData*)
constexpr uintptr_t CNWCCMessageData__CopyTo = 0x080C212C;
// void CNWCCMessageData::GetFloat(int32_t)
constexpr uintptr_t CNWCCMessageData__GetFloat = 0x080C3054;
// public int32_t CNWCCMessageData::GetInteger(int32_t)
constexpr uintptr_t CNWCCMessageData__GetInteger = 0x080C2FE8;
// void CNWCCMessageData::GetObjectID(int32_t)
constexpr uintptr_t CNWCCMessageData__GetObjectID = 0x080C30C0;
// public CExoString CNWCCMessageData::GetString(int32_t)
constexpr uintptr_t CNWCCMessageData__GetString = 0x080C3130;
// public int32_t CNWCCMessageData::LoadData(CResGFF*, CResStruct*)
constexpr uintptr_t CNWCCMessageData__LoadData = 0x080C1DD8;
// public int32_t CNWCCMessageData::SaveData(CResGFF*, CResStruct*)
constexpr uintptr_t CNWCCMessageData__SaveData = 0x080C1C14;
// void CNWCCMessageData::SetFloat(int32_t, float)
constexpr uintptr_t CNWCCMessageData__SetFloat = 0x080C3080;
// void CNWCCMessageData::SetInteger(int32_t, int32_t)
constexpr uintptr_t CNWCCMessageData__SetInteger = 0x080C3014;
// public void CNWCCMessageData::SetObjectID(int32_t, uint32_t)
constexpr uintptr_t CNWCCMessageData__SetObjectID = 0x080C30F0;
// public void CNWCCMessageData::SetString(int32_t, CExoString)
constexpr uintptr_t CNWCCMessageData__SetString = 0x080C3178;

// CNWClass::CNWClass(void)
constexpr uintptr_t CNWClass__CNWClassCtor = 0x080BD26C;
// CNWClass::~CNWClass(void)
constexpr uintptr_t CNWClass__CNWClassDtor = 0x080BD3FC;
// public unsigned char CNWClass::GetAttackBonus(unsigned char)
constexpr uintptr_t CNWClass__GetAttackBonus = 0x080BF260;
// public unsigned char CNWClass::GetBonusFeats(unsigned char)
constexpr uintptr_t CNWClass__GetBonusFeats = 0x080BF280;
// void CNWClass::GetClassFeat(uint16_t)
constexpr uintptr_t CNWClass__GetClassFeat = 0x080BF4B0;
// void CNWClass::GetDescriptionText(void)
constexpr uintptr_t CNWClass__GetDescriptionText = 0x080BEE98;
// public unsigned char CNWClass::GetFortSaveBonus(unsigned char)
constexpr uintptr_t CNWClass__GetFortSaveBonus = 0x080BF2A4;
// public int32_t CNWClass::GetIsAlignmentAllowed(unsigned char, unsigned char)
constexpr uintptr_t CNWClass__GetIsAlignmentAllowed = 0x080BF164;
// void CNWClass::GetLevelFeatGranted(uint16_t)
constexpr uintptr_t CNWClass__GetLevelFeatGranted = 0x080BF4D4;
// void CNWClass::GetLevelGranted(uint16_t)
constexpr uintptr_t CNWClass__GetLevelGranted = 0x080BF640;
// void CNWClass::GetNameLowerText(void)
constexpr uintptr_t CNWClass__GetNameLowerText = 0x080BEFFC;
// void CNWClass::GetNamePluralText(void)
constexpr uintptr_t CNWClass__GetNamePluralText = 0x080BF0B0;
// void CNWClass::GetNameText(void)
constexpr uintptr_t CNWClass__GetNameText = 0x080BEF4C;
// public unsigned char CNWClass::GetRefSaveBonus(unsigned char)
constexpr uintptr_t CNWClass__GetRefSaveBonus = 0x080BF2C4;
// public unsigned char CNWClass::GetSpellGain(unsigned char, unsigned char)
constexpr uintptr_t CNWClass__GetSpellGain = 0x080BF30C;
// public unsigned char CNWClass::GetSpellsKnownPerLevel(unsigned char, unsigned char, unsigned char, uint16_t, unsigned char)
constexpr uintptr_t CNWClass__GetSpellsKnownPerLevel = 0x080BF344;
// public unsigned char CNWClass::GetWillSaveBonus(unsigned char)
constexpr uintptr_t CNWClass__GetWillSaveBonus = 0x080BF2E8;
// public int32_t CNWClass::IsBonusFeat(uint16_t)
constexpr uintptr_t CNWClass__IsBonusFeat = 0x080BF524;
// void CNWClass::IsFeatUseable(uint16_t)
constexpr uintptr_t CNWClass__IsFeatUseable = 0x080BF688;
// public int32_t CNWClass::IsGrantedFeat(uint16_t, unsigned char&)
constexpr uintptr_t CNWClass__IsGrantedFeat = 0x080BF5E0;
// public int32_t CNWClass::IsNormalFeat(uint16_t)
constexpr uintptr_t CNWClass__IsNormalFeat = 0x080BF570;
// public int32_t CNWClass::IsSkillClassSkill(uint16_t)
constexpr uintptr_t CNWClass__IsSkillClassSkill = 0x080BF3E4;
// public int32_t CNWClass::IsSkillUseable(uint16_t)
constexpr uintptr_t CNWClass__IsSkillUseable = 0x080BF440;
// public void CNWClass::LoadAttackBonusTable(CExoString)
constexpr uintptr_t CNWClass__LoadAttackBonusTable = 0x080BD504;
// public void CNWClass::LoadBonusFeatsTable(CExoString)
constexpr uintptr_t CNWClass__LoadBonusFeatsTable = 0x080BE4C0;
// public void CNWClass::LoadFeatsTable(CExoString, CNWRules*)
constexpr uintptr_t CNWClass__LoadFeatsTable = 0x080BD7EC;
// public void CNWClass::LoadSavingThrowTable(CExoString)
constexpr uintptr_t CNWClass__LoadSavingThrowTable = 0x080BDDEC;
// public void CNWClass::LoadSkillsTable(CExoString)
constexpr uintptr_t CNWClass__LoadSkillsTable = 0x080BE158;
// public void CNWClass::LoadSpellGainTable(CExoString)
constexpr uintptr_t CNWClass__LoadSpellGainTable = 0x080BE73C;
// public void CNWClass::LoadSpellKnownTable(CExoString)
constexpr uintptr_t CNWClass__LoadSpellKnownTable = 0x080BEB1C;

// public CNWCreatureStatsUpdate::CNWCreatureStatsUpdate(void)
constexpr uintptr_t CNWCreatureStatsUpdate__CNWCreatureStatsUpdateCtor = 0x0809452C;
// public CNWCreatureStatsUpdate::~CNWCreatureStatsUpdate(void)
constexpr uintptr_t CNWCreatureStatsUpdate__CNWCreatureStatsUpdateDtor = 0x080946D0;
// public void CNWCreatureStatsUpdate::ClearEffectIcons(void)
constexpr uintptr_t CNWCreatureStatsUpdate__ClearEffectIcons = 0x08094764;
// public void CNWCreatureStatsUpdate::SetCombatInformation(CCombatInformation*)
constexpr uintptr_t CNWCreatureStatsUpdate__SetCombatInformation = 0x080947C8;

// CNWDomain::CNWDomain(void)
constexpr uintptr_t CNWDomain__CNWDomainCtor = 0x08236F1C;
// CNWDomain::~CNWDomain(void)
constexpr uintptr_t CNWDomain__CNWDomainDtor = 0x08236F70;
// void CNWDomain::GetDescriptionText(void)
constexpr uintptr_t CNWDomain__GetDescriptionText = 0x08236DB8;
// void CNWDomain::GetNameText(void)
constexpr uintptr_t CNWDomain__GetNameText = 0x08236E6C;

// public CNWDoorSurfaceMesh::CNWDoorSurfaceMesh(void)
constexpr uintptr_t CNWDoorSurfaceMesh__CNWDoorSurfaceMeshCtor = 0x08236F8C;
// public CNWDoorSurfaceMesh::~CNWDoorSurfaceMesh(void)
constexpr uintptr_t CNWDoorSurfaceMesh__CNWDoorSurfaceMeshDtor = 0x08238A28;
// public int32_t CNWDoorSurfaceMesh::GetMeshBoundingBox(Vector, Vector, Vector&, Vector&)
constexpr uintptr_t CNWDoorSurfaceMesh__GetMeshBoundingBox = 0x08238854;
// void CNWDoorSurfaceMesh::GetOpenLocation(unsigned char, unsigned char)
constexpr uintptr_t CNWDoorSurfaceMesh__GetOpenLocation = 0x08238CC8;
// public int32_t CNWDoorSurfaceMesh::IntersectLineSegments(Vector, Vector, Vector, Vector, Vector*)
constexpr uintptr_t CNWDoorSurfaceMesh__IntersectLineSegments = 0x08238390;
// public int32_t CNWDoorSurfaceMesh::LoadWalkMesh(CResRef)
constexpr uintptr_t CNWDoorSurfaceMesh__LoadWalkMesh = 0x0823701C;
// void CNWDoorSurfaceMesh::LoadWalkMeshString(unsigned char**, uint32_t*, unsigned char*, uint32_t)
constexpr uintptr_t CNWDoorSurfaceMesh__LoadWalkMeshString = 0x08238ACC;
// public int32_t CNWDoorSurfaceMesh::NoNonWalkPolysOnSurfaceMesh(int32_t, float, float, float, float, float, float, float)
constexpr uintptr_t CNWDoorSurfaceMesh__NoNonWalkPolysOnSurfaceMesh = 0x08237AA4;

// CNWFeat::CNWFeat(void)
constexpr uintptr_t CNWFeat__CNWFeatCtor = 0x08238DF8;
// CNWFeat::~CNWFeat(void)
constexpr uintptr_t CNWFeat__CNWFeatDtor = 0x08239028;
// void CNWFeat::GetDescriptionText(void)
constexpr uintptr_t CNWFeat__GetDescriptionText = 0x08238EC4;
// public CExoString CNWFeat::GetNameText(void)
constexpr uintptr_t CNWFeat__GetNameText = 0x08238F78;

// public CNWItem::CNWItem(void)
constexpr uintptr_t CNWItem__CNWItemCtor = 0x080C1AA8;
// public CNWItem::~CNWItem(void)
constexpr uintptr_t CNWItem__CNWItemDtor = 0x080C1ACC;
// void CNWItem::GetBaseItemID(void)
constexpr uintptr_t CNWItem__GetBaseItemID = 0x080C1B1C;
// void CNWItem::GetLayeredTextureColor(unsigned char)
constexpr uintptr_t CNWItem__GetLayeredTextureColor = 0x080C1B28;
// void CNWItem::SetBaseItemID(uint32_t)
constexpr uintptr_t CNWItem__SetBaseItemID = 0x080C1B44;
// void CNWItem::SetLayeredTextureColor(unsigned char, unsigned char)
constexpr uintptr_t CNWItem__SetLayeredTextureColor = 0x080C1B54;

// public CNWLevelStats::CNWLevelStats(void)
constexpr uintptr_t CNWLevelStats__CNWLevelStatsCtor = 0x080BF6F0;
// public CNWLevelStats::~CNWLevelStats(void)
constexpr uintptr_t CNWLevelStats__CNWLevelStatsDtor = 0x080BF8D8;
// public void CNWLevelStats::AddFeat(uint16_t)
constexpr uintptr_t CNWLevelStats__AddFeat = 0x080BFA84;
// void CNWLevelStats::ClearFeats(void)
constexpr uintptr_t CNWLevelStats__ClearFeats = 0x080BFA14;
// public char CNWLevelStats::GetSkillRankChange(uint16_t)
constexpr uintptr_t CNWLevelStats__GetSkillRankChange = 0x080BFA30;
// public void CNWLevelStats::SetSkillRankChange(uint16_t, char)
constexpr uintptr_t CNWLevelStats__SetSkillRankChange = 0x080BFA5C;

// public CNWMessage::CNWMessage(void)
constexpr uintptr_t CNWMessage__CNWMessageCtor = 0x080C3224;
// CNWMessage::~CNWMessage(void)
constexpr uintptr_t CNWMessage__CNWMessageDtor = 0x080C32C8;
// public void CNWMessage::ClearReadMessage(void)
constexpr uintptr_t CNWMessage__ClearReadMessage = 0x080C33A8;
// public void CNWMessage::CreateWriteMessage(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWMessage__CreateWriteMessage = 0x080C3AEC;
// protected void CNWMessage::ExtendWriteBuffer(uint32_t)
constexpr uintptr_t CNWMessage__ExtendWriteBuffer = 0x080C3B50;
// protected void CNWMessage::ExtendWriteFragmentsBuffer(uint32_t)
constexpr uintptr_t CNWMessage__ExtendWriteFragmentsBuffer = 0x080C3BA0;
// void CNWMessage::GetObjectLookupTable(void)
constexpr uintptr_t CNWMessage__GetObjectLookupTable = 0x080C4344;
// public int32_t CNWMessage::GetWriteMessage(unsigned char**, uint32_t*)
constexpr uintptr_t CNWMessage__GetWriteMessage = 0x080C2E54;
// void CNWMessage::MessageMoreDataToRead(void)
constexpr uintptr_t CNWMessage__MessageMoreDataToRead = 0x080C3ABC;
// public int32_t CNWMessage::MessageReadOverflow(int32_t)
constexpr uintptr_t CNWMessage__MessageReadOverflow = 0x080C3A64;
// public int32_t CNWMessage::MessageReadUnderflow(int32_t)
constexpr uintptr_t CNWMessage__MessageReadUnderflow = 0x080C3A8C;
// public uint32_t CNWMessage::PeekAtWriteMessageSize(void)
constexpr uintptr_t CNWMessage__PeekAtWriteMessageSize = 0x080C42D8;
// void CNWMessage::ReadBit(unsigned char)
constexpr uintptr_t CNWMessage__ReadBit = 0x080C33C4;
// protected int64_t CNWMessage::ReadBits(int32_t)
constexpr uintptr_t CNWMessage__ReadBits = 0x080C33F0;
// public int32_t CNWMessage::ReadBOOL(void)
constexpr uintptr_t CNWMessage__ReadBOOL = 0x080C3570;
// public unsigned char CNWMessage::ReadBYTE(int32_t)
constexpr uintptr_t CNWMessage__ReadBYTE = 0x080C3588;
// public CExoString CNWMessage::ReadCExoString(int32_t)
constexpr uintptr_t CNWMessage__ReadCExoString = 0x080C2954;
// public char CNWMessage::ReadCHAR(int32_t)
constexpr uintptr_t CNWMessage__ReadCHAR = 0x080C35D4;
// public CResRef CNWMessage::ReadCResRef(int32_t)
constexpr uintptr_t CNWMessage__ReadCResRef = 0x080C39D4;
// void CNWMessage::ReadDOUBLE(double, int32_t)
constexpr uintptr_t CNWMessage__ReadDOUBLE__0 = 0x080C38EC;
// void CNWMessage::ReadDOUBLE(double, double, int32_t)
constexpr uintptr_t CNWMessage__ReadDOUBLE__1 = 0x080C395C;
// public uint32_t CNWMessage::ReadDWORD(int32_t)
constexpr uintptr_t CNWMessage__ReadDWORD = 0x080C36CC;
// void CNWMessage::ReadDWORD64(int32_t)
constexpr uintptr_t CNWMessage__ReadDWORD64 = 0x080C376C;
// public float CNWMessage::ReadFLOAT(float, int32_t)
constexpr uintptr_t CNWMessage__ReadFLOAT__0 = 0x080C37FC;
// public float CNWMessage::ReadFLOAT(float, float, int32_t)
constexpr uintptr_t CNWMessage__ReadFLOAT__1 = 0x080C3874;
// public int32_t CNWMessage::ReadINT(int32_t)
constexpr uintptr_t CNWMessage__ReadINT = 0x080C3710;
// void CNWMessage::ReadINT64(int32_t)
constexpr uintptr_t CNWMessage__ReadINT64 = 0x080C37B4;
// void CNWMessage::ReadSHORT(int32_t)
constexpr uintptr_t CNWMessage__ReadSHORT = 0x080C3670;
// void CNWMessage::ReadSigned(int32_t)
constexpr uintptr_t CNWMessage__ReadSigned = 0x080C2888;
// protected uint64_t CNWMessage::ReadUnsigned(int32_t)
constexpr uintptr_t CNWMessage__ReadUnsigned = 0x080C2640;
// public void* CNWMessage::ReadVOIDPtr(int32_t)
constexpr uintptr_t CNWMessage__ReadVOIDPtr = 0x080C3A40;
// public uint16_t CNWMessage::ReadWORD(int32_t)
constexpr uintptr_t CNWMessage__ReadWORD = 0x080C362C;
// public void CNWMessage::SetReadMessage(unsigned char*, uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWMessage__SetReadMessage = 0x080C3328;
// protected void CNWMessage::WriteBit(unsigned char)
constexpr uintptr_t CNWMessage__WriteBit = 0x080C3484;
// protected void CNWMessage::WriteBits(uint64_t, int32_t)
constexpr uintptr_t CNWMessage__WriteBits = 0x080C34D0;
// public void CNWMessage::WriteBOOL(int32_t)
constexpr uintptr_t CNWMessage__WriteBOOL = 0x080C3C08;
// public void CNWMessage::WriteBYTE(unsigned char, int32_t)
constexpr uintptr_t CNWMessage__WriteBYTE = 0x080C3C24;
// public void CNWMessage::WriteCExoString(CExoString, int32_t)
constexpr uintptr_t CNWMessage__WriteCExoString = 0x080C2D04;
// public void CNWMessage::WriteCHAR(char, int32_t)
constexpr uintptr_t CNWMessage__WriteCHAR = 0x080C3CB4;
// public void CNWMessage::WriteCResRef(CResRef, int32_t)
constexpr uintptr_t CNWMessage__WriteCResRef = 0x080C2C74;
// void CNWMessage::WriteDOUBLE(double, double, double, int32_t)
constexpr uintptr_t CNWMessage__WriteDOUBLE__0 = 0x080C2B48;
// void CNWMessage::WriteDOUBLE(double, double, int32_t)
constexpr uintptr_t CNWMessage__WriteDOUBLE__1 = 0x080C4188;
// public void CNWMessage::WriteDWORD(uint32_t, int32_t)
constexpr uintptr_t CNWMessage__WriteDWORD = 0x080C3E74;
// void CNWMessage::WriteDWORD64(uint64_t, int32_t)
constexpr uintptr_t CNWMessage__WriteDWORD64 = 0x080C3F90;
// public void CNWMessage::WriteFLOAT(float, float, float, int32_t)
constexpr uintptr_t CNWMessage__WriteFLOAT__0 = 0x080C2A44;
// public void CNWMessage::WriteFLOAT(float, float, int32_t)
constexpr uintptr_t CNWMessage__WriteFLOAT__1 = 0x080C40C8;
// public void CNWMessage::WriteINT(int32_t, int32_t)
constexpr uintptr_t CNWMessage__WriteINT = 0x080C3F00;
// void CNWMessage::WriteINT64(int64_t, int32_t)
constexpr uintptr_t CNWMessage__WriteINT64 = 0x080C402C;
// public void CNWMessage::WriteSHORT(int16_t, int32_t)
constexpr uintptr_t CNWMessage__WriteSHORT = 0x080C3DDC;
// void CNWMessage::WriteSigned(int64_t, int32_t)
constexpr uintptr_t CNWMessage__WriteSigned = 0x080C24F0;
// protected void CNWMessage::WriteUnsigned(uint64_t, int32_t)
constexpr uintptr_t CNWMessage__WriteUnsigned = 0x080C231C;
// public void CNWMessage::WriteVOIDPtr(void*, int32_t)
constexpr uintptr_t CNWMessage__WriteVOIDPtr = 0x080C4258;
// public void CNWMessage::WriteWORD(uint16_t, int32_t)
constexpr uintptr_t CNWMessage__WriteWORD = 0x080C3D44;

// public CNWNameGen::CNWNameGen(void)
constexpr uintptr_t CNWNameGen__CNWNameGenCtor = 0x08270FBC;
// public CNWNameGen::~CNWNameGen(void)
constexpr uintptr_t CNWNameGen__CNWNameGenDtor = 0x08270FEC;
// public CExoString CNWNameGen::GetRandomName(void)
constexpr uintptr_t CNWNameGen__GetRandomName__0 = 0x08270380;
// public CExoString CNWNameGen::GetRandomName(uint16_t, unsigned char)
constexpr uintptr_t CNWNameGen__GetRandomName__1 = 0x08270B0C;
// public int32_t CNWNameGen::LoadNameTable(CExoString)
constexpr uintptr_t CNWNameGen__LoadNameTable = 0x08271030;
// public void CNWNameGen::UnloadNameTable(void)
constexpr uintptr_t CNWNameGen__UnloadNameTable = 0x082710D4;

// public CNWPlaceableSurfaceMesh::CNWPlaceableSurfaceMesh(void)
constexpr uintptr_t CNWPlaceableSurfaceMesh__CNWPlaceableSurfaceMeshCtor = 0x08239D5C;
// public CNWPlaceableSurfaceMesh::~CNWPlaceableSurfaceMesh(void)
constexpr uintptr_t CNWPlaceableSurfaceMesh__CNWPlaceableSurfaceMeshDtor = 0x08239DC8;
// public int32_t CNWPlaceableSurfaceMesh::LoadWalkMesh(CResRef)
constexpr uintptr_t CNWPlaceableSurfaceMesh__LoadWalkMesh = 0x08239044;
// void CNWPlaceableSurfaceMesh::LoadWalkMeshString(unsigned char**, uint32_t*, unsigned char*, uint32_t)
constexpr uintptr_t CNWPlaceableSurfaceMesh__LoadWalkMeshString = 0x08239E3C;

// public CNWPlaceMeshManager::CNWPlaceMeshManager(void)
constexpr uintptr_t CNWPlaceMeshManager__CNWPlaceMeshManagerCtor = 0x080C4570;
// CNWPlaceMeshManager::~CNWPlaceMeshManager(void)
constexpr uintptr_t CNWPlaceMeshManager__CNWPlaceMeshManagerDtor = 0x080C4588;
// public void CNWPlaceMeshManager::ClearWalkMeshes(void)
constexpr uintptr_t CNWPlaceMeshManager__ClearWalkMeshes = 0x080C460C;
// public CNWPlaceableSurfaceMesh* CNWPlaceMeshManager::GetWalkMesh(int32_t)
constexpr uintptr_t CNWPlaceMeshManager__GetWalkMesh = 0x080C434C;
// void CNWPlaceMeshManager::InitializeWalkMeshes(int32_t)
constexpr uintptr_t CNWPlaceMeshManager__InitializeWalkMeshes = 0x080C45BC;

// CNWRace::CNWRace(void)
constexpr uintptr_t CNWRace__CNWRaceCtor = 0x080C4DB0;
// CNWRace::~CNWRace(void)
constexpr uintptr_t CNWRace__CNWRaceDtor = 0x080C4E04;
// void CNWRace::GetConverNameLowerText(void)
constexpr uintptr_t CNWRace__GetConverNameLowerText = 0x080C4970;
// void CNWRace::GetConverNameText(void)
constexpr uintptr_t CNWRace__GetConverNameText = 0x080C48BC;
// void CNWRace::GetDefaultBiographyText(void)
constexpr uintptr_t CNWRace__GetDefaultBiographyText = 0x080C4758;
// void CNWRace::GetDescriptionText(void)
constexpr uintptr_t CNWRace__GetDescriptionText = 0x080C46A4;
// void CNWRace::GetNamePluralText(void)
constexpr uintptr_t CNWRace__GetNamePluralText = 0x080C4A24;
// void CNWRace::GetNameText(void)
constexpr uintptr_t CNWRace__GetNameText = 0x080C480C;
// public int32_t CNWRace::IsFirstLevelGrantedFeat(uint16_t)
constexpr uintptr_t CNWRace__IsFirstLevelGrantedFeat = 0x080C4E44;
// public void CNWRace::LoadFeatsTable(CExoString)
constexpr uintptr_t CNWRace__LoadFeatsTable = 0x080C4AD8;

// public CNWRules::CNWRules(void)
constexpr uintptr_t CNWRules__CNWRulesCtor = 0x080C6188;
// public CNWRules::~CNWRules(void)
constexpr uintptr_t CNWRules__CNWRulesDtor = 0x080C6544;
// protected int32_t CNWRules::CompareFeatName(const void*, const void*)
constexpr uintptr_t CNWRules__CompareFeatName = 0x080C85EC;
// public CTwoDimArrays* CNWRules::Get2DArrays(void)
constexpr uintptr_t CNWRules__Get2DArrays = 0x080CBBA8;
// void CNWRules::GetBaseItem(uint32_t)
constexpr uintptr_t CNWRules__GetBaseItem = 0x080CBA5C;
// void CNWRules::GetClass(unsigned char)
constexpr uintptr_t CNWRules__GetClass = 0x080CBAC8;
// public unsigned char CNWRules::GetClassExpansionLevel(unsigned char)
constexpr uintptr_t CNWRules__GetClassExpansionLevel = 0x080CB9A8;
// public int32_t CNWRules::GetDamageIndexFromFlags(uint32_t)
constexpr uintptr_t CNWRules__GetDamageIndexFromFlags = 0x080CB894;
// public int32_t CNWRules::GetDifficultyOption(int32_t, int32_t)
constexpr uintptr_t CNWRules__GetDifficultyOption = 0x080CB780;
// public CNWDomain* CNWRules::GetDomain(uint16_t)
constexpr uintptr_t CNWRules__GetDomain = 0x080CB750;
// void CNWRules::GetExperienceLevel(unsigned char)
constexpr uintptr_t CNWRules__GetExperienceLevel = 0x080CBA74;
// public unsigned char CNWRules::GetFamiliarExpansionLevel(unsigned char, int32_t)
constexpr uintptr_t CNWRules__GetFamiliarExpansionLevel = 0x080CB9D8;
// public CNWFeat* CNWRules::GetFeat(uint16_t)
constexpr uintptr_t CNWRules__GetFeat = 0x080CB718;
// public unsigned char CNWRules::GetFeatExpansionLevel(uint16_t)
constexpr uintptr_t CNWRules__GetFeatExpansionLevel = 0x080CB8B4;
// void CNWRules::GetIsClassValid(unsigned char)
constexpr uintptr_t CNWRules__GetIsClassValid = 0x080CBAB0;
// void CNWRules::GetMasterFeatDescriptionText(char)
constexpr uintptr_t CNWRules__GetMasterFeatDescriptionText = 0x080C8518;
// void CNWRules::GetMasterFeatIcon(char)
constexpr uintptr_t CNWRules__GetMasterFeatIcon = 0x080CB62C;
// public CExoString CNWRules::GetMasterFeatNameText(char)
constexpr uintptr_t CNWRules__GetMasterFeatNameText = 0x080C8444;
// public unsigned char CNWRules::GetMetaMagicLevelCost(unsigned char)
constexpr uintptr_t CNWRules__GetMetaMagicLevelCost = 0x080CB6F0;
// void CNWRules::GetNumClasses(void)
constexpr uintptr_t CNWRules__GetNumClasses = 0x080CBAE8;
// void CNWRules::GetNumDomains(void)
constexpr uintptr_t CNWRules__GetNumDomains = 0x080CBB50;
// void CNWRules::GetNumFeats(void)
constexpr uintptr_t CNWRules__GetNumFeats = 0x080CBB78;
// void CNWRules::GetNumRaces(void)
constexpr uintptr_t CNWRules__GetNumRaces = 0x080CBB14;
// void CNWRules::GetNumSkills(void)
constexpr uintptr_t CNWRules__GetNumSkills = 0x080CBB40;
// void CNWRules::GetNumSortedFeats(void)
constexpr uintptr_t CNWRules__GetNumSortedFeats = 0x080CBB88;
// void CNWRules::GetNumSpells(void)
constexpr uintptr_t CNWRules__GetNumSpells = 0x080CBAA0;
// void CNWRules::GetRace(uint16_t)
constexpr uintptr_t CNWRules__GetRace = 0x080CBAF8;
// void CNWRules::GetSkill(uint16_t)
constexpr uintptr_t CNWRules__GetSkill = 0x080CBB24;
// public unsigned char CNWRules::GetSkillExpansionLevel(uint16_t)
constexpr uintptr_t CNWRules__GetSkillExpansionLevel = 0x080CB91C;
// void CNWRules::GetSortedFeatID(uint16_t)
constexpr uintptr_t CNWRules__GetSortedFeatID = 0x080CBB60;
// void CNWRules::GetSpell(uint32_t)
constexpr uintptr_t CNWRules__GetSpell = 0x080CBA88;
// public unsigned char CNWRules::GetSpellExpansionLevel(uint32_t)
constexpr uintptr_t CNWRules__GetSpellExpansionLevel = 0x080CB944;
// void CNWRules::GetSpellRange(int32_t)
constexpr uintptr_t CNWRules__GetSpellRange = 0x080CBB98;
// public int32_t CNWRules::GetWeightedDamageAmount(int32_t, int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWRules__GetWeightedDamageAmount = 0x080CB7A4;
// public int32_t CNWRules::IsArcaneClass(unsigned char)
constexpr uintptr_t CNWRules__IsArcaneClass = 0x080CBA08;
// void CNWRules::IsFeatUseable(unsigned char, uint16_t)
constexpr uintptr_t CNWRules__IsFeatUseable = 0x080CB600;
// protected void CNWRules::LoadClassInfo(void)
constexpr uintptr_t CNWRules__LoadClassInfo = 0x080C8918;
// protected void CNWRules::LoadDifficultyInfo(void)
constexpr uintptr_t CNWRules__LoadDifficultyInfo = 0x080CB440;
// protected void CNWRules::LoadDomainInfo(void)
constexpr uintptr_t CNWRules__LoadDomainInfo = 0x080CAEF0;
// protected void CNWRules::LoadFeatInfo(void)
constexpr uintptr_t CNWRules__LoadFeatInfo = 0x080C6DD8;
// protected void CNWRules::LoadRaceInfo(void)
constexpr uintptr_t CNWRules__LoadRaceInfo = 0x080C9D58;
// protected void CNWRules::LoadSkillInfo(void)
constexpr uintptr_t CNWRules__LoadSkillInfo = 0x080CA75C;
// public void CNWRules::ReloadAll(void)
constexpr uintptr_t CNWRules__ReloadAll = 0x080C6AA0;
// public uint16_t CNWRules::RollDice(unsigned char, unsigned char)
constexpr uintptr_t CNWRules__RollDice = 0x080CB6B0;
// void CNWRules::SortFeats(void)
constexpr uintptr_t CNWRules__SortFeats = 0x080CB688;
// public void CNWRules::UnloadAll(void)
constexpr uintptr_t CNWRules__UnloadAll = 0x080C680C;

// public CNWSAmbientSound::CNWSAmbientSound(uint32_t)
constexpr uintptr_t CNWSAmbientSound__CNWSAmbientSoundCtor__1 = 0x0823AAA8;
// CNWSAmbientSound::~CNWSAmbientSound(void)
constexpr uintptr_t CNWSAmbientSound__CNWSAmbientSoundDtor = 0x0823ACBC;
// private int32_t CNWSAmbientSound::GetPlayersInArea(CExoArrayListTemplatedunsignedlong*)
constexpr uintptr_t CNWSAmbientSound__GetPlayersInArea = 0x0823A884;
// public int32_t CNWSAmbientSound::Load(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSAmbientSound__Load = 0x0823A970;
// public void CNWSAmbientSound::PackIntoMessage(CNWSMessage*)
constexpr uintptr_t CNWSAmbientSound__PackIntoMessage = 0x0823ABAC;
// public void CNWSAmbientSound::PlayAmbientSound(int32_t)
constexpr uintptr_t CNWSAmbientSound__PlayAmbientSound = 0x0823A530;
// public void CNWSAmbientSound::PlayBattleMusic(int32_t)
constexpr uintptr_t CNWSAmbientSound__PlayBattleMusic = 0x0823A3E8;
// public void CNWSAmbientSound::PlayMusic(int32_t)
constexpr uintptr_t CNWSAmbientSound__PlayMusic = 0x0823A160;
// public void CNWSAmbientSound::Save(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSAmbientSound__Save = 0x0823AB08;
// public void CNWSAmbientSound::SetAmbientDayTrack(int32_t)
constexpr uintptr_t CNWSAmbientSound__SetAmbientDayTrack = 0x0823A5CC;
// public void CNWSAmbientSound::SetAmbientDayVolume(int32_t)
constexpr uintptr_t CNWSAmbientSound__SetAmbientDayVolume = 0x0823A71C;
// public void CNWSAmbientSound::SetAmbientNightTrack(int32_t)
constexpr uintptr_t CNWSAmbientSound__SetAmbientNightTrack = 0x0823A674;
// public void CNWSAmbientSound::SetAmbientNightVolume(int32_t)
constexpr uintptr_t CNWSAmbientSound__SetAmbientNightVolume = 0x0823A7D0;
// public void CNWSAmbientSound::SetBattleMusicTrack(int32_t)
constexpr uintptr_t CNWSAmbientSound__SetBattleMusicTrack = 0x0823A48C;
// public void CNWSAmbientSound::SetMusicDayTrack(int32_t)
constexpr uintptr_t CNWSAmbientSound__SetMusicDayTrack = 0x0823A2A0;
// public void CNWSAmbientSound::SetMusicDelay(int32_t)
constexpr uintptr_t CNWSAmbientSound__SetMusicDelay = 0x0823A1FC;
// public void CNWSAmbientSound::SetMusicNightTrack(int32_t)
constexpr uintptr_t CNWSAmbientSound__SetMusicNightTrack = 0x0823A340;

// public CNWSArea::CNWSArea(CResRef, int32_t, uint32_t)
constexpr uintptr_t CNWSArea__CNWSAreaCtor__1 = 0x080CBD30;
// public CNWSArea::~CNWSArea(void)
constexpr uintptr_t CNWSArea__CNWSAreaDtor = 0x080CC244;
// public int32_t CNWSArea::AddObjectToArea(uint32_t, int32_t)
constexpr uintptr_t CNWSArea__AddObjectToArea = 0x080CD6E4;
// void CNWSArea::AddSubArea(CGameObject*)
constexpr uintptr_t CNWSArea__AddSubArea = 0x080D57F8;
// public int32_t CNWSArea::AIUpdate(void)
constexpr uintptr_t CNWSArea__AIUpdate = 0x080CC3E0;
// public void CNWSArea::ApplyEffect(CGameEffect*, Vector, Vector)
constexpr uintptr_t CNWSArea__ApplyEffect = 0x080D3AF0;
// public CNWSArea* CNWSArea::AsNWSArea(void)
constexpr uintptr_t CNWSArea__AsNWSArea = 0x080D55BC;
// public void CNWSArea::BudgeCreatures(const Vector&, const Vector&, const Vector&, uint32_t, int32_t)
constexpr uintptr_t CNWSArea__BudgeCreatures = 0x080D4468;
// public int32_t CNWSArea::ClearLineOfSight(Vector, Vector, Vector*, uint32_t*, uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSArea__ClearLineOfSight = 0x080D31F0;
// public Vector CNWSArea::ComputeAwayVector(Vector, Vector, float, CPathfindInformation*)
constexpr uintptr_t CNWSArea__ComputeAwayVector = 0x080D5E48;
// public int32_t CNWSArea::ComputeBestCorner(float, float, float, float, float, float, float, float, float*, float*, float*, float*)
constexpr uintptr_t CNWSArea__ComputeBestCorner = 0x080D63B8;
// public float CNWSArea::ComputeHeight(Vector)
constexpr uintptr_t CNWSArea__ComputeHeight = 0x080D65FC;
// public int32_t CNWSArea::ComputeNonVisibleLocation(Vector, CPathfindInformation*, int32_t, Vector*, float)
constexpr uintptr_t CNWSArea__ComputeNonVisibleLocation = 0x080D7658;
// void CNWSArea::ComputePathDistance(int32_t, float*)
constexpr uintptr_t CNWSArea__ComputePathDistance = 0x080DE8B0;
// public int32_t CNWSArea::ComputeSafeLocation(Vector, float, CPathfindInformation*, int32_t, Vector*)
constexpr uintptr_t CNWSArea__ComputeSafeLocation = 0x080D70D4;
// public int32_t CNWSArea::ComputeSafeLocationInDirection(Vector, Vector, float, CPathfindInformation*, int32_t, Vector*)
constexpr uintptr_t CNWSArea__ComputeSafeLocationInDirection = 0x080D6C08;
// public int32_t CNWSArea::CountAreaTransitionTriggers(uint32_t*, int32_t, uint32_t*)
constexpr uintptr_t CNWSArea__CountAreaTransitionTriggers = 0x080D7DE8;
// public int32_t CNWSArea::CountVisibleToPlayers(Vector, int32_t)
constexpr uintptr_t CNWSArea__CountVisibleToPlayers = 0x080D7C28;
// protected void CNWSArea::DecreaseAILevelPriority(void)
constexpr uintptr_t CNWSArea__DecreaseAILevelPriority = 0x080CDF18;
// public void CNWSArea::DecrementPlayersInArea(void)
constexpr uintptr_t CNWSArea__DecrementPlayersInArea = 0x080D48CC;
// public int32_t CNWSArea::EvaluateOverlappingTargets(CPathfindInformation*, Vector, uint32_t, float, float, float, int32_t, int32_t, uint32_t*)
constexpr uintptr_t CNWSArea__EvaluateOverlappingTargets = 0x080DA5C8;
// public void CNWSArea::EventHandler(uint32_t, uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CNWSArea__EventHandler = 0x080CC5F0;
// public int32_t CNWSArea::ExploreArea(CNWSCreature*, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSArea__ExploreArea = 0x080D9268;
// public int32_t CNWSArea::GenerateInterTilePath(int32_t*, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSArea__GenerateInterTilePath = 0x080D9438;
// void CNWSArea::GetAmbientSound(void)
constexpr uintptr_t CNWSArea__GetAmbientSound = 0x080D597C;
// void CNWSArea::GetAreaListenCheckModifier(void)
constexpr uintptr_t CNWSArea__GetAreaListenCheckModifier = 0x080D58F4;
// void CNWSArea::GetAreaName(void)
constexpr uintptr_t CNWSArea__GetAreaName = 0x080D595C;
// void CNWSArea::GetAreaSpotCheckModifier(void)
constexpr uintptr_t CNWSArea__GetAreaSpotCheckModifier = 0x080D58E4;
// void CNWSArea::GetCurrentWeather(void)
constexpr uintptr_t CNWSArea__GetCurrentWeather = 0x080D59E8;
// void CNWSArea::GetCustomScriptEventId(void)
constexpr uintptr_t CNWSArea__GetCustomScriptEventId = 0x080D5904;
// public uint32_t CNWSArea::GetDoorCrossed(Vector, Vector)
constexpr uintptr_t CNWSArea__GetDoorCrossed = 0x080D412C;
// public int32_t CNWSArea::GetFirstObjectInArea(uint32_t&)
constexpr uintptr_t CNWSArea__GetFirstObjectInArea = 0x080D4814;
// public int32_t CNWSArea::GetFirstObjectIndiceByX(int32_t*, float)
constexpr uintptr_t CNWSArea__GetFirstObjectIndiceByX = 0x080CD5F4;
// void CNWSArea::GetGameObjectsArray(void)
constexpr uintptr_t CNWSArea__GetGameObjectsArray = 0x080D57B4;
// void CNWSArea::GetInterAreaDFSVisited(void)
constexpr uintptr_t CNWSArea__GetInterAreaDFSVisited = 0x080D5938;
// public int32_t CNWSArea::GetIsIDInExcludeList(uint32_t, CExoArrayListTemplatedCGameObjectPtr*)
constexpr uintptr_t CNWSArea__GetIsIDInExcludeList = 0x080D51E8;
// void CNWSArea::GetLastEntered(void)
constexpr uintptr_t CNWSArea__GetLastEntered = 0x080D5780;
// void CNWSArea::GetLastLeft(void)
constexpr uintptr_t CNWSArea__GetLastLeft = 0x080D5790;
// public uint16_t CNWSArea::GetLoadScreenID(void)
constexpr uintptr_t CNWSArea__GetLoadScreenID = 0x080D5A1C;
// void CNWSArea::GetMapSize(void)
constexpr uintptr_t CNWSArea__GetMapSize = 0x080D59B4;
// public int32_t CNWSArea::GetNextObjectInArea(uint32_t&)
constexpr uintptr_t CNWSArea__GetNextObjectInArea = 0x080D4858;
// void CNWSArea::GetNumPlayersInArea(void)
constexpr uintptr_t CNWSArea__GetNumPlayersInArea = 0x080D596C;
// void CNWSArea::GetObjectByNameIndex(void)
constexpr uintptr_t CNWSArea__GetObjectByNameIndex = 0x080D58C4;
// void CNWSArea::GetObjectsArrayPosition(void)
constexpr uintptr_t CNWSArea__GetObjectsArrayPosition = 0x080D57C4;
// void CNWSArea::GetOverrideWeather(void)
constexpr uintptr_t CNWSArea__GetOverrideWeather = 0x080D59D8;
// public unsigned char CNWSArea::GetPVPSetting(void)
constexpr uintptr_t CNWSArea__GetPVPSetting = 0x080D5234;
// void CNWSArea::GetScriptName(int32_t)
constexpr uintptr_t CNWSArea__GetScriptName = 0x080D55CC;
// void CNWSArea::GetScriptVarTable(void)
constexpr uintptr_t CNWSArea__GetScriptVarTable = 0x080D57E8;
// void CNWSArea::GetSoundPathInformation(void)
constexpr uintptr_t CNWSArea__GetSoundPathInformation = 0x080D58D4;
// void CNWSArea::GetSurfaceMaterial(Vector)
constexpr uintptr_t CNWSArea__GetSurfaceMaterial = 0x080D528C;
// public CExoString CNWSArea::GetTag(void)
constexpr uintptr_t CNWSArea__GetTag = 0x080D5744;
// public CNWSTile* CNWSArea::GetTile(Vector)
constexpr uintptr_t CNWSArea__GetTile__0 = 0x080CDCC8;
// public CNWSTile* CNWSArea::GetTile(int32_t, int32_t)
constexpr uintptr_t CNWSArea__GetTile__1 = 0x080D5650;
// void CNWSArea::GetTileSetResRef(void)
constexpr uintptr_t CNWSArea__GetTileSetResRef = 0x080D59F8;
// void CNWSArea::GetTrapList(void)
constexpr uintptr_t CNWSArea__GetTrapList = 0x080D5928;
// public int32_t CNWSArea::GoalMoveDenied(int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSArea__GoalMoveDenied = 0x080D9590;
// public int32_t CNWSArea::GridDFSearch(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSArea__GridDFSearch = 0x080DD9A0;
// public int32_t CNWSArea::GridDFSGenerateSuccessors(int32_t, int32_t, int32_t, int32_t, int32_t, CNWSAreaGridSuccessors**)
constexpr uintptr_t CNWSArea__GridDFSGenerateSuccessors = 0x080DDBCC;
// public int32_t CNWSArea::GridDFSTransTableGet(int32_t, int32_t, int32_t*, int32_t*)
constexpr uintptr_t CNWSArea__GridDFSTransTableGet = 0x080DEA24;
// void CNWSArea::GridDFSTransTableHash(int32_t, int32_t)
constexpr uintptr_t CNWSArea__GridDFSTransTableHash = 0x080DE9F0;
// void CNWSArea::GridDFSTransTableInitialize(void)
constexpr uintptr_t CNWSArea__GridDFSTransTableInitialize = 0x080DE984;
// public void CNWSArea::GridDFSTransTablePut(int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSArea__GridDFSTransTablePut = 0x080DEABC;
// public int32_t CNWSArea::HandleTransparentDoors(float, float, float, float, float, float, float, uint32_t, uint32_t&, int32_t, CExoArrayListTemplatedCGameObjectPtr*, int32_t)
constexpr uintptr_t CNWSArea__HandleTransparentDoors = 0x080D308C;
// protected void CNWSArea::IncreaseAILevelPriority(void)
constexpr uintptr_t CNWSArea__IncreaseAILevelPriority = 0x080CDDA8;
// public void CNWSArea::IncrementPlayersInArea(void)
constexpr uintptr_t CNWSArea__IncrementPlayersInArea = 0x080D489C;
// public int32_t CNWSArea::InSubAreas(Vector, CExoArrayListTemplatedunsignedlong*)
constexpr uintptr_t CNWSArea__InSubAreas = 0x080DA3F4;
// public int32_t CNWSArea::IntersectingLineSegment(Vector, Vector, CExoArrayListTemplatedunsignedlong*)
constexpr uintptr_t CNWSArea__IntersectingLineSegment = 0x080DA1F8;
// public int32_t CNWSArea::InterTileDFS(int32_t, int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSArea__InterTileDFS = 0x080D96B0;
// public void CNWSArea::InterTileDFSExploreArea(unsigned char*, int32_t, int32_t, int32_t, float, float)
constexpr uintptr_t CNWSArea__InterTileDFSExploreArea = 0x080D7FA4;
// public int32_t CNWSArea::InterTileDFSGenerateSuccessors(int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSArea__InterTileDFSGenerateSuccessors = 0x080D9820;
// public int32_t CNWSArea::InterTileDFSSoundPath(unsigned char*, int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSArea__InterTileDFSSoundPath = 0x080D882C;
// public int32_t CNWSArea::LoadArea(int32_t)
constexpr uintptr_t CNWSArea__LoadArea = 0x080CDFDC;
// protected int32_t CNWSArea::LoadAreaEffects(CResGFF*, CResStruct*, int32_t)
constexpr uintptr_t CNWSArea__LoadAreaEffects = 0x080D0B24;
// protected int32_t CNWSArea::LoadAreaHeader(CResStruct*)
constexpr uintptr_t CNWSArea__LoadAreaHeader = 0x080CE0D8;
// protected int32_t CNWSArea::LoadCreatures(CResGFF*, CResStruct*, int32_t)
constexpr uintptr_t CNWSArea__LoadCreatures = 0x080CF3F0;
// protected int32_t CNWSArea::LoadDoors(CResGFF*, CResStruct*, int32_t)
constexpr uintptr_t CNWSArea__LoadDoors = 0x080CF99C;
// protected int32_t CNWSArea::LoadEncounters(CResGFF*, CResStruct*, int32_t)
constexpr uintptr_t CNWSArea__LoadEncounters = 0x080CFFA4;
// protected int32_t CNWSArea::LoadGIT(int32_t)
constexpr uintptr_t CNWSArea__LoadGIT = 0x080CF218;
// protected int32_t CNWSArea::LoadItems(CResGFF*, CResStruct*, int32_t)
constexpr uintptr_t CNWSArea__LoadItems = 0x080CF758;
// protected int32_t CNWSArea::LoadPlaceables(CResGFF*, CResStruct*, int32_t)
constexpr uintptr_t CNWSArea__LoadPlaceables = 0x080D041C;
// void CNWSArea::LoadPlayers(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSArea__LoadPlayers = 0x080D48F4;
// protected int32_t CNWSArea::LoadProperties(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSArea__LoadProperties = 0x080D4900;
// protected int32_t CNWSArea::LoadSounds(CResGFF*, CResStruct*, int32_t)
constexpr uintptr_t CNWSArea__LoadSounds = 0x080D02EC;
// protected int32_t CNWSArea::LoadStores(CResGFF*, CResStruct*, int32_t)
constexpr uintptr_t CNWSArea__LoadStores = 0x080D0880;
// protected int32_t CNWSArea::LoadTileSetInfo(CResStruct*)
constexpr uintptr_t CNWSArea__LoadTileSetInfo = 0x080CEC24;
// protected int32_t CNWSArea::LoadTriggers(CResGFF*, CResStruct*, int32_t)
constexpr uintptr_t CNWSArea__LoadTriggers = 0x080CFDE0;
// protected int32_t CNWSArea::LoadWaypoints(CResGFF*, CResStruct*, int32_t)
constexpr uintptr_t CNWSArea__LoadWaypoints = 0x080D0144;
// public int32_t CNWSArea::NoCreaturesOnLine(float, float, float, float, CPathfindInformation*, int32_t, int32_t, uint32_t*, int32_t)
constexpr uintptr_t CNWSArea__NoCreaturesOnLine = 0x080DA71C;
// public int32_t CNWSArea::NoNoneWalkPolysInStaticObject(uint32_t, float, float, float, float, float, float, float, uint32_t, int32_t)
constexpr uintptr_t CNWSArea__NoNoneWalkPolysInStaticObject = 0x080DEB48;
// void CNWSArea::NWAreaAsNWSArea(void)
constexpr uintptr_t CNWSArea__NWAreaAsNWSArea = 0x080D55C4;
// public int32_t CNWSArea::PackAreaIntoMessage(int32_t, int32_t, int32_t, CNWSPlayer*)
constexpr uintptr_t CNWSArea__PackAreaIntoMessage = 0x080D0E00;
// public void CNWSArea::PlayVisualEffect(uint16_t, Vector)
constexpr uintptr_t CNWSArea__PlayVisualEffect = 0x080D2E54;
// public uint32_t CNWSArea::PlotGridPath(CPathfindInformation*, uint64_t)
constexpr uintptr_t CNWSArea__PlotGridPath = 0x080DCBB4;
// public uint32_t CNWSArea::PlotPath(CPathfindInformation*, uint64_t)
constexpr uintptr_t CNWSArea__PlotPath = 0x080DAEF8;
// public int32_t CNWSArea::PlotSoundPath(CPathfindInformation*)
constexpr uintptr_t CNWSArea__PlotSoundPath = 0x080DE750;
// public int32_t CNWSArea::PositionWalkable(Vector)
constexpr uintptr_t CNWSArea__PositionWalkable = 0x080D4024;
// public int32_t CNWSArea::RemoveInterTileExit(int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSArea__RemoveInterTileExit = 0x080DBAA0;
// public int32_t CNWSArea::RemoveObjectFromArea(uint32_t)
constexpr uintptr_t CNWSArea__RemoveObjectFromArea = 0x080CDB74;
// void CNWSArea::RemoveSubArea(CGameObject*)
constexpr uintptr_t CNWSArea__RemoveSubArea = 0x080D5848;
// void CNWSArea::SaveArea(CERFFile*, CExoString&)
constexpr uintptr_t CNWSArea__SaveArea = 0x080D49FC;
// protected void CNWSArea::SaveAreaEffects(CResGFF*, CResStruct*, CExoArrayListTemplatedunsignedlong&)
constexpr uintptr_t CNWSArea__SaveAreaEffects = 0x080D507C;
// protected void CNWSArea::SaveCreatures(CResGFF*, CResStruct*, CExoArrayListTemplatedunsignedlong&)
constexpr uintptr_t CNWSArea__SaveCreatures = 0x080D2AE4;
// protected void CNWSArea::SaveDoors(CResGFF*, CResStruct*, CExoArrayListTemplatedunsignedlong&)
constexpr uintptr_t CNWSArea__SaveDoors = 0x080D4AE8;
// protected void CNWSArea::SaveEncounters(CResGFF*, CResStruct*, CExoArrayListTemplatedunsignedlong&)
constexpr uintptr_t CNWSArea__SaveEncounters = 0x080D4C80;
// public void CNWSArea::SaveGIT(CERFFile*, CExoString&, CExoArrayListTemplatedunsignedlong&)
constexpr uintptr_t CNWSArea__SaveGIT = 0x080D2238;
// protected void CNWSArea::SaveItems(CResGFF*, CResStruct*, CExoArrayListTemplatedunsignedlong&)
constexpr uintptr_t CNWSArea__SaveItems = 0x080D4A04;
// protected void CNWSArea::SavePlaceables(CResGFF*, CResStruct*, CExoArrayListTemplatedunsignedlong&)
constexpr uintptr_t CNWSArea__SavePlaceables = 0x080D4EE4;
// void CNWSArea::SaveProperties(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSArea__SaveProperties = 0x080D5148;
// protected void CNWSArea::SaveSounds(CResGFF*, CResStruct*, CExoArrayListTemplatedunsignedlong&)
constexpr uintptr_t CNWSArea__SaveSounds = 0x080D4E18;
// protected void CNWSArea::SaveStores(CResGFF*, CResStruct*, CExoArrayListTemplatedunsignedlong&)
constexpr uintptr_t CNWSArea__SaveStores = 0x080D4FB0;
// protected void CNWSArea::SaveTriggers(CResGFF*, CResStruct*, CExoArrayListTemplatedunsignedlong&)
constexpr uintptr_t CNWSArea__SaveTriggers = 0x080D4BB4;
// protected void CNWSArea::SaveWaypoints(CResGFF*, CResStruct*, CExoArrayListTemplatedunsignedlong&)
constexpr uintptr_t CNWSArea__SaveWaypoints = 0x080D4D4C;
// public void CNWSArea::SetCurrentWeather(unsigned char, int32_t)
constexpr uintptr_t CNWSArea__SetCurrentWeather = 0x080D42E4;
// void CNWSArea::SetCustomScriptEventId(int32_t)
constexpr uintptr_t CNWSArea__SetCustomScriptEventId = 0x080D5914;
// void CNWSArea::SetInterAreaDFSVisited(int32_t)
constexpr uintptr_t CNWSArea__SetInterAreaDFSVisited = 0x080D5948;
// void CNWSArea::SetLastEntered(uint32_t)
constexpr uintptr_t CNWSArea__SetLastEntered = 0x080D576C;
// void CNWSArea::SetLastLeft(uint32_t)
constexpr uintptr_t CNWSArea__SetLastLeft = 0x080D57A0;
// void CNWSArea::SetMapSize(unsigned char)
constexpr uintptr_t CNWSArea__SetMapSize = 0x080D59A0;
// void CNWSArea::SetObjectByNameIndex(int32_t)
constexpr uintptr_t CNWSArea__SetObjectByNameIndex = 0x080D58B0;
// void CNWSArea::SetObjectsArrayPosition(int32_t)
constexpr uintptr_t CNWSArea__SetObjectsArrayPosition = 0x080D57D4;
// void CNWSArea::SetOverrideWeather(unsigned char)
constexpr uintptr_t CNWSArea__SetOverrideWeather = 0x080D59C4;
// void CNWSArea::SetPVPSetting(unsigned char)
constexpr uintptr_t CNWSArea__SetPVPSetting = 0x080D598C;
// public void CNWSArea::SetScriptName(int32_t, CExoString)
constexpr uintptr_t CNWSArea__SetScriptName = 0x080D55E8;
// void CNWSArea::SetSearchInfo(CPathfindInformation*)
constexpr uintptr_t CNWSArea__SetSearchInfo = 0x080D5694;
// void CNWSArea::SetTag(CExoString)
constexpr uintptr_t CNWSArea__SetTag = 0x080D56A8;
// public void CNWSArea::SmoothCornerOptimize(int32_t, float*, int32_t*, float**)
constexpr uintptr_t CNWSArea__SmoothCornerOptimize = 0x080DBBB4;
// public int32_t CNWSArea::SmoothPointsOnPath(void)
constexpr uintptr_t CNWSArea__SmoothPointsOnPath = 0x080DBEB4;
// void CNWSArea::SmoothSelection(int32_t, float*, int32_t*, float**)
constexpr uintptr_t CNWSArea__SmoothSelection = 0x080DE8F8;
// public void CNWSArea::SmoothSelectNodes(int32_t, float*, int32_t*, float**, int32_t, int32_t)
constexpr uintptr_t CNWSArea__SmoothSelectNodes = 0x080DBFC0;
// public int32_t CNWSArea::TestDirectLine(float, float, float, float, float, float, int32_t)
constexpr uintptr_t CNWSArea__TestDirectLine = 0x080DC354;
// public int32_t CNWSArea::TestLineWalkable(float, float, float, float, float)
constexpr uintptr_t CNWSArea__TestLineWalkable = 0x080DC890;
// public int32_t CNWSArea::TestSafeLocationPoint(Vector, CPathfindInformation*)
constexpr uintptr_t CNWSArea__TestSafeLocationPoint = 0x080D67A8;
// public void CNWSArea::UnloadArea(void)
constexpr uintptr_t CNWSArea__UnloadArea = 0x080D2C48;
// public void CNWSArea::UpdatePlayerAutomaps(void)
constexpr uintptr_t CNWSArea__UpdatePlayerAutomaps = 0x080D9378;
// public int32_t CNWSArea::UpdatePositionInObjectsArray(CGameObject*)
constexpr uintptr_t CNWSArea__UpdatePositionInObjectsArray = 0x080CD898;

// public CNWSAreaOfEffectObject::CNWSAreaOfEffectObject(uint32_t)
constexpr uintptr_t CNWSAreaOfEffectObject__CNWSAreaOfEffectObjectCtor__1 = 0x081E9ED0;
// public CNWSAreaOfEffectObject::~CNWSAreaOfEffectObject(void)
constexpr uintptr_t CNWSAreaOfEffectObject__CNWSAreaOfEffectObjectDtor = 0x081EA0B0;
// public void CNWSAreaOfEffectObject::AddToArea(CNWSArea*, float, float, float, int32_t)
constexpr uintptr_t CNWSAreaOfEffectObject__AddToArea = 0x081EA548;
// public void CNWSAreaOfEffectObject::AIUpdate(void)
constexpr uintptr_t CNWSAreaOfEffectObject__AIUpdate = 0x081EA1EC;
// void CNWSAreaOfEffectObject::AsNWSAreaOfEffectObject(void)
constexpr uintptr_t CNWSAreaOfEffectObject__AsNWSAreaOfEffectObject = 0x081ECE10;
// public void CNWSAreaOfEffectObject::EventHandler(uint32_t, uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CNWSAreaOfEffectObject__EventHandler = 0x081EA450;
// void CNWSAreaOfEffectObject::GetAreaEffectId(void)
constexpr uintptr_t CNWSAreaOfEffectObject__GetAreaEffectId = 0x081ECF14;
// void CNWSAreaOfEffectObject::GetCreator(void)
constexpr uintptr_t CNWSAreaOfEffectObject__GetCreator = 0x081ECE9C;
// public uint32_t CNWSAreaOfEffectObject::GetEffectSpellId(void)
constexpr uintptr_t CNWSAreaOfEffectObject__GetEffectSpellId = 0x081ECF34;
// void CNWSAreaOfEffectObject::GetLastEntered(void)
constexpr uintptr_t CNWSAreaOfEffectObject__GetLastEntered = 0x081ECEC0;
// void CNWSAreaOfEffectObject::GetLastLeft(void)
constexpr uintptr_t CNWSAreaOfEffectObject__GetLastLeft = 0x081ECED0;
// void CNWSAreaOfEffectObject::GetObjectArrayIndex(void)
constexpr uintptr_t CNWSAreaOfEffectObject__GetObjectArrayIndex = 0x081ECF58;
// public Vector CNWSAreaOfEffectObject::GetPosition(void)
constexpr uintptr_t CNWSAreaOfEffectObject__GetPosition = 0x081ECCC8;
// void CNWSAreaOfEffectObject::GetRadius(void)
constexpr uintptr_t CNWSAreaOfEffectObject__GetRadius = 0x081ECF24;
// void CNWSAreaOfEffectObject::GetScriptName(int32_t)
constexpr uintptr_t CNWSAreaOfEffectObject__GetScriptName = 0x081ECE18;
// void CNWSAreaOfEffectObject::GetShape(void)
constexpr uintptr_t CNWSAreaOfEffectObject__GetShape = 0x081ECF04;
// void CNWSAreaOfEffectObject::GetSpellLevel(void)
constexpr uintptr_t CNWSAreaOfEffectObject__GetSpellLevel = 0x081ECF8C;
// void CNWSAreaOfEffectObject::GetSpellSaveDC(void)
constexpr uintptr_t CNWSAreaOfEffectObject__GetSpellSaveDC = 0x081ECF7C;
// void CNWSAreaOfEffectObject::GetTargetObjID(void)
constexpr uintptr_t CNWSAreaOfEffectObject__GetTargetObjID = 0x081ECEF4;
// public int32_t CNWSAreaOfEffectObject::InAreaOfEffect(Vector)
constexpr uintptr_t CNWSAreaOfEffectObject__InAreaOfEffect = 0x081EABF0;
// public void CNWSAreaOfEffectObject::JumpToPoint(CNWSArea*, const Vector&)
constexpr uintptr_t CNWSAreaOfEffectObject__JumpToPoint = 0x081EC87C;
// public int32_t CNWSAreaOfEffectObject::LineSegmentIntersectAreaOfEffect(Vector, Vector)
constexpr uintptr_t CNWSAreaOfEffectObject__LineSegmentIntersectAreaOfEffect = 0x081EA948;
// public void CNWSAreaOfEffectObject::LoadAreaEffect(int32_t)
constexpr uintptr_t CNWSAreaOfEffectObject__LoadAreaEffect = 0x081EAEB0;
// public int32_t CNWSAreaOfEffectObject::LoadEffect(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSAreaOfEffectObject__LoadEffect = 0x081EB4B4;
// public void CNWSAreaOfEffectObject::RemoveFromArea(void)
constexpr uintptr_t CNWSAreaOfEffectObject__RemoveFromArea = 0x081ECC2C;
// protected void CNWSAreaOfEffectObject::RemoveFromSubAreas(int32_t)
constexpr uintptr_t CNWSAreaOfEffectObject__RemoveFromSubAreas = 0x081EC928;
// public int32_t CNWSAreaOfEffectObject::SaveEffect(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSAreaOfEffectObject__SaveEffect = 0x081EBB68;
// public void CNWSAreaOfEffectObject::SetCreator(uint32_t)
constexpr uintptr_t CNWSAreaOfEffectObject__SetCreator = 0x081ECAF4;
// public void CNWSAreaOfEffectObject::SetDuration(unsigned char, float)
constexpr uintptr_t CNWSAreaOfEffectObject__SetDuration = 0x081ECD58;
// public void CNWSAreaOfEffectObject::SetEffectSpellId(uint32_t)
constexpr uintptr_t CNWSAreaOfEffectObject__SetEffectSpellId = 0x081ECF44;
// void CNWSAreaOfEffectObject::SetLastEntered(uint32_t)
constexpr uintptr_t CNWSAreaOfEffectObject__SetLastEntered = 0x081ECEAC;
// void CNWSAreaOfEffectObject::SetLastLeft(uint32_t)
constexpr uintptr_t CNWSAreaOfEffectObject__SetLastLeft = 0x081ECEE0;
// void CNWSAreaOfEffectObject::SetObjectArrayIndex(uint16_t)
constexpr uintptr_t CNWSAreaOfEffectObject__SetObjectArrayIndex = 0x081ECF68;
// public void CNWSAreaOfEffectObject::SetScriptName(int32_t, CExoString)
constexpr uintptr_t CNWSAreaOfEffectObject__SetScriptName = 0x081ECE34;
// void CNWSAreaOfEffectObject::SetShape(unsigned char, float, float)
constexpr uintptr_t CNWSAreaOfEffectObject__SetShape = 0x081EAD30;
// public void CNWSAreaOfEffectObject::SetTargetObjID(uint32_t)
constexpr uintptr_t CNWSAreaOfEffectObject__SetTargetObjID = 0x081EADE0;
// protected void CNWSAreaOfEffectObject::UpdateSubAreas(Vector*)
constexpr uintptr_t CNWSAreaOfEffectObject__UpdateSubAreas = 0x081EBEF8;

// public CNWSBarter::CNWSBarter(CNWSCreature*)
constexpr uintptr_t CNWSBarter__CNWSBarterCtor__1 = 0x080DEC44;
// public CNWSBarter::~CNWSBarter(void)
constexpr uintptr_t CNWSBarter__CNWSBarterDtor = 0x080DED24;
// public int32_t CNWSBarter::AddItem(uint32_t, unsigned char&, unsigned char&)
constexpr uintptr_t CNWSBarter__AddItem = 0x080DF07C;
// public void CNWSBarter::CleanUp(void)
constexpr uintptr_t CNWSBarter__CleanUp = 0x080DEE24;
// public unsigned char CNWSBarter::GetState(void)
constexpr uintptr_t CNWSBarter__GetState = 0x080DFE18;
// public int32_t CNWSBarter::MoveItem(uint32_t, unsigned char&, unsigned char&)
constexpr uintptr_t CNWSBarter__MoveItem = 0x080DF3B4;
// public int32_t CNWSBarter::PullItemOut(uint32_t)
constexpr uintptr_t CNWSBarter__PullItemOut = 0x080DF4A0;
// public int32_t CNWSBarter::RemoveItem(uint32_t, unsigned char&, unsigned char&)
constexpr uintptr_t CNWSBarter__RemoveItem = 0x080DF254;
// public void CNWSBarter::Reset(uint32_t, int32_t)
constexpr uintptr_t CNWSBarter__Reset = 0x080DFF24;
// public int32_t CNWSBarter::SetListAccepted(int32_t)
constexpr uintptr_t CNWSBarter__SetListAccepted = 0x080DF6AC;
// public int32_t CNWSBarter::SetListLocked(int32_t)
constexpr uintptr_t CNWSBarter__SetListLocked = 0x080DF568;

// public CNWSClient::CNWSClient(uint32_t)
constexpr uintptr_t CNWSClient__CNWSClientCtor__1 = 0x080DFFD4;
// public CNWSClient::~CNWSClient(void)
constexpr uintptr_t CNWSClient__CNWSClientDtor = 0x080DFFF0;
// void CNWSClient::AsNWSDungeonMaster(void)
constexpr uintptr_t CNWSClient__AsNWSDungeonMaster = 0x080E0098;
// void CNWSClient::AsNWSPlayer(void)
constexpr uintptr_t CNWSClient__AsNWSPlayer = 0x080E00A0;
// void CNWSClient::GetLanguage(void)
constexpr uintptr_t CNWSClient__GetLanguage = 0x080E008C;
// void CNWSClient::GetPlayerId(void)
constexpr uintptr_t CNWSClient__GetPlayerId = 0x080E0070;
// void CNWSClient::SetLanguage(int32_t)
constexpr uintptr_t CNWSClient__SetLanguage = 0x080E007C;

// public CNWSCombatAttackData::CNWSCombatAttackData(void)
constexpr uintptr_t CNWSCombatAttackData__CNWSCombatAttackDataCtor = 0x080E01D4;
// public CNWSCombatAttackData::~CNWSCombatAttackData(void)
constexpr uintptr_t CNWSCombatAttackData__CNWSCombatAttackDataDtor = 0x080E4BA8;
// public void CNWSCombatAttackData::AddDamage(uint16_t, int32_t)
constexpr uintptr_t CNWSCombatAttackData__AddDamage = 0x080E4C74;
// public void CNWSCombatAttackData::ClearAttackData(void)
constexpr uintptr_t CNWSCombatAttackData__ClearAttackData = 0x080E0314;
// public void CNWSCombatAttackData::Copy(CNWSCombatAttackData*, int32_t)
constexpr uintptr_t CNWSCombatAttackData__Copy = 0x080E0430;
// public int32_t CNWSCombatAttackData::GetDamage(uint16_t)
constexpr uintptr_t CNWSCombatAttackData__GetDamage = 0x080E0544;
// public int32_t CNWSCombatAttackData::GetTotalDamage(int32_t)
constexpr uintptr_t CNWSCombatAttackData__GetTotalDamage = 0x080E4CEC;
// public int32_t CNWSCombatAttackData::LoadData(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSCombatAttackData__LoadData = 0x080E08F4;
// public int32_t CNWSCombatAttackData::SaveData(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSCombatAttackData__SaveData = 0x080E0610;
// public void CNWSCombatAttackData::SetBaseDamage(int32_t)
constexpr uintptr_t CNWSCombatAttackData__SetBaseDamage = 0x080E4C2C;
// void CNWSCombatAttackData::SetDamage(uint16_t, int32_t)
constexpr uintptr_t CNWSCombatAttackData__SetDamage = 0x080E4C3C;

// public CNWSCombatRound::CNWSCombatRound(CNWSCreature*)
constexpr uintptr_t CNWSCombatRound__CNWSCombatRoundCtor__1 = 0x080E0DB4;
// public CNWSCombatRound::~CNWSCombatRound(void)
constexpr uintptr_t CNWSCombatRound__CNWSCombatRoundDtor = 0x080E10CC;
// void CNWSCombatRound::AddAction(CNWSCombatRoundAction*)
constexpr uintptr_t CNWSCombatRound__AddAction = 0x080E50DC;
// public void CNWSCombatRound::AddAttackOfOpportunity(uint32_t)
constexpr uintptr_t CNWSCombatRound__AddAttackOfOpportunity = 0x080E31E0;
// public void CNWSCombatRound::AddCircleKickAttack(uint32_t)
constexpr uintptr_t CNWSCombatRound__AddCircleKickAttack = 0x080E2F94;
// public void CNWSCombatRound::AddCleaveAttack(uint32_t, int32_t)
constexpr uintptr_t CNWSCombatRound__AddCleaveAttack = 0x080E2E4C;
// public void CNWSCombatRound::AddCombatStepAction(uint32_t, uint32_t)
constexpr uintptr_t CNWSCombatRound__AddCombatStepAction = 0x080E3688;
// public void CNWSCombatRound::AddEquipAction(uint32_t, uint32_t)
constexpr uintptr_t CNWSCombatRound__AddEquipAction = 0x080E332C;
// public void CNWSCombatRound::AddParryAttack(uint32_t)
constexpr uintptr_t CNWSCombatRound__AddParryAttack = 0x080E2BE4;
// public void CNWSCombatRound::AddParryIndex(void)
constexpr uintptr_t CNWSCombatRound__AddParryIndex = 0x080E2D40;
// public void CNWSCombatRound::AddReaction(int32_t, int32_t)
constexpr uintptr_t CNWSCombatRound__AddReaction = 0x080E29BC;
// public void CNWSCombatRound::AddSpecialAttack(uint16_t)
constexpr uintptr_t CNWSCombatRound__AddSpecialAttack = 0x080E2494;
// public void CNWSCombatRound::AddSpellAction(void)
constexpr uintptr_t CNWSCombatRound__AddSpellAction = 0x080E2AD8;
// public void CNWSCombatRound::AddUnequipAction(uint32_t, uint32_t, unsigned char, unsigned char)
constexpr uintptr_t CNWSCombatRound__AddUnequipAction = 0x080E350C;
// public void CNWSCombatRound::AddWhirlwindAttack(uint32_t, int32_t)
constexpr uintptr_t CNWSCombatRound__AddWhirlwindAttack = 0x080E30D0;
// public int32_t CNWSCombatRound::CalculateOffHandAttacks(void)
constexpr uintptr_t CNWSCombatRound__CalculateOffHandAttacks = 0x080E1D50;
// public int32_t CNWSCombatRound::CheckActionLength(uint32_t, int32_t)
constexpr uintptr_t CNWSCombatRound__CheckActionLength = 0x080E1C7C;
// public int32_t CNWSCombatRound::CheckActionLengthAtTime(uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCombatRound__CheckActionLengthAtTime = 0x080E4F04;
// public void CNWSCombatRound::ClearAllAttacks(void)
constexpr uintptr_t CNWSCombatRound__ClearAllAttacks = 0x080E5260;
// public void CNWSCombatRound::ClearAllSpecialAttacks(void)
constexpr uintptr_t CNWSCombatRound__ClearAllSpecialAttacks = 0x080E5388;
// public void CNWSCombatRound::DecrementPauseTimer(int32_t)
constexpr uintptr_t CNWSCombatRound__DecrementPauseTimer = 0x080E4DD8;
// public void CNWSCombatRound::DecrementRoundLength(int32_t, int32_t)
constexpr uintptr_t CNWSCombatRound__DecrementRoundLength = 0x080E1AC4;
// public void CNWSCombatRound::EndCombatRound(void)
constexpr uintptr_t CNWSCombatRound__EndCombatRound = 0x080E1908;
// public CNWSCombatRoundAction* CNWSCombatRound::GetAction(void)
constexpr uintptr_t CNWSCombatRound__GetAction = 0x080E50A0;
// public int32_t CNWSCombatRound::GetActionPending(void)
constexpr uintptr_t CNWSCombatRound__GetActionPending = 0x080E4F6C;
// public CNWSCombatAttackData* CNWSCombatRound::GetAttack(int32_t)
constexpr uintptr_t CNWSCombatRound__GetAttack = 0x080E522C;
// void CNWSCombatRound::GetAttackActionPending(void)
constexpr uintptr_t CNWSCombatRound__GetAttackActionPending = 0x080E4FBC;
// public int32_t CNWSCombatRound::GetCombatStepRequired(uint32_t)
constexpr uintptr_t CNWSCombatRound__GetCombatStepRequired = 0x080E3BE4;
// public CNWSItem* CNWSCombatRound::GetCurrentAttackWeapon(int32_t)
constexpr uintptr_t CNWSCombatRound__GetCurrentAttackWeapon = 0x080E3778;
// void CNWSCombatRound::GetExtraAttack(void)
constexpr uintptr_t CNWSCombatRound__GetExtraAttack = 0x080E51F4;
// public uint16_t CNWSCombatRound::GetNewAttackID(void)
constexpr uintptr_t CNWSCombatRound__GetNewAttackID = 0x080E535C;
// public int32_t CNWSCombatRound::GetNumSpecialAttacks(void)
constexpr uintptr_t CNWSCombatRound__GetNumSpecialAttacks = 0x080E52DC;
// public int32_t CNWSCombatRound::GetOffHandAttack(void)
constexpr uintptr_t CNWSCombatRound__GetOffHandAttack = 0x080E51BC;
// public uint16_t CNWSCombatRound::GetSpecialAttack(int32_t)
constexpr uintptr_t CNWSCombatRound__GetSpecialAttack = 0x080E2760;
// public uint16_t CNWSCombatRound::GetSpecialAttackID(int32_t)
constexpr uintptr_t CNWSCombatRound__GetSpecialAttackID = 0x080E2808;
// public int32_t CNWSCombatRound::GetSpellActionPending(void)
constexpr uintptr_t CNWSCombatRound__GetSpellActionPending = 0x080E5010;
// public unsigned char CNWSCombatRound::GetTotalAttacks(void)
constexpr uintptr_t CNWSCombatRound__GetTotalAttacks = 0x080E5534;
// public int32_t CNWSCombatRound::GetWeaponAttackType(void)
constexpr uintptr_t CNWSCombatRound__GetWeaponAttackType = 0x080E38DC;
// void CNWSCombatRound::HasCreatureWeapons(void)
constexpr uintptr_t CNWSCombatRound__HasCreatureWeapons = 0x080E3B30;
// public void CNWSCombatRound::IncrementTimer(int32_t)
constexpr uintptr_t CNWSCombatRound__IncrementTimer = 0x080E4D7C;
// public void CNWSCombatRound::InitializeAttackActions(uint32_t)
constexpr uintptr_t CNWSCombatRound__InitializeAttackActions = 0x080E1E88;
// void CNWSCombatRound::InitializeCombatModes(void)
constexpr uintptr_t CNWSCombatRound__InitializeCombatModes = 0x080E52A0;
// public void CNWSCombatRound::InitializeNumberOfAttacks(void)
constexpr uintptr_t CNWSCombatRound__InitializeNumberOfAttacks = 0x080E2260;
// void CNWSCombatRound::InsertSpecialAttack(uint16_t, int32_t)
constexpr uintptr_t CNWSCombatRound__InsertSpecialAttack = 0x080E2900;
// public int32_t CNWSCombatRound::LoadCombatRound(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSCombatRound__LoadCombatRound = 0x080E4340;
// public void CNWSCombatRound::RecomputeRound(void)
constexpr uintptr_t CNWSCombatRound__RecomputeRound = 0x080E1390;
// public void CNWSCombatRound::RemoveAllActions(void)
constexpr uintptr_t CNWSCombatRound__RemoveAllActions = 0x080E516C;
// public void CNWSCombatRound::RemoveSpecialAttack(int32_t)
constexpr uintptr_t CNWSCombatRound__RemoveSpecialAttack = 0x080E25B8;
// public void CNWSCombatRound::RemoveSpellAction(void)
constexpr uintptr_t CNWSCombatRound__RemoveSpellAction = 0x080E541C;
// public int32_t CNWSCombatRound::SaveCombatRound(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSCombatRound__SaveCombatRound = 0x080E3D68;
// public void CNWSCombatRound::SetCurrentAttack(unsigned char)
constexpr uintptr_t CNWSCombatRound__SetCurrentAttack = 0x080E524C;
// public void CNWSCombatRound::SetDeflectArrow(int32_t)
constexpr uintptr_t CNWSCombatRound__SetDeflectArrow = 0x080E5560;
// public void CNWSCombatRound::SetPauseTimer(int32_t, int32_t)
constexpr uintptr_t CNWSCombatRound__SetPauseTimer = 0x080E4E78;
// public void CNWSCombatRound::SetRoundPaused(int32_t, uint32_t)
constexpr uintptr_t CNWSCombatRound__SetRoundPaused = 0x080E4DF8;
// void CNWSCombatRound::SignalCombatRoundStarted(void)
constexpr uintptr_t CNWSCombatRound__SignalCombatRoundStarted = 0x080E4D30;
// public void CNWSCombatRound::StartCombatRound(uint32_t)
constexpr uintptr_t CNWSCombatRound__StartCombatRound = 0x080E11E8;
// public void CNWSCombatRound::StartCombatRoundCast(uint32_t)
constexpr uintptr_t CNWSCombatRound__StartCombatRoundCast = 0x080E180C;
// public void CNWSCombatRound::UpdateAttackTargetForAllActions(uint32_t)
constexpr uintptr_t CNWSCombatRound__UpdateAttackTargetForAllActions = 0x080E54C0;

// CNWSCombatRoundAction::CNWSCombatRoundAction(void)
constexpr uintptr_t CNWSCombatRoundAction__CNWSCombatRoundActionCtor = 0x080E4A60;
// CNWSCombatRoundAction::~CNWSCombatRoundAction(void)
constexpr uintptr_t CNWSCombatRoundAction__CNWSCombatRoundActionDtor = 0x080E4AAC;
// public int32_t CNWSCombatRoundAction::LoadData(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSCombatRoundAction__LoadData = 0x080E00A8;
// public int32_t CNWSCombatRoundAction::SaveData(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSCombatRoundAction__SaveData = 0x080E4AC8;

// public CNWSCreature::CNWSCreature(uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__CNWSCreatureCtor__1 = 0x08113D80;
// public CNWSCreature::~CNWSCreature(void)
constexpr uintptr_t CNWSCreature__CNWSCreatureDtor = 0x08114E24;
// public int32_t CNWSCreature::AcquireItem(CNWSItem**, uint32_t, uint32_t, unsigned char, unsigned char, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__AcquireItem = 0x080FFE20;
// public void CNWSCreature::ActionManager(uint32_t)
constexpr uintptr_t CNWSCreature__ActionManager = 0x0813BB24;
// public void CNWSCreature::ActivityManager(uint32_t)
constexpr uintptr_t CNWSCreature__ActivityManager = 0x0813BBA0;
// public int32_t CNWSCreature::AddAnimalEmpathyAction(uint32_t)
constexpr uintptr_t CNWSCreature__AddAnimalEmpathyAction = 0x0812CA18;
// public int32_t CNWSCreature::AddAppearActions(int32_t)
constexpr uintptr_t CNWSCreature__AddAppearActions = 0x0813C6A4;
// void CNWSCreature::AddAreaOfEffect(uint32_t)
constexpr uintptr_t CNWSCreature__AddAreaOfEffect = 0x0813DE74;
// public void CNWSCreature::AddAssociate(uint32_t, uint16_t)
constexpr uintptr_t CNWSCreature__AddAssociate = 0x0810C620;
// public int32_t CNWSCreature::AddAttackActions(uint32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__AddAttackActions = 0x081188D4;
// public int32_t CNWSCreature::AddCastSpellActions(uint32_t, int32_t, int32_t, int32_t, int32_t, Vector, uint32_t, int32_t, int32_t, int32_t, unsigned char, int32_t, int32_t, int32_t, unsigned char)
constexpr uintptr_t CNWSCreature__AddCastSpellActions = 0x0811610C;
// public int32_t CNWSCreature::AddCounterSpellActions(uint32_t)
constexpr uintptr_t CNWSCreature__AddCounterSpellActions = 0x0812CBF4;
// public int32_t CNWSCreature::AddDisappearActions(int32_t, int32_t)
constexpr uintptr_t CNWSCreature__AddDisappearActions = 0x0812CDCC;
// public int32_t CNWSCreature::AddDriveAction(uint16_t, const Vector&, int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__AddDriveAction = 0x0813BCF4;
// public int32_t CNWSCreature::AddDropItemActions(uint32_t, Vector, int32_t)
constexpr uintptr_t CNWSCreature__AddDropItemActions = 0x081183EC;
// public int32_t CNWSCreature::AddEquipItemActions(CNWSItem*, uint32_t, int32_t, int32_t, uint32_t)
constexpr uintptr_t CNWSCreature__AddEquipItemActions = 0x08116CEC;
// public void CNWSCreature::AddGold(int32_t, int32_t)
constexpr uintptr_t CNWSCreature__AddGold = 0x081317A0;
// public int32_t CNWSCreature::AddHealActions(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSCreature__AddHealActions = 0x0811850C;
// public int32_t CNWSCreature::AddItemCastSpellActions(uint32_t, int32_t, int32_t, Vector, uint32_t, int32_t)
constexpr uintptr_t CNWSCreature__AddItemCastSpellActions = 0x081159BC;
// public int32_t CNWSCreature::AddMoveToPointAction(uint16_t, Vector, uint32_t, uint32_t, int32_t, float, float, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__AddMoveToPointAction = 0x0813BE0C;
// public int32_t CNWSCreature::AddMoveToPointActionToFront(uint16_t, Vector, uint32_t, uint32_t, int32_t, float, float, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__AddMoveToPointActionToFront = 0x0813BC08;
// public int32_t CNWSCreature::AddPathfindingWaitActionToFront(uint16_t)
constexpr uintptr_t CNWSCreature__AddPathfindingWaitActionToFront = 0x0813BD88;
// public int32_t CNWSCreature::AddPickPocketActions(uint32_t)
constexpr uintptr_t CNWSCreature__AddPickPocketActions = 0x08118224;
// public int32_t CNWSCreature::AddPickUpItemActions(uint32_t, uint32_t, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreature__AddPickUpItemActions = 0x08118320;
// public int32_t CNWSCreature::AddRepositoryMoveActions(CNWSItem*, uint32_t, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreature__AddRepositoryMoveActions = 0x0813BEF8;
// public int32_t CNWSCreature::AddSitActions(uint32_t)
constexpr uintptr_t CNWSCreature__AddSitActions = 0x081185C8;
// public int32_t CNWSCreature::AddTauntActions(uint32_t)
constexpr uintptr_t CNWSCreature__AddTauntActions = 0x0812CB08;
// public void CNWSCreature::AddToArea(CNWSArea*, float, float, float, int32_t)
constexpr uintptr_t CNWSCreature__AddToArea = 0x08118D20;
// protected void CNWSCreature::AddToAssociateList(uint32_t)
constexpr uintptr_t CNWSCreature__AddToAssociateList = 0x08113254;
// public void CNWSCreature::AddToInvitationsIgnored(uint32_t)
constexpr uintptr_t CNWSCreature__AddToInvitationsIgnored = 0x081136BC;
// public void CNWSCreature::AddToInvitationsOffered(uint32_t)
constexpr uintptr_t CNWSCreature__AddToInvitationsOffered = 0x081135AC;
// public void CNWSCreature::AddToPersonalReputationList(uint32_t, int32_t, int32_t, float)
constexpr uintptr_t CNWSCreature__AddToPersonalReputationList = 0x0810897C;
// public void CNWSCreature::AddToPVPList(uint32_t)
constexpr uintptr_t CNWSCreature__AddToPVPList = 0x0811387C;
// public void CNWSCreature::AddToVisibleList(uint32_t, int32_t, int32_t, unsigned char, int32_t)
constexpr uintptr_t CNWSCreature__AddToVisibleList = 0x08108824;
// public int32_t CNWSCreature::AddTrapActions(uint32_t, unsigned char, uint32_t, Vector, uint32_t)
constexpr uintptr_t CNWSCreature__AddTrapActions = 0x081186C8;
// public int32_t CNWSCreature::AddUnequipActions(CNWSItem*, uint32_t, unsigned char, unsigned char, int32_t, int32_t, uint32_t)
constexpr uintptr_t CNWSCreature__AddUnequipActions = 0x081178E4;
// public int32_t CNWSCreature::AddUseTalentAtLocationActions(int32_t, int32_t, Vector, unsigned char, uint32_t, int32_t, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreature__AddUseTalentAtLocationActions = 0x0812D0E8;
// public int32_t CNWSCreature::AddUseTalentOnObjectActions(int32_t, int32_t, uint32_t, unsigned char, uint32_t, int32_t, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreature__AddUseTalentOnObjectActions = 0x0812CE9C;
// public void CNWSCreature::AdjustReputation(int32_t, int32_t)
constexpr uintptr_t CNWSCreature__AdjustReputation = 0x081083A4;
// public uint32_t CNWSCreature::AIActionAnimalEmpathy(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionAnimalEmpathy = 0x08108AFC;
// public uint32_t CNWSCreature::AIActionAppear(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionAppear = 0x0810A23C;
// public uint32_t CNWSCreature::AIActionAreaWait(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionAreaWait = 0x08112F04;
// public uint32_t CNWSCreature::AIActionAttackObject(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionAttackObject = 0x080E5928;
// public uint32_t CNWSCreature::AIActionBarter(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionBarter = 0x080F93D8;
// public uint32_t CNWSCreature::AIActionCastSpell(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionCastSpell = 0x080FABA8;
// public uint32_t CNWSCreature::AIActionChangeFacingObject(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionChangeFacingObject = 0x080FD69C;
// public uint32_t CNWSCreature::AIActionChangeFacingPoint(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionChangeFacingPoint = 0x080FD83C;
// public uint32_t CNWSCreature::AIActionCheckForceFollowObject(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionCheckForceFollowObject = 0x08112FD4;
// public uint32_t CNWSCreature::AIActionCheckInterAreaPathfinding(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionCheckInterAreaPathfinding = 0x080FDEAC;
// public uint32_t CNWSCreature::AIActionCheckMoveAwayFromLocation(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionCheckMoveAwayFromLocation = 0x080FDC8C;
// public uint32_t CNWSCreature::AIActionCheckMoveAwayFromObject(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionCheckMoveAwayFromObject = 0x080FD924;
// public uint32_t CNWSCreature::AIActionCheckMoveToObject(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionCheckMoveToObject = 0x080FE128;
// public uint32_t CNWSCreature::AIActionCheckMoveToObjectRadius(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionCheckMoveToObjectRadius = 0x080FE368;
// public uint32_t CNWSCreature::AIActionCheckMoveToPoint(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionCheckMoveToPoint = 0x080FE884;
// public uint32_t CNWSCreature::AIActionCheckMoveToPointRadius(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionCheckMoveToPointRadius = 0x080FEAC0;
// public uint32_t CNWSCreature::AIActionCounterSpell(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionCounterSpell = 0x0810C250;
// public uint32_t CNWSCreature::AIActionDisappear(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionDisappear = 0x0810A318;
// public uint32_t CNWSCreature::AIActionDisarmTrap(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionDisarmTrap = 0x080F7070;
// public uint32_t CNWSCreature::AIActionDrive(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionDrive = 0x081052C0;
// public uint32_t CNWSCreature::AIActionDropItem(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionDropItem = 0x0810735C;
// public uint32_t CNWSCreature::AIActionEncounterCreatureDestroySelf(void)
constexpr uintptr_t CNWSCreature__AIActionEncounterCreatureDestroySelf = 0x080FECB4;
// public uint32_t CNWSCreature::AIActionEquipItem(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionEquipItem = 0x081001B8;
// public uint32_t CNWSCreature::AIActionExamine(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionExamine = 0x080F9648;
// public uint32_t CNWSCreature::AIActionExamineTrap(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionExamineTrap = 0x080F7B78;
// public uint32_t CNWSCreature::AIActionFlagTrap(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionFlagTrap = 0x080F5D3C;
// public uint32_t CNWSCreature::AIActionForceFollowObject(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionForceFollowObject = 0x081069C8;
// public uint32_t CNWSCreature::AIActionHeal(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionHeal = 0x0810B3F8;
// public uint32_t CNWSCreature::AIActionItemCastSpell(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionItemCastSpell = 0x080F9C88;
// public uint32_t CNWSCreature::AIActionJumpToObject(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionJumpToObject = 0x0810031C;
// public uint32_t CNWSCreature::AIActionJumpToPoint(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionJumpToPoint = 0x08100BA4;
// public uint32_t CNWSCreature::AIActionMoveToPoint(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionMoveToPoint = 0x08101E4C;
// public uint32_t CNWSCreature::AIActionOrientCamera(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionOrientCamera = 0x0811309C;
// public uint32_t CNWSCreature::AIActionPickPocket(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionPickPocket = 0x0810A3F4;
// public uint32_t CNWSCreature::AIActionPickUpItem(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionPickUpItem = 0x08106BB0;
// public uint32_t CNWSCreature::AIActionRandomWalk(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionRandomWalk = 0x08101A10;
// public uint32_t CNWSCreature::AIActionRecoverTrap(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionRecoverTrap = 0x080F63A8;
// public uint32_t CNWSCreature::AIActionRepositoryMove(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionRepositoryMove = 0x08101194;
// public uint32_t CNWSCreature::AIActionRest(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionRest = 0x08109114;
// public uint32_t CNWSCreature::AIActionSetTrap(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionSetTrap = 0x080F8174;
// public uint32_t CNWSCreature::AIActionSit(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionSit = 0x0810BDDC;
// public uint32_t CNWSCreature::AIActionTaunt(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionTaunt = 0x08109BEC;
// public uint32_t CNWSCreature::AIActionUnequipItem(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionUnequipItem = 0x08107FB4;
// public uint32_t CNWSCreature::AIActionWaitForEndOfRound(CNWSObjectActionNode*)
constexpr uintptr_t CNWSCreature__AIActionWaitForEndOfRound = 0x08113118;
// public void CNWSCreature::AIUpdate(void)
constexpr uintptr_t CNWSCreature__AIUpdate = 0x08119108;
// public void CNWSCreature::ApplyDeathExperience(void)
constexpr uintptr_t CNWSCreature__ApplyDeathExperience = 0x0812385C;
// public int32_t CNWSCreature::ApplyDiseasePayload(CGameEffect*, uint32_t, uint32_t)
constexpr uintptr_t CNWSCreature__ApplyDiseasePayload = 0x08138790;
// void CNWSCreature::ApplyOnHitAbilityDamage(CNWSObject*, CNWItemProperty*)
constexpr uintptr_t CNWSCreature__ApplyOnHitAbilityDamage = 0x080F4C4C;
// void CNWSCreature::ApplyOnHitBlindness(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitBlindness = 0x080F19D4;
// protected void CNWSCreature::ApplyOnHitCastSpell(CNWSObject*, CNWItemProperty*, CNWSItem*)
constexpr uintptr_t CNWSCreature__ApplyOnHitCastSpell = 0x080ECCF8;
// void CNWSCreature::ApplyOnHitConfusion(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitConfusion = 0x080F1C60;
// void CNWSCreature::ApplyOnHitDaze(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitDaze = 0x080F1F58;
// void CNWSCreature::ApplyOnHitDeafness(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitDeafness = 0x080F2250;
// protected void CNWSCreature::ApplyOnHitDeathAttack(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitDeathAttack = 0x080F34D8;
// void CNWSCreature::ApplyOnHitDisease(CNWSObject*, CNWItemProperty*)
constexpr uintptr_t CNWSCreature__ApplyOnHitDisease = 0x080F4E88;
// protected void CNWSCreature::ApplyOnHitDispelMagic(CNWSObject*, uint32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitDispelMagic__0 = 0x080F447C;
// protected void CNWSCreature::ApplyOnHitDispelMagic(CNWSObject*, CNWItemProperty*)
constexpr uintptr_t CNWSCreature__ApplyOnHitDispelMagic__1 = 0x080F4DC4;
// void CNWSCreature::ApplyOnHitDominate(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitDominate = 0x080F24D0;
// void CNWSCreature::ApplyOnHitDoom(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitDoom = 0x080F27C8;
// void CNWSCreature::ApplyOnHitFear(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitFear = 0x080F2DF0;
// protected void CNWSCreature::ApplyOnHitGreaterDispel(CNWSObject*, uint32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitGreaterDispel = 0x080F45F8;
// void CNWSCreature::ApplyOnHitHold(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitHold = 0x080F30D8;
// protected void CNWSCreature::ApplyOnHitKnock(CNWSObject*, uint32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitKnock = 0x080F4774;
// protected void CNWSCreature::ApplyOnHitLesserDispel(CNWSObject*, uint32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitLesserDispel = 0x080F4954;
// void CNWSCreature::ApplyOnHitLevelDrain(CNWSObject*, CNWItemProperty*)
constexpr uintptr_t CNWSCreature__ApplyOnHitLevelDrain = 0x080F4F48;
// protected void CNWSCreature::ApplyOnHitMordysDisjunction(CNWSObject*, uint32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitMordysDisjunction = 0x080F4AD0;
// void CNWSCreature::ApplyOnHitPoison(CNWSObject*, CNWItemProperty*)
constexpr uintptr_t CNWSCreature__ApplyOnHitPoison = 0x080F50D0;
// void CNWSCreature::ApplyOnHitSilence(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitSilence = 0x080F38E4;
// protected void CNWSCreature::ApplyOnHitSlayAlignment(CNWSObject*, CNWItemProperty*)
constexpr uintptr_t CNWSCreature__ApplyOnHitSlayAlignment = 0x080F525C;
// protected void CNWSCreature::ApplyOnHitSlayAlignmentGroup(CNWSObject*, CNWItemProperty*)
constexpr uintptr_t CNWSCreature__ApplyOnHitSlayAlignmentGroup = 0x080F54A0;
// protected void CNWSCreature::ApplyOnHitSlayRacialGroup(CNWSObject*, CNWItemProperty*)
constexpr uintptr_t CNWSCreature__ApplyOnHitSlayRacialGroup = 0x080F564C;
// void CNWSCreature::ApplyOnHitSleep(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitSleep = 0x080F3B64;
// void CNWSCreature::ApplyOnHitSlow(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitSlow = 0x080F3F04;
// void CNWSCreature::ApplyOnHitStun(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ApplyOnHitStun = 0x080F4184;
// void CNWSCreature::ApplyOnHitVampiricRegeneration(CNWSObject*, CNWItemProperty*)
constexpr uintptr_t CNWSCreature__ApplyOnHitVampiricRegeneration = 0x080F5988;
// void CNWSCreature::ApplyOnHitVorpal(CNWSObject*, CNWItemProperty*)
constexpr uintptr_t CNWSCreature__ApplyOnHitVorpal = 0x080F58C8;
// void CNWSCreature::ApplyOnHitWounding(CNWSObject*, CNWItemProperty*)
constexpr uintptr_t CNWSCreature__ApplyOnHitWounding = 0x080F57DC;
// public int32_t CNWSCreature::ApplyPoisonPayload(CGameEffect*, uint32_t, uint32_t)
constexpr uintptr_t CNWSCreature__ApplyPoisonPayload = 0x08138F3C;
// public int32_t CNWSCreature::ApplyWounding(CGameEffect*)
constexpr uintptr_t CNWSCreature__ApplyWounding = 0x0813B6B4;
// void CNWSCreature::AsNWSCreature(void)
constexpr uintptr_t CNWSCreature__AsNWSCreature = 0x0813D6AC;
// public void CNWSCreature::AutoCloseGUIPanels(int32_t)
constexpr uintptr_t CNWSCreature__AutoCloseGUIPanels = 0x08135404;
// public void CNWSCreature::BringAssociatesToNewFaction(int32_t)
constexpr uintptr_t CNWSCreature__BringAssociatesToNewFaction = 0x08113778;
// void CNWSCreature::BroadcastAssociateCommand(int32_t)
constexpr uintptr_t CNWSCreature__BroadcastAssociateCommand = 0x0813C59C;
// public void CNWSCreature::BroadcastAttackDataToParty(CNWCCMessageData*, CNWSCombatAttackData*, CNWSCreature*)
constexpr uintptr_t CNWSCreature__BroadcastAttackDataToParty = 0x08126B58;
// public void CNWSCreature::BroadcastAttackOfOpportunity(uint32_t, int32_t)
constexpr uintptr_t CNWSCreature__BroadcastAttackOfOpportunity = 0x08128EA8;
// public void CNWSCreature::BroadcastBattleCry(void)
constexpr uintptr_t CNWSCreature__BroadcastBattleCry = 0x08128864;
// public void CNWSCreature::BroadcastCombatStateToParty(void)
constexpr uintptr_t CNWSCreature__BroadcastCombatStateToParty = 0x08128D34;
// public void CNWSCreature::BroadcastDamageDataToParty(CNWCCMessageData*, CNWSCreature*)
constexpr uintptr_t CNWSCreature__BroadcastDamageDataToParty = 0x08126DD4;
// public void CNWSCreature::BroadcastDeathDataToParty(CNWCCMessageData*, CNWSCreature*)
constexpr uintptr_t CNWSCreature__BroadcastDeathDataToParty = 0x08127014;
// public void CNWSCreature::BroadcastFloatyData(CNWCCMessageData*)
constexpr uintptr_t CNWSCreature__BroadcastFloatyData = 0x081272DC;
// public void CNWSCreature::BroadcastSavingThrowData(CNWCCMessageData*)
constexpr uintptr_t CNWSCreature__BroadcastSavingThrowData = 0x08127584;
// public void CNWSCreature::BroadcastSkillData(CNWCCMessageData*)
constexpr uintptr_t CNWSCreature__BroadcastSkillData = 0x0812742C;
// public void CNWSCreature::BroadcastSpellCast(uint32_t, unsigned char, uint16_t)
constexpr uintptr_t CNWSCreature__BroadcastSpellCast = 0x08127CEC;
// public void CNWSCreature::BroadcastVoiceChat(unsigned char)
constexpr uintptr_t CNWSCreature__BroadcastVoiceChat = 0x081289CC;
// public void CNWSCreature::BroadcastWhirlwindAttack(int32_t)
constexpr uintptr_t CNWSCreature__BroadcastWhirlwindAttack = 0x0813B55C;
// protected int32_t CNWSCreature::BumpFriends(CNWSCreature*, const Vector&, const Vector&)
constexpr uintptr_t CNWSCreature__BumpFriends = 0x0813836C;
// public unsigned char CNWSCreature::CalculateDamagePower(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__CalculateDamagePower = 0x0812EB24;
// public float CNWSCreature::CalculateDeathExperience(int32_t, int32_t)
constexpr uintptr_t CNWSCreature__CalculateDeathExperience = 0x08123E0C;
// protected int32_t CNWSCreature::CalculateMaxElementalDamage(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__CalculateMaxElementalDamage = 0x080F5B14;
// public int32_t CNWSCreature::CalculatePersonalReputationAdjustment(uint32_t)
constexpr uintptr_t CNWSCreature__CalculatePersonalReputationAdjustment = 0x081121EC;
// void CNWSCreature::CalculateProjectileTimeToTarget(Vector, int32_t)
constexpr uintptr_t CNWSCreature__CalculateProjectileTimeToTarget = 0x080F5B98;
// public int32_t CNWSCreature::CalculateSpellSaveDC(int32_t)
constexpr uintptr_t CNWSCreature__CalculateSpellSaveDC = 0x0813ADC8;
// public int32_t CNWSCreature::CancelAction(uint16_t, uint16_t)
constexpr uintptr_t CNWSCreature__CancelAction = 0x08124FB4;
// public void CNWSCreature::CancelGoldTransfer(uint32_t)
constexpr uintptr_t CNWSCreature__CancelGoldTransfer = 0x0813C7D8;
// public void CNWSCreature::CancelRest(uint16_t)
constexpr uintptr_t CNWSCreature__CancelRest = 0x0812D888;
// public unsigned char CNWSCreature::CanEquipItem(CNWSItem*, uint32_t*, int32_t, int32_t, int32_t, CNWSPlayer*)
constexpr uintptr_t CNWSCreature__CanEquipItem = 0x080FF978;
// protected unsigned char CNWSCreature::CanEquipMiscellaneous(CNWSItem*, uint32_t*, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__CanEquipMiscellaneous = 0x080FF8C0;
// protected unsigned char CNWSCreature::CanEquipShield(CNWSItem*, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__CanEquipShield = 0x080FF798;
// protected unsigned char CNWSCreature::CanEquipWeapon(CNWSItem*, uint32_t*, int32_t, int32_t, CNWSPlayer*)
constexpr uintptr_t CNWSCreature__CanEquipWeapon = 0x080FED6C;
// public unsigned char CNWSCreature::CanUnEquipWeapon(CNWSItem*)
constexpr uintptr_t CNWSCreature__CanUnEquipWeapon = 0x08107E78;
// public int32_t CNWSCreature::CanUseItem(CNWSItem*, int32_t)
constexpr uintptr_t CNWSCreature__CanUseItem = 0x08110DF8;
// public void CNWSCreature::CheckInventoryForPlotItems(void)
constexpr uintptr_t CNWSCreature__CheckInventoryForPlotItems = 0x081399C4;
// protected int32_t CNWSCreature::CheckItemAlignmentRestrictions(CNWSItem*)
constexpr uintptr_t CNWSCreature__CheckItemAlignmentRestrictions = 0x08111374;
// protected int32_t CNWSCreature::CheckItemClassRestrictions(CNWSItem*)
constexpr uintptr_t CNWSCreature__CheckItemClassRestrictions = 0x08111294;
// protected int32_t CNWSCreature::CheckItemRaceRestrictions(CNWSItem*)
constexpr uintptr_t CNWSCreature__CheckItemRaceRestrictions = 0x08111678;
// protected void CNWSCreature::CheckMasterIsValid(uint32_t, uint32_t)
constexpr uintptr_t CNWSCreature__CheckMasterIsValid = 0x08130120;
// protected int32_t CNWSCreature::CheckProficiencies(CNWSItem*, uint32_t)
constexpr uintptr_t CNWSCreature__CheckProficiencies = 0x080FFCD4;
// protected int32_t CNWSCreature::CheckUseMagicDeviceSkill(CNWSItem*, int32_t)
constexpr uintptr_t CNWSCreature__CheckUseMagicDeviceSkill = 0x0811172C;
// void CNWSCreature::CheckVisibleList(uint32_t)
constexpr uintptr_t CNWSCreature__CheckVisibleList = 0x081131A8;
// public void CNWSCreature::CleanInvitationLists(int32_t)
constexpr uintptr_t CNWSCreature__CleanInvitationLists = 0x08111C24;
// public void CNWSCreature::CleanOutPersonalReputationList(void)
constexpr uintptr_t CNWSCreature__CleanOutPersonalReputationList = 0x08112AB8;
// protected int32_t CNWSCreature::ClearAction(CNWSObjectActionNode*, int32_t)
constexpr uintptr_t CNWSCreature__ClearAction = 0x0811BBB0;
// public void CNWSCreature::ClearActivities(int32_t)
constexpr uintptr_t CNWSCreature__ClearActivities = 0x08115528;
// void CNWSCreature::ClearAutoMapData(void)
constexpr uintptr_t CNWSCreature__ClearAutoMapData = 0x0813D2D8;
// public void CNWSCreature::ClearHostileActionsVersus(CNWSCreature*)
constexpr uintptr_t CNWSCreature__ClearHostileActionsVersus = 0x08137F50;
// public void CNWSCreature::ClearPersonalReputation(uint32_t)
constexpr uintptr_t CNWSCreature__ClearPersonalReputation = 0x08108A6C;
// public void CNWSCreature::ClearVisibleList(void)
constexpr uintptr_t CNWSCreature__ClearVisibleList = 0x081088A0;
// public void CNWSCreature::ComputeAIState(void)
constexpr uintptr_t CNWSCreature__ComputeAIState = 0x0813C184;
// protected void CNWSCreature::ComputeAIStateOnAction(int32_t, uint32_t)
constexpr uintptr_t CNWSCreature__ComputeAIStateOnAction = 0x0811D974;
// public void CNWSCreature::ComputeArmourClass(CNWSItem*, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__ComputeArmourClass = 0x081298B0;
// public void CNWSCreature::ComputeModifiedMovementRate(void)
constexpr uintptr_t CNWSCreature__ComputeModifiedMovementRate = 0x081391AC;
// public float CNWSCreature::ComputeSpellRange(CExoString, uint32_t)
constexpr uintptr_t CNWSCreature__ComputeSpellRange = 0x08115864;
// void CNWSCreature::ComputeTotalEquippedWeight(void)
constexpr uintptr_t CNWSCreature__ComputeTotalEquippedWeight = 0x0813C054;
// protected float CNWSCreature::ComputeTotalWalkDistance(void)
constexpr uintptr_t CNWSCreature__ComputeTotalWalkDistance = 0x08103F60;
// public int32_t CNWSCreature::ComputeTotalWeightCarried(void)
constexpr uintptr_t CNWSCreature__ComputeTotalWeightCarried = 0x0813C030;
// public void CNWSCreature::ConvertModeToggleQuickButton(CNWSQuickbarButton*)
constexpr uintptr_t CNWSCreature__ConvertModeToggleQuickButton = 0x0813C2DC;
// public void CNWSCreature::CopyQuickButtonsFromDM(CNWSPlayer*)
constexpr uintptr_t CNWSCreature__CopyQuickButtonsFromDM = 0x08123698;
// public void CNWSCreature::CreateDefaultQuickButtons(void)
constexpr uintptr_t CNWSCreature__CreateDefaultQuickButtons = 0x08122494;
// public void CNWSCreature::CreateDefaultQuickButtons_AddFeat(unsigned char&, uint16_t, int32_t)
constexpr uintptr_t CNWSCreature__CreateDefaultQuickButtons_AddFeat = 0x08122F80;
// void CNWSCreature::CreateDefaultQuickButtons_CheckItem(CNWSItem*, uint32_t&, uint32_t&, uint32_t&, uint32_t&)
constexpr uintptr_t CNWSCreature__CreateDefaultQuickButtons_CheckItem = 0x0813C388;
// void CNWSCreature::CreateDefaultQuickButtonsDM(void)
constexpr uintptr_t CNWSCreature__CreateDefaultQuickButtonsDM = 0x0813C3F8;
// public void CNWSCreature::CutWaypointPath(void)
constexpr uintptr_t CNWSCreature__CutWaypointPath = 0x0813CF74;
// public int32_t CNWSCreature::DecrementSpellReadyCount(uint32_t, unsigned char, unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreature__DecrementSpellReadyCount = 0x0813CE5C;
// public float CNWSCreature::DesiredAttackRange(uint32_t, int32_t)
constexpr uintptr_t CNWSCreature__DesiredAttackRange = 0x0811D858;
// public void CNWSCreature::DestroyEquippedItems(void)
constexpr uintptr_t CNWSCreature__DestroyEquippedItems = 0x0813BFCC;
// public void CNWSCreature::DisplayFloatyDataToSelf(uint32_t)
constexpr uintptr_t CNWSCreature__DisplayFloatyDataToSelf = 0x0813A60C;
// public void CNWSCreature::DMClearScripts(int32_t)
constexpr uintptr_t CNWSCreature__DMClearScripts = 0x0810E920;
// public void CNWSCreature::DMResetClearedScripts(int32_t)
constexpr uintptr_t CNWSCreature__DMResetClearedScripts = 0x0810F198;
// public void CNWSCreature::DoCombatStep(unsigned char, int32_t, uint32_t)
constexpr uintptr_t CNWSCreature__DoCombatStep = 0x080F0008;
// public void CNWSCreature::DoDamage(int32_t)
constexpr uintptr_t CNWSCreature__DoDamage = 0x0812E998;
// protected int32_t CNWSCreature::DoListenDetection(CNWSCreature*, int32_t)
constexpr uintptr_t CNWSCreature__DoListenDetection = 0x08125DDC;
// public void CNWSCreature::DoPerceptionUpdateOnCreature(CNWSCreature*, int32_t)
constexpr uintptr_t CNWSCreature__DoPerceptionUpdateOnCreature = 0x08125164;
// protected int32_t CNWSCreature::DoSpotDetection(CNWSCreature*, int32_t)
constexpr uintptr_t CNWSCreature__DoSpotDetection = 0x081265C4;
// protected int32_t CNWSCreature::DoStealthDetection(CNWSCreature*, int32_t, int32_t*, int32_t*, int32_t)
constexpr uintptr_t CNWSCreature__DoStealthDetection = 0x08125BFC;
// public uint32_t CNWSCreature::DriveUpdateLocation(int32_t)
constexpr uintptr_t CNWSCreature__DriveUpdateLocation = 0x08106580;
// public void CNWSCreature::DumpToLog(void)
constexpr uintptr_t CNWSCreature__DumpToLog = 0x0813A6F0;
// public int32_t CNWSCreature::EquipItem(uint32_t, CNWSItem*, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__EquipItem = 0x0811B64C;
// public int32_t CNWSCreature::EquipMostDamagingAmmunition(uint32_t, CNWSItem*)
constexpr uintptr_t CNWSCreature__EquipMostDamagingAmmunition = 0x08130E14;
// public int32_t CNWSCreature::EquipMostDamagingMeleeWeapon(uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__EquipMostDamagingMeleeWeapon = 0x08130418;
// public int32_t CNWSCreature::EquipMostDamagingRangedWeapon(uint32_t)
constexpr uintptr_t CNWSCreature__EquipMostDamagingRangedWeapon = 0x08130A1C;
// public int32_t CNWSCreature::EquipMostEffectiveArmor(void)
constexpr uintptr_t CNWSCreature__EquipMostEffectiveArmor = 0x081312DC;
// public int32_t CNWSCreature::EvaluateLock(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__EvaluateLock = 0x0811AF4C;
// public void CNWSCreature::EventHandler(uint32_t, uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CNWSCreature__EventHandler = 0x0811C160;
// public void CNWSCreature::ExternalResolveAttack(uint32_t, int32_t)
constexpr uintptr_t CNWSCreature__ExternalResolveAttack = 0x080F5C50;
// public void CNWSCreature::FailedOpenInformAssociates(void)
constexpr uintptr_t CNWSCreature__FailedOpenInformAssociates = 0x08113820;
// public int32_t CNWSCreature::ForceMoveToPoint(CNWSForcedAction*)
constexpr uintptr_t CNWSCreature__ForceMoveToPoint = 0x081314C8;
// void CNWSCreature::GetActionQueueList(void)
constexpr uintptr_t CNWSCreature__GetActionQueueList = 0x0813EB34;
// public int32_t CNWSCreature::GetActivity(int32_t)
constexpr uintptr_t CNWSCreature__GetActivity = 0x0813BBF0;
// void CNWSCreature::GetActivityLocked(uint32_t)
constexpr uintptr_t CNWSCreature__GetActivityLocked = 0x0813E994;
// void CNWSCreature::GetAIState(void)
constexpr uintptr_t CNWSCreature__GetAIState = 0x0813D884;
// void CNWSCreature::GetAIStateActee(void)
constexpr uintptr_t CNWSCreature__GetAIStateActee = 0x0813D8B4;
// void CNWSCreature::GetAIStateAction(void)
constexpr uintptr_t CNWSCreature__GetAIStateAction = 0x0813D894;
// void CNWSCreature::GetAIStateActivities(void)
constexpr uintptr_t CNWSCreature__GetAIStateActivities = 0x0813D8A4;
// void CNWSCreature::GetAlreadyRemovedFromEncounter(void)
constexpr uintptr_t CNWSCreature__GetAlreadyRemovedFromEncounter = 0x0813EC7C;
// void CNWSCreature::GetAmbientAnimationState(void)
constexpr uintptr_t CNWSCreature__GetAmbientAnimationState = 0x0813E34C;
// protected int32_t CNWSCreature::GetAmmunitionAvailable(int32_t)
constexpr uintptr_t CNWSCreature__GetAmmunitionAvailable = 0x080E78A4;
// void CNWSCreature::GetAnimalCompanionCreatureType(void)
constexpr uintptr_t CNWSCreature__GetAnimalCompanionCreatureType = 0x0813E4EC;
// void CNWSCreature::GetAnimalCompanionId(void)
constexpr uintptr_t CNWSCreature__GetAnimalCompanionId = 0x0813E500;
// public CExoString CNWSCreature::GetAnimalCompanionName(void)
constexpr uintptr_t CNWSCreature__GetAnimalCompanionName = 0x0813E4C0;
// void CNWSCreature::GetAppearance(void)
constexpr uintptr_t CNWSCreature__GetAppearance = 0x0813D6B4;
// void CNWSCreature::GetAreaOfEffectObjects(void)
constexpr uintptr_t CNWSCreature__GetAreaOfEffectObjects = 0x0813DF28;
// public int16_t CNWSCreature::GetArmorClass(void)
constexpr uintptr_t CNWSCreature__GetArmorClass = 0x0812E19C;
// public uint32_t CNWSCreature::GetAssociateId(uint16_t, int32_t)
constexpr uintptr_t CNWSCreature__GetAssociateId = 0x0810F9B4;
// void CNWSCreature::GetAssociateList(void)
constexpr uintptr_t CNWSCreature__GetAssociateList = 0x0813E3B8;
// void CNWSCreature::GetAssociateType(void)
constexpr uintptr_t CNWSCreature__GetAssociateType = 0x0813E3A8;
// public int32_t CNWSCreature::GetAttackResultHit(CNWSCombatAttackData*)
constexpr uintptr_t CNWSCreature__GetAttackResultHit = 0x080F5C24;
// void CNWSCreature::GetAttackTarget(void)
constexpr uintptr_t CNWSCreature__GetAttackTarget = 0x0813E9F0;
// void CNWSCreature::GetAttemptedAttackTarget(void)
constexpr uintptr_t CNWSCreature__GetAttemptedAttackTarget = 0x0813EA14;
// void CNWSCreature::GetAttemptedSpellTarget(void)
constexpr uintptr_t CNWSCreature__GetAttemptedSpellTarget = 0x0813EA38;
// void CNWSCreature::GetAutoMapAreaList(void)
constexpr uintptr_t CNWSCreature__GetAutoMapAreaList = 0x0813EBE4;
// void CNWSCreature::GetAutoMapTileData(void)
constexpr uintptr_t CNWSCreature__GetAutoMapTileData = 0x0813EBD4;
// public CNWSBarter* CNWSCreature::GetBarterInfo(int32_t)
constexpr uintptr_t CNWSCreature__GetBarterInfo = 0x0813C8FC;
// public int32_t CNWSCreature::GetBlind(void)
constexpr uintptr_t CNWSCreature__GetBlind = 0x0813D060;
// void CNWSCreature::GetBlindsightDistance(void)
constexpr uintptr_t CNWSCreature__GetBlindsightDistance = 0x0813ECF0;
// void CNWSCreature::GetBodyBag(void)
constexpr uintptr_t CNWSCreature__GetBodyBag = 0x0813EFD4;
// public uint16_t CNWSCreature::GetBodyBagAppearance(void)
constexpr uintptr_t CNWSCreature__GetBodyBagAppearance = 0x08139850;
// void CNWSCreature::GetBodyBagId(void)
constexpr uintptr_t CNWSCreature__GetBodyBagId = 0x0813EAEC;
// void CNWSCreature::GetBroadcastedAOOTo(void)
constexpr uintptr_t CNWSCreature__GetBroadcastedAOOTo = 0x0813E220;
// void CNWSCreature::GetCalculateNPCWeight(void)
constexpr uintptr_t CNWSCreature__GetCalculateNPCWeight = 0x0813ED48;
// protected int32_t CNWSCreature::GetCanSlayAlignment(CNWSObject*, CNWItemProperty*)
constexpr uintptr_t CNWSCreature__GetCanSlayAlignment = 0x080F53E0;
// void CNWSCreature::GetCombatMode(void)
constexpr uintptr_t CNWSCreature__GetCombatMode = 0x0813DA9C;
// void CNWSCreature::GetCombatRound(void)
constexpr uintptr_t CNWSCreature__GetCombatRound = 0x0813D6C4;
// void CNWSCreature::GetCombatState(void)
constexpr uintptr_t CNWSCreature__GetCombatState = 0x0813E200;
// void CNWSCreature::GetCombatStateTimer(void)
constexpr uintptr_t CNWSCreature__GetCombatStateTimer = 0x0813E210;
// void CNWSCreature::GetCounterSpellTarget(void)
constexpr uintptr_t CNWSCreature__GetCounterSpellTarget = 0x0813E328;
// public int32_t CNWSCreature::GetCreatureReputation(uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__GetCreatureReputation = 0x0810811C;
// void CNWSCreature::GetCreatureSize(void)
constexpr uintptr_t CNWSCreature__GetCreatureSize = 0x0813DB2C;
// void CNWSCreature::GetCreatureState(void)
constexpr uintptr_t CNWSCreature__GetCreatureState = 0x0813D8E8;
// void CNWSCreature::GetCurrentItemContainer(void)
constexpr uintptr_t CNWSCreature__GetCurrentItemContainer = 0x0813DC90;
// void CNWSCreature::GetCutsceneCameraMode(void)
constexpr uintptr_t CNWSCreature__GetCutsceneCameraMode = 0x0813E01C;
// void CNWSCreature::GetCutsceneCameraMovementRateFactor(void)
constexpr uintptr_t CNWSCreature__GetCutsceneCameraMovementRateFactor = 0x0813E064;
// void CNWSCreature::GetCutsceneGhost(void)
constexpr uintptr_t CNWSCreature__GetCutsceneGhost = 0x0813E040;
// public uint16_t CNWSCreature::GetDamageFlags(void)
constexpr uintptr_t CNWSCreature__GetDamageFlags = 0x0813C760;
// void CNWSCreature::GetDecayTime(void)
constexpr uintptr_t CNWSCreature__GetDecayTime = 0x0813EAC8;
// void CNWSCreature::GetDefensiveCastingMode(void)
constexpr uintptr_t CNWSCreature__GetDefensiveCastingMode = 0x0813DA8C;
// void CNWSCreature::GetDesiredAreaId(void)
constexpr uintptr_t CNWSCreature__GetDesiredAreaId = 0x0813DF48;
// void CNWSCreature::GetDesiredAreaLocation(void)
constexpr uintptr_t CNWSCreature__GetDesiredAreaLocation = 0x0813DF6C;
// void CNWSCreature::GetDesiredAreaUpdateComplete(void)
constexpr uintptr_t CNWSCreature__GetDesiredAreaUpdateComplete = 0x0813DFB0;
// void CNWSCreature::GetDesiredCombatMode(void)
constexpr uintptr_t CNWSCreature__GetDesiredCombatMode = 0x0813DAAC;
// public unsigned char CNWSCreature::GetDetectMode(void)
constexpr uintptr_t CNWSCreature__GetDetectMode = 0x0813C850;
// public int32_t CNWSCreature::GetDialogInterruptable(void)
constexpr uintptr_t CNWSCreature__GetDialogInterruptable = 0x0813DCFC;
// public CResRef CNWSCreature::GetDialogResref(void)
constexpr uintptr_t CNWSCreature__GetDialogResref = 0x0813DCB4;
// void CNWSCreature::GetDisarmable(void)
constexpr uintptr_t CNWSCreature__GetDisarmable = 0x0813DA10;
// public CExoString CNWSCreature::GetDisplayName(void)
constexpr uintptr_t CNWSCreature__GetDisplayName = 0x0813DD7C;
// void CNWSCreature::GetDMCharacter(void)
constexpr uintptr_t CNWSCreature__GetDMCharacter = 0x0813EC40;
// public uint32_t CNWSCreature::GetDominatedCreatureId(void)
constexpr uintptr_t CNWSCreature__GetDominatedCreatureId = 0x0811353C;
// void CNWSCreature::GetDriveMode(void)
constexpr uintptr_t CNWSCreature__GetDriveMode = 0x0813E194;
// void CNWSCreature::GetDriveModeMoveFactor(void)
constexpr uintptr_t CNWSCreature__GetDriveModeMoveFactor = 0x0813DA00;
// void CNWSCreature::GetDropItemAnimationPlayed(void)
constexpr uintptr_t CNWSCreature__GetDropItemAnimationPlayed = 0x0813D654;
// void CNWSCreature::GetEffectIcons(void)
constexpr uintptr_t CNWSCreature__GetEffectIcons = 0x0813DFF8;
// public uint32_t CNWSCreature::GetEffectSpellId(void)
constexpr uintptr_t CNWSCreature__GetEffectSpellId = 0x0813E808;
// void CNWSCreature::GetEncounterId(void)
constexpr uintptr_t CNWSCreature__GetEncounterId = 0x0813E79C;
// void CNWSCreature::GetEncumbranceState(void)
constexpr uintptr_t CNWSCreature__GetEncumbranceState = 0x0813E7C0;
// void CNWSCreature::GetEquipArrayIndex(void)
constexpr uintptr_t CNWSCreature__GetEquipArrayIndex = 0x0813DC24;
// void CNWSCreature::GetEquippedWeight(void)
constexpr uintptr_t CNWSCreature__GetEquippedWeight = 0x0813ED14;
// void CNWSCreature::GetExternalCombatModeEnabled(void)
constexpr uintptr_t CNWSCreature__GetExternalCombatModeEnabled = 0x0813F01C;
// void CNWSCreature::GetFacingAndAnimationDone(void)
constexpr uintptr_t CNWSCreature__GetFacingAndAnimationDone = 0x0813F00C;
// public CNWSFaction* CNWSCreature::GetFaction(void)
constexpr uintptr_t CNWSCreature__GetFaction = 0x08113178;
// void CNWSCreature::GetFactionId(void)
constexpr uintptr_t CNWSCreature__GetFactionId = 0x0813E668;
// void CNWSCreature::GetFamiliarCreatureType(void)
constexpr uintptr_t CNWSCreature__GetFamiliarCreatureType = 0x0813E624;
// void CNWSCreature::GetFamiliarId(void)
constexpr uintptr_t CNWSCreature__GetFamiliarId = 0x0813E638;
// public CExoString CNWSCreature::GetFamiliarName(void)
constexpr uintptr_t CNWSCreature__GetFamiliarName = 0x0813E5F8;
// public CExoArrayListTemplatedCGameEffectPtr CNWSCreature::GetFilteredEffectList(unsigned char)
constexpr uintptr_t CNWSCreature__GetFilteredEffectList = 0x08131D1C;
// public CExoLocString& CNWSCreature::GetFirstName(void)
constexpr uintptr_t CNWSCreature__GetFirstName = 0x0813DD3C;
// public int32_t CNWSCreature::GetFlanked(CNWSCreature*)
constexpr uintptr_t CNWSCreature__GetFlanked = 0x080F1928;
// public int32_t CNWSCreature::GetFlatFooted(void)
constexpr uintptr_t CNWSCreature__GetFlatFooted = 0x080F1830;
// void CNWSCreature::GetFootstepType(void)
constexpr uintptr_t CNWSCreature__GetFootstepType = 0x0813EF84;
// void CNWSCreature::GetForcedWalk(void)
constexpr uintptr_t CNWSCreature__GetForcedWalk = 0x0813E184;
// void CNWSCreature::GetFreeWill(void)
constexpr uintptr_t CNWSCreature__GetFreeWill = 0x0813E0E0;
// public unsigned char CNWSCreature::GetGender(void)
constexpr uintptr_t CNWSCreature__GetGender = 0x0813DD18;
// void CNWSCreature::GetGoingToBeAttackedBy(void)
constexpr uintptr_t CNWSCreature__GetGoingToBeAttackedBy = 0x0813EA80;
// void CNWSCreature::GetGold(void)
constexpr uintptr_t CNWSCreature__GetGold = 0x0813EC18;
// void CNWSCreature::GetHasArms(void)
constexpr uintptr_t CNWSCreature__GetHasArms = 0x0813DAE4;
// void CNWSCreature::GetHasInvisbilityEffectApplied(void)
constexpr uintptr_t CNWSCreature__GetHasInvisbilityEffectApplied = 0x0813BA18;
// void CNWSCreature::GetHasLegs(void)
constexpr uintptr_t CNWSCreature__GetHasLegs = 0x0813DB08;
// void CNWSCreature::GetHasted(void)
constexpr uintptr_t CNWSCreature__GetHasted = 0x0813E0AC;
// void CNWSCreature::GetHealAnimationPlayed(void)
constexpr uintptr_t CNWSCreature__GetHealAnimationPlayed = 0x0813D5C4;
// void CNWSCreature::GetHenchmanId(int32_t)
constexpr uintptr_t CNWSCreature__GetHenchmanId = 0x0813E3C8;
// void CNWSCreature::GetHenchmanIndex(uint32_t)
constexpr uintptr_t CNWSCreature__GetHenchmanIndex = 0x0813D3B0;
// void CNWSCreature::GetInitiativeExpired(void)
constexpr uintptr_t CNWSCreature__GetInitiativeExpired = 0x0813E1DC;
// void CNWSCreature::GetInitiativeRoll(void)
constexpr uintptr_t CNWSCreature__GetInitiativeRoll = 0x0813E1B8;
// void CNWSCreature::GetInSubAreasArray(void)
constexpr uintptr_t CNWSCreature__GetInSubAreasArray = 0x0813DF38;
// void CNWSCreature::GetInTransit(void)
constexpr uintptr_t CNWSCreature__GetInTransit = 0x0813ED7C;
// void CNWSCreature::GetInventory(void)
constexpr uintptr_t CNWSCreature__GetInventory = 0x0813D6D4;
// public int32_t CNWSCreature::GetInvisible(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__GetInvisible = 0x08136F94;
// void CNWSCreature::GetInvitedToParty(void)
constexpr uintptr_t CNWSCreature__GetInvitedToParty = 0x0813E0F4;
// void CNWSCreature::GetInvitedToPartyBy(void)
constexpr uintptr_t CNWSCreature__GetInvitedToPartyBy = 0x0813E104;
// public int32_t CNWSCreature::GetIsAbleToPossessFamiliar(void)
constexpr uintptr_t CNWSCreature__GetIsAbleToPossessFamiliar = 0x0813C7B4;
// public int32_t CNWSCreature::GetIsCreatureBumpable(CNWSCreature*)
constexpr uintptr_t CNWSCreature__GetIsCreatureBumpable = 0x0813811C;
// void CNWSCreature::GetIsDiseased(void)
constexpr uintptr_t CNWSCreature__GetIsDiseased = 0x0813D930;
// void CNWSCreature::GetIsExcited(void)
constexpr uintptr_t CNWSCreature__GetIsExcited = 0x0813E9D8;
// void CNWSCreature::GetIsImmortal(void)
constexpr uintptr_t CNWSCreature__GetIsImmortal = 0x0813EF18;
// public int32_t CNWSCreature::GetIsInInvitationsIgnored(uint32_t)
constexpr uintptr_t CNWSCreature__GetIsInInvitationsIgnored = 0x08111B3C;
// public int32_t CNWSCreature::GetIsInInvitationsOffered(uint32_t)
constexpr uintptr_t CNWSCreature__GetIsInInvitationsOffered = 0x08111A54;
// void CNWSCreature::GetIsInMelee(void)
constexpr uintptr_t CNWSCreature__GetIsInMelee = 0x080F5B58;
// public int32_t CNWSCreature::GetIsInUseRange(uint32_t, float, int32_t)
constexpr uintptr_t CNWSCreature__GetIsInUseRange = 0x08137730;
// void CNWSCreature::GetIsPoisoned(void)
constexpr uintptr_t CNWSCreature__GetIsPoisoned = 0x0813D90C;
// void CNWSCreature::GetIsPolymorphed(void)
constexpr uintptr_t CNWSCreature__GetIsPolymorphed = 0x0813EDA0;
// void CNWSCreature::GetIsPolymorphing(void)
constexpr uintptr_t CNWSCreature__GetIsPolymorphing = 0x0813EED0;
// void CNWSCreature::GetIsPolymorphLocked(void)
constexpr uintptr_t CNWSCreature__GetIsPolymorphLocked = 0x0813EEF4;
// public int32_t CNWSCreature::GetIsPossessedFamiliar(void)
constexpr uintptr_t CNWSCreature__GetIsPossessedFamiliar = 0x08113574;
// public int32_t CNWSCreature::GetIsWeaponEffective(uint32_t, int32_t)
constexpr uintptr_t CNWSCreature__GetIsWeaponEffective = 0x081311B0;
// void CNWSCreature::GetItemCastSpellBroadcastAOO(void)
constexpr uintptr_t CNWSCreature__GetItemCastSpellBroadcastAOO = 0x0813D818;
// void CNWSCreature::GetItemContainerArrayIndex(void)
constexpr uintptr_t CNWSCreature__GetItemContainerArrayIndex = 0x0813DC6C;
// public uint32_t CNWSCreature::GetItemCount(int32_t)
constexpr uintptr_t CNWSCreature__GetItemCount = 0x0812E0BC;
// void CNWSCreature::GetItemRepository(void)
constexpr uintptr_t CNWSCreature__GetItemRepository = 0x0813D6E4;
// public CNWSJournal* CNWSCreature::GetJournal(void)
constexpr uintptr_t CNWSCreature__GetJournal = 0x0813C89C;
// void CNWSCreature::GetJumpedRecently(void)
constexpr uintptr_t CNWSCreature__GetJumpedRecently = 0x0813DE2C;
// void CNWSCreature::GetLastAmmunitionWarning(void)
constexpr uintptr_t CNWSCreature__GetLastAmmunitionWarning = 0x0813D850;
// void CNWSCreature::GetLastAssociateCommand(void)
constexpr uintptr_t CNWSCreature__GetLastAssociateCommand = 0x0813E398;
// void CNWSCreature::GetLastBlockingDoor(void)
constexpr uintptr_t CNWSCreature__GetLastBlockingDoor = 0x0813EB10;
// void CNWSCreature::GetLastCounterDomainLevel(void)
constexpr uintptr_t CNWSCreature__GetLastCounterDomainLevel = 0x0813E2C0;
// void CNWSCreature::GetLastCounterMetaType(void)
constexpr uintptr_t CNWSCreature__GetLastCounterMetaType = 0x0813E29C;
// void CNWSCreature::GetLastCounterSpellClass(void)
constexpr uintptr_t CNWSCreature__GetLastCounterSpellClass = 0x0813E278;
// void CNWSCreature::GetLastCounterSpellID(void)
constexpr uintptr_t CNWSCreature__GetLastCounterSpellID = 0x0813E254;
// void CNWSCreature::GetLastHideRoll(void)
constexpr uintptr_t CNWSCreature__GetLastHideRoll = 0x0813E93C;
// void CNWSCreature::GetLastItemCastSpell(void)
constexpr uintptr_t CNWSCreature__GetLastItemCastSpell = 0x0813D7AC;
// void CNWSCreature::GetLastItemCastSpellLevel(void)
constexpr uintptr_t CNWSCreature__GetLastItemCastSpellLevel = 0x0813D7D0;
// void CNWSCreature::GetLastListenRoll(void)
constexpr uintptr_t CNWSCreature__GetLastListenRoll = 0x0813E918;
// void CNWSCreature::GetLastMoveSilentlyRoll(void)
constexpr uintptr_t CNWSCreature__GetLastMoveSilentlyRoll = 0x0813E960;
// public CExoLocString& CNWSCreature::GetLastName(void)
constexpr uintptr_t CNWSCreature__GetLastName = 0x0813DD5C;
// void CNWSCreature::GetLastPerceived(void)
constexpr uintptr_t CNWSCreature__GetLastPerceived = 0x0813E82C;
// void CNWSCreature::GetLastPerceptionHeard(void)
constexpr uintptr_t CNWSCreature__GetLastPerceptionHeard = 0x0813E850;
// void CNWSCreature::GetLastPerceptionInaudible(void)
constexpr uintptr_t CNWSCreature__GetLastPerceptionInaudible = 0x0813E898;
// void CNWSCreature::GetLastPerceptionSeen(void)
constexpr uintptr_t CNWSCreature__GetLastPerceptionSeen = 0x0813E874;
// void CNWSCreature::GetLastPerceptionVanished(void)
constexpr uintptr_t CNWSCreature__GetLastPerceptionVanished = 0x0813E8BC;
// void CNWSCreature::GetLastPickupFailed(void)
constexpr uintptr_t CNWSCreature__GetLastPickupFailed = 0x0813E7D0;
// void CNWSCreature::GetLastSpellCastItem(void)
constexpr uintptr_t CNWSCreature__GetLastSpellCastItem = 0x0813D808;
// void CNWSCreature::GetLastSpellProjectileTime(void)
constexpr uintptr_t CNWSCreature__GetLastSpellProjectileTime = 0x0813DC14;
// void CNWSCreature::GetLastSpellUnReadied(void)
constexpr uintptr_t CNWSCreature__GetLastSpellUnReadied = 0x0813D788;
// void CNWSCreature::GetLastSpotRoll(void)
constexpr uintptr_t CNWSCreature__GetLastSpotRoll = 0x0813E8F4;
// void CNWSCreature::GetLastTrapDetected(void)
constexpr uintptr_t CNWSCreature__GetLastTrapDetected = 0x0813D860;
// public float CNWSCreature::GetListenCheckDistance(void)
constexpr uintptr_t CNWSCreature__GetListenCheckDistance = 0x0813D180;
// void CNWSCreature::GetLockAnimationPlayed(void)
constexpr uintptr_t CNWSCreature__GetLockAnimationPlayed = 0x0813D630;
// public uint32_t CNWSCreature::GetLockOrientationToObject(void)
constexpr uintptr_t CNWSCreature__GetLockOrientationToObject = 0x0813DC04;
// void CNWSCreature::GetLootable(void)
constexpr uintptr_t CNWSCreature__GetLootable = 0x0813EAA4;
// void CNWSCreature::GetMagicalArrowsEquipped(void)
constexpr uintptr_t CNWSCreature__GetMagicalArrowsEquipped = 0x0813D510;
// void CNWSCreature::GetMagicalBoltsEquipped(void)
constexpr uintptr_t CNWSCreature__GetMagicalBoltsEquipped = 0x0813D534;
// void CNWSCreature::GetMagicalBulletsEquipped(void)
constexpr uintptr_t CNWSCreature__GetMagicalBulletsEquipped = 0x0813D558;
// void CNWSCreature::GetMasterId(void)
constexpr uintptr_t CNWSCreature__GetMasterId = 0x0813E388;
// public int16_t CNWSCreature::GetMaxHitPoints(int32_t)
constexpr uintptr_t CNWSCreature__GetMaxHitPoints = 0x0812E25C;
// public int32_t CNWSCreature::GetMode(unsigned char)
constexpr uintptr_t CNWSCreature__GetMode = 0x0812C078;
// public CExoString CNWSCreature::GetModelType(void)
constexpr uintptr_t CNWSCreature__GetModelType = 0x0813DB94;
// public float CNWSCreature::GetMovementRateFactor(void)
constexpr uintptr_t CNWSCreature__GetMovementRateFactor = 0x08123FD8;
// public uint32_t CNWSCreature::GetNearestEnemy(float, uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__GetNearestEnemy = 0x0812C188;
// void CNWSCreature::GetNonPolymorphCONBase(void)
constexpr uintptr_t CNWSCreature__GetNonPolymorphCONBase = 0x0813EE78;
// void CNWSCreature::GetNonPolymorphDEXBase(void)
constexpr uintptr_t CNWSCreature__GetNonPolymorphDEXBase = 0x0813EEA4;
// void CNWSCreature::GetNonPolymorphSTRBase(void)
constexpr uintptr_t CNWSCreature__GetNonPolymorphSTRBase = 0x0813EE4C;
// void CNWSCreature::GetNoPermDeath(void)
constexpr uintptr_t CNWSCreature__GetNoPermDeath = 0x0813EF3C;
// void CNWSCreature::GetNumAreas(void)
constexpr uintptr_t CNWSCreature__GetNumAreas = 0x0813EC08;
// void CNWSCreature::GetNumAssociatesOfType(uint16_t)
constexpr uintptr_t CNWSCreature__GetNumAssociatesOfType = 0x08113460;
// void CNWSCreature::GetNumCharSheetViewers(void)
constexpr uintptr_t CNWSCreature__GetNumCharSheetViewers = 0x0813DA6C;
// public int32_t CNWSCreature::GetNumCounterSpellingCreatures(uint32_t)
constexpr uintptr_t CNWSCreature__GetNumCounterSpellingCreatures = 0x081276C4;
// public int32_t CNWSCreature::GetNumInvited(void)
constexpr uintptr_t CNWSCreature__GetNumInvited = 0x08113804;
// void CNWSCreature::GetOnCreationScriptExecuted(void)
constexpr uintptr_t CNWSCreature__GetOnCreationScriptExecuted = 0x0813DE50;
// void CNWSCreature::GetOriginalFactionId(void)
constexpr uintptr_t CNWSCreature__GetOriginalFactionId = 0x0813E67C;
// void CNWSCreature::GetPassiveAttackBehaviour(void)
constexpr uintptr_t CNWSCreature__GetPassiveAttackBehaviour = 0x0813E970;
// void CNWSCreature::GetPathfindInformation(void)
constexpr uintptr_t CNWSCreature__GetPathfindInformation = 0x0813D6F4;
// void CNWSCreature::GetPendingRealization(void)
constexpr uintptr_t CNWSCreature__GetPendingRealization = 0x0813EFA8;
// void CNWSCreature::GetPersonalReputationList(void)
constexpr uintptr_t CNWSCreature__GetPersonalReputationList = 0x0813E6B4;
// void CNWSCreature::GetPickUpItemAnimationPlayed(void)
constexpr uintptr_t CNWSCreature__GetPickUpItemAnimationPlayed = 0x0813D678;
// void CNWSCreature::GetPlayerCharacter(void)
constexpr uintptr_t CNWSCreature__GetPlayerCharacter = 0x0813E2D0;
// void CNWSCreature::GetPolymorphSpellId1(void)
constexpr uintptr_t CNWSCreature__GetPolymorphSpellId1 = 0x0813EDB0;
// void CNWSCreature::GetPolymorphSpellId2(void)
constexpr uintptr_t CNWSCreature__GetPolymorphSpellId2 = 0x0813EDC0;
// void CNWSCreature::GetPolymorphSpellId3(void)
constexpr uintptr_t CNWSCreature__GetPolymorphSpellId3 = 0x0813EDD0;
// void CNWSCreature::GetPonyRide(void)
constexpr uintptr_t CNWSCreature__GetPonyRide = 0x0813D8C4;
// public CResRef CNWSCreature::GetPortrait(void)
constexpr uintptr_t CNWSCreature__GetPortrait = 0x0813EB44;
// void CNWSCreature::GetPreDominationFactionId(void)
constexpr uintptr_t CNWSCreature__GetPreDominationFactionId = 0x0813E690;
// void CNWSCreature::GetPreferredAttackDistance(void)
constexpr uintptr_t CNWSCreature__GetPreferredAttackDistance = 0x0813DBF4;
// void CNWSCreature::GetPrePolymorphCON(void)
constexpr uintptr_t CNWSCreature__GetPrePolymorphCON = 0x0813EE2C;
// void CNWSCreature::GetPrePolymorphDEX(void)
constexpr uintptr_t CNWSCreature__GetPrePolymorphDEX = 0x0813EE3C;
// void CNWSCreature::GetPrePolymorphSTR(void)
constexpr uintptr_t CNWSCreature__GetPrePolymorphSTR = 0x0813EE1C;
// void CNWSCreature::GetPVPList(void)
constexpr uintptr_t CNWSCreature__GetPVPList = 0x0813ED6C;
// public int32_t CNWSCreature::GetPVPPlayerLikesMe(uint32_t)
constexpr uintptr_t CNWSCreature__GetPVPPlayerLikesMe = 0x081138CC;
// void CNWSCreature::GetPVPReputation(uint32_t)
constexpr uintptr_t CNWSCreature__GetPVPReputation = 0x081123F4;
// public CNWSQuickbarButton* CNWSCreature::GetQuickbarButton(unsigned char)
constexpr uintptr_t CNWSCreature__GetQuickbarButton = 0x0813D370;
// void CNWSCreature::GetQuickbarInitialized(void)
constexpr uintptr_t CNWSCreature__GetQuickbarInitialized = 0x0813EC28;
// public int32_t CNWSCreature::GetRangeWeaponEquipped(void)
constexpr uintptr_t CNWSCreature__GetRangeWeaponEquipped = 0x0813C0A8;
// public int32_t CNWSCreature::GetRelativeWeaponSize(CNWSItem*)
constexpr uintptr_t CNWSCreature__GetRelativeWeaponSize = 0x0813C71C;
// void CNWSCreature::GetRepositoryArrayIndex(void)
constexpr uintptr_t CNWSCreature__GetRepositoryArrayIndex = 0x0813DC48;
// void CNWSCreature::GetReputationList(void)
constexpr uintptr_t CNWSCreature__GetReputationList = 0x0813E6A4;
// public float CNWSCreature::GetRunRate(void)
constexpr uintptr_t CNWSCreature__GetRunRate = 0x0813C484;
// void CNWSCreature::GetScriptName(int32_t)
constexpr uintptr_t CNWSCreature__GetScriptName = 0x0813D704;
// void CNWSCreature::GetSilent(void)
constexpr uintptr_t CNWSCreature__GetSilent = 0x0813E088;
// void CNWSCreature::GetSittingObject(void)
constexpr uintptr_t CNWSCreature__GetSittingObject = 0x0813D4EC;
// void CNWSCreature::GetSlowed(void)
constexpr uintptr_t CNWSCreature__GetSlowed = 0x0813E0D0;
// void CNWSCreature::GetSoundSet(void)
constexpr uintptr_t CNWSCreature__GetSoundSet = 0x0813EF60;
// void CNWSCreature::GetSpellIdentifiedList(void)
constexpr uintptr_t CNWSCreature__GetSpellIdentifiedList = 0x0813E230;
// public int32_t CNWSCreature::GetSpellOrHealActionQueued(void)
constexpr uintptr_t CNWSCreature__GetSpellOrHealActionQueued = 0x0813B980;
// void CNWSCreature::GetSpellTarget(void)
constexpr uintptr_t CNWSCreature__GetSpellTarget = 0x0813EA5C;
// public float CNWSCreature::GetSpotCheckDistance(void)
constexpr uintptr_t CNWSCreature__GetSpotCheckDistance = 0x0813D160;
// public int32_t CNWSCreature::GetStandardFactionReputation(int32_t)
constexpr uintptr_t CNWSCreature__GetStandardFactionReputation = 0x081127D8;
// public CNWSCreatureStats* CNWSCreature::GetStats(void)
constexpr uintptr_t CNWSCreature__GetStats = 0x0813D4C8;
// void CNWSCreature::GetStealAnimationPlayed(void)
constexpr uintptr_t CNWSCreature__GetStealAnimationPlayed = 0x0813D57C;
// void CNWSCreature::GetStealAttemptDetected(void)
constexpr uintptr_t CNWSCreature__GetStealAttemptDetected = 0x0813D5A0;
// void CNWSCreature::GetStealthMode(void)
constexpr uintptr_t CNWSCreature__GetStealthMode = 0x0813DA7C;
// void CNWSCreature::GetSummonedAnimalCompanion(void)
constexpr uintptr_t CNWSCreature__GetSummonedAnimalCompanion = 0x0813E4B0;
// void CNWSCreature::GetSummonedCreatureId(void)
constexpr uintptr_t CNWSCreature__GetSummonedCreatureId = 0x0813E650;
// void CNWSCreature::GetSummonedFamiliar(void)
constexpr uintptr_t CNWSCreature__GetSummonedFamiliar = 0x0813E5E8;
// void CNWSCreature::GetTaunt(void)
constexpr uintptr_t CNWSCreature__GetTaunt = 0x0813E13C;
// void CNWSCreature::GetTauntAnimationPlayed(void)
constexpr uintptr_t CNWSCreature__GetTauntAnimationPlayed = 0x0813D69C;
// public int32_t CNWSCreature::GetTileExplored(uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__GetTileExplored = 0x08124F04;
// public int32_t CNWSCreature::GetTotalEffectBonus(unsigned char, CNWSObject*, int32_t, int32_t, unsigned char, unsigned char, unsigned char, unsigned char, int32_t)
constexpr uintptr_t CNWSCreature__GetTotalEffectBonus = 0x08132298;
// void CNWSCreature::GetTotalWeightCarried(void)
constexpr uintptr_t CNWSCreature__GetTotalWeightCarried = 0x0813ED38;
// void CNWSCreature::GetTrapAnimationPlayed(void)
constexpr uintptr_t CNWSCreature__GetTrapAnimationPlayed = 0x0813D5E8;
// public int32_t CNWSCreature::GetTurnResistanceHD(void)
constexpr uintptr_t CNWSCreature__GetTurnResistanceHD = 0x08138074;
// public int32_t CNWSCreature::GetUnarmed(void)
constexpr uintptr_t CNWSCreature__GetUnarmed = 0x0813C0F0;
// void CNWSCreature::GetUnlockAnimationPlayed(void)
constexpr uintptr_t CNWSCreature__GetUnlockAnimationPlayed = 0x0813D60C;
// void CNWSCreature::GetUpdateCombatInformation(void)
constexpr uintptr_t CNWSCreature__GetUpdateCombatInformation = 0x0813DA48;
// void CNWSCreature::GetUpdateDisplayName(void)
constexpr uintptr_t CNWSCreature__GetUpdateDisplayName = 0x0813DE08;
// public int32_t CNWSCreature::GetUseMonkAbilities(void)
constexpr uintptr_t CNWSCreature__GetUseMonkAbilities = 0x081241F8;
// public int32_t CNWSCreature::GetUseRange(uint32_t, Vector&, float&)
constexpr uintptr_t CNWSCreature__GetUseRange = 0x0813799C;
// void CNWSCreature::GetVisibilityList(void)
constexpr uintptr_t CNWSCreature__GetVisibilityList = 0x0813E78C;
// public CNWVisibilityNode* CNWSCreature::GetVisibleListElement(uint32_t)
constexpr uintptr_t CNWSCreature__GetVisibleListElement = 0x081131FC;
// void CNWSCreature::GetVisionType(void)
constexpr uintptr_t CNWSCreature__GetVisionType = 0x0813DFE8;
// void CNWSCreature::GetWalkAnimation(void)
constexpr uintptr_t CNWSCreature__GetWalkAnimation = 0x0813E14C;
// public float CNWSCreature::GetWalkRate(void)
constexpr uintptr_t CNWSCreature__GetWalkRate = 0x0813C458;
// public int32_t CNWSCreature::GetWeaponPower(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__GetWeaponPower = 0x08131A10;
// void CNWSCreature::GetWeaponScale(void)
constexpr uintptr_t CNWSCreature__GetWeaponScale = 0x0813DBD0;
// public int32_t CNWSCreature::HandleSubAreaStateChanges(CExoArrayListTemplatedunsignedlong*, CExoArrayListTemplatedunsignedlong*, int32_t)
constexpr uintptr_t CNWSCreature__HandleSubAreaStateChanges = 0x08103970;
// protected void CNWSCreature::InitialisePVPList(void)
constexpr uintptr_t CNWSCreature__InitialisePVPList = 0x08112694;
// public void CNWSCreature::InitializeQuickbar(void)
constexpr uintptr_t CNWSCreature__InitializeQuickbar = 0x0813B2D8;
// void CNWSCreature::IsAIState(uint16_t)
constexpr uintptr_t CNWSCreature__IsAIState = 0x0813D954;
// void CNWSCreature::IsHelpless(void)
constexpr uintptr_t CNWSCreature__IsHelpless = 0x0813D9AC;
// public int32_t CNWSCreature::LearnScroll(uint32_t)
constexpr uintptr_t CNWSCreature__LearnScroll = 0x0813A974;
// public void CNWSCreature::LoadAssociateList(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSCreature__LoadAssociateList = 0x0811FC20;
// public void CNWSCreature::LoadAutoMapData(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSCreature__LoadAutoMapData = 0x08121630;
// public int32_t CNWSCreature::LoadCreature(CResGFF*, CResStruct*, int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__LoadCreature = 0x08120218;
// public int32_t CNWSCreature::LoadFromTemplate(CResRef, CExoString*)
constexpr uintptr_t CNWSCreature__LoadFromTemplate = 0x0811E46C;
// public void CNWSCreature::LoadPersonalReputationList(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSCreature__LoadPersonalReputationList = 0x0811F7BC;
// public int32_t CNWSCreature::LoadPolymorphData(CResGFF*, CResStruct*, int32_t)
constexpr uintptr_t CNWSCreature__LoadPolymorphData = 0x08120688;
// public void CNWSCreature::LoadQuickBarHack(CExoString)
constexpr uintptr_t CNWSCreature__LoadQuickBarHack = 0x081394F4;
// public void CNWSCreature::LoadQuickButtons(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSCreature__LoadQuickButtons = 0x08121788;
// public float CNWSCreature::MaxAttackRange(uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__MaxAttackRange = 0x0813C114;
// public void CNWSCreature::MergeItem(CNWSItem*, CNWSItem*)
constexpr uintptr_t CNWSCreature__MergeItem = 0x0811A014;
// public void CNWSCreature::NotifyAssociateActionToggle(int32_t)
constexpr uintptr_t CNWSCreature__NotifyAssociateActionToggle = 0x0813B454;
// public void CNWSCreature::PacifyCreature(void)
constexpr uintptr_t CNWSCreature__PacifyCreature__0 = 0x08137CA8;
// public void CNWSCreature::PacifyCreature(uint32_t)
constexpr uintptr_t CNWSCreature__PacifyCreature__1 = 0x08137DC4;
// public void CNWSCreature::PayToIdentifyItem(uint32_t, uint32_t)
constexpr uintptr_t CNWSCreature__PayToIdentifyItem = 0x08131984;
// public int32_t CNWSCreature::Polymorph(int32_t, CGameEffect*, int32_t)
constexpr uintptr_t CNWSCreature__Polymorph = 0x081356A0;
// public void CNWSCreature::PossessCreature(uint32_t)
constexpr uintptr_t CNWSCreature__PossessCreature = 0x0810E658;
// public void CNWSCreature::PossessCreatureDM(uint32_t, unsigned char)
constexpr uintptr_t CNWSCreature__PossessCreatureDM = 0x081133B0;
// public void CNWSCreature::PossessFamiliar(void)
constexpr uintptr_t CNWSCreature__PossessFamiliar = 0x0810DE48;
// public void CNWSCreature::PostProcess(void)
constexpr uintptr_t CNWSCreature__PostProcess = 0x0812430C;
// public void CNWSCreature::ProcessMasterDeathForAssociates(void)
constexpr uintptr_t CNWSCreature__ProcessMasterDeathForAssociates = 0x08110AE8;
// public void CNWSCreature::ProcessPendingCombatActions(void)
constexpr uintptr_t CNWSCreature__ProcessPendingCombatActions = 0x0813A4C0;
// public void CNWSCreature::QuickbarButton_RemoveItem(uint32_t)
constexpr uintptr_t CNWSCreature__QuickbarButton_RemoveItem = 0x0813029C;
// public void CNWSCreature::QuickbarButton_RemoveSpell(uint32_t)
constexpr uintptr_t CNWSCreature__QuickbarButton_RemoveSpell = 0x0813034C;
// public void CNWSCreature::ReadItemsFromGff(CResGFF*, CResStruct*, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__ReadItemsFromGff = 0x0811EEE0;
// public void CNWSCreature::ReadScriptsFromGff(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSCreature__ReadScriptsFromGff = 0x0811E768;
// public void CNWSCreature::RealizeAssociateList(void)
constexpr uintptr_t CNWSCreature__RealizeAssociateList = 0x0811FFD4;
// public void CNWSCreature::ReceiveAssociateCommand(int32_t)
constexpr uintptr_t CNWSCreature__ReceiveAssociateCommand = 0x0810CDC0;
// public void CNWSCreature::RecomputeAmbientAnimationState(void)
constexpr uintptr_t CNWSCreature__RecomputeAmbientAnimationState = 0x08128CA0;
// public void CNWSCreature::RelayQuickChatCommandToAssociates(uint16_t)
constexpr uintptr_t CNWSCreature__RelayQuickChatCommandToAssociates = 0x08113308;
// public void CNWSCreature::RemoveAllAssociates(void)
constexpr uintptr_t CNWSCreature__RemoveAllAssociates = 0x08112A28;
// void CNWSCreature::RemoveAreaOfEffect(uint32_t)
constexpr uintptr_t CNWSCreature__RemoveAreaOfEffect = 0x0813DEC0;
// public void CNWSCreature::RemoveAssociate(uint32_t)
constexpr uintptr_t CNWSCreature__RemoveAssociate = 0x0810C8F4;
// public void CNWSCreature::RemoveBadEffects(void)
constexpr uintptr_t CNWSCreature__RemoveBadEffects = 0x0812DFB8;
// public int32_t CNWSCreature::RemoveCharmEffectsByFactionID(int32_t, int32_t)
constexpr uintptr_t CNWSCreature__RemoveCharmEffectsByFactionID = 0x0812DC88;
// void CNWSCreature::RemoveCharmEffectsByOBJECTID(uint32_t, int32_t)
constexpr uintptr_t CNWSCreature__RemoveCharmEffectsByOBJECTID = 0x0812DA14;
// public void CNWSCreature::RemoveCombatInvisibilityEffects(void)
constexpr uintptr_t CNWSCreature__RemoveCombatInvisibilityEffects = 0x081374D0;
// public void CNWSCreature::RemoveDomination(void)
constexpr uintptr_t CNWSCreature__RemoveDomination = 0x081134CC;
// void CNWSCreature::RemoveDominationEffect(void)
constexpr uintptr_t CNWSCreature__RemoveDominationEffect = 0x08110A40;
// public void CNWSCreature::RemoveFromArea(int32_t)
constexpr uintptr_t CNWSCreature__RemoveFromArea = 0x0811B87C;
// void CNWSCreature::RemoveFromAssociateList(uint32_t)
constexpr uintptr_t CNWSCreature__RemoveFromAssociateList = 0x081132C4;
// void CNWSCreature::RemoveFromInvitationsOffered(uint32_t)
constexpr uintptr_t CNWSCreature__RemoveFromInvitationsOffered = 0x08113668;
// public void CNWSCreature::RemoveFromPVPList(uint32_t)
constexpr uintptr_t CNWSCreature__RemoveFromPVPList = 0x08113924;
// public void CNWSCreature::RemoveFromVisibleList(uint32_t)
constexpr uintptr_t CNWSCreature__RemoveFromVisibleList = 0x0810890C;
// public void CNWSCreature::RemoveGold(int32_t, int32_t)
constexpr uintptr_t CNWSCreature__RemoveGold = 0x081318A0;
// public int32_t CNWSCreature::RemoveItem(CNWSItem*, int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__RemoveItem = 0x081000E8;
// public int32_t CNWSCreature::RemoveItemFromRepository(CNWSItem*, int32_t)
constexpr uintptr_t CNWSCreature__RemoveItemFromRepository = 0x0813B22C;
// public void CNWSCreature::RemoveSleepEffects(void)
constexpr uintptr_t CNWSCreature__RemoveSleepEffects = 0x0812DE6C;
// public void CNWSCreature::RemoveSpellActionFromRound(void)
constexpr uintptr_t CNWSCreature__RemoveSpellActionFromRound = 0x0813A424;
// public void CNWSCreature::RemoveWoundingEffects(void)
constexpr uintptr_t CNWSCreature__RemoveWoundingEffects = 0x0812E04C;
// public int32_t CNWSCreature::ReplyToInvitation(int32_t, uint32_t)
constexpr uintptr_t CNWSCreature__ReplyToInvitation = 0x08111930;
// protected void CNWSCreature::ReprocessAssociateList(void)
constexpr uintptr_t CNWSCreature__ReprocessAssociateList = 0x0810C55C;
// public int32_t CNWSCreature::RequestBuy(uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CNWSCreature__RequestBuy = 0x0812F0F4;
// public int32_t CNWSCreature::RequestSell(uint32_t, uint32_t)
constexpr uintptr_t CNWSCreature__RequestSell = 0x0812F1E4;
// public void CNWSCreature::ResetItemPossessor(void)
constexpr uintptr_t CNWSCreature__ResetItemPossessor = 0x081111D8;
// public void CNWSCreature::ResetPCDominatedScripts(void)
constexpr uintptr_t CNWSCreature__ResetPCDominatedScripts = 0x08110268;
// public void CNWSCreature::ResetUpdateTimes(uint32_t, uint32_t)
constexpr uintptr_t CNWSCreature__ResetUpdateTimes = 0x0813BF90;
// protected void CNWSCreature::ResolveAmmunition(uint32_t)
constexpr uintptr_t CNWSCreature__ResolveAmmunition = 0x080E7754;
// protected void CNWSCreature::ResolveAttack(uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__ResolveAttack = 0x080E6C44;
// protected void CNWSCreature::ResolveAttackRoll(CNWSObject*)
constexpr uintptr_t CNWSCreature__ResolveAttackRoll = 0x080EB190;
// protected void CNWSCreature::ResolveCachedSpecialAttacks(void)
constexpr uintptr_t CNWSCreature__ResolveCachedSpecialAttacks = 0x080EC390;
// protected void CNWSCreature::ResolveDamage(CNWSObject*)
constexpr uintptr_t CNWSCreature__ResolveDamage = 0x080EC5B4;
// public void CNWSCreature::ResolveDamageShields(CNWSCreature*)
constexpr uintptr_t CNWSCreature__ResolveDamageShields = 0x080EFCAC;
// protected void CNWSCreature::ResolveDeathAttack(CNWSCreature*)
constexpr uintptr_t CNWSCreature__ResolveDeathAttack = 0x080EBDFC;
// public int32_t CNWSCreature::ResolveDefensiveEffects(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ResolveDefensiveEffects = 0x080EDC58;
// void CNWSCreature::ResolveElementalDamage(CNWSObject*)
constexpr uintptr_t CNWSCreature__ResolveElementalDamage = 0x080F5AD4;
// public void CNWSCreature::ResolveInitiative(void)
constexpr uintptr_t CNWSCreature__ResolveInitiative = 0x08128B18;
// protected void CNWSCreature::ResolveItemCastSpell(CNWSObject*)
constexpr uintptr_t CNWSCreature__ResolveItemCastSpell = 0x080ECB18;
// protected void CNWSCreature::ResolveMeleeAnimations(int32_t, int32_t, CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ResolveMeleeAnimations = 0x080EAA18;
// protected void CNWSCreature::ResolveMeleeAttack(CNWSObject*, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__ResolveMeleeAttack = 0x080E9930;
// protected void CNWSCreature::ResolveMeleeSpecialAttack(int32_t, int32_t, CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ResolveMeleeSpecialAttack = 0x080E9A98;
// protected void CNWSCreature::ResolveOnHitEffect(CNWSObject*, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__ResolveOnHitEffect = 0x080EE6C0;
// protected void CNWSCreature::ResolveOnHitVisuals(CNWSObject*)
constexpr uintptr_t CNWSCreature__ResolveOnHitVisuals = 0x080EE4D4;
// protected void CNWSCreature::ResolvePostMeleeDamage(CNWSObject*)
constexpr uintptr_t CNWSCreature__ResolvePostMeleeDamage = 0x080ECF80;
// protected void CNWSCreature::ResolvePostRangedDamage(CNWSObject*)
constexpr uintptr_t CNWSCreature__ResolvePostRangedDamage = 0x080ED7E4;
// protected void CNWSCreature::ResolveRangedAnimations(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ResolveRangedAnimations = 0x080E7FE8;
// protected void CNWSCreature::ResolveRangedAttack(CNWSObject*, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__ResolveRangedAttack = 0x080E6FE4;
// protected void CNWSCreature::ResolveRangedMiss(CNWSObject*)
constexpr uintptr_t CNWSCreature__ResolveRangedMiss = 0x080E8530;
// protected void CNWSCreature::ResolveRangedSpecialAttack(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__ResolveRangedSpecialAttack = 0x080E71D4;
// protected void CNWSCreature::ResolveSafeProjectile(uint32_t, int32_t)
constexpr uintptr_t CNWSCreature__ResolveSafeProjectile = 0x080E7630;
// protected void CNWSCreature::ResolveSituationalModifiers(CNWSObject*)
constexpr uintptr_t CNWSCreature__ResolveSituationalModifiers = 0x080EC480;
// protected void CNWSCreature::ResolveSneakAttack(CNWSCreature*)
constexpr uintptr_t CNWSCreature__ResolveSneakAttack = 0x080EB720;
// public void CNWSCreature::Rest(int32_t, int32_t)
constexpr uintptr_t CNWSCreature__Rest = 0x0812D45C;
// public void CNWSCreature::RestoreCutsceneVars(void)
constexpr uintptr_t CNWSCreature__RestoreCutsceneVars = 0x0813D444;
// public void CNWSCreature::RestoreItemProperties(void)
constexpr uintptr_t CNWSCreature__RestoreItemProperties = 0x0813C600;
// protected void CNWSCreature::RestoreItemPropertiesInRepository(CItemRepository*)
constexpr uintptr_t CNWSCreature__RestoreItemPropertiesInRepository = 0x0812BC00;
// public int32_t CNWSCreature::RunEquip(uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CNWSCreature__RunEquip = 0x08116F20;
// public int32_t CNWSCreature::RunUnequip(uint32_t, uint32_t, unsigned char, unsigned char, int32_t, uint32_t)
constexpr uintptr_t CNWSCreature__RunUnequip = 0x08117B54;
// public void CNWSCreature::SaveAssociateList(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSCreature__SaveAssociateList = 0x0811FAA0;
// public void CNWSCreature::SaveAutoMapData(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSCreature__SaveAutoMapData = 0x0813C224;
// public int32_t CNWSCreature::SaveCreature(CResGFF*, CResStruct*, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__SaveCreature = 0x081209FC;
// public void CNWSCreature::SavePersonalReputationList(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSCreature__SavePersonalReputationList = 0x0811F558;
// public void CNWSCreature::SaveQuickBarHack(CExoString)
constexpr uintptr_t CNWSCreature__SaveQuickBarHack = 0x0813960C;
// protected void CNWSCreature::SaveQuickButtons(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSCreature__SaveQuickButtons = 0x081230F4;
// public unsigned char CNWSCreature::SavingThrowRoll(unsigned char, uint16_t, unsigned char, uint32_t, int32_t, uint16_t, int32_t)
constexpr uintptr_t CNWSCreature__SavingThrowRoll = 0x080F0A90;
// public void CNWSCreature::SawTrapInformAssociates(uint32_t)
constexpr uintptr_t CNWSCreature__SawTrapInformAssociates = 0x081124A0;
// public void CNWSCreature::SendFeedbackMessage(uint16_t, CNWCCMessageData*, CNWSPlayer*)
constexpr uintptr_t CNWSCreature__SendFeedbackMessage = 0x0813533C;
// public void CNWSCreature::SendFeedbackString(CExoString, CNWSPlayer*)
constexpr uintptr_t CNWSCreature__SendFeedbackString = 0x0813CECC;
// public void CNWSCreature::SetActivity(int32_t, int32_t)
constexpr uintptr_t CNWSCreature__SetActivity = 0x081152E8;
// void CNWSCreature::SetActivityLocked(uint32_t, int32_t)
constexpr uintptr_t CNWSCreature__SetActivityLocked = 0x0813E9B0;
// void CNWSCreature::SetAIState(uint16_t)
constexpr uintptr_t CNWSCreature__SetAIState = 0x0813D998;
// void CNWSCreature::SetAIStateFlag(uint16_t, int32_t)
constexpr uintptr_t CNWSCreature__SetAIStateFlag = 0x0813D970;
// void CNWSCreature::SetAlive(void)
constexpr uintptr_t CNWSCreature__SetAlive = 0x0813D9DC;
// public void CNWSCreature::SetAllTilesExplored(uint32_t, int32_t)
constexpr uintptr_t CNWSCreature__SetAllTilesExplored = 0x08124D7C;
// void CNWSCreature::SetAlreadyRemovedFromEncounter(int32_t)
constexpr uintptr_t CNWSCreature__SetAlreadyRemovedFromEncounter = 0x0813EC8C;
// void CNWSCreature::SetAmbientAnimationState(unsigned char)
constexpr uintptr_t CNWSCreature__SetAmbientAnimationState = 0x0813E338;
// void CNWSCreature::SetAnimalCompanionCreatureType(int32_t)
constexpr uintptr_t CNWSCreature__SetAnimalCompanionCreatureType = 0x0813E498;
// public void CNWSCreature::SetAnimalCompanionName(CExoString)
constexpr uintptr_t CNWSCreature__SetAnimalCompanionName = 0x0813E3F4;
// public void CNWSCreature::SetAnimation(int32_t)
constexpr uintptr_t CNWSCreature__SetAnimation = 0x0811B544;
// public void CNWSCreature::SetAssociateListenPatterns(void)
constexpr uintptr_t CNWSCreature__SetAssociateListenPatterns = 0x0810CB90;
// protected void CNWSCreature::SetAssociatesToForgetAggression(uint32_t)
constexpr uintptr_t CNWSCreature__SetAssociatesToForgetAggression = 0x08112C00;
// public void CNWSCreature::SetAssociateType(uint16_t)
constexpr uintptr_t CNWSCreature__SetAssociateType = 0x0813D388;
// void CNWSCreature::SetAttackTarget(uint32_t)
constexpr uintptr_t CNWSCreature__SetAttackTarget = 0x0813EA00;
// void CNWSCreature::SetAttemptedAttackTarget(uint32_t)
constexpr uintptr_t CNWSCreature__SetAttemptedAttackTarget = 0x0813EA24;
// void CNWSCreature::SetAttemptedSpellTarget(uint32_t)
constexpr uintptr_t CNWSCreature__SetAttemptedSpellTarget = 0x0813EA48;
// public void CNWSCreature::SetAutoMapData(int32_t, uint32_t*, unsigned char**)
constexpr uintptr_t CNWSCreature__SetAutoMapData = 0x0813A86C;
// void CNWSCreature::SetBlindsightDistance(float)
constexpr uintptr_t CNWSCreature__SetBlindsightDistance = 0x0813ED00;
// void CNWSCreature::SetBodyBag(unsigned char)
constexpr uintptr_t CNWSCreature__SetBodyBag = 0x0813EFE4;
// void CNWSCreature::SetBodyBagId(uint32_t)
constexpr uintptr_t CNWSCreature__SetBodyBagId = 0x0813EAFC;
// void CNWSCreature::SetBroadcastedAOOTo(int32_t)
constexpr uintptr_t CNWSCreature__SetBroadcastedAOOTo = 0x0813C504;
// void CNWSCreature::SetCalculateNPCWeight(int32_t)
constexpr uintptr_t CNWSCreature__SetCalculateNPCWeight = 0x0813ED58;
// public void CNWSCreature::SetCombatMode(unsigned char, int32_t)
constexpr uintptr_t CNWSCreature__SetCombatMode = 0x080F982C;
// public void CNWSCreature::SetCombatState(int32_t)
constexpr uintptr_t CNWSCreature__SetCombatState = 0x0813C524;
// void CNWSCreature::SetCounterSpellTarget(uint32_t)
constexpr uintptr_t CNWSCreature__SetCounterSpellTarget = 0x0813E314;
// void CNWSCreature::SetCreatureSize(int32_t)
constexpr uintptr_t CNWSCreature__SetCreatureSize = 0x0813DB18;
// void CNWSCreature::SetCreatureState(unsigned char)
constexpr uintptr_t CNWSCreature__SetCreatureState = 0x0813D8F8;
// void CNWSCreature::SetCurrentItemContainer(uint32_t)
constexpr uintptr_t CNWSCreature__SetCurrentItemContainer = 0x0813DCA0;
// void CNWSCreature::SetCutsceneCameraMode(int32_t)
constexpr uintptr_t CNWSCreature__SetCutsceneCameraMode = 0x0813E008;
// void CNWSCreature::SetCutsceneCameraMovementRateFactor(float)
constexpr uintptr_t CNWSCreature__SetCutsceneCameraMovementRateFactor = 0x0813E050;
// void CNWSCreature::SetCutsceneGhost(int32_t)
constexpr uintptr_t CNWSCreature__SetCutsceneGhost = 0x0813E02C;
// void CNWSCreature::SetDead(void)
constexpr uintptr_t CNWSCreature__SetDead = 0x0813D9C8;
// void CNWSCreature::SetDecayTime(uint32_t)
constexpr uintptr_t CNWSCreature__SetDecayTime = 0x0813EAD8;
// public void CNWSCreature::SetDefensiveCastingMode(unsigned char)
constexpr uintptr_t CNWSCreature__SetDefensiveCastingMode = 0x08112EB0;
// void CNWSCreature::SetDesiredAreaId(uint32_t)
constexpr uintptr_t CNWSCreature__SetDesiredAreaId = 0x0813DF58;
// void CNWSCreature::SetDesiredAreaLocation(Vector)
constexpr uintptr_t CNWSCreature__SetDesiredAreaLocation = 0x0813DF90;
// void CNWSCreature::SetDesiredAreaUpdateComplete(int32_t)
constexpr uintptr_t CNWSCreature__SetDesiredAreaUpdateComplete = 0x0813DFC0;
// void CNWSCreature::SetDesiredCombatMode(unsigned char)
constexpr uintptr_t CNWSCreature__SetDesiredCombatMode = 0x0813DABC;
// public void CNWSCreature::SetDetectMode(unsigned char)
constexpr uintptr_t CNWSCreature__SetDetectMode = 0x08112E84;
// void CNWSCreature::SetDisarmable(int32_t)
constexpr uintptr_t CNWSCreature__SetDisarmable = 0x0813DA20;
// public void CNWSCreature::SetDisplayName(CExoString)
constexpr uintptr_t CNWSCreature__SetDisplayName = 0x0813DDA4;
// void CNWSCreature::SetDMCharacter(int32_t)
constexpr uintptr_t CNWSCreature__SetDMCharacter = 0x0813EC64;
// void CNWSCreature::SetDriveMode(int32_t)
constexpr uintptr_t CNWSCreature__SetDriveMode = 0x0813E1A4;
// void CNWSCreature::SetDriveModeMoveFactor(float)
constexpr uintptr_t CNWSCreature__SetDriveModeMoveFactor = 0x0813D9EC;
// void CNWSCreature::SetDropItemAnimationPlayed(int32_t)
constexpr uintptr_t CNWSCreature__SetDropItemAnimationPlayed = 0x0813D640;
// public void CNWSCreature::SetEffectSpellId(uint32_t)
constexpr uintptr_t CNWSCreature__SetEffectSpellId = 0x0813E818;
// void CNWSCreature::SetEncounterId(uint32_t)
constexpr uintptr_t CNWSCreature__SetEncounterId = 0x0813E7AC;
// void CNWSCreature::SetEncumbranceState(int32_t)
constexpr uintptr_t CNWSCreature__SetEncumbranceState = 0x0813E7E0;
// void CNWSCreature::SetEquipArrayIndex(uint16_t)
constexpr uintptr_t CNWSCreature__SetEquipArrayIndex = 0x0813DC34;
// void CNWSCreature::SetEquippedWeight(int32_t)
constexpr uintptr_t CNWSCreature__SetEquippedWeight = 0x0813ED24;
// public void CNWSCreature::SetExcitedState(unsigned char)
constexpr uintptr_t CNWSCreature__SetExcitedState = 0x0812D29C;
// void CNWSCreature::SetExternalCombatModeEnabled(int32_t)
constexpr uintptr_t CNWSCreature__SetExternalCombatModeEnabled = 0x0813F02C;
// void CNWSCreature::SetFacingAndAnimationDone(int32_t)
constexpr uintptr_t CNWSCreature__SetFacingAndAnimationDone = 0x0813EFF8;
// void CNWSCreature::SetFactionId(int32_t)
constexpr uintptr_t CNWSCreature__SetFactionId = 0x0813E6C4;
// void CNWSCreature::SetFamiliarCreatureType(int32_t)
constexpr uintptr_t CNWSCreature__SetFamiliarCreatureType = 0x0813E5D0;
// public void CNWSCreature::SetFamiliarName(CExoString)
constexpr uintptr_t CNWSCreature__SetFamiliarName = 0x0813E52C;
// void CNWSCreature::SetFootstepType(int32_t)
constexpr uintptr_t CNWSCreature__SetFootstepType = 0x0813EF70;
// void CNWSCreature::SetForcedWalk(int32_t)
constexpr uintptr_t CNWSCreature__SetForcedWalk = 0x0813E170;
// void CNWSCreature::SetGoingToBeAttackedBy(uint32_t)
constexpr uintptr_t CNWSCreature__SetGoingToBeAttackedBy = 0x0813EA90;
// public void CNWSCreature::SetGold(int32_t)
constexpr uintptr_t CNWSCreature__SetGold = 0x0813CE38;
// void CNWSCreature::SetHasArms(int32_t)
constexpr uintptr_t CNWSCreature__SetHasArms = 0x0813DAD0;
// void CNWSCreature::SetHasLegs(int32_t)
constexpr uintptr_t CNWSCreature__SetHasLegs = 0x0813DAF4;
// void CNWSCreature::SetHasted(int32_t)
constexpr uintptr_t CNWSCreature__SetHasted = 0x0813E098;
// void CNWSCreature::SetHealAnimationPlayed(int32_t)
constexpr uintptr_t CNWSCreature__SetHealAnimationPlayed = 0x0813D5B0;
// public void CNWSCreature::SetId(uint32_t)
constexpr uintptr_t CNWSCreature__SetId = 0x0813BAE8;
// void CNWSCreature::SetInitiativeExpired(int32_t)
constexpr uintptr_t CNWSCreature__SetInitiativeExpired = 0x0813E1EC;
// void CNWSCreature::SetInitiativeRoll(unsigned char)
constexpr uintptr_t CNWSCreature__SetInitiativeRoll = 0x0813E1C8;
// public void CNWSCreature::SetInTransit(int32_t)
constexpr uintptr_t CNWSCreature__SetInTransit = 0x0813D024;
// public void CNWSCreature::SetInvitedToParty(int32_t)
constexpr uintptr_t CNWSCreature__SetInvitedToParty = 0x0813D298;
// void CNWSCreature::SetInvitedToPartyBy(uint32_t)
constexpr uintptr_t CNWSCreature__SetInvitedToPartyBy = 0x0813E114;
// void CNWSCreature::SetIsDiseased(int32_t)
constexpr uintptr_t CNWSCreature__SetIsDiseased = 0x0813D940;
// void CNWSCreature::SetIsImmortal(int32_t)
constexpr uintptr_t CNWSCreature__SetIsImmortal = 0x0813EF04;
// void CNWSCreature::SetIsPoisoned(int32_t)
constexpr uintptr_t CNWSCreature__SetIsPoisoned = 0x0813D91C;
// void CNWSCreature::SetIsPolymorphed(int32_t)
constexpr uintptr_t CNWSCreature__SetIsPolymorphed = 0x0813ED8C;
// void CNWSCreature::SetItemCastSpellBroadcastAOO(int32_t)
constexpr uintptr_t CNWSCreature__SetItemCastSpellBroadcastAOO = 0x0813D828;
// void CNWSCreature::SetItemContainerArrayIndex(uint16_t)
constexpr uintptr_t CNWSCreature__SetItemContainerArrayIndex = 0x0813DC7C;
// void CNWSCreature::SetJumpedRecently(int32_t)
constexpr uintptr_t CNWSCreature__SetJumpedRecently = 0x0813DE3C;
// void CNWSCreature::SetLastAmmunitionWarning(int32_t)
constexpr uintptr_t CNWSCreature__SetLastAmmunitionWarning = 0x0813D83C;
// void CNWSCreature::SetLastAssociateCommand(int32_t)
constexpr uintptr_t CNWSCreature__SetLastAssociateCommand = 0x0813E374;
// void CNWSCreature::SetLastBlockingDoor(uint32_t)
constexpr uintptr_t CNWSCreature__SetLastBlockingDoor = 0x0813EB20;
// void CNWSCreature::SetLastCounterDomainLevel(unsigned char)
constexpr uintptr_t CNWSCreature__SetLastCounterDomainLevel = 0x0813E2AC;
// void CNWSCreature::SetLastCounterMetaType(unsigned char)
constexpr uintptr_t CNWSCreature__SetLastCounterMetaType = 0x0813E288;
// void CNWSCreature::SetLastCounterSpellClass(unsigned char)
constexpr uintptr_t CNWSCreature__SetLastCounterSpellClass = 0x0813E264;
// void CNWSCreature::SetLastCounterSpellID(int32_t)
constexpr uintptr_t CNWSCreature__SetLastCounterSpellID = 0x0813E240;
// void CNWSCreature::SetLastHearbeatTime(uint32_t, uint32_t)
constexpr uintptr_t CNWSCreature__SetLastHearbeatTime = 0x0813EFB8;
// void CNWSCreature::SetLastHideRoll(unsigned char)
constexpr uintptr_t CNWSCreature__SetLastHideRoll = 0x0813E928;
// void CNWSCreature::SetLastItemCastSpell(int32_t)
constexpr uintptr_t CNWSCreature__SetLastItemCastSpell = 0x0813D7BC;
// void CNWSCreature::SetLastItemCastSpellLevel(int32_t)
constexpr uintptr_t CNWSCreature__SetLastItemCastSpellLevel = 0x0813D7E0;
// void CNWSCreature::SetLastListenRoll(unsigned char)
constexpr uintptr_t CNWSCreature__SetLastListenRoll = 0x0813E904;
// void CNWSCreature::SetLastMoveSilentlyRoll(unsigned char)
constexpr uintptr_t CNWSCreature__SetLastMoveSilentlyRoll = 0x0813E94C;
// void CNWSCreature::SetLastPerceived(uint32_t)
constexpr uintptr_t CNWSCreature__SetLastPerceived = 0x0813E83C;
// void CNWSCreature::SetLastPerceptionHeard(int32_t)
constexpr uintptr_t CNWSCreature__SetLastPerceptionHeard = 0x0813E860;
// void CNWSCreature::SetLastPerceptionInaudible(int32_t)
constexpr uintptr_t CNWSCreature__SetLastPerceptionInaudible = 0x0813E8A8;
// void CNWSCreature::SetLastPerceptionSeen(int32_t)
constexpr uintptr_t CNWSCreature__SetLastPerceptionSeen = 0x0813E884;
// void CNWSCreature::SetLastPerceptionVanished(int32_t)
constexpr uintptr_t CNWSCreature__SetLastPerceptionVanished = 0x0813E8CC;
// void CNWSCreature::SetLastPickupFailed(int32_t)
constexpr uintptr_t CNWSCreature__SetLastPickupFailed = 0x0813E7F4;
// void CNWSCreature::SetLastSpellCastItem(uint32_t)
constexpr uintptr_t CNWSCreature__SetLastSpellCastItem = 0x0813D7F4;
// void CNWSCreature::SetLastSpellUnReadied(int32_t)
constexpr uintptr_t CNWSCreature__SetLastSpellUnReadied = 0x0813D798;
// void CNWSCreature::SetLastSpotRoll(unsigned char)
constexpr uintptr_t CNWSCreature__SetLastSpotRoll = 0x0813E8E0;
// void CNWSCreature::SetLastTrapDetected(uint32_t)
constexpr uintptr_t CNWSCreature__SetLastTrapDetected = 0x0813D870;
// void CNWSCreature::SetListenCheckDistance(float)
constexpr uintptr_t CNWSCreature__SetListenCheckDistance = 0x0813ECB4;
// void CNWSCreature::SetLockAnimationPlayed(int32_t)
constexpr uintptr_t CNWSCreature__SetLockAnimationPlayed = 0x0813D61C;
// public void CNWSCreature::SetLockOrientationToObject(uint32_t)
constexpr uintptr_t CNWSCreature__SetLockOrientationToObject = 0x0812C8BC;
// void CNWSCreature::SetLootable(int32_t)
constexpr uintptr_t CNWSCreature__SetLootable = 0x0813EAB4;
// void CNWSCreature::SetMagicalArrowsEquipped(int32_t)
constexpr uintptr_t CNWSCreature__SetMagicalArrowsEquipped = 0x0813D4FC;
// void CNWSCreature::SetMagicalBoltsEquipped(int32_t)
constexpr uintptr_t CNWSCreature__SetMagicalBoltsEquipped = 0x0813D520;
// void CNWSCreature::SetMagicalBulletsEquipped(int32_t)
constexpr uintptr_t CNWSCreature__SetMagicalBulletsEquipped = 0x0813D544;
// void CNWSCreature::SetMasterId(uint32_t)
constexpr uintptr_t CNWSCreature__SetMasterId = 0x0813E35C;
// void CNWSCreature::SetMaxListenCheckDistance(float)
constexpr uintptr_t CNWSCreature__SetMaxListenCheckDistance = 0x0813ECDC;
// void CNWSCreature::SetMaxSpotCheckDistance(float)
constexpr uintptr_t CNWSCreature__SetMaxSpotCheckDistance = 0x0813ECC8;
// public void CNWSCreature::SetMode(unsigned char, int32_t)
constexpr uintptr_t CNWSCreature__SetMode = 0x0813C66C;
// public void CNWSCreature::SetModelType(CExoString)
constexpr uintptr_t CNWSCreature__SetModelType = 0x0813DB3C;
// public void CNWSCreature::SetMovementRateFactor(float)
constexpr uintptr_t CNWSCreature__SetMovementRateFactor = 0x08124130;
// void CNWSCreature::SetNoPermDeath(int32_t)
constexpr uintptr_t CNWSCreature__SetNoPermDeath = 0x0813EF28;
// void CNWSCreature::SetNumAreas(int32_t)
constexpr uintptr_t CNWSCreature__SetNumAreas = 0x0813EBF4;
// void CNWSCreature::SetNumCharSheetViewers(int32_t)
constexpr uintptr_t CNWSCreature__SetNumCharSheetViewers = 0x0813DA58;
// void CNWSCreature::SetOnCreationScriptExecuted(int32_t)
constexpr uintptr_t CNWSCreature__SetOnCreationScriptExecuted = 0x0813DE60;
// void CNWSCreature::SetOriginalFactionId(int32_t)
constexpr uintptr_t CNWSCreature__SetOriginalFactionId = 0x0813E6DC;
// void CNWSCreature::SetPassiveAttackBehaviour(int32_t)
constexpr uintptr_t CNWSCreature__SetPassiveAttackBehaviour = 0x0813E980;
// public void CNWSCreature::SetPCDominatedScripts(void)
constexpr uintptr_t CNWSCreature__SetPCDominatedScripts = 0x0810FA40;
// void CNWSCreature::SetPendingRealization(int32_t)
constexpr uintptr_t CNWSCreature__SetPendingRealization = 0x0813EF94;
// void CNWSCreature::SetPersonalReputation(CExoArrayListTemplatedCNWSPersonalReputation*)
constexpr uintptr_t CNWSCreature__SetPersonalReputation = 0x0813E74C;
// void CNWSCreature::SetPickUpItemAnimationPlayed(int32_t)
constexpr uintptr_t CNWSCreature__SetPickUpItemAnimationPlayed = 0x0813D664;
// void CNWSCreature::SetPlayerCharacter(int32_t)
constexpr uintptr_t CNWSCreature__SetPlayerCharacter = 0x0813E300;
// void CNWSCreature::SetPolymorphLocked(int32_t)
constexpr uintptr_t CNWSCreature__SetPolymorphLocked = 0x0813EEE0;
// void CNWSCreature::SetPonyRide(int32_t)
constexpr uintptr_t CNWSCreature__SetPonyRide = 0x0813D8D4;
// public void CNWSCreature::SetPortrait(CResRef)
constexpr uintptr_t CNWSCreature__SetPortrait = 0x0813EB90;
// public void CNWSCreature::SetPortraitId(uint16_t)
constexpr uintptr_t CNWSCreature__SetPortraitId = 0x0812E7F4;
// void CNWSCreature::SetPreDominationFactionId(int32_t)
constexpr uintptr_t CNWSCreature__SetPreDominationFactionId = 0x0813E6F4;
// void CNWSCreature::SetPreferredAttackDistance(float)
constexpr uintptr_t CNWSCreature__SetPreferredAttackDistance = 0x0813DBE0;
// void CNWSCreature::SetPrePolymorphCON(int32_t)
constexpr uintptr_t CNWSCreature__SetPrePolymorphCON = 0x0813EDF4;
// void CNWSCreature::SetPrePolymorphDEX(int32_t)
constexpr uintptr_t CNWSCreature__SetPrePolymorphDEX = 0x0813EE08;
// void CNWSCreature::SetPrePolymorphSTR(int32_t)
constexpr uintptr_t CNWSCreature__SetPrePolymorphSTR = 0x0813EDE0;
// public void CNWSCreature::SetPVPPlayerLikesMe(uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__SetPVPPlayerLikesMe = 0x081125B4;
// public void CNWSCreature::SetQuickbarButton_AssociateCommand(unsigned char, int32_t, uint16_t, uint32_t)
constexpr uintptr_t CNWSCreature__SetQuickbarButton_AssociateCommand = 0x0813CA38;
// public void CNWSCreature::SetQuickbarButton_CommandLine(unsigned char, const CExoString&, const CExoString&)
constexpr uintptr_t CNWSCreature__SetQuickbarButton_CommandLine = 0x0813CD20;
// public void CNWSCreature::SetQuickbarButton_DM_General_ResRefParam(unsigned char, unsigned char, const CResRef&)
constexpr uintptr_t CNWSCreature__SetQuickbarButton_DM_General_ResRefParam = 0x0813CD8C;
// public void CNWSCreature::SetQuickbarButton_DungeonMaster_CreateCreature(unsigned char, const CResRef&, const CExoString&)
constexpr uintptr_t CNWSCreature__SetQuickbarButton_DungeonMaster_CreateCreature = 0x0813CA80;
// public void CNWSCreature::SetQuickbarButton_DungeonMaster_CreateEncounter(unsigned char, const CResRef&, const CExoString&)
constexpr uintptr_t CNWSCreature__SetQuickbarButton_DungeonMaster_CreateEncounter = 0x0813CB40;
// public void CNWSCreature::SetQuickbarButton_DungeonMaster_CreateItem(unsigned char, const CResRef&, const CExoString&)
constexpr uintptr_t CNWSCreature__SetQuickbarButton_DungeonMaster_CreateItem = 0x0813CAE0;
// public void CNWSCreature::SetQuickbarButton_DungeonMaster_CreatePlaceable(unsigned char, const CResRef&, const CExoString&)
constexpr uintptr_t CNWSCreature__SetQuickbarButton_DungeonMaster_CreatePlaceable = 0x0813CCC0;
// public void CNWSCreature::SetQuickbarButton_DungeonMaster_CreatePortal(unsigned char, const CResRef&, const CExoString&)
constexpr uintptr_t CNWSCreature__SetQuickbarButton_DungeonMaster_CreatePortal = 0x0813CC60;
// public void CNWSCreature::SetQuickbarButton_DungeonMaster_CreateTrigger(unsigned char, const CResRef&, const CExoString&)
constexpr uintptr_t CNWSCreature__SetQuickbarButton_DungeonMaster_CreateTrigger = 0x0813CC00;
// public void CNWSCreature::SetQuickbarButton_DungeonMaster_CreateWaypoint(unsigned char, const CResRef&, const CExoString&)
constexpr uintptr_t CNWSCreature__SetQuickbarButton_DungeonMaster_CreateWaypoint = 0x0813CBA0;
// public void CNWSCreature::SetQuickbarButton_GeneralINTParam(unsigned char, unsigned char, int32_t)
constexpr uintptr_t CNWSCreature__SetQuickbarButton_GeneralINTParam = 0x0813CE00;
// public void CNWSCreature::SetQuickbarButton_GeneralNoParam(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreature__SetQuickbarButton_GeneralNoParam = 0x0813CDD4;
// public void CNWSCreature::SetQuickbarButton_Item(unsigned char, uint32_t, int32_t, uint32_t)
constexpr uintptr_t CNWSCreature__SetQuickbarButton_Item = 0x0813C960;
// public void CNWSCreature::SetQuickbarButton_Spell(unsigned char, unsigned char, uint32_t, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreature__SetQuickbarButton_Spell = 0x0813C9A0;
// public void CNWSCreature::SetQuickbarButton_SpellLikeAbility(unsigned char, uint32_t, unsigned char)
constexpr uintptr_t CNWSCreature__SetQuickbarButton_SpellLikeAbility = 0x0813C9FC;
// void CNWSCreature::SetRepositoryArrayIndex(uint16_t)
constexpr uintptr_t CNWSCreature__SetRepositoryArrayIndex = 0x0813DC58;
// void CNWSCreature::SetReputation(CExoArrayListTemplatedint*)
constexpr uintptr_t CNWSCreature__SetReputation = 0x0813E70C;
// public void CNWSCreature::SetScriptName(int32_t, CExoString)
constexpr uintptr_t CNWSCreature__SetScriptName = 0x0813D720;
// void CNWSCreature::SetSilent(int32_t)
constexpr uintptr_t CNWSCreature__SetSilent = 0x0813E074;
// void CNWSCreature::SetSittingObject(uint32_t)
constexpr uintptr_t CNWSCreature__SetSittingObject = 0x0813D4D8;
// void CNWSCreature::SetSlowed(int32_t)
constexpr uintptr_t CNWSCreature__SetSlowed = 0x0813E0BC;
// void CNWSCreature::SetSoundSet(uint16_t)
constexpr uintptr_t CNWSCreature__SetSoundSet = 0x0813EF4C;
// void CNWSCreature::SetSpellTarget(uint32_t)
constexpr uintptr_t CNWSCreature__SetSpellTarget = 0x0813EA6C;
// void CNWSCreature::SetSpotCheckDistance(float)
constexpr uintptr_t CNWSCreature__SetSpotCheckDistance = 0x0813ECA0;
// public void CNWSCreature::SetStandardFactionReputation(int32_t, int32_t)
constexpr uintptr_t CNWSCreature__SetStandardFactionReputation = 0x08112938;
// void CNWSCreature::SetStealAnimationPlayed(int32_t)
constexpr uintptr_t CNWSCreature__SetStealAnimationPlayed = 0x0813D568;
// void CNWSCreature::SetStealAttemptDetected(int32_t)
constexpr uintptr_t CNWSCreature__SetStealAttemptDetected = 0x0813D58C;
// public void CNWSCreature::SetStealthMode(unsigned char)
constexpr uintptr_t CNWSCreature__SetStealthMode = 0x080F975C;
// void CNWSCreature::SetSummonedAnimalCompanion(int32_t)
constexpr uintptr_t CNWSCreature__SetSummonedAnimalCompanion = 0x0813E3E0;
// void CNWSCreature::SetSummonedFamiliar(int32_t)
constexpr uintptr_t CNWSCreature__SetSummonedFamiliar = 0x0813E518;
// void CNWSCreature::SetTaunt(int32_t)
constexpr uintptr_t CNWSCreature__SetTaunt = 0x0813E128;
// void CNWSCreature::SetTauntAnimationPlayed(int32_t)
constexpr uintptr_t CNWSCreature__SetTauntAnimationPlayed = 0x0813D688;
// public void CNWSCreature::SetTileExplored(uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreature__SetTileExplored = 0x08124E4C;
// void CNWSCreature::SetTrapAnimationPlayed(int32_t)
constexpr uintptr_t CNWSCreature__SetTrapAnimationPlayed = 0x0813D5D4;
// void CNWSCreature::SetUnlockAnimationPlayed(int32_t)
constexpr uintptr_t CNWSCreature__SetUnlockAnimationPlayed = 0x0813D5F8;
// void CNWSCreature::SetUpdateCombatInformation(int32_t)
constexpr uintptr_t CNWSCreature__SetUpdateCombatInformation = 0x0813DA34;
// void CNWSCreature::SetUpdateDisplayName(int32_t)
constexpr uintptr_t CNWSCreature__SetUpdateDisplayName = 0x0813DE18;
// void CNWSCreature::SetVisionType(unsigned char)
constexpr uintptr_t CNWSCreature__SetVisionType = 0x0813DFD4;
// void CNWSCreature::SetWalkAnimation(unsigned char)
constexpr uintptr_t CNWSCreature__SetWalkAnimation = 0x0813E15C;
// void CNWSCreature::SetWeaponScale(float)
constexpr uintptr_t CNWSCreature__SetWeaponScale = 0x0813DBBC;
// protected void CNWSCreature::SignalMeleeDamage(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__SignalMeleeDamage = 0x080EACAC;
// protected void CNWSCreature::SignalRangedDamage(CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreature__SignalRangedDamage = 0x080E94DC;
// public void CNWSCreature::SpawnInHeartbeatPerception(int32_t)
constexpr uintptr_t CNWSCreature__SpawnInHeartbeatPerception = 0x0811972C;
// public void CNWSCreature::SplitItem(CNWSItem*, int32_t)
constexpr uintptr_t CNWSCreature__SplitItem = 0x0811A1D0;
// public int32_t CNWSCreature::StartBarter(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSCreature__StartBarter = 0x0812FC6C;
// public void CNWSCreature::StartGuiTimingBar(uint32_t, unsigned char)
constexpr uintptr_t CNWSCreature__StartGuiTimingBar = 0x0813D1A0;
// public void CNWSCreature::StopGuiTimingBar(void)
constexpr uintptr_t CNWSCreature__StopGuiTimingBar = 0x0813D224;
// public void CNWSCreature::StoreCutsceneVars(void)
constexpr uintptr_t CNWSCreature__StoreCutsceneVars = 0x0813D424;
// public void CNWSCreature::SummonAnimalCompanion(void)
constexpr uintptr_t CNWSCreature__SummonAnimalCompanion = 0x0810D1C0;
// protected void CNWSCreature::SummonAssociate(CResRef, CExoString, uint16_t)
constexpr uintptr_t CNWSCreature__SummonAssociate = 0x0810DA28;
// public void CNWSCreature::SummonFamiliar(void)
constexpr uintptr_t CNWSCreature__SummonFamiliar = 0x0810D628;
// void CNWSCreature::TerminateClientSidePath(int32_t)
constexpr uintptr_t CNWSCreature__TerminateClientSidePath = 0x08112F5C;
// void CNWSCreature::TestAIStateAsMode(int32_t)
constexpr uintptr_t CNWSCreature__TestAIStateAsMode = 0x0813C214;
// public int32_t CNWSCreature::ToggleMode(unsigned char)
constexpr uintptr_t CNWSCreature__ToggleMode = 0x0812BCB4;
// public int32_t CNWSCreature::TransferGold(uint32_t, Vector, uint32_t, int32_t, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreature__TransferGold = 0x0812F3E8;
// public int32_t CNWSCreature::TranslateAddress(uint32_t, int32_t, int32_t, int32_t*, int32_t*)
constexpr uintptr_t CNWSCreature__TranslateAddress = 0x0813C4B0;
// public int32_t CNWSCreature::UnequipItem(CNWSItem*, int32_t)
constexpr uintptr_t CNWSCreature__UnequipItem = 0x0811B7B0;
// public int32_t CNWSCreature::UnPolymorph(CGameEffect*)
constexpr uintptr_t CNWSCreature__UnPolymorph = 0x081369F8;
// public void CNWSCreature::UnpossessCreature(void)
constexpr uintptr_t CNWSCreature__UnpossessCreature = 0x0810E83C;
// public void CNWSCreature::UnpossessCreatureDM(void)
constexpr uintptr_t CNWSCreature__UnpossessCreatureDM = 0x08113420;
// public void CNWSCreature::UnpossessFamiliar(void)
constexpr uintptr_t CNWSCreature__UnpossessFamiliar = 0x0810E174;
// public void CNWSCreature::UnsummonMyself(void)
constexpr uintptr_t CNWSCreature__UnsummonMyself = 0x0810CF84;
// public void CNWSCreature::UpdateActionQueue(void)
constexpr uintptr_t CNWSCreature__UpdateActionQueue = 0x08139CA4;
// public void CNWSCreature::UpdateAppearanceDependantInfo(void)
constexpr uintptr_t CNWSCreature__UpdateAppearanceDependantInfo = 0x0812F900;
// public void CNWSCreature::UpdateAppearanceForEquippedItems(void)
constexpr uintptr_t CNWSCreature__UpdateAppearanceForEquippedItems = 0x0812EFA0;
// protected void CNWSCreature::UpdateAttributesOnEffect(CGameEffect*, int32_t)
constexpr uintptr_t CNWSCreature__UpdateAttributesOnEffect = 0x0811E0A8;
// public void CNWSCreature::UpdateAutoMap(uint32_t)
constexpr uintptr_t CNWSCreature__UpdateAutoMap = 0x08119E24;
// protected void CNWSCreature::UpdateCombatRoundTimer(void)
constexpr uintptr_t CNWSCreature__UpdateCombatRoundTimer = 0x0811D740;
// protected void CNWSCreature::UpdateEffectPtrs(void)
constexpr uintptr_t CNWSCreature__UpdateEffectPtrs = 0x0811DD04;
// public void CNWSCreature::UpdateEncumbranceState(int32_t)
constexpr uintptr_t CNWSCreature__UpdateEncumbranceState = 0x08111E94;
// void CNWSCreature::UpdateExcitedStateTimer(void)
constexpr uintptr_t CNWSCreature__UpdateExcitedStateTimer = 0x0812D3C8;
// public void CNWSCreature::UpdatePersonalSpace(void)
constexpr uintptr_t CNWSCreature__UpdatePersonalSpace = 0x0812F6B4;
// public int32_t CNWSCreature::UpdateSpecialAttacks(void)
constexpr uintptr_t CNWSCreature__UpdateSpecialAttacks = 0x0813A374;
// public int32_t CNWSCreature::UpdateSubareasOnJumpPosition(Vector, uint32_t)
constexpr uintptr_t CNWSCreature__UpdateSubareasOnJumpPosition = 0x081037CC;
// public int32_t CNWSCreature::UpdateSubareasOnMoveTo(Vector, Vector, int32_t, CExoArrayListTemplatedunsignedlong*, int32_t)
constexpr uintptr_t CNWSCreature__UpdateSubareasOnMoveTo = 0x081035E0;
// protected void CNWSCreature::UpdateTrapCheck(void)
constexpr uintptr_t CNWSCreature__UpdateTrapCheck = 0x0811A2F4;
// void CNWSCreature::UpdateTrapCheckDM(void)
constexpr uintptr_t CNWSCreature__UpdateTrapCheckDM = 0x0813BFC4;
// public void CNWSCreature::UpdateVisibleList(void)
constexpr uintptr_t CNWSCreature__UpdateVisibleList = 0x08108500;
// public int32_t CNWSCreature::UseFeat(uint16_t, uint16_t, uint32_t, uint32_t, Vector*)
constexpr uintptr_t CNWSCreature__UseFeat = 0x0812A004;
// public int32_t CNWSCreature::UseItem(uint32_t, unsigned char, unsigned char, uint32_t, Vector, uint32_t)
constexpr uintptr_t CNWSCreature__UseItem = 0x0812B958;
// public int32_t CNWSCreature::UseLoreOnItem(uint32_t)
constexpr uintptr_t CNWSCreature__UseLoreOnItem = 0x08131680;
// public int32_t CNWSCreature::UseSkill(unsigned char, unsigned char, uint32_t, Vector, uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSCreature__UseSkill = 0x0812B1D8;
// public void CNWSCreature::ValidateCounterSpellData(uint32_t, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreature__ValidateCounterSpellData = 0x08127C08;
// protected uint32_t CNWSCreature::WalkUpdateLocation(void)
constexpr uintptr_t CNWSCreature__WalkUpdateLocation = 0x08104174;
// protected int32_t CNWSCreature::WalkUpdateLocationDistance(float, Vector*, Vector*, CExoArrayListTemplatedunsignedlong*)
constexpr uintptr_t CNWSCreature__WalkUpdateLocationDistance = 0x081048A0;
// protected int32_t CNWSCreature::WalkUpdateLocationTestDistance(Vector, Vector)
constexpr uintptr_t CNWSCreature__WalkUpdateLocationTestDistance = 0x08105040;

// public CNWSCreatureStats::CNWSCreatureStats(CNWSCreature*)
constexpr uintptr_t CNWSCreatureStats__CNWSCreatureStatsCtor__1 = 0x0813FBB4;
// public CNWSCreatureStats::~CNWSCreatureStats(void)
constexpr uintptr_t CNWSCreatureStats__CNWSCreatureStatsDtor = 0x0814035C;
// public void CNWSCreatureStats::AddExperience(uint32_t)
constexpr uintptr_t CNWSCreatureStats__AddExperience = 0x08152478;
// public void CNWSCreatureStats::AddFeat(uint16_t)
constexpr uintptr_t CNWSCreatureStats__AddFeat = 0x08153B14;
// public void CNWSCreatureStats::AddKnownSpell(unsigned char, uint32_t)
constexpr uintptr_t CNWSCreatureStats__AddKnownSpell = 0x08155118;
// void CNWSCreatureStats::AddSpellLikeAbilityToList(uint32_t, int32_t, unsigned char)
constexpr uintptr_t CNWSCreatureStats__AddSpellLikeAbilityToList = 0x08165078;
// public void CNWSCreatureStats::AdjustAlignment(unsigned char, int16_t, uint32_t)
constexpr uintptr_t CNWSCreatureStats__AdjustAlignment = 0x081497D0;
// public void CNWSCreatureStats::AdjustSpellUsesPerDay(void)
constexpr uintptr_t CNWSCreatureStats__AdjustSpellUsesPerDay = 0x08160088;
// public int32_t CNWSCreatureStats::AutoMemorizeSpells(int32_t)
constexpr uintptr_t CNWSCreatureStats__AutoMemorizeSpells = 0x0815C614;
// void CNWSCreatureStats::CalcLevelUpNumberFeats(unsigned char, unsigned char, unsigned char&, unsigned char&)
constexpr uintptr_t CNWSCreatureStats__CalcLevelUpNumberFeats = 0x08160E60;
// public char CNWSCreatureStats::CalcStatModifier(unsigned char)
constexpr uintptr_t CNWSCreatureStats__CalcStatModifier = 0x08164554;
// public int32_t CNWSCreatureStats::CanChooseFeat(uint16_t, unsigned char, unsigned char, CExoArrayListTemplatedunsignedshort*)
constexpr uintptr_t CNWSCreatureStats__CanChooseFeat = 0x0815BC80;
// public int32_t CNWSCreatureStats::CanLevelUp(void)
constexpr uintptr_t CNWSCreatureStats__CanLevelUp = 0x08158354;
// private int32_t CNWSCreatureStats::CheckSpellSuitability(int32_t, CNWSpell*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, unsigned char&, int32_t)
constexpr uintptr_t CNWSCreatureStats__CheckSpellSuitability = 0x0815E04C;
// void CNWSCreatureStats::ClearFeats(void)
constexpr uintptr_t CNWSCreatureStats__ClearFeats = 0x08164648;
// public void CNWSCreatureStats::ClearMemorizedSpellSlot(unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__ClearMemorizedSpellSlot = 0x081648D0;
// public void CNWSCreatureStats::ComputeFeatBonuses(CExoArrayListTemplatedunsignedshort*, int32_t, int32_t)
constexpr uintptr_t CNWSCreatureStats__ComputeFeatBonuses = 0x08162C14;
// public unsigned char CNWSCreatureStats::ComputeNumberKnownSpellsLeft(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__ComputeNumberKnownSpellsLeft = 0x0815E24C;
// void CNWSCreatureStats::ConfirmDomainSpell(unsigned char, unsigned char, uint32_t)
constexpr uintptr_t CNWSCreatureStats__ConfirmDomainSpell = 0x08164800;
// public void CNWSCreatureStats::DecrementFeatRemainingUses(uint16_t)
constexpr uintptr_t CNWSCreatureStats__DecrementFeatRemainingUses = 0x081646EC;
// public void CNWSCreatureStats::DecrementSpellsPerDayLeft(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__DecrementSpellsPerDayLeft = 0x08164D04;
// void CNWSCreatureStats::FeatAcquired(uint16_t, CExoArrayListTemplatedunsignedshort*, int32_t)
constexpr uintptr_t CNWSCreatureStats__FeatAcquired = 0x08164ED4;
// public int32_t CNWSCreatureStats::FeatRequirementsMet(uint16_t, CExoArrayListTemplatedunsignedshort*)
constexpr uintptr_t CNWSCreatureStats__FeatRequirementsMet = 0x0815BF44;
// public int32_t CNWSCreatureStats::FeatRequirementsMetAfterLevelUp(uint16_t, CNWLevelStats*, unsigned char)
constexpr uintptr_t CNWSCreatureStats__FeatRequirementsMetAfterLevelUp = 0x08161160;
// public char CNWSCreatureStats::GetACNaturalBase(int32_t)
constexpr uintptr_t CNWSCreatureStats__GetACNaturalBase = 0x0815E684;
// void CNWSCreatureStats::GetAlignmentString(void)
constexpr uintptr_t CNWSCreatureStats__GetAlignmentString = 0x08151DFC;
// public int16_t CNWSCreatureStats::GetArmorClassVersus(CNWSCreature*, int32_t)
constexpr uintptr_t CNWSCreatureStats__GetArmorClassVersus = 0x0814088C;
// public int32_t CNWSCreatureStats::GetAttackModifierVersus(CNWSCreature*)
constexpr uintptr_t CNWSCreatureStats__GetAttackModifierVersus = 0x081445B4;
// public unsigned char CNWSCreatureStats::GetAttacksPerRound(void)
constexpr uintptr_t CNWSCreatureStats__GetAttacksPerRound = 0x08163D18;
// public int32_t CNWSCreatureStats::GetBaseAttackBonus(int32_t)
constexpr uintptr_t CNWSCreatureStats__GetBaseAttackBonus = 0x08142054;
// public char CNWSCreatureStats::GetBaseFortSavingThrow(void)
constexpr uintptr_t CNWSCreatureStats__GetBaseFortSavingThrow = 0x081529F0;
// public char CNWSCreatureStats::GetBaseReflexSavingThrow(void)
constexpr uintptr_t CNWSCreatureStats__GetBaseReflexSavingThrow = 0x08152CC0;
// public char CNWSCreatureStats::GetBaseWillSavingThrow(void)
constexpr uintptr_t CNWSCreatureStats__GetBaseWillSavingThrow = 0x08152B4C;
// public uint16_t CNWSCreatureStats::GetBonusFeat(uint16_t)
constexpr uintptr_t CNWSCreatureStats__GetBonusFeat = 0x08165550;
// void CNWSCreatureStats::GetCanUseRelatedCategory(int32_t, int32_t)
constexpr uintptr_t CNWSCreatureStats__GetCanUseRelatedCategory = 0x08165580;
// public int32_t CNWSCreatureStats::GetCanUseSkill(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetCanUseSkill = 0x08152E1C;
// public int32_t CNWSCreatureStats::GetCanUseSkillAfterLevelUp(uint16_t, CNWLevelStats*)
constexpr uintptr_t CNWSCreatureStats__GetCanUseSkillAfterLevelUp = 0x08161918;
// void CNWSCreatureStats::GetCasterLevel(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetCasterLevel = 0x0815FE20;
// public unsigned char CNWSCreatureStats::GetCHAStat(void)
constexpr uintptr_t CNWSCreatureStats__GetCHAStat = 0x081641AC;
// public unsigned char CNWSCreatureStats::GetClass(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetClass = 0x08163DA4;
// public CNWSCreatureStats_ClassInfo* CNWSCreatureStats::GetClassInfo(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetClassInfo = 0x08163DD0;
// public unsigned char CNWSCreatureStats::GetClassLevel(unsigned char, int32_t)
constexpr uintptr_t CNWSCreatureStats__GetClassLevel = 0x08163E50;
// public unsigned char CNWSCreatureStats::GetClassNegativeLevels(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetClassNegativeLevels = 0x08163E9C;
// void CNWSCreatureStats::GetClassString(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetClassString = 0x081643FC;
// public unsigned char CNWSCreatureStats::GetCONStat(void)
constexpr uintptr_t CNWSCreatureStats__GetCONStat = 0x08164020;
// public unsigned char CNWSCreatureStats::GetCreatureDamageDice(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetCreatureDamageDice = 0x0814425C;
// public unsigned char CNWSCreatureStats::GetCreatureDamageDie(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetCreatureDamageDie = 0x08144368;
// public int32_t CNWSCreatureStats::GetCreatureHasTalent(int32_t, int32_t, unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetCreatureHasTalent = 0x08155888;
// public int32_t CNWSCreatureStats::GetCreatureTalentRandom(int32_t, int32_t, int32_t&, int32_t&, unsigned char&, uint32_t&, int32_t&, unsigned char&, unsigned char&)
constexpr uintptr_t CNWSCreatureStats__GetCreatureTalentRandom = 0x08155B18;
// public int32_t CNWSCreatureStats::GetCreatureTalentRandomFeat(int32_t, int32_t, int32_t&, int32_t&, unsigned char&)
constexpr uintptr_t CNWSCreatureStats__GetCreatureTalentRandomFeat = 0x0815F9E8;
// public int32_t CNWSCreatureStats::GetCreatureTalentRandomKnownSpell(int32_t, int32_t, int32_t&, int32_t&, unsigned char&, int32_t)
constexpr uintptr_t CNWSCreatureStats__GetCreatureTalentRandomKnownSpell = 0x08160220;
// public int32_t CNWSCreatureStats::GetCreatureTalentRandomMemorisedSpell(int32_t, int32_t, int32_t&, int32_t&, unsigned char&, int32_t, unsigned char&)
constexpr uintptr_t CNWSCreatureStats__GetCreatureTalentRandomMemorisedSpell = 0x08160764;
// public int32_t CNWSCreatureStats::GetCreatureTalentRandomSkill(int32_t, int32_t, int32_t&, int32_t&, unsigned char&)
constexpr uintptr_t CNWSCreatureStats__GetCreatureTalentRandomSkill = 0x0815FB84;
// public int32_t CNWSCreatureStats::GetCreatureTalentRandomSpell(int32_t, int32_t, int32_t&, int32_t&, unsigned char&, unsigned char&)
constexpr uintptr_t CNWSCreatureStats__GetCreatureTalentRandomSpell = 0x08165404;
// public int32_t CNWSCreatureStats::GetCreatureTalentRandomSpellFromItem(int32_t, int32_t, int32_t&, int32_t&, unsigned char&, uint32_t&, int32_t&)
constexpr uintptr_t CNWSCreatureStats__GetCreatureTalentRandomSpellFromItem = 0x0815F13C;
// public int32_t CNWSCreatureStats::GetCreatureTalentRandomSpellLikeAbility(int32_t, int32_t, int32_t&, int32_t&, unsigned char&, unsigned char&)
constexpr uintptr_t CNWSCreatureStats__GetCreatureTalentRandomSpellLikeAbility = 0x0815EE34;
// public int32_t CNWSCreatureStats::GetCriticalHitMultiplier(int32_t)
constexpr uintptr_t CNWSCreatureStats__GetCriticalHitMultiplier = 0x0814C4A0;
// public int32_t CNWSCreatureStats::GetCriticalHitRoll(int32_t)
constexpr uintptr_t CNWSCreatureStats__GetCriticalHitRoll = 0x0814C31C;
// public int32_t CNWSCreatureStats::GetDamageBonus(CNWSCreature*, int32_t)
constexpr uintptr_t CNWSCreatureStats__GetDamageBonus = 0x081476F0;
// public int32_t CNWSCreatureStats::GetDamageRoll(CNWSObject*, int32_t, int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreatureStats__GetDamageRoll = 0x0814A8F0;
// public char CNWSCreatureStats::GetDEXMod(int32_t)
constexpr uintptr_t CNWSCreatureStats__GetDEXMod = 0x08151868;
// public unsigned char CNWSCreatureStats::GetDEXStat(void)
constexpr uintptr_t CNWSCreatureStats__GetDEXStat = 0x081517B8;
// public unsigned char CNWSCreatureStats::GetDomain1(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetDomain1 = 0x08164E60;
// public unsigned char CNWSCreatureStats::GetDomain2(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetDomain2 = 0x08164EAC;
// public int32_t CNWSCreatureStats::GetEffectImmunity(unsigned char, CNWSCreature*)
constexpr uintptr_t CNWSCreatureStats__GetEffectImmunity = 0x0815FF10;
// public unsigned char CNWSCreatureStats::GetEffectiveCRForPotentialLevel(void)
constexpr uintptr_t CNWSCreatureStats__GetEffectiveCRForPotentialLevel = 0x0815284C;
// public int32_t CNWSCreatureStats::GetEpicWeaponDevastatingCritical(CNWSItem*)
constexpr uintptr_t CNWSCreatureStats__GetEpicWeaponDevastatingCritical = 0x08156CCC;
// public int32_t CNWSCreatureStats::GetEpicWeaponFocus(CNWSItem*)
constexpr uintptr_t CNWSCreatureStats__GetEpicWeaponFocus = 0x08155FF0;
// public int32_t CNWSCreatureStats::GetEpicWeaponOverwhelmingCritical(CNWSItem*)
constexpr uintptr_t CNWSCreatureStats__GetEpicWeaponOverwhelmingCritical = 0x08156A18;
// public int32_t CNWSCreatureStats::GetEpicWeaponSpecialization(CNWSItem*)
constexpr uintptr_t CNWSCreatureStats__GetEpicWeaponSpecialization = 0x08156550;
// public uint32_t CNWSCreatureStats::GetExpNeededForLevelUp(void)
constexpr uintptr_t CNWSCreatureStats__GetExpNeededForLevelUp = 0x08152718;
// public int32_t CNWSCreatureStats::GetFavoredEnemyBonus(CNWSCreature*)
constexpr uintptr_t CNWSCreatureStats__GetFavoredEnemyBonus = 0x0815E9E0;
// public uint16_t CNWSCreatureStats::GetFeat(uint16_t)
constexpr uintptr_t CNWSCreatureStats__GetFeat = 0x08165520;
// public unsigned char CNWSCreatureStats::GetFeatRemainingUses(uint16_t)
constexpr uintptr_t CNWSCreatureStats__GetFeatRemainingUses = 0x08153E00;
// public unsigned char CNWSCreatureStats::GetFeatSourceClass(uint16_t)
constexpr uintptr_t CNWSCreatureStats__GetFeatSourceClass = 0x081623F4;
// public unsigned char CNWSCreatureStats::GetFeatTotalUses(uint16_t)
constexpr uintptr_t CNWSCreatureStats__GetFeatTotalUses = 0x0815479C;
// public char CNWSCreatureStats::GetFortSavingThrow(int32_t)
constexpr uintptr_t CNWSCreatureStats__GetFortSavingThrow = 0x08164F40;
// public CExoString CNWSCreatureStats::GetFullName(void)
constexpr uintptr_t CNWSCreatureStats__GetFullName = 0x08163C20;
// void CNWSCreatureStats::GetHasLostClassAbilities(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetHasLostClassAbilities = 0x08163EF8;
// public int32_t CNWSCreatureStats::GetHasSilencedSpell(uint32_t)
constexpr uintptr_t CNWSCreatureStats__GetHasSilencedSpell = 0x08155520;
// public int32_t CNWSCreatureStats::GetHasStilledSpell(uint32_t)
constexpr uintptr_t CNWSCreatureStats__GetHasStilledSpell = 0x081556D8;
// public uint32_t CNWSCreatureStats::GetHighestLevelKnown(void)
constexpr uintptr_t CNWSCreatureStats__GetHighestLevelKnown = 0x08164BCC;
// public uint16_t CNWSCreatureStats::GetHighestLevelOfFeat(uint16_t)
constexpr uintptr_t CNWSCreatureStats__GetHighestLevelOfFeat = 0x0816562C;
// public unsigned char CNWSCreatureStats::GetHitDie(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetHitDie = 0x081578D8;
// public unsigned char CNWSCreatureStats::GetINTStat(void)
constexpr uintptr_t CNWSCreatureStats__GetINTStat = 0x081640A4;
// public unsigned char CNWSCreatureStats::GetIsClass(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetIsClass = 0x08163DFC;
// public int32_t CNWSCreatureStats::GetIsClassAvailable(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetIsClassAvailable = 0x08158534;
// public int32_t CNWSCreatureStats::GetIsDomainSpell(unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetIsDomainSpell = 0x08164848;
// public int32_t CNWSCreatureStats::GetIsEpitomeOfAlignment(void)
constexpr uintptr_t CNWSCreatureStats__GetIsEpitomeOfAlignment = 0x0814954C;
// void CNWSCreatureStats::GetIsInKnownSpellList(unsigned char, uint32_t)
constexpr uintptr_t CNWSCreatureStats__GetIsInKnownSpellList = 0x0815DF28;
// public int32_t CNWSCreatureStats::GetIsInSpellLikeAbilityList(uint32_t)
constexpr uintptr_t CNWSCreatureStats__GetIsInSpellLikeAbilityList = 0x081651EC;
// public int32_t CNWSCreatureStats::GetIsWeaponOfChoice(uint32_t)
constexpr uintptr_t CNWSCreatureStats__GetIsWeaponOfChoice = 0x08160F50;
// public uint32_t CNWSCreatureStats::GetKnownSpell(unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetKnownSpell = 0x0816491C;
// void CNWSCreatureStats::GetLargePortrait(void)
constexpr uintptr_t CNWSCreatureStats__GetLargePortrait = 0x081642BC;
// public unsigned char CNWSCreatureStats::GetLevel(int32_t)
constexpr uintptr_t CNWSCreatureStats__GetLevel = 0x08163CC8;
// public CNWLevelStats* CNWSCreatureStats::GetLevelStats(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetLevelStats = 0x08163EC8;
// public int32_t CNWSCreatureStats::GetMeetsPrestigeClassRequirements(CNWClass*)
constexpr uintptr_t CNWSCreatureStats__GetMeetsPrestigeClassRequirements = 0x08158748;
// public int32_t CNWSCreatureStats::GetMeleeAttackBonus(int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreatureStats__GetMeleeAttackBonus = 0x08143068;
// public int32_t CNWSCreatureStats::GetMeleeDamageBonus(int32_t, unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetMeleeDamageBonus = 0x08143524;
// public uint32_t CNWSCreatureStats::GetMemorizedSpellInSlot(unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetMemorizedSpellInSlot = 0x08164984;
// public unsigned char CNWSCreatureStats::GetMemorizedSpellInSlotMetaType(unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetMemorizedSpellInSlotMetaType = 0x08164B00;
// public unsigned char CNWSCreatureStats::GetMemorizedSpellInSlotReady(unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetMemorizedSpellInSlotReady = 0x08164A08;
// public unsigned char CNWSCreatureStats::GetMemorizedSpellReadyCount(uint32_t)
constexpr uintptr_t CNWSCreatureStats__GetMemorizedSpellReadyCount__0 = 0x0815E5AC;
// public unsigned char CNWSCreatureStats::GetMemorizedSpellReadyCount(unsigned char, uint32_t, unsigned char*, unsigned char*)
constexpr uintptr_t CNWSCreatureStats__GetMemorizedSpellReadyCount__1 = 0x08165360;
// public unsigned char CNWSCreatureStats::GetMemorizedSpellReadyCount(unsigned char, uint32_t, unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetMemorizedSpellReadyCount__2 = 0x081653B0;
// public uint16_t CNWSCreatureStats::GetNumberKnownSpells(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetNumberKnownSpells = 0x08164B8C;
// public unsigned char CNWSCreatureStats::GetNumberMemorizedSpellSlots(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetNumberMemorizedSpellSlots = 0x08164C34;
// public int32_t CNWSCreatureStats::GetNumLevelsOfClass(unsigned char, int32_t)
constexpr uintptr_t CNWSCreatureStats__GetNumLevelsOfClass__0 = 0x081634E0;
// public int32_t CNWSCreatureStats::GetNumLevelsOfClass(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetNumLevelsOfClass__1 = 0x08165750;
// public unsigned char CNWSCreatureStats::GetPotentialLevel(void)
constexpr uintptr_t CNWSCreatureStats__GetPotentialLevel = 0x08152794;
// public unsigned char CNWSCreatureStats::GetPrimaryMod(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetPrimaryMod = 0x0815D778;
// void CNWSCreatureStats::GetRaceString(void)
constexpr uintptr_t CNWSCreatureStats__GetRaceString = 0x08164348;
// public int32_t CNWSCreatureStats::GetRangedAttackBonus(int32_t, int32_t)
constexpr uintptr_t CNWSCreatureStats__GetRangedAttackBonus = 0x0814374C;
// public int32_t CNWSCreatureStats::GetRangedDamageBonus(void)
constexpr uintptr_t CNWSCreatureStats__GetRangedDamageBonus = 0x08143B5C;
// public char CNWSCreatureStats::GetReflexSavingThrow(int32_t)
constexpr uintptr_t CNWSCreatureStats__GetReflexSavingThrow = 0x0815DB54;
// public unsigned char CNWSCreatureStats::GetSchool(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetSchool = 0x08164E14;
// public unsigned char CNWSCreatureStats::GetSimpleAlignmentGoodEvil(void)
constexpr uintptr_t CNWSCreatureStats__GetSimpleAlignmentGoodEvil = 0x08163F74;
// public unsigned char CNWSCreatureStats::GetSimpleAlignmentLawChaos(void)
constexpr uintptr_t CNWSCreatureStats__GetSimpleAlignmentLawChaos = 0x08163F4C;
// public char CNWSCreatureStats::GetSkillRank(unsigned char, CNWSObject*, int32_t)
constexpr uintptr_t CNWSCreatureStats__GetSkillRank = 0x08152F5C;
// void CNWSCreatureStats::GetSmallPortrait(void)
constexpr uintptr_t CNWSCreatureStats__GetSmallPortrait = 0x08164230;
// public unsigned char CNWSCreatureStats::GetSpellFailure(unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetSpellFailure = 0x0816569C;
// public unsigned char CNWSCreatureStats::GetSpellGainWithBonus(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetSpellGainWithBonus = 0x08140520;
// public unsigned char CNWSCreatureStats::GetSpellGainWithBonusAfterLevelUp(unsigned char, unsigned char, CNWLevelStats*, unsigned char, int32_t)
constexpr uintptr_t CNWSCreatureStats__GetSpellGainWithBonusAfterLevelUp = 0x08161AB4;
// public unsigned char CNWSCreatureStats::GetSpellLikeAbilityCasterLevel(uint32_t)
constexpr uintptr_t CNWSCreatureStats__GetSpellLikeAbilityCasterLevel = 0x081655C8;
// public int32_t CNWSCreatureStats::GetSpellMinAbilityMet(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetSpellMinAbilityMet = 0x08157210;
// public char CNWSCreatureStats::GetSpellResistance(void)
constexpr uintptr_t CNWSCreatureStats__GetSpellResistance = 0x0815E3B0;
// public unsigned char CNWSCreatureStats::GetSpellsOfLevelReady(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetSpellsOfLevelReady = 0x081624BC;
// public unsigned char CNWSCreatureStats::GetSpellsPerDayLeft(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetSpellsPerDayLeft = 0x08164CC4;
// public unsigned char CNWSCreatureStats::GetSpellUsesLeft(uint32_t, unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetSpellUsesLeft = 0x08156F80;
// public void CNWSCreatureStats::GetStatBonusesFromFeats(CExoArrayListTemplatedunsignedshort*, int32_t*, unsigned char)
constexpr uintptr_t CNWSCreatureStats__GetStatBonusesFromFeats = 0x0816260C;
// public float CNWSCreatureStats::GetStatById(int32_t)
constexpr uintptr_t CNWSCreatureStats__GetStatById = 0x0815DC00;
// public unsigned char CNWSCreatureStats::GetSTRStat(void)
constexpr uintptr_t CNWSCreatureStats__GetSTRStat = 0x08163F9C;
// void CNWSCreatureStats::GetTag(void)
constexpr uintptr_t CNWSCreatureStats__GetTag = 0x0816457C;
// public char CNWSCreatureStats::GetTotalACSkillMod(void)
constexpr uintptr_t CNWSCreatureStats__GetTotalACSkillMod = 0x081656D8;
// public char CNWSCreatureStats::GetTotalCHABonus(void)
constexpr uintptr_t CNWSCreatureStats__GetTotalCHABonus = 0x08165334;
// public char CNWSCreatureStats::GetTotalCONBonus(void)
constexpr uintptr_t CNWSCreatureStats__GetTotalCONBonus = 0x081652B0;
// public char CNWSCreatureStats::GetTotalDEXBonus(void)
constexpr uintptr_t CNWSCreatureStats__GetTotalDEXBonus = 0x08165284;
// public char CNWSCreatureStats::GetTotalINTBonus(void)
constexpr uintptr_t CNWSCreatureStats__GetTotalINTBonus = 0x081652DC;
// void CNWSCreatureStats::GetTotalNegativeLevels(void)
constexpr uintptr_t CNWSCreatureStats__GetTotalNegativeLevels = 0x0816571C;
// public char CNWSCreatureStats::GetTotalSTRBonus(void)
constexpr uintptr_t CNWSCreatureStats__GetTotalSTRBonus = 0x08165258;
// public char CNWSCreatureStats::GetTotalWISBonus(void)
constexpr uintptr_t CNWSCreatureStats__GetTotalWISBonus = 0x08165308;
// public unsigned char CNWSCreatureStats::GetUnarmedDamageDice(void)
constexpr uintptr_t CNWSCreatureStats__GetUnarmedDamageDice = 0x08143F88;
// public unsigned char CNWSCreatureStats::GetUnarmedDamageDie(void)
constexpr uintptr_t CNWSCreatureStats__GetUnarmedDamageDie = 0x0814408C;
// public int32_t CNWSCreatureStats::GetUnarmedDamageRoll(CNWSObject*)
constexpr uintptr_t CNWSCreatureStats__GetUnarmedDamageRoll = 0x08144474;
// public int32_t CNWSCreatureStats::GetUseMonkAttackTables(int32_t)
constexpr uintptr_t CNWSCreatureStats__GetUseMonkAttackTables = 0x08143F00;
// public int32_t CNWSCreatureStats::GetWeaponFinesse(CNWSItem*)
constexpr uintptr_t CNWSCreatureStats__GetWeaponFinesse = 0x08155CF4;
// public int32_t CNWSCreatureStats::GetWeaponFocus(CNWSItem*)
constexpr uintptr_t CNWSCreatureStats__GetWeaponFocus = 0x08155DEC;
// public int32_t CNWSCreatureStats::GetWeaponImprovedCritical(CNWSItem*)
constexpr uintptr_t CNWSCreatureStats__GetWeaponImprovedCritical = 0x08156804;
// public int32_t CNWSCreatureStats::GetWeaponSpecialization(CNWSItem*)
constexpr uintptr_t CNWSCreatureStats__GetWeaponSpecialization = 0x081562A4;
// public char CNWSCreatureStats::GetWillSavingThrow(int32_t)
constexpr uintptr_t CNWSCreatureStats__GetWillSavingThrow = 0x08164FDC;
// public unsigned char CNWSCreatureStats::GetWISStat(void)
constexpr uintptr_t CNWSCreatureStats__GetWISStat = 0x08164128;
// public int32_t CNWSCreatureStats::HasFeat(uint16_t)
constexpr uintptr_t CNWSCreatureStats__HasFeat = 0x08153BC4;
// public void CNWSCreatureStats::IncrementFeatRemainingUses(uint16_t)
constexpr uintptr_t CNWSCreatureStats__IncrementFeatRemainingUses = 0x08164734;
// void CNWSCreatureStats::IncrementSpellsPerDayLeft(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__IncrementSpellsPerDayLeft = 0x08164D3C;
// public void CNWSCreatureStats::LevelDown(CNWLevelStats*)
constexpr uintptr_t CNWSCreatureStats__LevelDown = 0x08159870;
// public void CNWSCreatureStats::LevelUp(CNWLevelStats*, unsigned char, unsigned char, unsigned char, int32_t)
constexpr uintptr_t CNWSCreatureStats__LevelUp = 0x081590F0;
// public int32_t CNWSCreatureStats::LevelUpAutomatic(unsigned char, int32_t, unsigned char)
constexpr uintptr_t CNWSCreatureStats__LevelUpAutomatic = 0x0815A0C4;
// public int32_t CNWSCreatureStats::ModifyAlignment(int16_t, int16_t)
constexpr uintptr_t CNWSCreatureStats__ModifyAlignment = 0x081495F0;
// public void CNWSCreatureStats::ReadSpellsFromGff(CResGFF*, CResStruct*, int32_t)
constexpr uintptr_t CNWSCreatureStats__ReadSpellsFromGff = 0x0814F8DC;
// public uint32_t CNWSCreatureStats::ReadStatsFromGff(CResGFF*, CResStruct*, CNWSCreatureAppearanceInfo*, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSCreatureStats__ReadStatsFromGff = 0x0814C578;
// public void CNWSCreatureStats::ReadySpellLevel(unsigned char)
constexpr uintptr_t CNWSCreatureStats__ReadySpellLevel = 0x08157398;
// public void CNWSCreatureStats::RemoveFeat(uint16_t)
constexpr uintptr_t CNWSCreatureStats__RemoveFeat = 0x08164788;
// void CNWSCreatureStats::RemoveKnownSpell(unsigned char, uint32_t)
constexpr uintptr_t CNWSCreatureStats__RemoveKnownSpell = 0x08155250;
// public void CNWSCreatureStats::ResetFeatRemainingUses(void)
constexpr uintptr_t CNWSCreatureStats__ResetFeatRemainingUses = 0x081646AC;
// public void CNWSCreatureStats::ResetSpellLikeAbilities(void)
constexpr uintptr_t CNWSCreatureStats__ResetSpellLikeAbilities = 0x081651A8;
// void CNWSCreatureStats::ResetSpellsPerDayLeft(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__ResetSpellsPerDayLeft = 0x08164D74;
// public int32_t CNWSCreatureStats::ResolveSpecialAttackAttackBonus(CNWSCreature*)
constexpr uintptr_t CNWSCreatureStats__ResolveSpecialAttackAttackBonus = 0x08148F20;
// public int32_t CNWSCreatureStats::ResolveSpecialAttackDamageBonus(CNWSCreature*)
constexpr uintptr_t CNWSCreatureStats__ResolveSpecialAttackDamageBonus = 0x08149140;
// public void CNWSCreatureStats::SaveClassInfo(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSCreatureStats__SaveClassInfo = 0x08150964;
// public void CNWSCreatureStats::SaveStats(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSCreatureStats__SaveStats = 0x0814FC8C;
// public void CNWSCreatureStats::SetArcaneSpellFailure(char)
constexpr uintptr_t CNWSCreatureStats__SetArcaneSpellFailure = 0x081654CC;
// public void CNWSCreatureStats::SetCHABase(unsigned char)
constexpr uintptr_t CNWSCreatureStats__SetCHABase = 0x08151C64;
// void CNWSCreatureStats::SetClass(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__SetClass = 0x081644A0;
// void CNWSCreatureStats::SetClassLevel(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__SetClassLevel = 0x081644DC;
// public void CNWSCreatureStats::SetClassNegativeLevels(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__SetClassNegativeLevels = 0x08164518;
// public void CNWSCreatureStats::SetCONBase(unsigned char, int32_t)
constexpr uintptr_t CNWSCreatureStats__SetCONBase = 0x081519F0;
// public void CNWSCreatureStats::SetDEXBase(unsigned char)
constexpr uintptr_t CNWSCreatureStats__SetDEXBase = 0x0816446C;
// void CNWSCreatureStats::SetDomain1(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__SetDomain1 = 0x08164E3C;
// void CNWSCreatureStats::SetDomain2(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__SetDomain2 = 0x08164E88;
// public void CNWSCreatureStats::SetExperience(uint32_t, int32_t)
constexpr uintptr_t CNWSCreatureStats__SetExperience = 0x08152084;
// public void CNWSCreatureStats::SetFeatRemainingUses(uint16_t, unsigned char)
constexpr uintptr_t CNWSCreatureStats__SetFeatRemainingUses = 0x08153D14;
// void CNWSCreatureStats::SetHasLostClassAbilities(unsigned char, int32_t)
constexpr uintptr_t CNWSCreatureStats__SetHasLostClassAbilities = 0x08163F24;
// public void CNWSCreatureStats::SetINTBase(unsigned char)
constexpr uintptr_t CNWSCreatureStats__SetINTBase = 0x08151AFC;
// void CNWSCreatureStats::SetMemorizedSpellInSlotReady(unsigned char, unsigned char, unsigned char, int32_t)
constexpr uintptr_t CNWSCreatureStats__SetMemorizedSpellInSlotReady = 0x08164A8C;
// public int32_t CNWSCreatureStats::SetMemorizedSpellSlot(unsigned char, unsigned char, uint32_t, unsigned char, unsigned char, int32_t)
constexpr uintptr_t CNWSCreatureStats__SetMemorizedSpellSlot = 0x081552F4;
// public void CNWSCreatureStats::SetMovementRate(int32_t)
constexpr uintptr_t CNWSCreatureStats__SetMovementRate = 0x0815D81C;
// void CNWSCreatureStats::SetNormalBonusFlags(uint16_t, int32_t&, int32_t&)
constexpr uintptr_t CNWSCreatureStats__SetNormalBonusFlags = 0x0815C534;
// public void CNWSCreatureStats::SetNumberBonusSpells(unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__SetNumberBonusSpells = 0x0815FD64;
// void CNWSCreatureStats::SetNumberMemorizedSpellSlots(unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__SetNumberMemorizedSpellSlots = 0x08164C78;
// void CNWSCreatureStats::SetSchool(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__SetSchool = 0x08164DDC;
// void CNWSCreatureStats::SetSkillRank(unsigned char, char)
constexpr uintptr_t CNWSCreatureStats__SetSkillRank = 0x08164620;
// public void CNWSCreatureStats::SetSpellFailure(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__SetSpellFailure = 0x081656BC;
// public int32_t CNWSCreatureStats::SetSpellLikeAbilityReady(uint32_t, int32_t, unsigned char)
constexpr uintptr_t CNWSCreatureStats__SetSpellLikeAbilityReady = 0x081650C8;
// public void CNWSCreatureStats::SetSpellResistance(char)
constexpr uintptr_t CNWSCreatureStats__SetSpellResistance = 0x081654E8;
// public void CNWSCreatureStats::SetSpellResistancePenalty(char)
constexpr uintptr_t CNWSCreatureStats__SetSpellResistancePenalty = 0x08165504;
// public void CNWSCreatureStats::SetStatById(int32_t, float)
constexpr uintptr_t CNWSCreatureStats__SetStatById = 0x0815DCD4;
// public void CNWSCreatureStats::SetSTRBase(unsigned char)
constexpr uintptr_t CNWSCreatureStats__SetSTRBase = 0x0815193C;
// void CNWSCreatureStats::SetTag(const CExoString&)
constexpr uintptr_t CNWSCreatureStats__SetTag = 0x0816458C;
// public void CNWSCreatureStats::SetWISBase(unsigned char)
constexpr uintptr_t CNWSCreatureStats__SetWISBase = 0x08151BB0;
// public int32_t CNWSCreatureStats::UnReadySpell(uint32_t, unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__UnReadySpell = 0x08157510;
// public void CNWSCreatureStats::UpdateCombatInformation(void)
constexpr uintptr_t CNWSCreatureStats__UpdateCombatInformation = 0x08142134;
// public void CNWSCreatureStats::UpdateLastStatsObject(uint64_t, CNWCreatureStatsUpdate*)
constexpr uintptr_t CNWSCreatureStats__UpdateLastStatsObject = 0x0814A47C;
// public void CNWSCreatureStats::UpdateNumberMemorizedSpellSlots(void)
constexpr uintptr_t CNWSCreatureStats__UpdateNumberMemorizedSpellSlots = 0x08151D18;
// public uint32_t CNWSCreatureStats::ValidateLevelUp(CNWLevelStats*, unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats__ValidateLevelUp = 0x081579CC;

// public CNWSCreatureStats_ClassInfo::CNWSCreatureStats_ClassInfo(void)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__CNWSCreatureStats_ClassInfoCtor = 0x0813F19C;
// public CNWSCreatureStats_ClassInfo::~CNWSCreatureStats_ClassInfo(void)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__CNWSCreatureStats_ClassInfoDtor = 0x0813F314;
// void CNWSCreatureStats_ClassInfo::AddKnownSpell(unsigned char, uint32_t)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__AddKnownSpell = 0x08163738;
// public void CNWSCreatureStats_ClassInfo::ClearMemorizedKnownSpells(uint32_t)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__ClearMemorizedKnownSpells = 0x0813F528;
// public void CNWSCreatureStats_ClassInfo::ClearMemorizedSpellSlot(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__ClearMemorizedSpellSlot = 0x0813F4B4;
// public int32_t CNWSCreatureStats_ClassInfo::ConfirmDomainSpell(unsigned char, uint32_t)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__ConfirmDomainSpell = 0x0813FB10;
// void CNWSCreatureStats_ClassInfo::DecrementSpellsPerDayLeft(unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__DecrementSpellsPerDayLeft = 0x08163AE4;
// public int32_t CNWSCreatureStats_ClassInfo::GetIsDomainSpell(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__GetIsDomainSpell = 0x0816382C;
// public uint32_t CNWSCreatureStats_ClassInfo::GetKnownSpell(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__GetKnownSpell = 0x08163790;
// void CNWSCreatureStats_ClassInfo::GetMaxSpellsPerDayLeft(unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__GetMaxSpellsPerDayLeft = 0x08163AA8;
// public uint32_t CNWSCreatureStats_ClassInfo::GetMemorizedSpellInSlot(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__GetMemorizedSpellInSlot = 0x081637D0;
// public CNWSStats_Spell* CNWSCreatureStats_ClassInfo::GetMemorizedSpellInSlotDetails(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__GetMemorizedSpellInSlotDetails = 0x08163884;
// public unsigned char CNWSCreatureStats_ClassInfo::GetMemorizedSpellInSlotMetaType(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__GetMemorizedSpellInSlotMetaType = 0x08163A14;
// public int32_t CNWSCreatureStats_ClassInfo::GetMemorizedSpellInSlotReady(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__GetMemorizedSpellInSlotReady = 0x081638D8;
// public unsigned char CNWSCreatureStats_ClassInfo::GetMemorizedSpellReadyCount(uint32_t, unsigned char*, unsigned char*, unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__GetMemorizedSpellReadyCount__0 = 0x0813F738;
// public unsigned char CNWSCreatureStats_ClassInfo::GetMemorizedSpellReadyCount(uint32_t, unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__GetMemorizedSpellReadyCount__1 = 0x0816399C;
// void CNWSCreatureStats_ClassInfo::GetNumberBonusSpells(unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__GetNumberBonusSpells = 0x08163B94;
// void CNWSCreatureStats_ClassInfo::GetNumberKnownSpells(unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__GetNumberKnownSpells = 0x08163B5C;
// public unsigned char CNWSCreatureStats_ClassInfo::GetNumberMemorizedSpellSlots(unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__GetNumberMemorizedSpellSlots = 0x08163B74;
// void CNWSCreatureStats_ClassInfo::GetSpellsPerDayLeft(unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__GetSpellsPerDayLeft = 0x08163A6C;
// void CNWSCreatureStats_ClassInfo::IncrementSpellsPerDayLeft(unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__IncrementSpellsPerDayLeft = 0x08163B00;
// public void CNWSCreatureStats_ClassInfo::RemoveKnownSpell(unsigned char, uint32_t)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__RemoveKnownSpell = 0x08163764;
// void CNWSCreatureStats_ClassInfo::ResetSpellsPerDayLeft(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__ResetSpellsPerDayLeft = 0x08163B1C;
// void CNWSCreatureStats_ClassInfo::SetMaxSpellsPerDayLeft(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__SetMaxSpellsPerDayLeft = 0x08163AC8;
// public void CNWSCreatureStats_ClassInfo::SetMemorizedSpellInSlotReady(unsigned char, unsigned char, int32_t)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__SetMemorizedSpellInSlotReady = 0x08163930;
// public void CNWSCreatureStats_ClassInfo::SetMemorizedSpellSlot(unsigned char, unsigned char, uint32_t, int32_t, unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__SetMemorizedSpellSlot = 0x0813F3D4;
// void CNWSCreatureStats_ClassInfo::SetNumberBonusSpells(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__SetNumberBonusSpells = 0x08163BB4;
// public void CNWSCreatureStats_ClassInfo::SetNumberMemorizedSpellSlots(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__SetNumberMemorizedSpellSlots = 0x0813F688;
// void CNWSCreatureStats_ClassInfo::SetSpellsPerDayLeft(unsigned char, unsigned char)
constexpr uintptr_t CNWSCreatureStats_ClassInfo__SetSpellsPerDayLeft = 0x08163A8C;

// public CNWSDialog::CNWSDialog(void)
constexpr uintptr_t CNWSDialog__CNWSDialogCtor = 0x0823ACE0;
// public CNWSDialog::~CNWSDialog(void)
constexpr uintptr_t CNWSDialog__CNWSDialogDtor = 0x081D5790;
// public void CNWSDialog::AddJournalEntry(const CExoString&, uint32_t, uint32_t)
constexpr uintptr_t CNWSDialog__AddJournalEntry = 0x0823CEEC;
// public int32_t CNWSDialog::CheckScript(CNWSObject*, const CResRef&)
constexpr uintptr_t CNWSDialog__CheckScript = 0x0823CAB0;
// public void CNWSDialog::Cleanup(void)
constexpr uintptr_t CNWSDialog__Cleanup = 0x0823ADA4;
// void CNWSDialog::ClearDialogOwnerInObject(uint32_t)
constexpr uintptr_t CNWSDialog__ClearDialogOwnerInObject = 0x0823E520;
// public CNWSObject* CNWSDialog::GetSpeaker(CNWSObject*, const CExoString&)
constexpr uintptr_t CNWSDialog__GetSpeaker = 0x0823C5E4;
// public uint32_t CNWSDialog::GetStartEntry(CNWSObject*)
constexpr uintptr_t CNWSDialog__GetStartEntry = 0x0823CB94;
// public int32_t CNWSDialog::GetStartEntryOneLiner(CNWSObject*, CExoLocString&, CResRef&, CResRef&)
constexpr uintptr_t CNWSDialog__GetStartEntryOneLiner = 0x0823CC78;
// public int32_t CNWSDialog::HandleReply(uint32_t, CNWSObject*, uint32_t, int32_t, uint32_t)
constexpr uintptr_t CNWSDialog__HandleReply = 0x0823DEAC;
// public int32_t CNWSDialog::IsPlayerInDialog(uint32_t)
constexpr uintptr_t CNWSDialog__IsPlayerInDialog = 0x0823E598;
// public int32_t CNWSDialog::LoadDialog(CResGFF*, int32_t)
constexpr uintptr_t CNWSDialog__LoadDialog = 0x0823B268;
// public int32_t CNWSDialog::RemovePlayer(uint32_t)
constexpr uintptr_t CNWSDialog__RemovePlayer = 0x0823C4F0;
// public void CNWSDialog::RunScript(CNWSObject*, const CResRef&)
constexpr uintptr_t CNWSDialog__RunScript = 0x0823E5F0;
// public int32_t CNWSDialog::SendDialogEntry(CNWSObject*, uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSDialog__SendDialogEntry = 0x0823D238;
// public int32_t CNWSDialog::SendDialogReplies(CNWSObject*, uint32_t)
constexpr uintptr_t CNWSDialog__SendDialogReplies = 0x0823D85C;
// public float CNWSDialog::SetDialogDelay(CNWSObject*, CExoLocString, uint32_t, int32_t)
constexpr uintptr_t CNWSDialog__SetDialogDelay = 0x0823CD70;

// public CNWSDoor::CNWSDoor(uint32_t)
constexpr uintptr_t CNWSDoor__CNWSDoorCtor__1 = 0x0816639C;
// public CNWSDoor::~CNWSDoor(void)
constexpr uintptr_t CNWSDoor__CNWSDoorDtor = 0x08166838;
// public void CNWSDoor::AddToArea(CNWSArea*, float, float, float, int32_t)
constexpr uintptr_t CNWSDoor__AddToArea = 0x081669BC;
// public void CNWSDoor::AIUpdate(void)
constexpr uintptr_t CNWSDoor__AIUpdate = 0x08166D64;
// void CNWSDoor::AsNWSDoor(void)
constexpr uintptr_t CNWSDoor__AsNWSDoor = 0x0816A9D8;
// public void CNWSDoor::DoDamage(int32_t)
constexpr uintptr_t CNWSDoor__DoDamage = 0x0816A8D4;
// public void CNWSDoor::EventHandler(uint32_t, uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CNWSDoor__EventHandler = 0x08166E4C;
// public Vector CNWSDoor::GetActionPoint(int32_t, unsigned char)
constexpr uintptr_t CNWSDoor__GetActionPoint = 0x08169FE4;
// void CNWSDoor::GetActive(void)
constexpr uintptr_t CNWSDoor__GetActive = 0x0816B148;
// void CNWSDoor::GetAppearanceType(void)
constexpr uintptr_t CNWSDoor__GetAppearanceType = 0x0816AA94;
// void CNWSDoor::GetAutoRemoveKey(void)
constexpr uintptr_t CNWSDoor__GetAutoRemoveKey = 0x0816AF00;
// void CNWSDoor::GetBaseType(void)
constexpr uintptr_t CNWSDoor__GetBaseType = 0x0816B004;
// void CNWSDoor::GetBearing(void)
constexpr uintptr_t CNWSDoor__GetBearing = 0x0816AAF0;
// void CNWSDoor::GetCreatureList(void)
constexpr uintptr_t CNWSDoor__GetCreatureList = 0x0816B2E4;
// public CExoLocString& CNWSDoor::GetDescription(void)
constexpr uintptr_t CNWSDoor__GetDescription = 0x0816ABD8;
// public CExoString CNWSDoor::GetDescriptionOverride(void)
constexpr uintptr_t CNWSDoor__GetDescriptionOverride = 0x0816AC40;
// void CNWSDoor::GetDetectable(void)
constexpr uintptr_t CNWSDoor__GetDetectable = 0x0816B0DC;
// void CNWSDoor::GetDetectDC(void)
constexpr uintptr_t CNWSDoor__GetDetectDC = 0x0816B070;
// public CResRef CNWSDoor::GetDialogResref(void)
constexpr uintptr_t CNWSDoor__GetDialogResref = 0x0816A9E0;
// void CNWSDoor::GetDisarmable(void)
constexpr uintptr_t CNWSDoor__GetDisarmable = 0x0816B0B8;
// void CNWSDoor::GetDisarmDC(void)
constexpr uintptr_t CNWSDoor__GetDisarmDC = 0x0816B04C;
// public CExoString CNWSDoor::GetDisplayName(void)
constexpr uintptr_t CNWSDoor__GetDisplayName = 0x0816AD28;
// void CNWSDoor::GetFactionId(void)
constexpr uintptr_t CNWSDoor__GetFactionId = 0x0816AB14;
// public CExoLocString& CNWSDoor::GetFirstName(void)
constexpr uintptr_t CNWSDoor__GetFirstName = 0x0816ACC0;
// void CNWSDoor::GetFlagged(void)
constexpr uintptr_t CNWSDoor__GetFlagged = 0x0816B094;
// void CNWSDoor::GetFortitudeSave(void)
constexpr uintptr_t CNWSDoor__GetFortitudeSave = 0x0816AB5C;
// void CNWSDoor::GetGenericType(void)
constexpr uintptr_t CNWSDoor__GetGenericType = 0x0816AAB8;
// void CNWSDoor::GetHardness(void)
constexpr uintptr_t CNWSDoor__GetHardness = 0x0816ABC8;
// public int32_t CNWSDoor::GetIsLinked(void)
constexpr uintptr_t CNWSDoor__GetIsLinked = 0x0816A744;
// public CExoString* CNWSDoor::GetKeyName(void)
constexpr uintptr_t CNWSDoor__GetKeyName = 0x0816AE38;
// void CNWSDoor::GetKeyRequired(void)
constexpr uintptr_t CNWSDoor__GetKeyRequired = 0x0816AE5C;
// void CNWSDoor::GetKeyRequiredFeedbackMessage(void)
constexpr uintptr_t CNWSDoor__GetKeyRequiredFeedbackMessage = 0x0816AEC4;
// void CNWSDoor::GetLastClosed(void)
constexpr uintptr_t CNWSDoor__GetLastClosed = 0x0816AA70;
// void CNWSDoor::GetLastDisarmed(void)
constexpr uintptr_t CNWSDoor__GetLastDisarmed = 0x0816B29C;
// void CNWSDoor::GetLastLocked(void)
constexpr uintptr_t CNWSDoor__GetLastLocked = 0x0816B254;
// void CNWSDoor::GetLastOpened(void)
constexpr uintptr_t CNWSDoor__GetLastOpened = 0x0816AA28;
// void CNWSDoor::GetLastTriggered(void)
constexpr uintptr_t CNWSDoor__GetLastTriggered = 0x0816AA4C;
// void CNWSDoor::GetLastUnlocked(void)
constexpr uintptr_t CNWSDoor__GetLastUnlocked = 0x0816B278;
// public CNWSObject* CNWSDoor::GetLinkedObject(void)
constexpr uintptr_t CNWSDoor__GetLinkedObject = 0x0816A4E4;
// public CExoString CNWSDoor::GetLinkedToTag(void)
constexpr uintptr_t CNWSDoor__GetLinkedToTag = 0x0816B190;
// public uint16_t CNWSDoor::GetLoadScreenID(void)
constexpr uintptr_t CNWSDoor__GetLoadScreenID = 0x0816B2F4;
// void CNWSDoor::GetLockable(void)
constexpr uintptr_t CNWSDoor__GetLockable = 0x0816ADEC;
// void CNWSDoor::GetLockDC(void)
constexpr uintptr_t CNWSDoor__GetLockDC = 0x0816AF48;
// void CNWSDoor::GetLocked(void)
constexpr uintptr_t CNWSDoor__GetLocked = 0x0816AE10;
// public Vector CNWSDoor::GetNearestActionPoint(const Vector&, int32_t)
constexpr uintptr_t CNWSDoor__GetNearestActionPoint = 0x0816A14C;
// void CNWSDoor::GetOneShot(void)
constexpr uintptr_t CNWSDoor__GetOneShot = 0x0816B100;
// void CNWSDoor::GetOpenLockDC(void)
constexpr uintptr_t CNWSDoor__GetOpenLockDC = 0x0816AF24;
// public unsigned char CNWSDoor::GetOpenState(void)
constexpr uintptr_t CNWSDoor__GetOpenState = 0x0816A908;
// void CNWSDoor::GetRecoverable(void)
constexpr uintptr_t CNWSDoor__GetRecoverable = 0x0816B124;
// void CNWSDoor::GetReflexSave(void)
constexpr uintptr_t CNWSDoor__GetReflexSave = 0x0816AB38;
// void CNWSDoor::GetScriptName(int32_t)
constexpr uintptr_t CNWSDoor__GetScriptName = 0x0816AFB8;
// void CNWSDoor::GetSecretDoorDC(void)
constexpr uintptr_t CNWSDoor__GetSecretDoorDC = 0x0816ABA4;
// void CNWSDoor::GetTrapCreator(void)
constexpr uintptr_t CNWSDoor__GetTrapCreator = 0x0816AFE0;
// void CNWSDoor::GetTrapFactionId(void)
constexpr uintptr_t CNWSDoor__GetTrapFactionId = 0x0816B16C;
// void CNWSDoor::GetTrapped(void)
constexpr uintptr_t CNWSDoor__GetTrapped = 0x0816B028;
// void CNWSDoor::GetUpdateDisplayName(void)
constexpr uintptr_t CNWSDoor__GetUpdateDisplayName = 0x0816ADB4;
// void CNWSDoor::GetVisibleModel(void)
constexpr uintptr_t CNWSDoor__GetVisibleModel = 0x0816B2C0;
// void CNWSDoor::GetWillSave(void)
constexpr uintptr_t CNWSDoor__GetWillSave = 0x0816AB80;
// public int32_t CNWSDoor::LoadDoor(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSDoor__LoadDoor = 0x08167BC8;
// public int32_t CNWSDoor::NoNonWalkPolysInDoor(float, float, float, float, float, float, float)
constexpr uintptr_t CNWSDoor__NoNonWalkPolysInDoor = 0x0816A75C;
// public void CNWSDoor::PostProcess(void)
constexpr uintptr_t CNWSDoor__PostProcess = 0x08169C54;
// public void CNWSDoor::RemoveFromArea(void)
constexpr uintptr_t CNWSDoor__RemoveFromArea = 0x08169D3C;
// public int32_t CNWSDoor::SaveDoor(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSDoor__SaveDoor = 0x081692EC;
// void CNWSDoor::SetActive(int32_t)
constexpr uintptr_t CNWSDoor__SetActive = 0x0816B134;
// void CNWSDoor::SetAppearanceType(uint32_t)
constexpr uintptr_t CNWSDoor__SetAppearanceType = 0x0816AAA4;
// void CNWSDoor::SetAutoRemoveKey(int32_t)
constexpr uintptr_t CNWSDoor__SetAutoRemoveKey = 0x0816AEEC;
// void CNWSDoor::SetBaseType(unsigned char)
constexpr uintptr_t CNWSDoor__SetBaseType = 0x0816AFF0;
// void CNWSDoor::SetBearing(float)
constexpr uintptr_t CNWSDoor__SetBearing = 0x0816AADC;
// public void CNWSDoor::SetDescription(CExoLocString)
constexpr uintptr_t CNWSDoor__SetDescription = 0x0816ABE8;
// public void CNWSDoor::SetDescriptionOverride(CExoString)
constexpr uintptr_t CNWSDoor__SetDescriptionOverride = 0x0816AC68;
// void CNWSDoor::SetDetectable(int32_t)
constexpr uintptr_t CNWSDoor__SetDetectable = 0x0816B0C8;
// void CNWSDoor::SetDetectDC(unsigned char)
constexpr uintptr_t CNWSDoor__SetDetectDC = 0x0816B05C;
// void CNWSDoor::SetDialogResref(CResRef)
constexpr uintptr_t CNWSDoor__SetDialogResref = 0x0816AA04;
// void CNWSDoor::SetDisarmable(int32_t)
constexpr uintptr_t CNWSDoor__SetDisarmable = 0x0816B0A4;
// void CNWSDoor::SetDisarmDC(unsigned char)
constexpr uintptr_t CNWSDoor__SetDisarmDC = 0x0816B038;
// public void CNWSDoor::SetDisplayName(CExoString)
constexpr uintptr_t CNWSDoor__SetDisplayName = 0x0816AD50;
// void CNWSDoor::SetFactionId(int32_t)
constexpr uintptr_t CNWSDoor__SetFactionId = 0x0816AB00;
// public void CNWSDoor::SetFirstName(CExoLocString)
constexpr uintptr_t CNWSDoor__SetFirstName = 0x0816ACD0;
// void CNWSDoor::SetFlagged(unsigned char)
constexpr uintptr_t CNWSDoor__SetFlagged = 0x0816B080;
// void CNWSDoor::SetFortitudeSave(unsigned char)
constexpr uintptr_t CNWSDoor__SetFortitudeSave = 0x0816AB48;
// void CNWSDoor::SetGenericType(uint32_t)
constexpr uintptr_t CNWSDoor__SetGenericType = 0x0816AAC8;
// void CNWSDoor::SetHardness(unsigned char)
constexpr uintptr_t CNWSDoor__SetHardness = 0x0816ABB4;
// void CNWSDoor::SetKeyName(const CExoString&)
constexpr uintptr_t CNWSDoor__SetKeyName = 0x0816AE20;
// void CNWSDoor::SetKeyRequired(int32_t)
constexpr uintptr_t CNWSDoor__SetKeyRequired = 0x0816AE48;
// public void CNWSDoor::SetKeyRequiredFeedbackMessage(CExoString)
constexpr uintptr_t CNWSDoor__SetKeyRequiredFeedbackMessage = 0x0816AE6C;
// void CNWSDoor::SetLastClosed(uint32_t)
constexpr uintptr_t CNWSDoor__SetLastClosed = 0x0816AA80;
// void CNWSDoor::SetLastDisarmed(uint32_t)
constexpr uintptr_t CNWSDoor__SetLastDisarmed = 0x0816B2AC;
// void CNWSDoor::SetLastLocked(uint32_t)
constexpr uintptr_t CNWSDoor__SetLastLocked = 0x0816B264;
// void CNWSDoor::SetLastOpened(uint32_t)
constexpr uintptr_t CNWSDoor__SetLastOpened = 0x0816AA38;
// void CNWSDoor::SetLastTriggered(uint32_t)
constexpr uintptr_t CNWSDoor__SetLastTriggered = 0x0816AA5C;
// void CNWSDoor::SetLastUnlocked(uint32_t)
constexpr uintptr_t CNWSDoor__SetLastUnlocked = 0x0816B288;
// void CNWSDoor::SetLinkedFlags(unsigned char)
constexpr uintptr_t CNWSDoor__SetLinkedFlags = 0x0816B17C;
// public void CNWSDoor::SetLinkedToTag(CExoString)
constexpr uintptr_t CNWSDoor__SetLinkedToTag = 0x0816B1B8;
// void CNWSDoor::SetLockable(int32_t)
constexpr uintptr_t CNWSDoor__SetLockable = 0x0816ADD8;
// void CNWSDoor::SetLockDC(unsigned char)
constexpr uintptr_t CNWSDoor__SetLockDC = 0x0816AF34;
// void CNWSDoor::SetLocked(int32_t)
constexpr uintptr_t CNWSDoor__SetLocked = 0x0816ADFC;
// void CNWSDoor::SetOneShot(int32_t)
constexpr uintptr_t CNWSDoor__SetOneShot = 0x0816B0EC;
// void CNWSDoor::SetOpenLockDC(unsigned char)
constexpr uintptr_t CNWSDoor__SetOpenLockDC = 0x0816AF10;
// public void CNWSDoor::SetOpenState(unsigned char)
constexpr uintptr_t CNWSDoor__SetOpenState = 0x0816A5B8;
// void CNWSDoor::SetRecoverable(int32_t)
constexpr uintptr_t CNWSDoor__SetRecoverable = 0x0816B110;
// void CNWSDoor::SetReflexSave(unsigned char)
constexpr uintptr_t CNWSDoor__SetReflexSave = 0x0816AB24;
// public void CNWSDoor::SetScriptName(int32_t, CExoString)
constexpr uintptr_t CNWSDoor__SetScriptName = 0x0816AF58;
// void CNWSDoor::SetSecretDoorDC(unsigned char)
constexpr uintptr_t CNWSDoor__SetSecretDoorDC = 0x0816AB90;
// void CNWSDoor::SetTrapCreator(uint32_t)
constexpr uintptr_t CNWSDoor__SetTrapCreator = 0x0816AFCC;
// void CNWSDoor::SetTrapFactionId(int32_t)
constexpr uintptr_t CNWSDoor__SetTrapFactionId = 0x0816B158;
// void CNWSDoor::SetTrapped(int32_t)
constexpr uintptr_t CNWSDoor__SetTrapped = 0x0816B014;
// void CNWSDoor::SetUpdateDisplayName(int32_t)
constexpr uintptr_t CNWSDoor__SetUpdateDisplayName = 0x0816ADC4;
// void CNWSDoor::SetVisibleModel(int32_t)
constexpr uintptr_t CNWSDoor__SetVisibleModel = 0x0816B2D0;
// void CNWSDoor::SetWillSave(unsigned char)
constexpr uintptr_t CNWSDoor__SetWillSave = 0x0816AB6C;

// public CNWSDungeonMaster::CNWSDungeonMaster(uint32_t)
constexpr uintptr_t CNWSDungeonMaster__CNWSDungeonMasterCtor__1 = 0x081662C0;
// public CNWSDungeonMaster::~CNWSDungeonMaster(void)
constexpr uintptr_t CNWSDungeonMaster__CNWSDungeonMasterDtor = 0x08166324;
// void CNWSDungeonMaster::AsNWSDungeonMaster(void)
constexpr uintptr_t CNWSDungeonMaster__AsNWSDungeonMaster = 0x08166394;
// public void CNWSDungeonMaster::PossessCreature(uint32_t, unsigned char)
constexpr uintptr_t CNWSDungeonMaster__PossessCreature = 0x08165D24;

// public CNWSEffectListHandler::~CNWSEffectListHandler(void)
constexpr uintptr_t CNWSEffectListHandler__CNWSEffectListHandlerDtor = 0x0817CBC8;
// public void CNWSEffectListHandler::InitializeEffects(void)
constexpr uintptr_t CNWSEffectListHandler__InitializeEffects = 0x0816B304;
// void CNWSEffectListHandler::OnApplyAbilityDecrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyAbilityDecrease = 0x0816F4D8;
// public int32_t CNWSEffectListHandler::OnApplyAbilityIncrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyAbilityIncrease = 0x0816F3A4;
// public int32_t CNWSEffectListHandler::OnApplyACDecrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyACDecrease = 0x08170500;
// public int32_t CNWSEffectListHandler::OnApplyACIncrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyACIncrease = 0x08170034;
// public int32_t CNWSEffectListHandler::OnApplyAppear(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyAppear = 0x0817D5F8;
// public int32_t CNWSEffectListHandler::OnApplyArcaneSpellFailure(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyArcaneSpellFailure = 0x08172948;
// public int32_t CNWSEffectListHandler::OnApplyAreaOfEffect(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyAreaOfEffect = 0x08174F78;
// public int32_t CNWSEffectListHandler::OnApplyAttackDecrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyAttackDecrease = 0x08170A48;
// public int32_t CNWSEffectListHandler::OnApplyAttackIncrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyAttackIncrease = 0x08170978;
// public int32_t CNWSEffectListHandler::OnApplyBeam(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyBeam = 0x08175334;
// void CNWSEffectListHandler::OnApplyBlindness(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyBlindness = 0x0817ACDC;
// public int32_t CNWSEffectListHandler::OnApplyBlindnessInactive(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyBlindnessInactive = 0x0817D3EC;
// public int32_t CNWSEffectListHandler::OnApplyBonusFeat(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyBonusFeat = 0x0817D81C;
// void CNWSEffectListHandler::OnApplyBonusSpellOfLevel(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyBonusSpellOfLevel = 0x0817D534;
// public int32_t CNWSEffectListHandler::OnApplyConcealment(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyConcealment = 0x0817B110;
// public int32_t CNWSEffectListHandler::OnApplyCurse(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyCurse = 0x08177DC4;
// public int32_t CNWSEffectListHandler::OnApplyCutsceneGhost(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyCutsceneGhost = 0x0817DAB8;
// public int32_t CNWSEffectListHandler::OnApplyCutsceneImmobile(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyCutsceneImmobile = 0x0817DB40;
// public int32_t CNWSEffectListHandler::OnApplyDamage(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDamage = 0x0816C7E4;
// public int32_t CNWSEffectListHandler::OnApplyDamageDecrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDamageDecrease = 0x08170C18;
// public int32_t CNWSEffectListHandler::OnApplyDamageImmunityDecrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDamageImmunityDecrease = 0x0817153C;
// public int32_t CNWSEffectListHandler::OnApplyDamageImmunityIncrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDamageImmunityIncrease = 0x081712A8;
// public int32_t CNWSEffectListHandler::OnApplyDamageIncrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDamageIncrease = 0x08170B5C;
// public int32_t CNWSEffectListHandler::OnApplyDamageReduction(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDamageReduction = 0x0816C6BC;
// public int32_t CNWSEffectListHandler::OnApplyDamageResistance(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDamageResistance = 0x0816C750;
// public int32_t CNWSEffectListHandler::OnApplyDamageShield(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDamageShield = 0x0817D780;
// public int32_t CNWSEffectListHandler::OnApplyDarkness(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDarkness = 0x0817B1D4;
// public int32_t CNWSEffectListHandler::OnApplyDeaf(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDeaf = 0x081724E0;
// public int32_t CNWSEffectListHandler::OnApplyDeath(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDeath = 0x0816E054;
// public int32_t CNWSEffectListHandler::OnApplyDefensiveStance(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDefensiveStance = 0x0817C920;
// public int32_t CNWSEffectListHandler::OnApplyDisappear(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDisappear = 0x0817D548;
// public int32_t CNWSEffectListHandler::OnApplyDisappearAppear(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDisappearAppear = 0x0817B4A0;
// public int32_t CNWSEffectListHandler::OnApplyDisarm(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDisarm = 0x08172004;
// public int32_t CNWSEffectListHandler::OnApplyDisease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDisease = 0x08176548;
// void CNWSEffectListHandler::OnApplyDispelAllMagic(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDispelAllMagic = 0x081786A8;
// void CNWSEffectListHandler::OnApplyDispelBestMagic(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyDispelBestMagic = 0x08178A44;
// public int32_t CNWSEffectListHandler::OnApplyEffectIcon(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyEffectIcon = 0x081798E0;
// public int32_t CNWSEffectListHandler::OnApplyEffectImmunity(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyEffectImmunity = 0x08178470;
// public int32_t CNWSEffectListHandler::OnApplyEnemyAttackBonus(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyEnemyAttackBonus = 0x08172788;
// void CNWSEffectListHandler::OnApplyEntangled(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyEntangled = 0x0817181C;
// public int32_t CNWSEffectListHandler::OnApplyHasteInternal(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyHasteInternal = 0x08177038;
// public int32_t CNWSEffectListHandler::OnApplyHasteOrSlow(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyHasteOrSlow = 0x08176A78;
// public int32_t CNWSEffectListHandler::OnApplyHeal(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyHeal = 0x0816DC58;
// public int32_t CNWSEffectListHandler::OnApplyHitPointChangeWhenDying(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyHitPointChangeWhenDying = 0x08179294;
// public int32_t CNWSEffectListHandler::OnApplyInvisibility(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyInvisibility = 0x08177498;
// void CNWSEffectListHandler::OnApplyItemProperty(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyItemProperty = 0x0817C088;
// public int32_t CNWSEffectListHandler::OnApplyKnockdown(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyKnockdown = 0x08171B58;
// public int32_t CNWSEffectListHandler::OnApplyLight(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyLight = 0x0817D17C;
// public int32_t CNWSEffectListHandler::OnApplyLimitMovementSpeed(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyLimitMovementSpeed = 0x08178F4C;
// public int32_t CNWSEffectListHandler::OnApplyLink(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyLink = 0x0817D0CC;
// void CNWSEffectListHandler::OnApplyMissChance(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyMissChance = 0x0817D45C;
// void CNWSEffectListHandler::OnApplyModifyNumAttacks(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyModifyNumAttacks = 0x0817D22C;
// public int32_t CNWSEffectListHandler::OnApplyMovementSpeedDecrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyMovementSpeedDecrease = 0x08174868;
// public int32_t CNWSEffectListHandler::OnApplyMovementSpeedIncrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyMovementSpeedIncrease = 0x08174644;
// public int32_t CNWSEffectListHandler::OnApplyNegativeLevel(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyNegativeLevel = 0x0817B954;
// public int32_t CNWSEffectListHandler::OnApplyPetrify(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyPetrify = 0x0817BFC0;
// public int32_t CNWSEffectListHandler::OnApplyPoison(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyPoison = 0x081759D8;
// public int32_t CNWSEffectListHandler::OnApplyPolymorph(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyPolymorph = 0x08179C5C;
// public int32_t CNWSEffectListHandler::OnApplyRacialType(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyRacialType = 0x0817A23C;
// void CNWSEffectListHandler::OnApplyRegenerate(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyRegenerate = 0x08175918;
// public int32_t CNWSEffectListHandler::OnApplyResurrection(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyResurrection = 0x0816F244;
// public int32_t CNWSEffectListHandler::OnApplySanctuary(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySanctuary = 0x081776F4;
// public int32_t CNWSEffectListHandler::OnApplySavingThrowDecrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySavingThrowDecrease = 0x0816FF24;
// public int32_t CNWSEffectListHandler::OnApplySavingThrowIncrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySavingThrowIncrease = 0x0816FE08;
// public int32_t CNWSEffectListHandler::OnApplySeeInvisible(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySeeInvisible = 0x0817A3D8;
// public int32_t CNWSEffectListHandler::OnApplySetAIState(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySetAIState = 0x0817CFB4;
// public int32_t CNWSEffectListHandler::OnApplySetState(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySetState = 0x08172B88;
// public int32_t CNWSEffectListHandler::OnApplySetStateInternal(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySetStateInternal = 0x08173A2C;
// public int32_t CNWSEffectListHandler::OnApplySilence(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySilence = 0x0817825C;
// public int32_t CNWSEffectListHandler::OnApplySkillDecrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySkillDecrease = 0x08179190;
// public int32_t CNWSEffectListHandler::OnApplySkillIncrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySkillIncrease = 0x081790D8;
// void CNWSEffectListHandler::OnApplySlowInternal(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySlowInternal = 0x081771C4;
// public int32_t CNWSEffectListHandler::OnApplySpecialWalkAnimation(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySpecialWalkAnimation = 0x0817D350;
// public int32_t CNWSEffectListHandler::OnApplySpellFailure(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySpellFailure = 0x0817C808;
// public int32_t CNWSEffectListHandler::OnApplySpellImmunity(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySpellImmunity = 0x0817D668;
// public int32_t CNWSEffectListHandler::OnApplySpellLevelAbsorption(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySpellLevelAbsorption = 0x0817B8A8;
// public int32_t CNWSEffectListHandler::OnApplySpellResistanceDecrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySpellResistanceDecrease = 0x081756A4;
// public int32_t CNWSEffectListHandler::OnApplySpellResistanceIncrease(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySpellResistanceIncrease = 0x08175420;
// void CNWSEffectListHandler::OnApplyStore(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnApplyStore = 0x0817DC14;
// public int32_t CNWSEffectListHandler::OnApplySummonCreature(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySummonCreature = 0x0816F7F8;
// void CNWSEffectListHandler::OnApplySwarm(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplySwarm = 0x0817D994;
// public int32_t CNWSEffectListHandler::OnApplyTaunt(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyTaunt = 0x08178D84;
// public int32_t CNWSEffectListHandler::OnApplyTemporaryHitpoints(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyTemporaryHitpoints = 0x08170D08;
// public int32_t CNWSEffectListHandler::OnApplyTimestop(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyTimestop = 0x0817A0F4;
// public int32_t CNWSEffectListHandler::OnApplyTrueSeeing(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyTrueSeeing = 0x0817A8F4;
// public int32_t CNWSEffectListHandler::OnApplyTurnResistance(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyTurnResistance = 0x0817D4C8;
// public int32_t CNWSEffectListHandler::OnApplyUltraVision(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyUltraVision = 0x0817A520;
// public int32_t CNWSEffectListHandler::OnApplyVampiricRegeneration(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyVampiricRegeneration = 0x0817BEF0;
// public int32_t CNWSEffectListHandler::OnApplyVision(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyVision = 0x08177BE0;
// public int32_t CNWSEffectListHandler::OnApplyVisualEffect(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyVisualEffect = 0x08174AAC;
// public int32_t CNWSEffectListHandler::OnApplyWounding(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnApplyWounding = 0x0817D910;
// public int32_t CNWSEffectListHandler::OnEffectApplied(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CNWSEffectListHandler__OnEffectApplied = 0x0817CC30;
// public int32_t CNWSEffectListHandler::OnEffectRemoved(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnEffectRemoved = 0x0817CC9C;
// void CNWSEffectListHandler::OnRemoveAbilityDecrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveAbilityDecrease = 0x0817CD50;
// void CNWSEffectListHandler::OnRemoveAbilityIncrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveAbilityIncrease = 0x0817CD04;
// void CNWSEffectListHandler::OnRemoveACDecrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveACDecrease = 0x08170738;
// public int32_t CNWSEffectListHandler::OnRemoveACIncrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveACIncrease = 0x081702C4;
// public int32_t CNWSEffectListHandler::OnRemoveArcaneSpellFailure(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveArcaneSpellFailure = 0x08172A68;
// void CNWSEffectListHandler::OnRemoveAreaOfEffect(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveAreaOfEffect = 0x0817D034;
// void CNWSEffectListHandler::OnRemoveAttackDecrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveAttackDecrease = 0x0817CE80;
// void CNWSEffectListHandler::OnRemoveAttackIncrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveAttackIncrease = 0x0817CE44;
// void CNWSEffectListHandler::OnRemoveBeam(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveBeam = 0x0817D0C0;
// void CNWSEffectListHandler::OnRemoveBlindness(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveBlindness = 0x0817B034;
// public int32_t CNWSEffectListHandler::OnRemoveBonusFeat(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveBonusFeat = 0x0817D898;
// void CNWSEffectListHandler::OnRemoveBonusSpellOfLevel(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveBonusSpellOfLevel = 0x0817D53C;
// public int32_t CNWSEffectListHandler::OnRemoveConcealment(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveConcealment = 0x0817D4BC;
// void CNWSEffectListHandler::OnRemoveCurse(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveCurse = 0x0817D2A8;
// public int32_t CNWSEffectListHandler::OnRemoveCutsceneGhost(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveCutsceneGhost = 0x0817DB04;
// void CNWSEffectListHandler::OnRemoveDamageDecrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveDamageDecrease = 0x0817CEF8;
// void CNWSEffectListHandler::OnRemoveDamageImmunityDecrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveDamageImmunityDecrease = 0x08171734;
// void CNWSEffectListHandler::OnRemoveDamageImmunityIncrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveDamageImmunityIncrease = 0x08171454;
// void CNWSEffectListHandler::OnRemoveDamageIncrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveDamageIncrease = 0x0817CEBC;
// void CNWSEffectListHandler::OnRemoveDamageShield(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveDamageShield = 0x0817D810;
// public int32_t CNWSEffectListHandler::OnRemoveDarkness(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveDarkness = 0x0817B3E0;
// public int32_t CNWSEffectListHandler::OnRemoveDisappearAppear(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveDisappearAppear = 0x0817B630;
// void CNWSEffectListHandler::OnRemoveDisarm(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveDisarm = 0x0817CFA8;
// public int32_t CNWSEffectListHandler::OnRemoveEffectIcon(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveEffectIcon = 0x08179A68;
// void CNWSEffectListHandler::OnRemoveEffectImmunity(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveEffectImmunity = 0x0817D2F0;
// public int32_t CNWSEffectListHandler::OnRemoveEnemyAttackBonus(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveEnemyAttackBonus = 0x08172878;
// void CNWSEffectListHandler::OnRemoveEntangled(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveEntangled = 0x0817CF34;
// void CNWSEffectListHandler::OnRemoveHasteInternal(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveHasteInternal = 0x0817D12C;
// public int32_t CNWSEffectListHandler::OnRemoveHasteOrSlow(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveHasteOrSlow = 0x08176DD0;
// public int32_t CNWSEffectListHandler::OnRemoveHitPointChangeWhenDying(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveHitPointChangeWhenDying = 0x081793B8;
// public int32_t CNWSEffectListHandler::OnRemoveInvisibility(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveInvisibility = 0x081775C4;
// public int32_t CNWSEffectListHandler::OnRemoveItemProperty(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveItemProperty = 0x0817C3F4;
// public int32_t CNWSEffectListHandler::OnRemoveKnockdown(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveKnockdown = 0x08171F6C;
// void CNWSEffectListHandler::OnRemoveLight(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveLight = 0x0817D214;
// public int32_t CNWSEffectListHandler::OnRemoveLimitMovementSpeed(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveLimitMovementSpeed = 0x08179020;
// void CNWSEffectListHandler::OnRemoveMissChance(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveMissChance = 0x0817D4B0;
// void CNWSEffectListHandler::OnRemoveModifyNumAttacks(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveModifyNumAttacks = 0x08177D00;
// public int32_t CNWSEffectListHandler::OnRemoveMovementSpeedDecrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveMovementSpeedDecrease = 0x081749A0;
// void CNWSEffectListHandler::OnRemoveMovementSpeedIncrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveMovementSpeedIncrease = 0x0817475C;
// public int32_t CNWSEffectListHandler::OnRemoveNegativeLevel(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveNegativeLevel = 0x0817D704;
// void CNWSEffectListHandler::OnRemovePetrify(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemovePetrify = 0x0817DA28;
// public int32_t CNWSEffectListHandler::OnRemovePolymorph(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemovePolymorph = 0x08179E90;
// void CNWSEffectListHandler::OnRemoveRacialType(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveRacialType = 0x0817D3E0;
// public int32_t CNWSEffectListHandler::OnRemoveSanctuary(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSanctuary = 0x08177928;
// public int32_t CNWSEffectListHandler::OnRemoveSavingThrowDecrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSavingThrowDecrease = 0x0817CE08;
// void CNWSEffectListHandler::OnRemoveSavingThrowIncrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSavingThrowIncrease = 0x0817CDCC;
// public int32_t CNWSEffectListHandler::OnRemoveSeeInvisible(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSeeInvisible = 0x0817A46C;
// public int32_t CNWSEffectListHandler::OnRemoveSetAIState(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSetAIState = 0x08172420;
// public int32_t CNWSEffectListHandler::OnRemoveSetState(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSetState = 0x08173830;
// void CNWSEffectListHandler::OnRemoveSetStateInternal(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSetStateInternal = 0x081744B8;
// public int32_t CNWSEffectListHandler::OnRemoveSilence(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSilence = 0x0817D2B4;
// void CNWSEffectListHandler::OnRemoveSkillDecrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSkillDecrease = 0x0817D344;
// void CNWSEffectListHandler::OnRemoveSkillIncrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSkillIncrease = 0x0817D338;
// void CNWSEffectListHandler::OnRemoveSlowInternal(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSlowInternal = 0x0817D154;
// public int32_t CNWSEffectListHandler::OnRemoveSpecialWalkAnimation(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSpecialWalkAnimation = 0x0817983C;
// public int32_t CNWSEffectListHandler::OnRemoveSpellFailure(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSpellFailure = 0x0817DA34;
// void CNWSEffectListHandler::OnRemoveSpellImmunity(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSpellImmunity = 0x0817D6F8;
// void CNWSEffectListHandler::OnRemoveSpellLevelAbsorption(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSpellLevelAbsorption = 0x0817D65C;
// public int32_t CNWSEffectListHandler::OnRemoveSpellResistanceDecrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSpellResistanceDecrease = 0x081757F8;
// public int32_t CNWSEffectListHandler::OnRemoveSpellResistanceIncrease(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSpellResistanceIncrease = 0x08175558;
// public int32_t CNWSEffectListHandler::OnRemoveSummonCreature(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSummonCreature = 0x0817CD8C;
// void CNWSEffectListHandler::OnRemoveSwarm(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveSwarm = 0x0817D9E8;
// public int32_t CNWSEffectListHandler::OnRemoveTaunt(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveTaunt = 0x0817D2FC;
// public int32_t CNWSEffectListHandler::OnRemoveTemporaryHitpoints(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveTemporaryHitpoints = 0x08170E00;
// public int32_t CNWSEffectListHandler::OnRemoveTimestop(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveTimestop = 0x0817D3A4;
// public int32_t CNWSEffectListHandler::OnRemoveTrueSeeing(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveTrueSeeing = 0x0817AA80;
// void CNWSEffectListHandler::OnRemoveTurnResistance(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveTurnResistance = 0x0817D528;
// public int32_t CNWSEffectListHandler::OnRemoveUltraVision(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveUltraVision = 0x0817A698;
// void CNWSEffectListHandler::OnRemoveVision(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveVision = 0x0817D220;
// public int32_t CNWSEffectListHandler::OnRemoveVisualEffect(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveVisualEffect = 0x0817D004;
// void CNWSEffectListHandler::OnRemoveWounding(CNWSObject*, CGameEffect*)
constexpr uintptr_t CNWSEffectListHandler__OnRemoveWounding = 0x0817D988;
// public void CNWSEffectListHandler::SendFloatyEffect(uint32_t, uint32_t)
constexpr uintptr_t CNWSEffectListHandler__SendFloatyEffect = 0x0816C4D8;

// public CNWSEncounter::CNWSEncounter(uint32_t)
constexpr uintptr_t CNWSEncounter__CNWSEncounterCtor__1 = 0x0817F7A0;
// public CNWSEncounter::~CNWSEncounter(void)
constexpr uintptr_t CNWSEncounter__CNWSEncounterDtor = 0x0817FAE4;
// protected void CNWSEncounter::AddCreaturesToSpawnList(CEncounterListEntry*, int32_t&, int32_t, CEncounterListEntry)
constexpr uintptr_t CNWSEncounter__AddCreaturesToSpawnList = 0x08181330;
// protected void CNWSEncounter::AddToActivateAreaList(uint32_t)
constexpr uintptr_t CNWSEncounter__AddToActivateAreaList = 0x08181590;
// public void CNWSEncounter::AddToArea(CNWSArea*, float, float, float, int32_t)
constexpr uintptr_t CNWSEncounter__AddToArea = 0x08183FAC;
// public void CNWSEncounter::AIUpdate(void)
constexpr uintptr_t CNWSEncounter__AIUpdate = 0x0817FC8C;
// void CNWSEncounter::AsNWSEncounter(void)
constexpr uintptr_t CNWSEncounter__AsNWSEncounter = 0x08184360;
// protected float CNWSEncounter::CalculatePointsFromCR(float)
constexpr uintptr_t CNWSEncounter__CalculatePointsFromCR = 0x08183724;
// protected void CNWSEncounter::CalculateSpawnPool(float)
constexpr uintptr_t CNWSEncounter__CalculateSpawnPool = 0x08183604;
// public void CNWSEncounter::EventHandler(uint32_t, uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CNWSEncounter__EventHandler = 0x0817FEF0;
// void CNWSEncounter::GetActivateObjectArrayIndex(void)
constexpr uintptr_t CNWSEncounter__GetActivateObjectArrayIndex = 0x08184570;
// void CNWSEncounter::GetActive(void)
constexpr uintptr_t CNWSEncounter__GetActive = 0x081843B8;
// void CNWSEncounter::GetCustomScriptEventId(void)
constexpr uintptr_t CNWSEncounter__GetCustomScriptEventId = 0x08184594;
// void CNWSEncounter::GetDifficulty(void)
constexpr uintptr_t CNWSEncounter__GetDifficulty = 0x08184428;
// void CNWSEncounter::GetDifficultyIndex(void)
constexpr uintptr_t CNWSEncounter__GetDifficultyIndex = 0x08184438;
// void CNWSEncounter::GetEncounterCanReset(void)
constexpr uintptr_t CNWSEncounter__GetEncounterCanReset = 0x081843C8;
// void CNWSEncounter::GetEncounterExhausted(void)
constexpr uintptr_t CNWSEncounter__GetEncounterExhausted = 0x08184488;
// void CNWSEncounter::GetEncounterStarted(void)
constexpr uintptr_t CNWSEncounter__GetEncounterStarted = 0x08184478;
// void CNWSEncounter::GetFactionId(void)
constexpr uintptr_t CNWSEncounter__GetFactionId = 0x08184368;
// public CExoLocString& CNWSEncounter::GetFirstName(void)
constexpr uintptr_t CNWSEncounter__GetFirstName = 0x081845B8;
// public int32_t CNWSEncounter::GetInActivateArea(Vector)
constexpr uintptr_t CNWSEncounter__GetInActivateArea = 0x08180088;
// void CNWSEncounter::GetInActivateAreaList(uint32_t)
constexpr uintptr_t CNWSEncounter__GetInActivateAreaList = 0x08184178;
// void CNWSEncounter::GetLastEntered(void)
constexpr uintptr_t CNWSEncounter__GetLastEntered = 0x08184378;
// void CNWSEncounter::GetLastLeft(void)
constexpr uintptr_t CNWSEncounter__GetLastLeft = 0x08184388;
// void CNWSEncounter::GetMaxActivateX(void)
constexpr uintptr_t CNWSEncounter__GetMaxActivateX = 0x081843F8;
// void CNWSEncounter::GetMaxActivateY(void)
constexpr uintptr_t CNWSEncounter__GetMaxActivateY = 0x08184418;
// void CNWSEncounter::GetMinActivateX(void)
constexpr uintptr_t CNWSEncounter__GetMinActivateX = 0x081843E8;
// void CNWSEncounter::GetMinActivateY(void)
constexpr uintptr_t CNWSEncounter__GetMinActivateY = 0x08184408;
// void CNWSEncounter::GetNewEntry(void)
constexpr uintptr_t CNWSEncounter__GetNewEntry = 0x08184498;
// void CNWSEncounter::GetPlayerTriggeredOnly(void)
constexpr uintptr_t CNWSEncounter__GetPlayerTriggeredOnly = 0x081843D8;
// void CNWSEncounter::GetPosition(void)
constexpr uintptr_t CNWSEncounter__GetPosition = 0x08184398;
// void CNWSEncounter::GetRespawnsCurrent(void)
constexpr uintptr_t CNWSEncounter__GetRespawnsCurrent = 0x08184458;
// void CNWSEncounter::GetRespawnsMax(void)
constexpr uintptr_t CNWSEncounter__GetRespawnsMax = 0x08184448;
// void CNWSEncounter::GetScriptName(int32_t)
constexpr uintptr_t CNWSEncounter__GetScriptName = 0x081845C8;
// void CNWSEncounter::GetSpawnMode(void)
constexpr uintptr_t CNWSEncounter__GetSpawnMode = 0x08184468;
// public int32_t CNWSEncounter::LineSegmentIntersectActivateArea(Vector, Vector)
constexpr uintptr_t CNWSEncounter__LineSegmentIntersectActivateArea = 0x081840AC;
// public int32_t CNWSEncounter::LoadEncounter(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSEncounter__LoadEncounter = 0x081817E8;
// void CNWSEncounter::LoadFractionalCRData(void)
constexpr uintptr_t CNWSEncounter__LoadFractionalCRData = 0x08183914;
// public void CNWSEncounter::LoadFromTemplate(CResRef, int32_t, Vector*)
constexpr uintptr_t CNWSEncounter__LoadFromTemplate = 0x08181A08;
// protected void CNWSEncounter::MakeSpawnList(CEncounterListEntry*, int32_t&)
constexpr uintptr_t CNWSEncounter__MakeSpawnList = 0x08180EF0;
// protected void CNWSEncounter::PadOutCreatureCount(CEncounterListEntry*, int32_t&)
constexpr uintptr_t CNWSEncounter__PadOutCreatureCount = 0x081839F4;
// public int32_t CNWSEncounter::ReadEncounterFromGff(CResGFF*, CResStruct*, int32_t, Vector*)
constexpr uintptr_t CNWSEncounter__ReadEncounterFromGff = 0x08181BDC;
// public void CNWSEncounter::ReadEncounterScriptsFromGff(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSEncounter__ReadEncounterScriptsFromGff = 0x08182BC8;
// void CNWSEncounter::RemoveFromActivateAreaList(uint32_t)
constexpr uintptr_t CNWSEncounter__RemoveFromActivateAreaList = 0x081841AC;
// public void CNWSEncounter::RemoveFromActiveCreatureCount(float, int32_t)
constexpr uintptr_t CNWSEncounter__RemoveFromActiveCreatureCount = 0x08181668;
// public void CNWSEncounter::RemoveFromArea(void)
constexpr uintptr_t CNWSEncounter__RemoveFromArea = 0x0818402C;
// public int32_t CNWSEncounter::SaveEncounter(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSEncounter__SaveEncounter = 0x08182E68;
// void CNWSEncounter::SetActivateObjectArrayIndex(uint16_t)
constexpr uintptr_t CNWSEncounter__SetActivateObjectArrayIndex = 0x08184580;
// public void CNWSEncounter::SetActive(int32_t)
constexpr uintptr_t CNWSEncounter__SetActive = 0x08184278;
// void CNWSEncounter::SetCustomScriptEventId(int32_t)
constexpr uintptr_t CNWSEncounter__SetCustomScriptEventId = 0x081845A4;
// public void CNWSEncounter::SetDifficulty(int32_t)
constexpr uintptr_t CNWSEncounter__SetDifficulty = 0x08183864;
// void CNWSEncounter::SetEncounterCanReset(int32_t)
constexpr uintptr_t CNWSEncounter__SetEncounterCanReset = 0x081844D0;
// void CNWSEncounter::SetEncounterExhausted(int32_t)
constexpr uintptr_t CNWSEncounter__SetEncounterExhausted = 0x08184548;
// void CNWSEncounter::SetEncounterStarted(int32_t)
constexpr uintptr_t CNWSEncounter__SetEncounterStarted = 0x08184534;
// void CNWSEncounter::SetLastEntered(uint32_t)
constexpr uintptr_t CNWSEncounter__SetLastEntered = 0x081844A8;
// void CNWSEncounter::SetLastLeft(uint32_t)
constexpr uintptr_t CNWSEncounter__SetLastLeft = 0x081844BC;
// void CNWSEncounter::SetNewEntry(int32_t)
constexpr uintptr_t CNWSEncounter__SetNewEntry = 0x0818455C;
// void CNWSEncounter::SetPlayerTriggeredOnly(int32_t)
constexpr uintptr_t CNWSEncounter__SetPlayerTriggeredOnly = 0x0818450C;
// void CNWSEncounter::SetRespawnsCurrent(int32_t)
constexpr uintptr_t CNWSEncounter__SetRespawnsCurrent = 0x081844F8;
// void CNWSEncounter::SetRespawnsMax(int32_t)
constexpr uintptr_t CNWSEncounter__SetRespawnsMax = 0x081844E4;
// protected void CNWSEncounter::SetScriptName(int32_t, CExoString)
constexpr uintptr_t CNWSEncounter__SetScriptName = 0x081845E4;
// void CNWSEncounter::SetSpawnMode(int32_t)
constexpr uintptr_t CNWSEncounter__SetSpawnMode = 0x08184520;
// protected void CNWSEncounter::SpawnEncounterCreatures(void)
constexpr uintptr_t CNWSEncounter__SpawnEncounterCreatures = 0x08180510;
// public void CNWSEncounter::SpawnIfAppropriate(uint32_t, float)
constexpr uintptr_t CNWSEncounter__SpawnIfAppropriate = 0x081841FC;
// protected void CNWSEncounter::TallyEnemyRadiusPoints(void)
constexpr uintptr_t CNWSEncounter__TallyEnemyRadiusPoints = 0x08183C00;
// protected void CNWSEncounter::UpdateActivateAreaList(uint32_t)
constexpr uintptr_t CNWSEncounter__UpdateActivateAreaList = 0x0818028C;

// public CNWSExpression::CNWSExpression(void)
constexpr uintptr_t CNWSExpression__CNWSExpressionCtor = 0x08240124;
// public CNWSExpression::~CNWSExpression(void)
constexpr uintptr_t CNWSExpression__CNWSExpressionDtor = 0x0823E744;
// private void CNWSExpression::ClearAlternate(CNWSExpressionNode*)
constexpr uintptr_t CNWSExpression__ClearAlternate = 0x082401CC;
// void CNWSExpression::ClearGraph(void)
constexpr uintptr_t CNWSExpression__ClearGraph = 0x0824018C;
// private CNWSExpressionNode* CNWSExpression::NewNode(int32_t)
constexpr uintptr_t CNWSExpression__NewNode = 0x082400CC;
// public int32_t CNWSExpression::ParseString(CExoString)
constexpr uintptr_t CNWSExpression__ParseString = 0x0823E8A0;
// public int32_t CNWSExpression::TestString(const CExoString&, int32_t)
constexpr uintptr_t CNWSExpression__TestString = 0x0823F604;

// CNWSExpressionList::CNWSExpressionList(void)
constexpr uintptr_t CNWSExpressionList__CNWSExpressionListCtor = 0x0823FF58;
// CNWSExpressionList::~CNWSExpressionList(void)
constexpr uintptr_t CNWSExpressionList__CNWSExpressionListDtor = 0x0823FF74;
// public void CNWSExpressionList::AddNode(CNWSExpressionNode*)
constexpr uintptr_t CNWSExpressionList__AddNode = 0x08240050;
// void CNWSExpressionList::AddNodeToHead(CNWSExpressionNode*)
constexpr uintptr_t CNWSExpressionList__AddNodeToHead = 0x08240094;
// private void CNWSExpressionList::DeleteAlternate(CNWSExpressionNode*)
constexpr uintptr_t CNWSExpressionList__DeleteAlternate = 0x0823FFE8;
// void CNWSExpressionList::DeleteList(void)
constexpr uintptr_t CNWSExpressionList__DeleteList = 0x0823FF90;

// public CNWSExpressionNode::CNWSExpressionNode(void)
constexpr uintptr_t CNWSExpressionNode__CNWSExpressionNodeCtor = 0x0823FEF8;
// CNWSExpressionNode::~CNWSExpressionNode(void)
constexpr uintptr_t CNWSExpressionNode__CNWSExpressionNodeDtor = 0x0823FF20;

// public CNWSFaction::CNWSFaction(uint32_t)
constexpr uintptr_t CNWSFaction__CNWSFactionCtor__0 = 0x081D67C0;
// public CNWSFaction::CNWSFaction(void)
constexpr uintptr_t CNWSFaction__CNWSFactionCtor__1 = 0x081D68EC;
// public CNWSFaction::~CNWSFaction(void)
constexpr uintptr_t CNWSFaction__CNWSFactionDtor = 0x081D7D30;
// public void CNWSFaction::AddMember(uint32_t, int32_t)
constexpr uintptr_t CNWSFaction__AddMember = 0x081D6990;
// void CNWSFaction::AttemptJoin(uint32_t)
constexpr uintptr_t CNWSFaction__AttemptJoin = 0x081D7D74;
// public int32_t CNWSFaction::AttemptRemove(uint32_t, uint32_t)
constexpr uintptr_t CNWSFaction__AttemptRemove = 0x081D7DA4;
// public void CNWSFaction::ChangeMemberId(uint32_t, uint32_t)
constexpr uintptr_t CNWSFaction__ChangeMemberId = 0x081D7E48;
// public void CNWSFaction::ClearAllReputationsTowards(uint32_t)
constexpr uintptr_t CNWSFaction__ClearAllReputationsTowards = 0x081D84B0;
// public int32_t CNWSFaction::GetAverageGoodEvilAlignment(void)
constexpr uintptr_t CNWSFaction__GetAverageGoodEvilAlignment = 0x081D750C;
// public int32_t CNWSFaction::GetAverageLawChaosAlignment(void)
constexpr uintptr_t CNWSFaction__GetAverageLawChaosAlignment = 0x081D75F4;
// public int32_t CNWSFaction::GetAverageLevel(void)
constexpr uintptr_t CNWSFaction__GetAverageLevel = 0x081D8190;
// public int32_t CNWSFaction::GetAverageReputation(uint32_t)
constexpr uintptr_t CNWSFaction__GetAverageReputation = 0x081D80FC;
// public int32_t CNWSFaction::GetAverageXP(void)
constexpr uintptr_t CNWSFaction__GetAverageXP = 0x081D820C;
// public uint32_t CNWSFaction::GetBestAC(uint32_t, int32_t)
constexpr uintptr_t CNWSFaction__GetBestAC = 0x081D79F4;
// public int32_t CNWSFaction::GetCreatureInParty(uint32_t)
constexpr uintptr_t CNWSFaction__GetCreatureInParty = 0x081D8278;
// void CNWSFaction::GetFactionManager(void)
constexpr uintptr_t CNWSFaction__GetFactionManager = 0x081D8424;
// public uint32_t CNWSFaction::GetFactionMember(int32_t, int32_t)
constexpr uintptr_t CNWSFaction__GetFactionMember = 0x081D83A0;
// public int32_t CNWSFaction::GetGold(void)
constexpr uintptr_t CNWSFaction__GetGold = 0x081D80B8;
// void CNWSFaction::GetIsInvited(uint32_t)
constexpr uintptr_t CNWSFaction__GetIsInvited = 0x081D7E04;
// public uint32_t CNWSFaction::GetLeader(void)
constexpr uintptr_t CNWSFaction__GetLeader = 0x081D7BA4;
// public uint32_t CNWSFaction::GetLeastDamagedMember(uint32_t, int32_t)
constexpr uintptr_t CNWSFaction__GetLeastDamagedMember = 0x081D7340;
// public uint32_t CNWSFaction::GetMemberList(uint32_t**)
constexpr uintptr_t CNWSFaction__GetMemberList = 0x081D7DF0;
// public uint32_t CNWSFaction::GetMostDamagedMember(uint32_t, int32_t)
constexpr uintptr_t CNWSFaction__GetMostDamagedMember = 0x081D7168;
// public int32_t CNWSFaction::GetMostFrequentClass(void)
constexpr uintptr_t CNWSFaction__GetMostFrequentClass = 0x081D76DC;
// public int32_t CNWSFaction::GetSingletonParty(void)
constexpr uintptr_t CNWSFaction__GetSingletonParty = 0x081D82A8;
// public uint32_t CNWSFaction::GetStrongestMember(uint32_t, int32_t)
constexpr uintptr_t CNWSFaction__GetStrongestMember = 0x081D6FB8;
// public uint32_t CNWSFaction::GetWeakestMember(uint32_t, int32_t)
constexpr uintptr_t CNWSFaction__GetWeakestMember = 0x081D6E08;
// public uint32_t CNWSFaction::GetWorstAC(uint32_t, int32_t)
constexpr uintptr_t CNWSFaction__GetWorstAC = 0x081D7844;
// void CNWSFaction::Initialise(void)
constexpr uintptr_t CNWSFaction__Initialise = 0x081D8444;
// public int32_t CNWSFaction::InviteMember(uint32_t, uint32_t)
constexpr uintptr_t CNWSFaction__InviteMember = 0x081D6B44;
// public void CNWSFaction::RemoveMember(uint32_t)
constexpr uintptr_t CNWSFaction__RemoveMember = 0x081D6BC8;
// public void CNWSFaction::SendChatMessage(uint32_t, CExoString)
constexpr uintptr_t CNWSFaction__SendChatMessage = 0x081D7E90;
// public void CNWSFaction::SendFactionUpdateAdd(uint32_t)
constexpr uintptr_t CNWSFaction__SendFactionUpdateAdd = 0x081D7FCC;
// void CNWSFaction::SendFactionUpdateList(void)
constexpr uintptr_t CNWSFaction__SendFactionUpdateList = 0x081D7F50;
// void CNWSFaction::SendFactionUpdateRemove(uint32_t)
constexpr uintptr_t CNWSFaction__SendFactionUpdateRemove = 0x081D8048;
// public int32_t CNWSFaction::TransferLeadership(uint32_t, uint32_t)
constexpr uintptr_t CNWSFaction__TransferLeadership = 0x081D8344;

// public CNWSForcedAction::CNWSForcedAction(void)
constexpr uintptr_t CNWSForcedAction__CNWSForcedActionCtor = 0x0818464C;
// CNWSForcedAction::~CNWSForcedAction(void)
constexpr uintptr_t CNWSForcedAction__CNWSForcedActionDtor = 0x08184688;
// public int32_t CNWSForcedAction::LoadForcedAction(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSForcedAction__LoadForcedAction = 0x0818473C;
// public int32_t CNWSForcedAction::SaveForcedAction(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSForcedAction__SaveForcedAction = 0x081846A4;

// public CNWSInventory::CNWSInventory(void)
constexpr uintptr_t CNWSInventory__CNWSInventoryCtor = 0x0819EB9C;
// CNWSInventory::~CNWSInventory(void)
constexpr uintptr_t CNWSInventory__CNWSInventoryDtor = 0x0819EBC4;
// void CNWSInventory::GetArraySlotFromSlotFlag(uint32_t)
constexpr uintptr_t CNWSInventory__GetArraySlotFromSlotFlag = 0x0819E998;
// public int32_t CNWSInventory::GetItemInInventory(CNWSItem*)
constexpr uintptr_t CNWSInventory__GetItemInInventory = 0x0819EC40;
// public CNWSItem* CNWSInventory::GetItemInSlot(uint32_t)
constexpr uintptr_t CNWSInventory__GetItemInSlot = 0x0819EC9C;
// public uint32_t CNWSInventory::GetSlotFromItem(CNWSItem*)
constexpr uintptr_t CNWSInventory__GetSlotFromItem = 0x0819EC6C;
// public void CNWSInventory::PutItemInSlot(uint32_t, CNWSItem*)
constexpr uintptr_t CNWSInventory__PutItemInSlot = 0x0819ED18;
// public int32_t CNWSInventory::RemoveItem(CNWSItem*)
constexpr uintptr_t CNWSInventory__RemoveItem = 0x0819ECDC;

// public CNWSItem::CNWSItem(uint32_t)
constexpr uintptr_t CNWSItem__CNWSItemCtor__1 = 0x0819EDA0;
// public CNWSItem::~CNWSItem(void)
constexpr uintptr_t CNWSItem__CNWSItemDtor = 0x0819F0C0;
// public int32_t CNWSItem::AcquireItem(CNWSItem**, uint32_t, unsigned char, unsigned char, int32_t)
constexpr uintptr_t CNWSItem__AcquireItem = 0x081A5F4C;
// public int32_t CNWSItem::ActiveProperty(uint16_t)
constexpr uintptr_t CNWSItem__ActiveProperty = 0x081A6754;
// public void CNWSItem::AddActiveProperty(CNWItemProperty)
constexpr uintptr_t CNWSItem__AddActiveProperty = 0x081A6784;
// public void CNWSItem::AddPassiveProperty(CNWItemProperty)
constexpr uintptr_t CNWSItem__AddPassiveProperty = 0x081A67EC;
// public void CNWSItem::AddToArea(CNWSArea*, float, float, float, int32_t)
constexpr uintptr_t CNWSItem__AddToArea = 0x081A65D0;
// public void CNWSItem::AIUpdate(void)
constexpr uintptr_t CNWSItem__AIUpdate = 0x081A6648;
// public void CNWSItem::ApplyItemProperties(CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItem__ApplyItemProperties = 0x081A68AC;
// public CNWSItem* CNWSItem::AsNWSItem(void)
constexpr uintptr_t CNWSItem__AsNWSItem = 0x081A6CA0;
// protected void CNWSItem::CalculateBaseCosts(void)
constexpr uintptr_t CNWSItem__CalculateBaseCosts = 0x081A5794;
// protected float CNWSItem::CalculatePassiveCost(CNWItemProperty*)
constexpr uintptr_t CNWSItem__CalculatePassiveCost = 0x081A54B0;
// public void CNWSItem::CloseInventory(uint32_t, int32_t)
constexpr uintptr_t CNWSItem__CloseInventory = 0x081A4E14;
// public void CNWSItem::CloseItemForAllPlayers(void)
constexpr uintptr_t CNWSItem__CloseItemForAllPlayers = 0x081A5E90;
// public int32_t CNWSItem::CompareItem(CNWSItem*)
constexpr uintptr_t CNWSItem__CompareItem = 0x081A2ED0;
// public int32_t CNWSItem::ComputeArmorClass(void)
constexpr uintptr_t CNWSItem__ComputeArmorClass = 0x081A2D58;
// public void CNWSItem::ComputeWeight(void)
constexpr uintptr_t CNWSItem__ComputeWeight = 0x081A137C;
// public int32_t CNWSItem::CopyItem(CNWSItem*, int32_t)
constexpr uintptr_t CNWSItem__CopyItem = 0x081A4F98;
// public void CNWSItem::EventHandler(uint32_t, uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CNWSItem__EventHandler = 0x0819FB08;
// void CNWSItem::GetActivePropertiesList(void)
constexpr uintptr_t CNWSItem__GetActivePropertiesList = 0x081A721C;
// public CNWItemProperty* CNWSItem::GetActiveProperty(int32_t)
constexpr uintptr_t CNWSItem__GetActiveProperty = 0x081A6854;
// void CNWSItem::GetArmorModelPart(unsigned char)
constexpr uintptr_t CNWSItem__GetArmorModelPart = 0x081A6CA8;
// void CNWSItem::GetArmorValue(void)
constexpr uintptr_t CNWSItem__GetArmorValue = 0x081A7120;
// public uint32_t CNWSItem::GetCost(int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSItem__GetCost = 0x081A53A8;
// public uint16_t CNWSItem::GetDamageFlags(void)
constexpr uintptr_t CNWSItem__GetDamageFlags = 0x081A5CA0;
// public CExoLocString CNWSItem::GetDescription(int32_t)
constexpr uintptr_t CNWSItem__GetDescription = 0x081A6F98;
// public CExoString CNWSItem::GetDescriptionOverride(int32_t)
constexpr uintptr_t CNWSItem__GetDescriptionOverride = 0x081A6FCC;
// public CExoString CNWSItem::GetDisplayName(void)
constexpr uintptr_t CNWSItem__GetDisplayName = 0x081A704C;
// public CExoLocString& CNWSItem::GetFirstName(void)
constexpr uintptr_t CNWSItem__GetFirstName = 0x081A7028;
// void CNWSItem::GetIdentified(void)
constexpr uintptr_t CNWSItem__GetIdentified = 0x081A7110;
// void CNWSItem::GetInfinite(void)
constexpr uintptr_t CNWSItem__GetInfinite = 0x081A7144;
// void CNWSItem::GetIsCursed(void)
constexpr uintptr_t CNWSItem__GetIsCursed = 0x081A72AC;
// void CNWSItem::GetIsDroppable(void)
constexpr uintptr_t CNWSItem__GetIsDroppable = 0x081A7250;
// void CNWSItem::GetIsPickPocketable(void)
constexpr uintptr_t CNWSItem__GetIsPickPocketable = 0x081A7274;
// void CNWSItem::GetLastUsedActiveProperties(void)
constexpr uintptr_t CNWSItem__GetLastUsedActiveProperties = 0x081A71D4;
// void CNWSItem::GetLastUsedActivePropertyUsesLeft(unsigned char)
constexpr uintptr_t CNWSItem__GetLastUsedActivePropertyUsesLeft = 0x081A71E4;
// public unsigned char CNWSItem::GetMinEquipLevel(void)
constexpr uintptr_t CNWSItem__GetMinEquipLevel = 0x081A5DE4;
// void CNWSItem::GetModelPart(unsigned char)
constexpr uintptr_t CNWSItem__GetModelPart = 0x081A6CE8;
// public CExoLocString CNWSItem::GetName(void)
constexpr uintptr_t CNWSItem__GetName = 0x081A7000;
// void CNWSItem::GetNumActiveProperties(void)
constexpr uintptr_t CNWSItem__GetNumActiveProperties = 0x081A71FC;
// void CNWSItem::GetNumCharges(void)
constexpr uintptr_t CNWSItem__GetNumCharges = 0x081A71B0;
// void CNWSItem::GetNumPassiveProperties(void)
constexpr uintptr_t CNWSItem__GetNumPassiveProperties = 0x081A720C;
// void CNWSItem::GetPassivePropertiesList(void)
constexpr uintptr_t CNWSItem__GetPassivePropertiesList = 0x081A722C;
// public CNWItemProperty* CNWSItem::GetPassiveProperty(int32_t)
constexpr uintptr_t CNWSItem__GetPassiveProperty = 0x081A6880;
// void CNWSItem::GetPossessor(void)
constexpr uintptr_t CNWSItem__GetPossessor = 0x081A6D3C;
// public int32_t CNWSItem::GetPropertyByType(CNWItemProperty**, uint16_t, uint16_t)
constexpr uintptr_t CNWSItem__GetPropertyByType = 0x081A2B34;
// public int32_t CNWSItem::GetPropertyByTypeExists(uint16_t, uint16_t)
constexpr uintptr_t CNWSItem__GetPropertyByTypeExists = 0x081A2A6C;
// void CNWSItem::GetRepositoryArrayIndex(void)
constexpr uintptr_t CNWSItem__GetRepositoryArrayIndex = 0x081A6DA0;
// void CNWSItem::GetRepositoryPosition(unsigned char&, unsigned char&)
constexpr uintptr_t CNWSItem__GetRepositoryPosition = 0x081A6D08;
// void CNWSItem::GetRepositoryPtr(void)
constexpr uintptr_t CNWSItem__GetRepositoryPtr = 0x081A6D2C;
// void CNWSItem::GetStackSize(void)
constexpr uintptr_t CNWSItem__GetStackSize = 0x081A7168;
// void CNWSItem::GetStolen(void)
constexpr uintptr_t CNWSItem__GetStolen = 0x081A718C;
// void CNWSItem::GetUnalteredArmorModelPart(unsigned char)
constexpr uintptr_t CNWSItem__GetUnalteredArmorModelPart = 0x081A6CC8;
// void CNWSItem::GetUpdateDisplayName(void)
constexpr uintptr_t CNWSItem__GetUpdateDisplayName = 0x081A70D8;
// public uint16_t CNWSItem::GetUsedActivePropertyUsesLeft(unsigned char)
constexpr uintptr_t CNWSItem__GetUsedActivePropertyUsesLeft = 0x081A28F0;
// void CNWSItem::GetVisualEffect(void)
constexpr uintptr_t CNWSItem__GetVisualEffect = 0x081A72E4;
// public int32_t CNWSItem::GetWeight(void)
constexpr uintptr_t CNWSItem__GetWeight = 0x081A6B90;
// void CNWSItem::InitRepository(uint32_t)
constexpr uintptr_t CNWSItem__InitRepository = 0x0819FE3C;
// public int32_t CNWSItem::LoadDataFromGff(CResGFF*, CResStruct*, int32_t)
constexpr uintptr_t CNWSItem__LoadDataFromGff = 0x081A00C4;
// public int32_t CNWSItem::LoadFromTemplate(CResRef, CExoString*)
constexpr uintptr_t CNWSItem__LoadFromTemplate = 0x0819FEDC;
// public int32_t CNWSItem::LoadItem(CResGFF*, CResStruct*, int32_t)
constexpr uintptr_t CNWSItem__LoadItem = 0x081A17CC;
// public int32_t CNWSItem::MergeItem(CNWSItem*)
constexpr uintptr_t CNWSItem__MergeItem = 0x081A31B4;
// public void CNWSItem::OpenInventory(uint32_t)
constexpr uintptr_t CNWSItem__OpenInventory = 0x081A4C00;
// public void CNWSItem::ReadContainerItemsFromGff(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSItem__ReadContainerItemsFromGff = 0x081A160C;
// public int32_t CNWSItem::RemoveActiveProperty(int32_t)
constexpr uintptr_t CNWSItem__RemoveActiveProperty = 0x081A67B8;
// public void CNWSItem::RemoveFromArea(void)
constexpr uintptr_t CNWSItem__RemoveFromArea = 0x081A669C;
// public void CNWSItem::RemoveItemProperties(CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItem__RemoveItemProperties = 0x081A2CC0;
// public int32_t CNWSItem::RemovePassiveProperty(int32_t)
constexpr uintptr_t CNWSItem__RemovePassiveProperty = 0x081A6820;
// public void CNWSItem::RestoreUsedActiveProperties(int32_t)
constexpr uintptr_t CNWSItem__RestoreUsedActiveProperties = 0x081A670C;
// public void CNWSItem::RestoreUsedActiveProperty(CNWItemProperty*, int32_t)
constexpr uintptr_t CNWSItem__RestoreUsedActiveProperty = 0x081A2A0C;
// void CNWSItem::SaveContainerItems(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSItem__SaveContainerItems = 0x081A267C;
// public int32_t CNWSItem::SaveItem(CResGFF*, CResStruct*, int32_t)
constexpr uintptr_t CNWSItem__SaveItem = 0x081A19C4;
// public int32_t CNWSItem::SaveItemProperties(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSItem__SaveItemProperties = 0x081A241C;
// void CNWSItem::SetArmorModelPart(unsigned char, unsigned char)
constexpr uintptr_t CNWSItem__SetArmorModelPart = 0x081A6D4C;
// void CNWSItem::SetArmorValue(int32_t)
constexpr uintptr_t CNWSItem__SetArmorValue = 0x081A7130;
// void CNWSItem::SetBarterOwner(uint32_t)
constexpr uintptr_t CNWSItem__SetBarterOwner = 0x081A72D0;
// public void CNWSItem::SetDisplayName(CExoString)
constexpr uintptr_t CNWSItem__SetDisplayName = 0x081A7074;
// void CNWSItem::SetFirstName(uint32_t)
constexpr uintptr_t CNWSItem__SetFirstName = 0x081A7038;
// public void CNWSItem::SetIdentified(int32_t)
constexpr uintptr_t CNWSItem__SetIdentified = 0x081A6BD8;
// public void CNWSItem::SetIdentifiedDescription(CExoLocString)
constexpr uintptr_t CNWSItem__SetIdentifiedDescription = 0x081A6DE0;
// public void CNWSItem::SetIdentifiedDescriptionOverride(CExoString)
constexpr uintptr_t CNWSItem__SetIdentifiedDescriptionOverride = 0x081A6E90;
// void CNWSItem::SetInfinite(int32_t)
constexpr uintptr_t CNWSItem__SetInfinite = 0x081A7154;
// void CNWSItem::SetIsCursed(int32_t)
constexpr uintptr_t CNWSItem__SetIsCursed = 0x081A7298;
// void CNWSItem::SetIsDroppable(int32_t)
constexpr uintptr_t CNWSItem__SetIsDroppable = 0x081A723C;
// void CNWSItem::SetIsPickPocketable(int32_t)
constexpr uintptr_t CNWSItem__SetIsPickPocketable = 0x081A7260;
// void CNWSItem::SetModelPart(unsigned char, unsigned char)
constexpr uintptr_t CNWSItem__SetModelPart = 0x081A6DC4;
// public void CNWSItem::SetName(CExoLocString)
constexpr uintptr_t CNWSItem__SetName = 0x081A6F40;
// void CNWSItem::SetNumCharges(int32_t)
constexpr uintptr_t CNWSItem__SetNumCharges = 0x081A71C0;
// public void CNWSItem::SetPossessor(uint32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSItem__SetPossessor = 0x0819F23C;
// void CNWSItem::SetRecalculateCostFlag(int32_t)
constexpr uintptr_t CNWSItem__SetRecalculateCostFlag = 0x081A70FC;
// void CNWSItem::SetRepositoryArrayIndex(uint16_t)
constexpr uintptr_t CNWSItem__SetRepositoryArrayIndex = 0x081A6DB0;
// void CNWSItem::SetRepositoryPosition(unsigned char, unsigned char)
constexpr uintptr_t CNWSItem__SetRepositoryPosition = 0x081A6D84;
// void CNWSItem::SetStackSize(int32_t)
constexpr uintptr_t CNWSItem__SetStackSize = 0x081A7178;
// void CNWSItem::SetStolen(int32_t)
constexpr uintptr_t CNWSItem__SetStolen = 0x081A719C;
// void CNWSItem::SetUnalteredArmorModelPart(unsigned char, unsigned char)
constexpr uintptr_t CNWSItem__SetUnalteredArmorModelPart = 0x081A6D68;
// public void CNWSItem::SetUnidentifiedDescription(CExoLocString)
constexpr uintptr_t CNWSItem__SetUnidentifiedDescription = 0x081A6E38;
// public void CNWSItem::SetUnidentifiedDescriptionOverride(CExoString)
constexpr uintptr_t CNWSItem__SetUnidentifiedDescriptionOverride = 0x081A6EE8;
// void CNWSItem::SetUpdateDisplayName(int32_t)
constexpr uintptr_t CNWSItem__SetUpdateDisplayName = 0x081A70E8;
// void CNWSItem::SetWeight(int32_t)
constexpr uintptr_t CNWSItem__SetWeight = 0x081A72BC;
// public CNWSItem* CNWSItem::SplitItem(int32_t)
constexpr uintptr_t CNWSItem__SplitItem = 0x081A3230;
// public void CNWSItem::UpdateUsedActiveProperties(int32_t)
constexpr uintptr_t CNWSItem__UpdateUsedActiveProperties = 0x081A2770;
// public void CNWSItem::UpdateVisualEffect(void)
constexpr uintptr_t CNWSItem__UpdateVisualEffect = 0x081A61C8;

// public CNWSItemPropertyHandler::~CNWSItemPropertyHandler(void)
constexpr uintptr_t CNWSItemPropertyHandler__CNWSItemPropertyHandlerDtor = 0x081B01E8;
// void CNWSItemPropertyHandler::ApplyAbilityBonus(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyAbilityBonus = 0x081AAC94;
// void CNWSItemPropertyHandler::ApplyACBonus(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyACBonus = 0x081AAFEC;
// public int32_t CNWSItemPropertyHandler::ApplyArcaneSpellFailure(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyArcaneSpellFailure = 0x081AFF88;
// public int32_t CNWSItemPropertyHandler::ApplyAttackBonus(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyAttackBonus = 0x081A9E54;
// public int32_t CNWSItemPropertyHandler::ApplyAttackPenalty(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyAttackPenalty = 0x081AA5C8;
// public int32_t CNWSItemPropertyHandler::ApplyBonusFeat(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyBonusFeat = 0x081ACC68;
// public int32_t CNWSItemPropertyHandler::ApplyBonusSpellOfLevel(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyBonusSpellOfLevel = 0x081B09EC;
// public int32_t CNWSItemPropertyHandler::ApplyChangedSavingThrow(CNWSItem*, int32_t, CNWItemProperty*, CNWSCreature*, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyChangedSavingThrow = 0x081ABAB4;
// public int32_t CNWSItemPropertyHandler::ApplyChangedSavingThrowVsX(CNWSItem*, int32_t, CNWItemProperty*, CNWSCreature*, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyChangedSavingThrowVsX = 0x081ABBBC;
// public int32_t CNWSItemPropertyHandler::ApplyDamageBonus(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyDamageBonus = 0x081A9704;
// public int32_t CNWSItemPropertyHandler::ApplyDamageImmunity(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyDamageImmunity = 0x081ACE90;
// void CNWSItemPropertyHandler::ApplyDamagePenalty(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyDamagePenalty = 0x081AD1FC;
// void CNWSItemPropertyHandler::ApplyDamageReduction(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyDamageReduction = 0x081AD6A8;
// void CNWSItemPropertyHandler::ApplyDamageResistance(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyDamageResistance = 0x081AD900;
// public int32_t CNWSItemPropertyHandler::ApplyDamageVulnerability(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyDamageVulnerability = 0x081ADB90;
// public int32_t CNWSItemPropertyHandler::ApplyDarkVision(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyDarkVision = 0x081B032C;
// public int32_t CNWSItemPropertyHandler::ApplyDecreaseAbility(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyDecreaseAbility = 0x081ADE1C;
// void CNWSItemPropertyHandler::ApplyDecreaseAC(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyDecreaseAC = 0x081AE178;
// void CNWSItemPropertyHandler::ApplyDecreaseSkill(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyDecreaseSkill = 0x081AE41C;
// void CNWSItemPropertyHandler::ApplyEnhancementBonus(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyEnhancementBonus = 0x081A8064;
// void CNWSItemPropertyHandler::ApplyEnhancementPenalty(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyEnhancementPenalty = 0x081A8F40;
// public int32_t CNWSItemPropertyHandler::ApplyFreeAction(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyFreeAction = 0x081AC82C;
// void CNWSItemPropertyHandler::ApplyHaste(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyHaste = 0x081B0A7C;
// void CNWSItemPropertyHandler::ApplyHolyAvenger(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyHolyAvenger = 0x081AE74C;
// public int32_t CNWSItemPropertyHandler::ApplyImmunity(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyImmunity = 0x081AF434;
// public int32_t CNWSItemPropertyHandler::ApplyImprovedEvasion(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyImprovedEvasion = 0x081B07C4;
// void CNWSItemPropertyHandler::ApplyImprovedSavingThrow(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyImprovedSavingThrow = 0x081B04EC;
// void CNWSItemPropertyHandler::ApplyImprovedSavingThrowVsX(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyImprovedSavingThrowVsX = 0x081B044C;
// void CNWSItemPropertyHandler::ApplyImprovedSpellResistance(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyImprovedSpellResistance = 0x081AB60C;
// public int32_t CNWSItemPropertyHandler::ApplyLight(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyLight = 0x081AAA24;
// void CNWSItemPropertyHandler::ApplyReducedSavingThrow(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyReducedSavingThrow = 0x081B058C;
// void CNWSItemPropertyHandler::ApplyReducedSavingThrowVsX(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyReducedSavingThrowVsX = 0x081B062C;
// public int32_t CNWSItemPropertyHandler::ApplyRegeneration(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyRegeneration = 0x081AFED0;
// public int32_t CNWSItemPropertyHandler::ApplySkillBonus(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplySkillBonus = 0x081AF94C;
// public int32_t CNWSItemPropertyHandler::ApplySpecialWalk(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplySpecialWalk = 0x081AC5E4;
// public int32_t CNWSItemPropertyHandler::ApplySpellImmunityLevel(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplySpellImmunityLevel = 0x081AFD2C;
// public int32_t CNWSItemPropertyHandler::ApplySpellImmunitySchool(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplySpellImmunitySchool = 0x081AFAF0;
// void CNWSItemPropertyHandler::ApplySpellImmunitySpecific(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplySpellImmunitySpecific = 0x081AF72C;
// public int32_t CNWSItemPropertyHandler::ApplyTrueSeeing(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyTrueSeeing = 0x081B06CC;
// public int32_t CNWSItemPropertyHandler::ApplyTurnResistance(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyTurnResistance = 0x081B08E0;
// public int32_t CNWSItemPropertyHandler::ApplyUnlimitedAmmo(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__ApplyUnlimitedAmmo = 0x081AC058;
// public void CNWSItemPropertyHandler::InitializeItemProperties(void)
constexpr uintptr_t CNWSItemPropertyHandler__InitializeItemProperties = 0x081A757C;
// void CNWSItemPropertyHandler::OnItemPropertyApplied(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CNWSItemPropertyHandler__OnItemPropertyApplied = 0x081B0250;
// void CNWSItemPropertyHandler::OnItemPropertyRemoved(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__OnItemPropertyRemoved = 0x081B02BC;
// void CNWSItemPropertyHandler::RemoveAbilityBonus(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveAbilityBonus = 0x081AAE08;
// void CNWSItemPropertyHandler::RemoveACBonus(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveACBonus = 0x081AB2E8;
// public int32_t CNWSItemPropertyHandler::RemoveArcaneSpellFailure(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveArcaneSpellFailure = 0x081B0094;
// public int32_t CNWSItemPropertyHandler::RemoveAttackBonus(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveAttackBonus = 0x081AA1E4;
// public int32_t CNWSItemPropertyHandler::RemoveAttackPenalty(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveAttackPenalty = 0x081AA7FC;
// public int32_t CNWSItemPropertyHandler::RemoveBonusFeat(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveBonusFeat = 0x081ACD80;
// public int32_t CNWSItemPropertyHandler::RemoveBonusSpellOfLevel(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveBonusSpellOfLevel = 0x081ACB94;
// public int32_t CNWSItemPropertyHandler::RemoveChangedSavingThrow(int32_t, CNWSItem*, CNWItemProperty*, CNWSCreature*)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveChangedSavingThrow = 0x081ABD48;
// public int32_t CNWSItemPropertyHandler::RemoveChangedSavingThrowVsX(int32_t, CNWSItem*, CNWItemProperty*, CNWSCreature*)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveChangedSavingThrowVsX = 0x081ABE64;
// public int32_t CNWSItemPropertyHandler::RemoveDamageBonus(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveDamageBonus = 0x081A9A70;
// public int32_t CNWSItemPropertyHandler::RemoveDamageImmunity(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveDamageImmunity = 0x081AD038;
// void CNWSItemPropertyHandler::RemoveDamagePenalty(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveDamagePenalty = 0x081AD45C;
// void CNWSItemPropertyHandler::RemoveDamageReduction(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveDamageReduction = 0x081AD7C0;
// public int32_t CNWSItemPropertyHandler::RemoveDamageResistance(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveDamageResistance = 0x081ADA28;
// public int32_t CNWSItemPropertyHandler::RemoveDamageVulnerability(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveDamageVulnerability = 0x081ADCC4;
// public int32_t CNWSItemPropertyHandler::RemoveDarkVision(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveDarkVision = 0x081B03C0;
// void CNWSItemPropertyHandler::RemoveDecreaseAbility(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveDecreaseAbility = 0x081ADF94;
// void CNWSItemPropertyHandler::RemoveDecreaseAC(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveDecreaseAC = 0x081AE2C0;
// void CNWSItemPropertyHandler::RemoveDecreaseSkill(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveDecreaseSkill = 0x081AE554;
// void CNWSItemPropertyHandler::RemoveEnhancementBonus(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveEnhancementBonus = 0x081A8818;
// void CNWSItemPropertyHandler::RemoveEnhancementPenalty(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveEnhancementPenalty = 0x081A9344;
// public int32_t CNWSItemPropertyHandler::RemoveFreeAction(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveFreeAction = 0x081ACA7C;
// void CNWSItemPropertyHandler::RemoveHaste(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveHaste = 0x081AE6B0;
// public int32_t CNWSItemPropertyHandler::RemoveHolyAvenger(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveHolyAvenger = 0x081AF1A4;
// void CNWSItemPropertyHandler::RemoveImmunity(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveImmunity = 0x081AF620;
// public int32_t CNWSItemPropertyHandler::RemoveImprovedEvasion(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveImprovedEvasion = 0x081B0854;
// void CNWSItemPropertyHandler::RemoveImprovedSavingThrow(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveImprovedSavingThrow = 0x081AB8D4;
// void CNWSItemPropertyHandler::RemoveImprovedSavingThrowVsX(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveImprovedSavingThrowVsX = 0x081AB834;
// void CNWSItemPropertyHandler::RemoveImprovedSpellResistance(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveImprovedSpellResistance = 0x081AB714;
// void CNWSItemPropertyHandler::RemoveLight(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveLight = 0x081AAB60;
// void CNWSItemPropertyHandler::RemoveReducedSavingThrow(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveReducedSavingThrow = 0x081AB974;
// void CNWSItemPropertyHandler::RemoveReducedSavingThrowVsX(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveReducedSavingThrowVsX = 0x081ABA14;
// public int32_t CNWSItemPropertyHandler::RemoveRegeneration(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveRegeneration = 0x081B0B00;
// public int32_t CNWSItemPropertyHandler::RemoveSkillBonus(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveSkillBonus = 0x081AFA18;
// public int32_t CNWSItemPropertyHandler::RemoveSpecialWalk(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveSpecialWalk = 0x081AC714;
// public int32_t CNWSItemPropertyHandler::RemoveSpellImmunityLevel(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveSpellImmunityLevel = 0x081AFE00;
// void CNWSItemPropertyHandler::RemoveSpellImmunitySchool(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveSpellImmunitySchool = 0x081AFC0C;
// void CNWSItemPropertyHandler::RemoveSpellImmunitySpecific(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveSpellImmunitySpecific = 0x081AF844;
// public int32_t CNWSItemPropertyHandler::RemoveTrueSeeing(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveTrueSeeing = 0x081B074C;
// public int32_t CNWSItemPropertyHandler::RemoveTurnResistance(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveTurnResistance = 0x081B0974;
// public int32_t CNWSItemPropertyHandler::RemoveUnlimitedAmmo(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSItemPropertyHandler__RemoveUnlimitedAmmo = 0x081AC534;

// public CNWSJournal::CNWSJournal(void)
constexpr uintptr_t CNWSJournal__CNWSJournalCtor = 0x081B25C0;
// public CNWSJournal::~CNWSJournal(void)
constexpr uintptr_t CNWSJournal__CNWSJournalDtor = 0x081B25D8;
// public void CNWSJournal::Destroy(CExoString)
constexpr uintptr_t CNWSJournal__Destroy = 0x081B22F4;
// public void CNWSJournal::SetDate(CExoString, uint32_t, int32_t)
constexpr uintptr_t CNWSJournal__SetDate = 0x081B1AB8;
// public void CNWSJournal::SetPicture(CExoString, int32_t, int32_t)
constexpr uintptr_t CNWSJournal__SetPicture = 0x081B22C8;
// public void CNWSJournal::SetState(CExoString, uint32_t, int32_t)
constexpr uintptr_t CNWSJournal__SetState = 0x081B0C54;
// public void CNWSJournal::SetTime(CExoString, uint32_t, int32_t)
constexpr uintptr_t CNWSJournal__SetTime = 0x081B1EC0;

// CNWSkill::CNWSkill(void)
constexpr uintptr_t CNWSkill__CNWSkillCtor = 0x081B2D54;
// public CNWSkill::~CNWSkill(void)
constexpr uintptr_t CNWSkill__CNWSkillDtor = 0x081B2D98;
// void CNWSkill::GetDescriptionText(void)
constexpr uintptr_t CNWSkill__GetDescriptionText = 0x081B2BF0;
// void CNWSkill::GetNameText(void)
constexpr uintptr_t CNWSkill__GetNameText = 0x081B2CA4;

// public CNWSMessage::CNWSMessage(void)
constexpr uintptr_t CNWSMessage__CNWSMessageCtor = 0x0819BA5C;
// public CNWSMessage::~CNWSMessage(void)
constexpr uintptr_t CNWSMessage__CNWSMessageDtor = 0x0819BA7C;
// protected void CNWSMessage::AddActiveItemPropertiesToMessage(CNWSItem*, CNWSCreature*)
constexpr uintptr_t CNWSMessage__AddActiveItemPropertiesToMessage = 0x08061F24;
// void CNWSMessage::AddAreaOfEffectObjectToMessage(CNWSAreaOfEffectObject*)
constexpr uintptr_t CNWSMessage__AddAreaOfEffectObjectToMessage = 0x0807EFE0;
// void CNWSMessage::AddDoorAppearanceToMessage(CNWSDoor*)
constexpr uintptr_t CNWSMessage__AddDoorAppearanceToMessage = 0x0807EFA0;
// protected void CNWSMessage::AddItemAppearanceToMessage(CNWSItem*)
constexpr uintptr_t CNWSMessage__AddItemAppearanceToMessage = 0x080621B8;
// protected void CNWSMessage::AddPlaceableAppearanceToMessage(CNWSPlaceable*)
constexpr uintptr_t CNWSMessage__AddPlaceableAppearanceToMessage = 0x08061DC8;
// void CNWSMessage::AddTriggerGeometryToMessage(CNWSTrigger*)
constexpr uintptr_t CNWSMessage__AddTriggerGeometryToMessage = 0x08080508;
// void CNWSMessage::AssignCreatureLists(CExoArrayListTemplatedunsignedlong*, CExoArrayListTemplatedunsignedlong*)
constexpr uintptr_t CNWSMessage__AssignCreatureLists = 0x0807F078;
// protected void CNWSMessage::AssignVisualEffectLists(CExoArrayListTemplatedCLoopingVisualEffectPtr*, CExoArrayListTemplatedCLoopingVisualEffectPtr*)
constexpr uintptr_t CNWSMessage__AssignVisualEffectLists = 0x080625CC;
// void CNWSMessage::CompareCreatureLists(CExoArrayListTemplatedunsignedlong*, CExoArrayListTemplatedunsignedlong*)
constexpr uintptr_t CNWSMessage__CompareCreatureLists = 0x0807F020;
// protected int32_t CNWSMessage::CompareVisualEffectLists(CExoArrayListTemplatedCLoopingVisualEffectPtr*, CExoArrayListTemplatedCLoopingVisualEffectPtr*)
constexpr uintptr_t CNWSMessage__CompareVisualEffectLists = 0x080626AC;
// protected uint32_t CNWSMessage::ComputeAppearanceUpdateRequired(CNWSObject*, CLastUpdateObject*)
constexpr uintptr_t CNWSMessage__ComputeAppearanceUpdateRequired = 0x08062330;
// public int32_t CNWSMessage::ComputeGameObjectUpdateForCategory(uint32_t, uint32_t, CNWSPlayer*, CNWSObject*, CGameObjectArray*, CNWSPlayerLUOSortedObjectList*, int32_t)
constexpr uintptr_t CNWSMessage__ComputeGameObjectUpdateForCategory = 0x0806B1E8;
// public void CNWSMessage::ComputeGameObjectUpdateForObject(CNWSPlayer*, CNWSObject*, CGameObjectArray*, uint32_t)
constexpr uintptr_t CNWSMessage__ComputeGameObjectUpdateForObject = 0x0808028C;
// void CNWSMessage::ComputeGameObjectUpdateForYourself(CNWSPlayer*, CNWSObject*, CGameObjectArray*, uint32_t)
constexpr uintptr_t CNWSMessage__ComputeGameObjectUpdateForYourself = 0x0808027C;
// void CNWSMessage::ComputeGameObjectUpdateForYourselfToo(CNWSPlayer*, CNWSObject*, CGameObjectArray*, uint32_t)
constexpr uintptr_t CNWSMessage__ComputeGameObjectUpdateForYourselfToo = 0x08080230;
// protected int32_t CNWSMessage::ComputeInventoryUpdateRequired(CNWSPlayer*, uint32_t, CNWSPlayerInventoryGUI*)
constexpr uintptr_t CNWSMessage__ComputeInventoryUpdateRequired = 0x080624A8;
// protected int32_t CNWSMessage::ComputeLastUpdate_ActionQueue(CNWSCreature*, CNWSPlayerLastUpdateObject*)
constexpr uintptr_t CNWSMessage__ComputeLastUpdate_ActionQueue = 0x08064A08;
// protected uint16_t CNWSMessage::ComputeLastUpdate_AssociateState(CNWSCreature*)
constexpr uintptr_t CNWSMessage__ComputeLastUpdate_AssociateState = 0x08064D8C;
// protected int32_t CNWSMessage::ComputeLastUpdate_AutoMap(CNWSCreature*, CNWSPlayerLastUpdateObject*)
constexpr uintptr_t CNWSMessage__ComputeLastUpdate_AutoMap = 0x08064AB0;
// protected int32_t CNWSMessage::ComputeLastUpdate_CompareSpellLikeAbility(CNWSCreature*, CNWSPlayerLastUpdateObject*)
constexpr uintptr_t CNWSMessage__ComputeLastUpdate_CompareSpellLikeAbility = 0x08064420;
// public int32_t CNWSMessage::ComputeLastUpdate_GuiEffectIcons(CNWSCreature*, CExoArrayListTemplatedCEffectIconObjectPtr*, int32_t)
constexpr uintptr_t CNWSMessage__ComputeLastUpdate_GuiEffectIcons = 0x080827B0;
// protected int32_t CNWSMessage::ComputeLastUpdate_GuiFeats(CNWSCreature*, CNWSPlayerLastUpdateObject*)
constexpr uintptr_t CNWSMessage__ComputeLastUpdate_GuiFeats = 0x08063E60;
// protected int32_t CNWSMessage::ComputeLastUpdate_GuiKnownSpells(CNWSCreature*, CNWSPlayerLastUpdateObject*)
constexpr uintptr_t CNWSMessage__ComputeLastUpdate_GuiKnownSpells = 0x0806400C;
// protected int32_t CNWSMessage::ComputeLastUpdate_GuiKnownSpellUses(CNWSCreature*, CNWSPlayerLastUpdateObject*)
constexpr uintptr_t CNWSMessage__ComputeLastUpdate_GuiKnownSpellUses = 0x080646B8;
// protected int32_t CNWSMessage::ComputeLastUpdate_GuiMemorizedSpells(CNWSCreature*, CNWSPlayerLastUpdateObject*)
constexpr uintptr_t CNWSMessage__ComputeLastUpdate_GuiMemorizedSpells = 0x080641AC;
// protected int32_t CNWSMessage::ComputeLastUpdate_GuiNumberMemorizedSpells(CNWSCreature*, CNWSPlayerLastUpdateObject*)
constexpr uintptr_t CNWSMessage__ComputeLastUpdate_GuiNumberMemorizedSpells = 0x08064BAC;
// void CNWSMessage::ComputeLastUpdate_GuiSkills(CNWSCreature*)
constexpr uintptr_t CNWSMessage__ComputeLastUpdate_GuiSkills = 0x0807F0BC;
// protected uint32_t CNWSMessage::ComputeLastUpdate_PlayerState(CNWSCreature*)
constexpr uintptr_t CNWSMessage__ComputeLastUpdate_PlayerState = 0x08064C84;
// protected void CNWSMessage::ComputeLastUpdate_StoreUpdateSpellLikeAbility(CNWSCreature*, CNWSPlayerLastUpdateObject*)
constexpr uintptr_t CNWSMessage__ComputeLastUpdate_StoreUpdateSpellLikeAbility = 0x080645F0;
// protected void CNWSMessage::ComputeLastUpdate_WriteSpellLikeAbility(CNWSCreature*, CNWSPlayerLastUpdateObject*)
constexpr uintptr_t CNWSMessage__ComputeLastUpdate_WriteSpellLikeAbility = 0x080644BC;
// protected uint32_t CNWSMessage::ComputeNumAutoMapUpdatesRequired(CNWSCreature*, CNWSPlayerLastUpdateObject*, uint32_t*)
constexpr uintptr_t CNWSMessage__ComputeNumAutoMapUpdatesRequired = 0x08064830;
// protected int32_t CNWSMessage::ComputeQuickbarItemUseCountUpdateRequired(CNWSObject*, CLastUpdateObject*)
constexpr uintptr_t CNWSMessage__ComputeQuickbarItemUseCountUpdateRequired = 0x0807E6B0;
// void CNWSMessage::ComputeRepositoryUpdateRequired(CNWSPlayer*, CExoLinkedListNode*, CExoLinkedListNode*)
constexpr uintptr_t CNWSMessage__ComputeRepositoryUpdateRequired = 0x0807F014;
// protected uint32_t CNWSMessage::ComputeUpdateRequired(CNWSPlayer*, CNWSObject*, CLastUpdateObject*, int32_t)
constexpr uintptr_t CNWSMessage__ComputeUpdateRequired = 0x080629D0;
// protected int32_t CNWSMessage::ComputeVisibilityLists(CNWSCreature*, CNWSPlayerLastUpdateObject*)
constexpr uintptr_t CNWSMessage__ComputeVisibilityLists = 0x080627DC;
// public CLastUpdateObject* CNWSMessage::CreateNewLastUpdateObject(CNWSPlayer*, CNWSObject*, uint32_t*, uint32_t*)
constexpr uintptr_t CNWSMessage__CreateNewLastUpdateObject = 0x0806BCD8;
// public void CNWSMessage::DeleteLastUpdateObjectsForObject(CNWSPlayer*, uint32_t)
constexpr uintptr_t CNWSMessage__DeleteLastUpdateObjectsForObject = 0x0806CEA8;
// public void CNWSMessage::DeleteLastUpdateObjectsInOtherAreas(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__DeleteLastUpdateObjectsInOtherAreas = 0x0806CC64;
// public int32_t CNWSMessage::GetLocStringServer(uint32_t, CExoLocString, CExoLocString, CExoString&, float&, unsigned char)
constexpr uintptr_t CNWSMessage__GetLocStringServer = 0x08052860;
// public int32_t CNWSMessage::HandlePlayerToServerAreaMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerAreaMessage = 0x08197630;
// void CNWSMessage::HandlePlayerToServerBarter(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerBarter = 0x0819A558;
// void CNWSMessage::HandlePlayerToServerBarter_AcceptTrade(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerBarter_AcceptTrade = 0x0819A9AC;
// public int32_t CNWSMessage::HandlePlayerToServerBarter_AddItem(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerBarter_AddItem = 0x0819A6BC;
// public int32_t CNWSMessage::HandlePlayerToServerBarter_CloseBarter(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerBarter_CloseBarter = 0x0819A5DC;
// void CNWSMessage::HandlePlayerToServerBarter_LockList(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerBarter_LockList = 0x0819A920;
// public int32_t CNWSMessage::HandlePlayerToServerBarter_MoveItem(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerBarter_MoveItem = 0x0819A850;
// public int32_t CNWSMessage::HandlePlayerToServerBarter_RemoveItem(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerBarter_RemoveItem = 0x0819A780;
// void CNWSMessage::HandlePlayerToServerBarter_StartBarter(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerBarter_StartBarter = 0x0819BC10;
// void CNWSMessage::HandlePlayerToServerBarter_Window(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerBarter_Window = 0x0819AA38;
// void CNWSMessage::HandlePlayerToServerCharacterDownload(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerCharacterDownload = 0x0819BC94;
// public int32_t CNWSMessage::HandlePlayerToServerCharacterSheetMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerCharacterSheetMessage = 0x0818F7B0;
// public int32_t CNWSMessage::HandlePlayerToServerCharListMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerCharListMessage = 0x08196CDC;
// public int32_t CNWSMessage::HandlePlayerToServerChatMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerChatMessage = 0x081848C8;
// public int32_t CNWSMessage::HandlePlayerToServerCheatMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerCheatMessage = 0x08184EAC;
// public int32_t CNWSMessage::HandlePlayerToServerCutscene(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerCutscene = 0x0819B64C;
// public int32_t CNWSMessage::HandlePlayerToServerDialogMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerDialogMessage = 0x08188208;
// public int32_t CNWSMessage::HandlePlayerToServerDungeonMasterMessage(CNWSPlayer*, unsigned char, int32_t)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerDungeonMasterMessage = 0x081882E4;
// public int32_t CNWSMessage::HandlePlayerToServerGameObjectUpdate(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerGameObjectUpdate = 0x0818E910;
// public int32_t CNWSMessage::HandlePlayerToServerGoldMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerGoldMessage = 0x08190C14;
// public int32_t CNWSMessage::HandlePlayerToServerGroupInputMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerGroupInputMessage = 0x081934E8;
// public int32_t CNWSMessage::HandlePlayerToServerGroupInputWalkToWaypoint(CNWSPlayer*, CNWSCreature*, uint32_t, float, float, float, unsigned char, int32_t, int32_t, uint32_t)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerGroupInputWalkToWaypoint = 0x081901F8;
// public int32_t CNWSMessage::HandlePlayerToServerGuiContainerMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerGuiContainerMessage = 0x0818F66C;
// public int32_t CNWSMessage::HandlePlayerToServerGuiInventoryMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerGuiInventoryMessage = 0x0818F524;
// void CNWSMessage::HandlePlayerToServerGuiQuickbar(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerGuiQuickbar = 0x0819BB58;
// public int32_t CNWSMessage::HandlePlayerToServerGuiQuickbar_SetButton(CNWSPlayer*, unsigned char, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerGuiQuickbar_SetButton = 0x08198F1C;
// public int32_t CNWSMessage::HandlePlayerToServerInputAbortDriveControl(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerInputAbortDriveControl = 0x0818F9EC;
// void CNWSMessage::HandlePlayerToServerInputCancelGuiTimingEvent(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerInputCancelGuiTimingEvent = 0x0819BAB8;
// public int32_t CNWSMessage::HandlePlayerToServerInputDriveControl(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerInputDriveControl = 0x0818F8C0;
// public int32_t CNWSMessage::HandlePlayerToServerInputMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerInputMessage = 0x08190D9C;
// public int32_t CNWSMessage::HandlePlayerToServerInputWalkToWaypoint(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerInputWalkToWaypoint = 0x0818FA78;
// public int32_t CNWSMessage::HandlePlayerToServerInventoryMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerInventoryMessage = 0x081952D8;
// public int32_t CNWSMessage::HandlePlayerToServerJournalMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerJournalMessage = 0x08198BB8;
// public int32_t CNWSMessage::HandlePlayerToServerLevelUpMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerLevelUpMessage = 0x08198654;
// public int32_t CNWSMessage::HandlePlayerToServerLoginMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerLoginMessage = 0x08195F98;
// public int32_t CNWSMessage::HandlePlayerToServerMapPinChangePin(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerMapPinChangePin = 0x0819A0E8;
// public int32_t CNWSMessage::HandlePlayerToServerMapPinDestroyMapPin(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerMapPinDestroyMapPin = 0x08199E8C;
// void CNWSMessage::HandlePlayerToServerMapPinMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerMapPinMessage = 0x0819BBB8;
// void CNWSMessage::HandlePlayerToServerMapPinSetMapPinAt(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerMapPinSetMapPinAt = 0x0819995C;
// public int32_t CNWSMessage::HandlePlayerToServerMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerMessage = 0x08196544;
// public int32_t CNWSMessage::HandlePlayerToServerModuleMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerModuleMessage = 0x08196E28;
// public int32_t CNWSMessage::HandlePlayerToServerParty(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerParty = 0x08197774;
// void CNWSMessage::HandlePlayerToServerPlayerDeath(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerPlayerDeath = 0x0819AAB8;
// public int32_t CNWSMessage::HandlePlayerToServerPlayerList(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerPlayerList = 0x0819B71C;
// void CNWSMessage::HandlePlayerToServerPlayModuleCharacterList(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerPlayModuleCharacterList = 0x0819BCFC;
// public int32_t CNWSMessage::HandlePlayerToServerPlayModuleCharacterList_Start(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerPlayModuleCharacterList_Start = 0x0819B568;
// void CNWSMessage::HandlePlayerToServerPlayModuleCharacterList_Stop(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerPlayModuleCharacterList_Stop = 0x0819BD64;
// public int32_t CNWSMessage::HandlePlayerToServerPortal(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerPortal = 0x0819B384;
// public int32_t CNWSMessage::HandlePlayerToServerPVPListOperations(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerPVPListOperations = 0x0819AB58;
// public int32_t CNWSMessage::HandlePlayerToServerQuickChatMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerQuickChatMessage = 0x08184804;
// void CNWSMessage::HandlePlayerToServerServerChatMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerServerChatMessage = 0x0819BB04;
// void CNWSMessage::HandlePlayerToServerServerStatusMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerServerStatusMessage = 0x0819BB10;
// public int32_t CNWSMessage::HandlePlayerToServerShutDownServer(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerShutDownServer = 0x0819B41C;
// public int32_t CNWSMessage::HandlePlayerToServerStoreMessage(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__HandlePlayerToServerStoreMessage = 0x08190794;
// public int32_t CNWSMessage::HandleServerAdminToServerMessage(uint32_t, unsigned char*, uint32_t)
constexpr uintptr_t CNWSMessage__HandleServerAdminToServerMessage = 0x0819BE40;
// protected int32_t CNWSMessage::HasValidString(CExoLocString&, unsigned char)
constexpr uintptr_t CNWSMessage__HasValidString = 0x0807D924;
// void CNWSMessage::ParseGetBool(unsigned char*, uint32_t, int32_t&)
constexpr uintptr_t CNWSMessage__ParseGetBool = 0x0819E81C;
// void CNWSMessage::ParseGetString(unsigned char*, uint32_t, CExoString&, uint32_t)
constexpr uintptr_t CNWSMessage__ParseGetString = 0x0819E864;
// void CNWSMessage::ParseToken(const char*, unsigned char**, uint32_t&, int32_t)
constexpr uintptr_t CNWSMessage__ParseToken = 0x0819E8F0;
// public uint32_t CNWSMessage::ReadOBJECTIDServer(void)
constexpr uintptr_t CNWSMessage__ReadOBJECTIDServer = 0x08052D84;
// public uint32_t CNWSMessage::SelectCategoryForGameObject(CGameObject*, CNWSObject*)
constexpr uintptr_t CNWSMessage__SelectCategoryForGameObject = 0x0806B0FC;
// public int32_t CNWSMessage::SendPlayerToServerGuiInventory_Status(CNWSPlayer*, int32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendPlayerToServerGuiInventory_Status = 0x0808175C;
// public int32_t CNWSMessage::SendServerPlayerItemUpdate_DestroyItem(CNWSPlayer*, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerPlayerItemUpdate_DestroyItem = 0x080819E0;
// public int32_t CNWSMessage::SendServerToAllPlayersCreatureUpdate_StripEquippedItems(uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToAllPlayersCreatureUpdate_StripEquippedItems = 0x0807BC4C;
// public int32_t CNWSMessage::SendServerToPlayerActivatePortal(uint32_t, CExoString, CExoString, CExoString, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerActivatePortal = 0x0807DAA8;
// public int32_t CNWSMessage::SendServerToPlayerAIActionPlaySound(uint32_t, uint32_t, CExoString)
constexpr uintptr_t CNWSMessage__SendServerToPlayerAIActionPlaySound = 0x0807FAE0;
// public int32_t CNWSMessage::SendServerToPlayerAmbientBattleMusicChange(uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerAmbientBattleMusicChange = 0x08082604;
// public int32_t CNWSMessage::SendServerToPlayerAmbientBattleMusicPlay(uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerAmbientBattleMusicPlay = 0x080825A4;
// public int32_t CNWSMessage::SendServerToPlayerAmbientMusicChangeTrack(uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerAmbientMusicChangeTrack = 0x08082530;
// public int32_t CNWSMessage::SendServerToPlayerAmbientMusicPlay(uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerAmbientMusicPlay = 0x0808246C;
// public int32_t CNWSMessage::SendServerToPlayerAmbientMusicSetDelay(uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerAmbientMusicSetDelay = 0x080824CC;
// public int32_t CNWSMessage::SendServerToPlayerAmbientSoundLoopChange(uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerAmbientSoundLoopChange = 0x080826C8;
// public int32_t CNWSMessage::SendServerToPlayerAmbientSoundLoopPlay(uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerAmbientSoundLoopPlay = 0x08082668;
// public int32_t CNWSMessage::SendServerToPlayerAmbientSoundVolumeChange(uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerAmbientSoundVolumeChange = 0x0808273C;
// public int32_t CNWSMessage::SendServerToPlayerArea_ChangeDayNight(CNWSPlayer*, int32_t, float)
constexpr uintptr_t CNWSMessage__SendServerToPlayerArea_ChangeDayNight = 0x0807F87C;
// public int32_t CNWSMessage::SendServerToPlayerArea_ClientArea(CNWSPlayer*, CNWSArea*, float, float, float, const Vector&, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerArea_ClientArea = 0x0806504C;
// public int32_t CNWSMessage::SendServerToPlayerArea_RecomputeStaticLighting(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerArea_RecomputeStaticLighting = 0x0806562C;
// public int32_t CNWSMessage::SendServerToPlayerArea_VisualEffect(CNWSPlayer*, uint16_t, Vector)
constexpr uintptr_t CNWSMessage__SendServerToPlayerArea_VisualEffect = 0x08065590;
// public int32_t CNWSMessage::SendServerToPlayerArea_Weather(CNWSPlayer*, unsigned char, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerArea_Weather = 0x0807F804;
// public int32_t CNWSMessage::SendServerToPlayerBarterAcceptTrade(uint32_t, uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerBarterAcceptTrade = 0x08082344;
// public int32_t CNWSMessage::SendServerToPlayerBarterCloseBarter(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerBarterCloseBarter = 0x08082218;
// public int32_t CNWSMessage::SendServerToPlayerBarterLockList(uint32_t, uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerBarterLockList = 0x080822B0;
// public int32_t CNWSMessage::SendServerToPlayerBarterReject(uint32_t, unsigned char, unsigned char, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerBarterReject = 0x080823D8;
// public int32_t CNWSMessage::SendServerToPlayerBarterStartBarter(uint32_t, uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerBarterStartBarter = 0x08082184;
// public int32_t CNWSMessage::SendServerToPlayerCamera_ChangeLocation(CNWSPlayer*, int32_t, float, float, float, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCamera_ChangeLocation = 0x08064E14;
// public int32_t CNWSMessage::SendServerToPlayerCamera_LockDistance(CNWSPlayer*, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCamera_LockDistance = 0x0807F29C;
// public int32_t CNWSMessage::SendServerToPlayerCamera_LockPitch(CNWSPlayer*, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCamera_LockPitch = 0x0807F238;
// public int32_t CNWSMessage::SendServerToPlayerCamera_LockYaw(CNWSPlayer*, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCamera_LockYaw = 0x0807F300;
// public int32_t CNWSMessage::SendServerToPlayerCamera_Restore(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCamera_Restore = 0x0807F1B0;
// public int32_t CNWSMessage::SendServerToPlayerCamera_SetHeight(CNWSPlayer*, float)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCamera_SetHeight = 0x0807F1D0;
// public int32_t CNWSMessage::SendServerToPlayerCamera_SetMode(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCamera_SetMode = 0x0807F124;
// public int32_t CNWSMessage::SendServerToPlayerCamera_Store(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCamera_Store = 0x0807F190;
// public int32_t CNWSMessage::SendServerToPlayerCCMessage(uint32_t, unsigned char, CNWCCMessageData*, CNWSCombatAttackData*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCCMessage = 0x08078AB8;
// public int32_t CNWSMessage::SendServerToPlayerCharacterDownloadFail(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCharacterDownloadFail = 0x0807DD48;
// public int32_t CNWSMessage::SendServerToPlayerCharacterDownloadReply(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCharacterDownloadReply = 0x0807DC84;
// public int32_t CNWSMessage::SendServerToPlayerCharList(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCharList = 0x08065AD4;
// protected int32_t CNWSMessage::SendServerToPlayerChat_DM_Silent_Shout(uint32_t, uint32_t, CExoString)
constexpr uintptr_t CNWSMessage__SendServerToPlayerChat_DM_Silent_Shout = 0x08069DD8;
// protected int32_t CNWSMessage::SendServerToPlayerChat_DM_Talk(uint32_t, uint32_t, CExoString)
constexpr uintptr_t CNWSMessage__SendServerToPlayerChat_DM_Talk = 0x08069248;
// protected int32_t CNWSMessage::SendServerToPlayerChat_DM_Whisper(uint32_t, uint32_t, CExoString)
constexpr uintptr_t CNWSMessage__SendServerToPlayerChat_DM_Whisper = 0x0806A03C;
// public int32_t CNWSMessage::SendServerToPlayerChat_Party(uint32_t, uint32_t, CExoString)
constexpr uintptr_t CNWSMessage__SendServerToPlayerChat_Party = 0x08068FE4;
// protected int32_t CNWSMessage::SendServerToPlayerChat_ServerTell(uint32_t, CExoString)
constexpr uintptr_t CNWSMessage__SendServerToPlayerChat_ServerTell = 0x0807FF68;
// protected int32_t CNWSMessage::SendServerToPlayerChat_Shout(uint32_t, uint32_t, CExoString)
constexpr uintptr_t CNWSMessage__SendServerToPlayerChat_Shout = 0x08069710;
// protected int32_t CNWSMessage::SendServerToPlayerChat_Silent_Shout(uint32_t, uint32_t, CExoString)
constexpr uintptr_t CNWSMessage__SendServerToPlayerChat_Silent_Shout = 0x08069A74;
// protected int32_t CNWSMessage::SendServerToPlayerChat_StrRef(uint32_t, uint32_t, unsigned char, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerChat_StrRef = 0x0807FD94;
// protected int32_t CNWSMessage::SendServerToPlayerChat_Talk(uint32_t, uint32_t, CExoString)
constexpr uintptr_t CNWSMessage__SendServerToPlayerChat_Talk = 0x0807FE10;
// protected int32_t CNWSMessage::SendServerToPlayerChat_Tell(uint32_t, uint32_t, CExoString)
constexpr uintptr_t CNWSMessage__SendServerToPlayerChat_Tell = 0x080694AC;
// protected int32_t CNWSMessage::SendServerToPlayerChat_Whisper(uint32_t, uint32_t, CExoString)
constexpr uintptr_t CNWSMessage__SendServerToPlayerChat_Whisper = 0x0808003C;
// public int32_t CNWSMessage::SendServerToPlayerChatMessage(unsigned char, uint32_t, CExoString, uint32_t, const CExoString&)
constexpr uintptr_t CNWSMessage__SendServerToPlayerChatMessage = 0x0806839C;
// public int32_t CNWSMessage::SendServerToPlayerChatMultiLang_Helper(uint32_t, unsigned char, uint32_t, CExoLocString, uint32_t, unsigned char, int32_t, const CResRef&, int32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerChatMultiLang_Helper = 0x0807F984;
// public int32_t CNWSMessage::SendServerToPlayerChatMultiLangMessage(unsigned char, uint32_t, CExoLocString, uint32_t, unsigned char, uint32_t*, uint32_t, int32_t, const CResRef&, int32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerChatMultiLangMessage = 0x08067E6C;
// public int32_t CNWSMessage::SendServerToPlayerChatStrRefMessage(unsigned char, uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerChatStrRefMessage = 0x08068150;
// void CNWSMessage::SendServerToPlayerChatStrRefStatusMessage(unsigned char, uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerChatStrRefStatusMessage = 0x0819BE0C;
// public int32_t CNWSMessage::SendServerToPlayerCheatDebugMode(int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCheatDebugMode = 0x0807B0D4;
// public int32_t CNWSMessage::SendServerToPlayerCheatNasty(uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCheatNasty = 0x08081394;
// public int32_t CNWSMessage::SendServerToPlayerCheatPonyRide(uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCheatPonyRide = 0x080813F4;
// void CNWSMessage::SendServerToPlayerCheatRainOfCows(uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCheatRainOfCows = 0x08081460;
// public int32_t CNWSMessage::SendServerToPlayerCloseStoreInventory(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCloseStoreInventory = 0x0808067C;
// void CNWSMessage::SendServerToPlayerCombatRoundStarted(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCombatRoundStarted = 0x08081540;
// public int32_t CNWSMessage::SendServerToPlayerCutscene_BlackScreen(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCutscene_BlackScreen = 0x08081954;
// public int32_t CNWSMessage::SendServerToPlayerCutscene_FadeFromBlack(CNWSPlayer*, float)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCutscene_FadeFromBlack = 0x080818C4;
// public int32_t CNWSMessage::SendServerToPlayerCutscene_FadeToBlack(CNWSPlayer*, float)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCutscene_FadeToBlack = 0x08081854;
// void CNWSMessage::SendServerToPlayerCutscene_HideGui(CNWSPlayer*, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCutscene_HideGui = 0x08081974;
// public int32_t CNWSMessage::SendServerToPlayerCutscene_Status(CNWSPlayer*, int32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCutscene_Status = 0x080817D4;
// public int32_t CNWSMessage::SendServerToPlayerCutscene_StopFade(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerCutscene_StopFade = 0x08081934;
// public int32_t CNWSMessage::SendServerToPlayerDebugInfo_Area(CNWSPlayer*, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDebugInfo_Area = 0x0807D634;
// public int32_t CNWSMessage::SendServerToPlayerDebugInfo_Creature(CNWSPlayer*, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDebugInfo_Creature = 0x0807CD98;
// public int32_t CNWSMessage::SendServerToPlayerDebugInfo_Door(CNWSPlayer*, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDebugInfo_Door = 0x0807D42C;
// public int32_t CNWSMessage::SendServerToPlayerDebugInfo_Item(CNWSPlayer*, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDebugInfo_Item = 0x0807D0D0;
// public int32_t CNWSMessage::SendServerToPlayerDebugInfo_Placeable(CNWSPlayer*, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDebugInfo_Placeable = 0x0807D264;
// public int32_t CNWSMessage::SendServerToPlayerDebugInfo_Trigger(CNWSPlayer*, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDebugInfo_Trigger = 0x0807D1B0;
// public int32_t CNWSMessage::SendServerToPlayerDestroyDeathGUI(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDestroyDeathGUI = 0x080829FC;
// public int32_t CNWSMessage::SendServerToPlayerDialogClose(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDialogClose = 0x08080A24;
// public int32_t CNWSMessage::SendServerToPlayerDialogEntry(uint32_t, uint32_t, uint32_t, CExoLocString, uint32_t, unsigned char)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDialogEntry = 0x0808070C;
// public int32_t CNWSMessage::SendServerToPlayerDialogReplies(uint32_t, CExoLocString*, uint32_t*, uint32_t, uint32_t, uint32_t, unsigned char, int32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDialogReplies = 0x080807FC;
// public int32_t CNWSMessage::SendServerToPlayerDialogReplyChosen(uint32_t, uint32_t, uint32_t, CExoLocString, uint32_t, unsigned char, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDialogReplyChosen = 0x08080918;
// public int32_t CNWSMessage::SendServerToPlayerDungeonMasterAreaList(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDungeonMasterAreaList__0 = 0x08075960;
// public int32_t CNWSMessage::SendServerToPlayerDungeonMasterAreaList(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDungeonMasterAreaList__1 = 0x08075A18;
// public int32_t CNWSMessage::SendServerToPlayerDungeonMasterCreatorLists(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDungeonMasterCreatorLists = 0x0807678C;
// public int32_t CNWSMessage::SendServerToPlayerDungeonMasterObjectList(CNWSPlayer*, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDungeonMasterObjectList = 0x080761D0;
// public int32_t CNWSMessage::SendServerToPlayerDungeonMastersDifficultyChange(int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDungeonMastersDifficultyChange = 0x08076E34;
// public int32_t CNWSMessage::SendServerToPlayerDungeonMasterSearchByIdResult(CNWSPlayer*, uint32_t, int32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDungeonMasterSearchByIdResult = 0x08080A44;
// public int32_t CNWSMessage::SendServerToPlayerDungeonMasterSearchByTagResult(CNWSPlayer*, const CExoString&, int32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDungeonMasterSearchByTagResult = 0x08075B2C;
// public int32_t CNWSMessage::SendServerToPlayerDungeonMasterUpdatePartyList(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDungeonMasterUpdatePartyList__0 = 0x08080AC8;
// public int32_t CNWSMessage::SendServerToPlayerDungeonMasterUpdatePartyList(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerDungeonMasterUpdatePartyList__1 = 0x08080B04;
// public int32_t CNWSMessage::SendServerToPlayerExamineGui_CreatureData(CNWSPlayer*, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerExamineGui_CreatureData = 0x08073958;
// public int32_t CNWSMessage::SendServerToPlayerExamineGui_DoorData(CNWSPlayer*, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerExamineGui_DoorData = 0x08074C50;
// public int32_t CNWSMessage::SendServerToPlayerExamineGui_ItemData(CNWSPlayer*, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerExamineGui_ItemData = 0x08073F9C;
// public int32_t CNWSMessage::SendServerToPlayerExamineGui_PlaceableData(CNWSPlayer*, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerExamineGui_PlaceableData = 0x08074668;
// public int32_t CNWSMessage::SendServerToPlayerExamineGui_TrapData(CNWSPlayer*, uint32_t, CNWSCreature*, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerExamineGui_TrapData = 0x080747D0;
// public int32_t CNWSMessage::SendServerToPlayerGameObjUpdate(CNWSPlayer*, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerGameObjUpdate__0 = 0x0806B768;
// public int32_t CNWSMessage::SendServerToPlayerGameObjUpdate(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerGameObjUpdate__1 = 0x08080358;
// public int32_t CNWSMessage::SendServerToPlayerGameObjUpdate_ObjControl(uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerGameObjUpdate_ObjControl = 0x0808069C;
// public int32_t CNWSMessage::SendServerToPlayerGameObjUpdateFloatyText(CNWSPlayer*, uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerGameObjUpdateFloatyText = 0x080814CC;
// public int32_t CNWSMessage::SendServerToPlayerGameObjUpdateVisEffect(CNWSPlayer*, uint16_t, uint32_t, uint32_t, unsigned char, unsigned char, Vector, float)
constexpr uintptr_t CNWSMessage__SendServerToPlayerGameObjUpdateVisEffect = 0x0807B1AC;
// public int32_t CNWSMessage::SendServerToPlayerGUICharacterSheet_NotPermitted(uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerGUICharacterSheet_NotPermitted = 0x08082B14;
// public int32_t CNWSMessage::SendServerToPlayerGuiContainerObject_Status(CNWSPlayer*, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerGuiContainerObject_Status = 0x080816E4;
// public int32_t CNWSMessage::SendServerToPlayerGuiQuickbar_SetButton(CNWSPlayer*, unsigned char, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerGuiQuickbar_SetButton = 0x0807C794;
// public int32_t CNWSMessage::SendServerToPlayerGuiTimingEvent(CNWSPlayer*, int32_t, unsigned char, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerGuiTimingEvent = 0x08082A20;
// public int32_t CNWSMessage::SendServerToPlayerInventory_ConfirmDrop(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerInventory_ConfirmDrop = 0x08080DE8;
// public int32_t CNWSMessage::SendServerToPlayerInventory_Drop(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerInventory_Drop = 0x08080B24;
// public int32_t CNWSMessage::SendServerToPlayerInventory_DropCancel(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerInventory_DropCancel = 0x08080B94;
// public int32_t CNWSMessage::SendServerToPlayerInventory_Equip(uint32_t, uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerInventory_Equip = 0x08080C04;
// public int32_t CNWSMessage::SendServerToPlayerInventory_EquipCancel(uint32_t, uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerInventory_EquipCancel = 0x08080C84;
// protected int32_t CNWSMessage::SendServerToPlayerInventory_LearnScroll(uint32_t, uint32_t, unsigned char)
constexpr uintptr_t CNWSMessage__SendServerToPlayerInventory_LearnScroll = 0x080828A4;
// public int32_t CNWSMessage::SendServerToPlayerInventory_Pickup(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerInventory_Pickup = 0x08080EC8;
// public int32_t CNWSMessage::SendServerToPlayerInventory_PickupCancel(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerInventory_PickupCancel = 0x08080F38;
// public int32_t CNWSMessage::SendServerToPlayerInventory_RepositoryMove(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerInventory_RepositoryMove = 0x08080D08;
// public int32_t CNWSMessage::SendServerToPlayerInventory_RepositoryMoveCancel(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerInventory_RepositoryMoveCancel = 0x08080D78;
// void CNWSMessage::SendServerToPlayerInventory_SelectPage(uint32_t, unsigned char)
constexpr uintptr_t CNWSMessage__SendServerToPlayerInventory_SelectPage = 0x08080EC0;
// public int32_t CNWSMessage::SendServerToPlayerInventory_SelectPanel(uint32_t, unsigned char)
constexpr uintptr_t CNWSMessage__SendServerToPlayerInventory_SelectPanel = 0x08080E58;
// public int32_t CNWSMessage::SendServerToPlayerInventory_Unequip(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerInventory_Unequip = 0x08080FA8;
// public int32_t CNWSMessage::SendServerToPlayerInventory_UnequipCancel(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerInventory_UnequipCancel = 0x08081018;
// public int32_t CNWSMessage::SendServerToPlayerJournalAddQuest(CNWSPlayer*, CExoString, int32_t, uint32_t, uint16_t, int32_t, uint32_t, uint32_t, CExoLocString, CExoLocString)
constexpr uintptr_t CNWSMessage__SendServerToPlayerJournalAddQuest = 0x0807BD28;
// public int32_t CNWSMessage::SendServerToPlayerJournalAddWorld(CNWSPlayer*, int32_t, CExoString, CExoString, uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerJournalAddWorld = 0x0807BF24;
// void CNWSMessage::SendServerToPlayerJournalAddWorldStrref(CNWSPlayer*, uint32_t, uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerJournalAddWorldStrref = 0x08081BFC;
// public int32_t CNWSMessage::SendServerToPlayerJournalDeleteWorld(CNWSPlayer*, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerJournalDeleteWorld = 0x08081C98;
// void CNWSMessage::SendServerToPlayerJournalDeleteWorldAll(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerJournalDeleteWorldAll = 0x08081D78;
// public int32_t CNWSMessage::SendServerToPlayerJournalDeleteWorldStrref(CNWSPlayer*, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerJournalDeleteWorldStrref = 0x08081D08;
// public int32_t CNWSMessage::SendServerToPlayerJournalFullUpdate(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerJournalFullUpdate = 0x0807C09C;
// void CNWSMessage::SendServerToPlayerJournalFullUpdateNotNeeded(CNWSPlayer*, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerJournalFullUpdateNotNeeded = 0x08081DE0;
// public int32_t CNWSMessage::SendServerToPlayerJournalRemoveQuest(CNWSPlayer*, CExoString)
constexpr uintptr_t CNWSMessage__SendServerToPlayerJournalRemoveQuest = 0x08081A44;
// void CNWSMessage::SendServerToPlayerJournalSetQuestPicture(CNWSPlayer*, CExoString, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerJournalSetQuestPicture = 0x08081B18;
// public int32_t CNWSMessage::SendServerToPlayerJournalUpdated(CNWSPlayer*, int32_t, int32_t, CExoLocString)
constexpr uintptr_t CNWSMessage__SendServerToPlayerJournalUpdated = 0x08081E74;
// public int32_t CNWSMessage::SendServerToPlayerLevelUp_Begin(uint32_t, CNWSCreature*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerLevelUp_Begin = 0x0807C59C;
// public int32_t CNWSMessage::SendServerToPlayerLevelUp_Confirmation(uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerLevelUp_Confirmation = 0x08081F54;
// public int32_t CNWSMessage::SendServerToPlayerLoadBar_EndStallEvent(uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerLoadBar_EndStallEvent = 0x0807F5F0;
// public int32_t CNWSMessage::SendServerToPlayerLoadBar_StartStallEvent(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerLoadBar_StartStallEvent = 0x0807F510;
// public int32_t CNWSMessage::SendServerToPlayerLoadBar_UpdateStallEvent(uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerLoadBar_UpdateStallEvent = 0x0807F578;
// public int32_t CNWSMessage::SendServerToPlayerLogin_CharacterQuery(CNWSPlayer*, unsigned char&, int32_t*, unsigned char*, uint32_t&)
constexpr uintptr_t CNWSMessage__SendServerToPlayerLogin_CharacterQuery = 0x0807F364;
// public int32_t CNWSMessage::SendServerToPlayerLogin_Confirm(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerLogin_Confirm = 0x08081088;
// public int32_t CNWSMessage::SendServerToPlayerLogin_Fail(uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerLogin_Fail = 0x080810C8;
// public int32_t CNWSMessage::SendServerToPlayerLogin_GetWaypoint(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerLogin_GetWaypoint = 0x080810A8;
// public int32_t CNWSMessage::SendServerToPlayerLogin_NeedCharacter(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerLogin_NeedCharacter = 0x0807F414;
// public int32_t CNWSMessage::SendServerToPlayerMapPinAdded(CNWSPlayer*, Vector, CExoString, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerMapPinAdded = 0x0807CC80;
// public int32_t CNWSMessage::SendServerToPlayerMapPinCreated(CNWSPlayer*, uint32_t, Vector, CExoLocString, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerMapPinCreated = 0x0808207C;
// public int32_t CNWSMessage::SendServerToPlayerMapPinEnabled(CNWSPlayer*, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerMapPinEnabled = 0x0808200C;
// protected int32_t CNWSMessage::SendServerToPlayerMessage(uint32_t, unsigned char, unsigned char, unsigned char*, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerMessage = 0x08076F10;
// public int32_t CNWSMessage::SendServerToPlayerModule_DumpPlayer(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerModule_DumpPlayer = 0x0807F7E4;
// public int32_t CNWSMessage::SendServerToPlayerModule_EndGame(uint32_t, const CExoString&)
constexpr uintptr_t CNWSMessage__SendServerToPlayerModule_EndGame = 0x0807F4A0;
// public int32_t CNWSMessage::SendServerToPlayerModule_EndStartNewModule(int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerModule_EndStartNewModule = 0x0807F780;
// public int32_t CNWSMessage::SendServerToPlayerModule_ExportReply(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerModule_ExportReply = 0x0807F668;
// public int32_t CNWSMessage::SendServerToPlayerModule_Info(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerModule_Info = 0x08077004;
// public int32_t CNWSMessage::SendServerToPlayerModule_Loading(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerModule_Loading = 0x0807F6C0;
// public int32_t CNWSMessage::SendServerToPlayerModule_SaveGameStatus(unsigned char)
constexpr uintptr_t CNWSMessage__SendServerToPlayerModule_SaveGameStatus = 0x0807F434;
// public int32_t CNWSMessage::SendServerToPlayerModule_SetPauseState(unsigned char, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerModule_SetPauseState = 0x08064EE8;
// public int32_t CNWSMessage::SendServerToPlayerModule_StartStartNewModule(void)
constexpr uintptr_t CNWSMessage__SendServerToPlayerModule_StartStartNewModule = 0x0807F75C;
// public int32_t CNWSMessage::SendServerToPlayerModuleUpdate_Time(CNWSPlayer*, unsigned char, uint32_t, uint32_t, uint32_t, uint32_t, unsigned char, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerModuleUpdate_Time = 0x0807C690;
// public int32_t CNWSMessage::SendServerToPlayerOpenStoreInventory(CNWSPlayer*, uint32_t, unsigned char)
constexpr uintptr_t CNWSMessage__SendServerToPlayerOpenStoreInventory = 0x080708B4;
// void CNWSMessage::SendServerToPlayerParty_Invite(uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerParty_Invite = 0x0808112C;
// public int32_t CNWSMessage::SendServerToPlayerParty_List(uint32_t, int32_t, uint32_t*, unsigned char, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerParty_List = 0x08081138;
// public int32_t CNWSMessage::SendServerToPlayerParty_TransferObjectControl(uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerParty_TransferObjectControl = 0x080811F4;
// public int32_t CNWSMessage::SendServerToPlayerPartyBar_PanelButtonFlash(uint32_t, unsigned char, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerPartyBar_PanelButtonFlash = 0x08082914;
// public int32_t CNWSMessage::SendServerToPlayerPlaceableUpdate_Useable(CNWSPlaceable*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerPlaceableUpdate_Useable = 0x0807EE10;
// public int32_t CNWSMessage::SendServerToPlayerPlayerList_Add(uint32_t, CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerPlayerList_Add = 0x080770A8;
// public int32_t CNWSMessage::SendServerToPlayerPlayerList_All(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerPlayerList_All = 0x080774E4;
// public int32_t CNWSMessage::SendServerToPlayerPlayerList_Delete(uint32_t, CNWSPlayer*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerPlayerList_Delete = 0x08081268;
// public int32_t CNWSMessage::SendServerToPlayerPlayerList_ReauthorizeCDKey(uint32_t, const CExoString&, const CExoString&)
constexpr uintptr_t CNWSMessage__SendServerToPlayerPlayerList_ReauthorizeCDKey = 0x080812EC;
// public int32_t CNWSMessage::SendServerToPlayerPlayModuleCharacterListResponse(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerPlayModuleCharacterListResponse = 0x0807E44C;
// public int32_t CNWSMessage::SendServerToPlayerPolymorph(CNWSPlayer*, uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerPolymorph = 0x08082B78;
// public int32_t CNWSMessage::SendServerToPlayerPopUpGUIPanel(uint32_t, int32_t, int32_t, int32_t, int32_t, CExoString)
constexpr uintptr_t CNWSMessage__SendServerToPlayerPopUpGUIPanel = 0x0807D6D0;
// public int32_t CNWSMessage::SendServerToPlayerPVP_Attitude_Change(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerPVP_Attitude_Change = 0x0807DEA4;
// void CNWSMessage::SendServerToPlayerQuickChat(uint32_t, uint32_t, uint16_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerQuickChat = 0x0807FEF0;
// public int32_t CNWSMessage::SendServerToPlayerQuickChatMessage(uint32_t, uint16_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerQuickChatMessage = 0x08068DEC;
// public int32_t CNWSMessage::SendServerToPlayerSafeProjectile(CNWSPlayer*, uint32_t, uint32_t, Vector, Vector, uint32_t, unsigned char, uint32_t, unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSMessage__SendServerToPlayerSafeProjectile = 0x0807073C;
// public int32_t CNWSMessage::SendServerToPlayerSaveLoad_Status(CNWSPlayer*, unsigned char, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerSaveLoad_Status = 0x0807F6E0;
// public int32_t CNWSMessage::SendServerToPlayerServerStatus_Status(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerServerStatus_Status = 0x08077A98;
// public int32_t CNWSMessage::SendServerToPlayerSetCustomToken(uint32_t, int32_t, const CExoString&)
constexpr uintptr_t CNWSMessage__SendServerToPlayerSetCustomToken = 0x0807F8F4;
// public int32_t CNWSMessage::SendServerToPlayerSetCustomTokenList(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerSetCustomTokenList = 0x08067D60;
// public int32_t CNWSMessage::SendServerToPlayerShutDownServer(uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerShutDownServer = 0x08082990;
// public int32_t CNWSMessage::SendServerToPlayerSoundObject_ChangePosition(CNWSPlayer*, uint32_t, Vector)
constexpr uintptr_t CNWSMessage__SendServerToPlayerSoundObject_ChangePosition = 0x0807FCFC;
// public int32_t CNWSMessage::SendServerToPlayerSoundObject_ChangeVolume(CNWSPlayer*, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerSoundObject_ChangeVolume = 0x0807FC88;
// public int32_t CNWSMessage::SendServerToPlayerSoundObject_Play(CNWSPlayer*, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerSoundObject_Play = 0x0807FBC0;
// public int32_t CNWSMessage::SendServerToPlayerSoundObject_Stop(CNWSPlayer*, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerSoundObject_Stop = 0x0807FC24;
// public int32_t CNWSMessage::SendServerToPlayerStoreConfirmTransaction(CNWSPlayer*, int32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerStoreConfirmTransaction = 0x08081F98;
// public int32_t CNWSMessage::SendServerToPlayerStringMessage(uint32_t, unsigned char, CExoString)
constexpr uintptr_t CNWSMessage__SendServerToPlayerStringMessage = 0x080805A0;
// public int32_t CNWSMessage::SendServerToPlayerUpdateActiveItemProperties(CNWSPlayer*, CNWSItem*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerUpdateActiveItemProperties = 0x0807B5C8;
// public int32_t CNWSMessage::SendServerToPlayerUpdateActiveItemPropertiesUses(CNWSPlayer*, uint32_t, unsigned char, unsigned char, unsigned char*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerUpdateActiveItemPropertiesUses = 0x080815A0;
// public int32_t CNWSMessage::SendServerToPlayerUpdateBlackoutEffect(CNWSPlayer*, int32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerUpdateBlackoutEffect = 0x08082AB0;
// public int32_t CNWSMessage::SendServerToPlayerUpdateCharResponse(CNWSPlayer*, unsigned char, CResRef)
constexpr uintptr_t CNWSMessage__SendServerToPlayerUpdateCharResponse = 0x08066C40;
// public int32_t CNWSMessage::SendServerToPlayerUpdateFogAmount(unsigned char, unsigned char, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerUpdateFogAmount = 0x0807BAFC;
// public int32_t CNWSMessage::SendServerToPlayerUpdateFogColor(uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerUpdateFogColor = 0x0807B9BC;
// public int32_t CNWSMessage::SendServerToPlayerUpdateItemName(CNWSPlayer*, CNWSItem*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerUpdateItemName = 0x0807B704;
// public int32_t CNWSMessage::SendServerToPlayerUpdateSkyBox(int32_t, uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToPlayerUpdateSkyBox = 0x0807B890;
// public int32_t CNWSMessage::SendServerToPlayerVoiceChat_Play(CNWSPlayer*, uint32_t, unsigned char)
constexpr uintptr_t CNWSMessage__SendServerToPlayerVoiceChat_Play = 0x08081664;
// public int32_t CNWSMessage::SendServerToPlayerWhirlwindAttack(CNWSPlayer*, CNWSCreature*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerWhirlwindAttack = 0x0807EB68;
// public int32_t CNWSMessage::SendServerToPlayerWhirlwindAttackDamage(CNWSPlayer*, CNWSCreature*)
constexpr uintptr_t CNWSMessage__SendServerToPlayerWhirlwindAttackDamage = 0x0807ECC0;
// public void CNWSMessage::SendServerToServerAdminBannedList(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToServerAdminBannedList = 0x081E6030;
// public int32_t CNWSMessage::SendServerToServerAdminMessage(uint32_t, CExoString)
constexpr uintptr_t CNWSMessage__SendServerToServerAdminMessage = 0x081E4BF4;
// public void CNWSMessage::SendServerToServerAdminModuleList(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToServerAdminModuleList = 0x081E4CF0;
// public void CNWSMessage::SendServerToServerAdminPlayerList(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToServerAdminPlayerList = 0x081E5F38;
// public void CNWSMessage::SendServerToServerAdminPortalList(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToServerAdminPortalList = 0x081E6128;
// public void CNWSMessage::SendServerToServerAdminSaveGameList(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToServerAdminSaveGameList = 0x081E567C;
// public void CNWSMessage::SendServerToServerAdminSaveStatus(uint32_t, unsigned char)
constexpr uintptr_t CNWSMessage__SendServerToServerAdminSaveStatus = 0x081E8604;
// public void CNWSMessage::SendServerToServerAdminServerSettings(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToServerAdminServerSettings = 0x081E6220;
// public void CNWSMessage::SendServerToServerAdminServerStatus(uint32_t)
constexpr uintptr_t CNWSMessage__SendServerToServerAdminServerStatus = 0x081E5D50;
// public CNWSPlayerLUOSortedObjectList* CNWSMessage::SortObjectsForGameObjectUpdate(CNWSPlayer*, CNWSObject*, CGameObjectArray*, int32_t*)
constexpr uintptr_t CNWSMessage__SortObjectsForGameObjectUpdate = 0x0806B3A4;
// public void CNWSMessage::StoreValuesInLastPlayerUpdateObject(CNWSPlayer*, CNWSPlayerLastUpdateObject*, CLastUpdateObject*, uint16_t)
constexpr uintptr_t CNWSMessage__StoreValuesInLastPlayerUpdateObject = 0x0806FBEC;
// void CNWSMessage::StoreValuesInLastUpdateObject(CNWSPlayer*, CLastUpdateObject*, CNWSObject*, uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__StoreValuesInLastUpdateObject = 0x08080400;
// public void CNWSMessage::StoreValuesInLastUpdatePartyObject(CNWSCreature*, CLastUpdatePartyObject*, CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSMessage__StoreValuesInLastUpdatePartyObject = 0x080714D8;
// public void CNWSMessage::TestObjectUpdateDifferences(CNWSPlayer*, CNWSObject*, CLastUpdateObject**, uint32_t*, uint32_t*)
constexpr uintptr_t CNWSMessage__TestObjectUpdateDifferences = 0x08080444;
// public int32_t CNWSMessage::TestObjectVisible(CNWSObject*, CNWSObject*)
constexpr uintptr_t CNWSMessage__TestObjectVisible = 0x0806C6E8;
// public void CNWSMessage::TestPartyObjectUpdateDifferences(CNWSPlayer*, CNWSCreature*, CLastUpdatePartyObject**, uint32_t*)
constexpr uintptr_t CNWSMessage__TestPartyObjectUpdateDifferences = 0x08070ED4;
// public void CNWSMessage::TestPlayerUpdateDifferences(CNWSPlayer*, CNWSPlayerLastUpdateObject*, CLastUpdateObject*, uint16_t&)
constexpr uintptr_t CNWSMessage__TestPlayerUpdateDifferences = 0x0806D744;
// public void CNWSMessage::UpdateLastUpdate_GuiEffectIcons(CNWSCreature*, CExoArrayListTemplatedCEffectIconObjectPtr*, int32_t)
constexpr uintptr_t CNWSMessage__UpdateLastUpdate_GuiEffectIcons = 0x0807DFA8;
// protected void CNWSMessage::UpdateLastUpdateActionQueue(CNWSCreature*, CNWSPlayerLastUpdateObject*)
constexpr uintptr_t CNWSMessage__UpdateLastUpdateActionQueue = 0x0806497C;
// protected void CNWSMessage::UpdateLastUpdateAutoMap(CNWSCreature*, CNWSPlayerLastUpdateObject*)
constexpr uintptr_t CNWSMessage__UpdateLastUpdateAutoMap = 0x08064784;
// protected void CNWSMessage::UpdateLastUpdateInventory(CNWSPlayer*, uint32_t, CNWSPlayerInventoryGUI*)
constexpr uintptr_t CNWSMessage__UpdateLastUpdateInventory = 0x08077CB4;
// protected void CNWSMessage::UpdateLastUpdateObject(CNWSPlayer*, CNWSObject*, CLastUpdateObject*, uint32_t)
constexpr uintptr_t CNWSMessage__UpdateLastUpdateObject = 0x08077DBC;
// protected void CNWSMessage::UpdateLastUpdateObjectAppearance(CNWSObject*, CLastUpdateObject*, uint32_t)
constexpr uintptr_t CNWSMessage__UpdateLastUpdateObjectAppearance = 0x08078968;
// protected void CNWSMessage::UpdateLastUpdateVisibilityList(CNWSCreature*, CNWSPlayerLastUpdateObject*)
constexpr uintptr_t CNWSMessage__UpdateLastUpdateVisibilityList = 0x080628EC;
// public void CNWSMessage::WriteCExoLocStringServer(CExoLocString&, unsigned char)
constexpr uintptr_t CNWSMessage__WriteCExoLocStringServer = 0x08052480;
// public void CNWSMessage::WriteGameObjUpdate_CharacterSheet(CNWSPlayer*, uint32_t)
constexpr uintptr_t CNWSMessage__WriteGameObjUpdate_CharacterSheet = 0x08074DB8;
// public int32_t CNWSMessage::WriteGameObjUpdate_DungeonMasterAIState(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__WriteGameObjUpdate_DungeonMasterAIState = 0x08071898;
// public void CNWSMessage::WriteGameObjUpdate_MajorGUIPanels(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__WriteGameObjUpdate_MajorGUIPanels = 0x0806D040;
// public void CNWSMessage::WriteGameObjUpdate_MajorGUIPanels_HenchmanInventoryData(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__WriteGameObjUpdate_MajorGUIPanels_HenchmanInventoryData = 0x0806D618;
// public void CNWSMessage::WriteGameObjUpdate_MajorGUIPanels_Inventory(CNWSPlayer*, CNWSPlayerInventoryGUI*)
constexpr uintptr_t CNWSMessage__WriteGameObjUpdate_MajorGUIPanels_Inventory = 0x0806D174;
// public void CNWSMessage::WriteGameObjUpdate_MinorGUIPanels(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__WriteGameObjUpdate_MinorGUIPanels = 0x0806D468;
// public int32_t CNWSMessage::WriteGameObjUpdate_PartyAIState(CNWSPlayer*)
constexpr uintptr_t CNWSMessage__WriteGameObjUpdate_PartyAIState = 0x08071704;
// public void CNWSMessage::WriteGameObjUpdate_PlayerUpdate(CNWSPlayer*, CNWSPlayerLastUpdateObject*, CLastUpdateObject*, uint16_t)
constexpr uintptr_t CNWSMessage__WriteGameObjUpdate_PlayerUpdate = 0x0806DB28;
// protected void CNWSMessage::WriteGameObjUpdate_UpdateAppearance(CNWSObject*, CLastUpdateObject*, uint32_t)
constexpr uintptr_t CNWSMessage__WriteGameObjUpdate_UpdateAppearance = 0x0806A2A0;
// public void CNWSMessage::WriteGameObjUpdate_UpdateObject(CNWSPlayer*, CNWSObject*, CLastUpdateObject*, uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__WriteGameObjUpdate_UpdateObject = 0x08071A24;
// protected void CNWSMessage::WriteGameObjUpdate_UpdateQuickbarItemUseCount(CNWSObject*, CLastUpdateObject*)
constexpr uintptr_t CNWSMessage__WriteGameObjUpdate_UpdateQuickbarItemUseCount = 0x0807E82C;
// void CNWSMessage::WriteGameObjUpdate_WorkRemaining(CNWSObject*, CNWSArea*, int32_t, int32_t)
constexpr uintptr_t CNWSMessage__WriteGameObjUpdate_WorkRemaining = 0x08080374;
// void CNWSMessage::WriteGameObjUpdate_WriteInventorySlotAdd(CNWSCreature*, CNWSItem*, uint32_t)
constexpr uintptr_t CNWSMessage__WriteGameObjUpdate_WriteInventorySlotAdd = 0x0808011C;
// void CNWSMessage::WriteGameObjUpdate_WriteInventorySlotDelete(CNWSCreature*, uint32_t)
constexpr uintptr_t CNWSMessage__WriteGameObjUpdate_WriteInventorySlotDelete = 0x0808017C;
// void CNWSMessage::WriteGameObjUpdate_WriteInventorySlotUpdate(uint32_t, uint32_t)
constexpr uintptr_t CNWSMessage__WriteGameObjUpdate_WriteInventorySlotUpdate = 0x080801BC;
// public void CNWSMessage::WriteGuiEffectIconsUpdate(CNWSCreature*, CExoArrayListTemplatedCEffectIconObjectPtr*, int32_t)
constexpr uintptr_t CNWSMessage__WriteGuiEffectIconsUpdate = 0x0807E188;
// public void CNWSMessage::WriteOBJECTIDServer(uint32_t)
constexpr uintptr_t CNWSMessage__WriteOBJECTIDServer = 0x08052434;
// protected void CNWSMessage::WriteRepositoryUpdate(CNWSPlayer*, CNWSObject*, CItemRepository*, CNWSPlayerLUOInventory*, unsigned char, char, unsigned char)
constexpr uintptr_t CNWSMessage__WriteRepositoryUpdate = 0x08070240;
// protected void CNWSMessage::WriteStoreInventoryUpdate(CNWSPlayer*, CNWSStore*)
constexpr uintptr_t CNWSMessage__WriteStoreInventoryUpdate = 0x08070A90;

// public CNWSModule::CNWSModule(CExoString, int32_t, int32_t)
constexpr uintptr_t CNWSModule__CNWSModuleCtor__1 = 0x081B2DD0;
// public CNWSModule::~CNWSModule(void)
constexpr uintptr_t CNWSModule__CNWSModuleDtor = 0x081B3718;
// public void CNWSModule::AddObjectToLimbo(uint32_t)
constexpr uintptr_t CNWSModule__AddObjectToLimbo = 0x081C09F8;
// public int32_t CNWSModule::AddObjectToLookupTable(CExoString, uint32_t)
constexpr uintptr_t CNWSModule__AddObjectToLookupTable = 0x081BEAD4;
// public void CNWSModule::AddToTURDList(CNWSPlayerTURD*)
constexpr uintptr_t CNWSModule__AddToTURDList = 0x081BF7F8;
// void CNWSModule::AddTURDsToWorld(void)
constexpr uintptr_t CNWSModule__AddTURDsToWorld = 0x081B8BC0;
// public void CNWSModule::AddWorldJournalEntry(int32_t, CExoString, CExoString, uint32_t, uint32_t)
constexpr uintptr_t CNWSModule__AddWorldJournalEntry = 0x081BF134;
// void CNWSModule::AddWorldJournalEntryStrref(uint32_t, uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CNWSModule__AddWorldJournalEntryStrref = 0x081BF3B8;
// public int32_t CNWSModule::AIUpdate(void)
constexpr uintptr_t CNWSModule__AIUpdate = 0x081B3DEC;
// public CNWSModule* CNWSModule::AsNWSModule(void)
constexpr uintptr_t CNWSModule__AsNWSModule = 0x081C103C;
// public void CNWSModule::CleanUpLimboList(void)
constexpr uintptr_t CNWSModule__CleanUpLimboList = 0x081C0AEC;
// void CNWSModule::ClearAreaVisitedFlags(void)
constexpr uintptr_t CNWSModule__ClearAreaVisitedFlags = 0x081C0780;
// public int32_t CNWSModule::ComputeInterAreaPath(CPathfindInformation*)
constexpr uintptr_t CNWSModule__ComputeInterAreaPath = 0x081B3D34;
// void CNWSModule::DeleteWorldJournalAllEntries(void)
constexpr uintptr_t CNWSModule__DeleteWorldJournalAllEntries = 0x081BF748;
// public void CNWSModule::DeleteWorldJournalEntry(int32_t)
constexpr uintptr_t CNWSModule__DeleteWorldJournalEntry = 0x081BF568;
// public void CNWSModule::DeleteWorldJournalEntryStrref(uint32_t)
constexpr uintptr_t CNWSModule__DeleteWorldJournalEntryStrref = 0x081BF658;
// public void CNWSModule::DoUpdate(void)
constexpr uintptr_t CNWSModule__DoUpdate = 0x081C05FC;
// public void CNWSModule::EventHandler(uint32_t, uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CNWSModule__EventHandler = 0x081B3F0C;
// public uint32_t CNWSModule::FindObjectByTagOrdinal(const CExoString&, uint32_t)
constexpr uintptr_t CNWSModule__FindObjectByTagOrdinal = 0x081BEE08;
// public uint32_t CNWSModule::FindObjectByTagTypeOrdinal(const CExoString&, int32_t, uint32_t)
constexpr uintptr_t CNWSModule__FindObjectByTagTypeOrdinal = 0x081BEF74;
// void CNWSModule::FindTagPositionInTable(char*)
constexpr uintptr_t CNWSModule__FindTagPositionInTable = 0x081C08D0;
// void CNWSModule::GenerateInterAreaDFSSuccessors(int32_t, CPathfindInformation*, uint32_t**)
constexpr uintptr_t CNWSModule__GenerateInterAreaDFSSuccessors = 0x081B43CC;
// public CNWSArea* CNWSModule::GetArea(CResRef)
constexpr uintptr_t CNWSModule__GetArea__0 = 0x081C0690;
// public CNWSArea* CNWSModule::GetArea(uint32_t)
constexpr uintptr_t CNWSModule__GetArea__1 = 0x081C0728;
// void CNWSModule::GetAreaByName(CExoString&)
constexpr uintptr_t CNWSModule__GetAreaByName = 0x081B4458;
// public CNWSArea* CNWSModule::GetAreaByTag(CExoString&)
constexpr uintptr_t CNWSModule__GetAreaByTag = 0x081B45E8;
// void CNWSModule::GetAreaList(void)
constexpr uintptr_t CNWSModule__GetAreaList = 0x081C1044;
// void CNWSModule::GetCustomScriptEventId(void)
constexpr uintptr_t CNWSModule__GetCustomScriptEventId = 0x081C10F0;
// void CNWSModule::GetDawnHour(void)
constexpr uintptr_t CNWSModule__GetDawnHour = 0x081C154C;
// void CNWSModule::GetDuskHour(void)
constexpr uintptr_t CNWSModule__GetDuskHour = 0x081C155C;
// void CNWSModule::GetEnableScriptDebugger(void)
constexpr uintptr_t CNWSModule__GetEnableScriptDebugger = 0x081C16CC;
// private unsigned char* CNWSModule::GetFullCipher(CExoString)
constexpr uintptr_t CNWSModule__GetFullCipher = 0x081BFFD8;
// void CNWSModule::GetInvisibleCreaturesList(void)
constexpr uintptr_t CNWSModule__GetInvisibleCreaturesList = 0x081C157C;
// void CNWSModule::GetIsDigitalDistributionDemo(void)
constexpr uintptr_t CNWSModule__GetIsDigitalDistributionDemo = 0x081C15D8;
// void CNWSModule::GetIsNWMFile(void)
constexpr uintptr_t CNWSModule__GetIsNWMFile = 0x081C15B4;
// void CNWSModule::GetIsSaveGame(void)
constexpr uintptr_t CNWSModule__GetIsSaveGame = 0x081C14C8;
// void CNWSModule::GetLastEnter(void)
constexpr uintptr_t CNWSModule__GetLastEnter = 0x081C1114;
// void CNWSModule::GetLastExit(void)
constexpr uintptr_t CNWSModule__GetLastExit = 0x081C1138;
// void CNWSModule::GetLastItemAcquired(void)
constexpr uintptr_t CNWSModule__GetLastItemAcquired = 0x081C115C;
// void CNWSModule::GetLastItemAcquiredBy(void)
constexpr uintptr_t CNWSModule__GetLastItemAcquiredBy = 0x081C11A4;
// void CNWSModule::GetLastItemAcquiredFrom(void)
constexpr uintptr_t CNWSModule__GetLastItemAcquiredFrom = 0x081C1180;
// void CNWSModule::GetLastItemAcquiredStackSize(void)
constexpr uintptr_t CNWSModule__GetLastItemAcquiredStackSize = 0x081C11C8;
// void CNWSModule::GetLastItemActivated(void)
constexpr uintptr_t CNWSModule__GetLastItemActivated = 0x081C139C;
// void CNWSModule::GetLastItemActivatedArea(void)
constexpr uintptr_t CNWSModule__GetLastItemActivatedArea = 0x081C144C;
// void CNWSModule::GetLastItemActivatedPosition(void)
constexpr uintptr_t CNWSModule__GetLastItemActivatedPosition = 0x081C1408;
// void CNWSModule::GetLastItemActivatedTarget(void)
constexpr uintptr_t CNWSModule__GetLastItemActivatedTarget = 0x081C13E4;
// void CNWSModule::GetLastItemActivator(void)
constexpr uintptr_t CNWSModule__GetLastItemActivator = 0x081C13C0;
// void CNWSModule::GetLastItemLoser(void)
constexpr uintptr_t CNWSModule__GetLastItemLoser = 0x081C1354;
// void CNWSModule::GetLastItemLost(void)
constexpr uintptr_t CNWSModule__GetLastItemLost = 0x081C1330;
// void CNWSModule::GetLastItemLostStackSize(void)
constexpr uintptr_t CNWSModule__GetLastItemLostStackSize = 0x081C1378;
// void CNWSModule::GetLastPCCancelCutscene(void)
constexpr uintptr_t CNWSModule__GetLastPCCancelCutscene = 0x081C1494;
// void CNWSModule::GetLastPCLevellingUp(void)
constexpr uintptr_t CNWSModule__GetLastPCLevellingUp = 0x081C1470;
// public CExoString CNWSModule::GetLastPlayerChatMessage(void)
constexpr uintptr_t CNWSModule__GetLastPlayerChatMessage = 0x081C173C;
// void CNWSModule::GetLastPlayerChatMessageType(void)
constexpr uintptr_t CNWSModule__GetLastPlayerChatMessageType = 0x081C1764;
// void CNWSModule::GetLastPlayerChatObject(void)
constexpr uintptr_t CNWSModule__GetLastPlayerChatObject = 0x081C172C;
// void CNWSModule::GetLastPlayerDied(void)
constexpr uintptr_t CNWSModule__GetLastPlayerDied = 0x081C127C;
// void CNWSModule::GetLastPlayerDying(void)
constexpr uintptr_t CNWSModule__GetLastPlayerDying = 0x081C12A0;
// void CNWSModule::GetLastRespawnButtonPresser(void)
constexpr uintptr_t CNWSModule__GetLastRespawnButtonPresser = 0x081C12C4;
// void CNWSModule::GetLastRested(void)
constexpr uintptr_t CNWSModule__GetLastRested = 0x081C12E8;
// void CNWSModule::GetLastRestEventType(void)
constexpr uintptr_t CNWSModule__GetLastRestEventType = 0x081C130C;
// void CNWSModule::GetLimboArray(void)
constexpr uintptr_t CNWSModule__GetLimboArray = 0x081C156C;
// void CNWSModule::GetMaxHenchmen(void)
constexpr uintptr_t CNWSModule__GetMaxHenchmen = 0x081C14EC;
// void CNWSModule::GetMinutesPerHour(void)
constexpr uintptr_t CNWSModule__GetMinutesPerHour = 0x081C16DC;
// public CExoLocString CNWSModule::GetModuleDescription(void)
constexpr uintptr_t CNWSModule__GetModuleDescription = 0x081C1670;
// void CNWSModule::GetModuleEntryInfo(void)
constexpr uintptr_t CNWSModule__GetModuleEntryInfo = 0x081C10D4;
// public CExoLocString CNWSModule::GetModuleName(void)
constexpr uintptr_t CNWSModule__GetModuleName = 0x081C1624;
// public CExoString CNWSModule::GetNWMResName(void)
constexpr uintptr_t CNWSModule__GetNWMResName = 0x081C15FC;
// void CNWSModule::GetPCItemLastEquipped(void)
constexpr uintptr_t CNWSModule__GetPCItemLastEquipped = 0x081C11EC;
// void CNWSModule::GetPCItemLastEquippedBy(void)
constexpr uintptr_t CNWSModule__GetPCItemLastEquippedBy = 0x081C1210;
// void CNWSModule::GetPCItemLastUnequipped(void)
constexpr uintptr_t CNWSModule__GetPCItemLastUnequipped = 0x081C1234;
// void CNWSModule::GetPCItemLastUnequippedBy(void)
constexpr uintptr_t CNWSModule__GetPCItemLastUnequippedBy = 0x081C1258;
// public uint32_t CNWSModule::GetPlayerIndexInPlayerList(CNWSPlayer*)
constexpr uintptr_t CNWSModule__GetPlayerIndexInPlayerList = 0x081BE568;
// void CNWSModule::GetPlayerPathfindRule(void)
constexpr uintptr_t CNWSModule__GetPlayerPathfindRule = 0x081C16A8;
// public CNWSPlayerTURD* CNWSModule::GetPlayerTURDFromList(CNWSPlayer*)
constexpr uintptr_t CNWSModule__GetPlayerTURDFromList = 0x081BB068;
// public uint32_t CNWSModule::GetPrimaryPlayerIndex(void)
constexpr uintptr_t CNWSModule__GetPrimaryPlayerIndex = 0x081C0864;
// void CNWSModule::GetScriptName(int32_t)
constexpr uintptr_t CNWSModule__GetScriptName = 0x081C1050;
// void CNWSModule::GetScriptVarTable(void)
constexpr uintptr_t CNWSModule__GetScriptVarTable = 0x081C10E0;
// void CNWSModule::GetStartMovie(void)
constexpr uintptr_t CNWSModule__GetStartMovie = 0x081C164C;
// public CExoString CNWSModule::GetTag(void)
constexpr uintptr_t CNWSModule__GetTag = 0x081C158C;
// public void CNWSModule::GetTime(uint32_t*, uint32_t*, uint32_t*, uint32_t*, unsigned char*, uint32_t*)
constexpr uintptr_t CNWSModule__GetTime = 0x081C09A8;
// void CNWSModule::GetTimeOfDayState(void)
constexpr uintptr_t CNWSModule__GetTimeOfDayState = 0x081C14B8;
// public uint32_t CNWSModule::GetWaypoint(const CExoString&)
constexpr uintptr_t CNWSModule__GetWaypoint = 0x081C0670;
// public uint32_t CNWSModule::GetWorldJournalIndexUnique(void)
constexpr uintptr_t CNWSModule__GetWorldJournalIndexUnique = 0x081C0944;
// void CNWSModule::GetXPScale(void)
constexpr uintptr_t CNWSModule__GetXPScale = 0x081C1528;
// public int32_t CNWSModule::InterAreaDFS(int32_t, int32_t, CPathfindInformation*)
constexpr uintptr_t CNWSModule__InterAreaDFS = 0x081B4810;
// public int32_t CNWSModule::IsObjectInLimbo(uint32_t)
constexpr uintptr_t CNWSModule__IsObjectInLimbo = 0x081C0AA4;
// public unsigned char CNWSModule::IsOfficialCampaign(void)
constexpr uintptr_t CNWSModule__IsOfficialCampaign = 0x081BFDA8;
// private int32_t CNWSModule::LoadLimboCreatures(CResGFF*, CResStruct*, int32_t)
constexpr uintptr_t CNWSModule__LoadLimboCreatures = 0x081BE2D8;
// public uint32_t CNWSModule::LoadModuleFinish(void)
constexpr uintptr_t CNWSModule__LoadModuleFinish = 0x081B87B8;
// public uint32_t CNWSModule::LoadModuleInProgress(int32_t, int32_t)
constexpr uintptr_t CNWSModule__LoadModuleInProgress = 0x081B8584;
// public uint32_t CNWSModule::LoadModuleStart(CExoString, int32_t)
constexpr uintptr_t CNWSModule__LoadModuleStart = 0x081B4A4C;
// public void CNWSModule::LoadTURDList(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSModule__LoadTURDList = 0x081BAF90;
// public void CNWSModule::PackModuleIntoMessage(uint32_t)
constexpr uintptr_t CNWSModule__PackModuleIntoMessage = 0x081B8C84;
// public void CNWSModule::PackPlayerCharacterListIntoMessage(CNWSPlayer*, CExoArrayListTemplatedNWPlayerCharacterList_stPtr&)
constexpr uintptr_t CNWSModule__PackPlayerCharacterListIntoMessage = 0x081BE6B8;
// public uint32_t CNWSModule::PlotInterAreaPath(CPathfindInformation*, uint32_t)
constexpr uintptr_t CNWSModule__PlotInterAreaPath = 0x081B8FB4;
// public uint32_t CNWSModule::PlotPath(CPathfindInformation*, uint32_t)
constexpr uintptr_t CNWSModule__PlotPath = 0x081B9124;
// public uint32_t CNWSModule::PlotPathInArea(CPathfindInformation*, uint32_t)
constexpr uintptr_t CNWSModule__PlotPathInArea = 0x081B91F0;
// private void CNWSModule::PostProcess(void)
constexpr uintptr_t CNWSModule__PostProcess = 0x081B89F8;
// public void CNWSModule::RemoveFromTURDList(CNWSPlayer*)
constexpr uintptr_t CNWSModule__RemoveFromTURDList = 0x081BF97C;
// public void CNWSModule::RemoveObjectFromLimbo(uint32_t)
constexpr uintptr_t CNWSModule__RemoveObjectFromLimbo = 0x081C0A58;
// public int32_t CNWSModule::RemoveObjectFromLookupTable(CExoString, uint32_t)
constexpr uintptr_t CNWSModule__RemoveObjectFromLookupTable = 0x081BEC28;
// private void CNWSModule::SaveLimboCreatures(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSModule__SaveLimboCreatures = 0x081BE1D0;
// private int32_t CNWSModule::SaveModuleFAC(CERFFile*)
constexpr uintptr_t CNWSModule__SaveModuleFAC = 0x081BB37C;
// public int32_t CNWSModule::SaveModuleFinish(CExoString&, CExoString&)
constexpr uintptr_t CNWSModule__SaveModuleFinish = 0x081BA01C;
// private int32_t CNWSModule::SaveModuleIFOFinish(CResGFF*, CResStruct*, CERFFile*, CExoString&, CExoArrayListTemplatedunsignedlong&)
constexpr uintptr_t CNWSModule__SaveModuleIFOFinish = 0x081BB1C4;
// private int32_t CNWSModule::SaveModuleIFOStart(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSModule__SaveModuleIFOStart = 0x081BA420;
// public int32_t CNWSModule::SaveModuleInProgress(void)
constexpr uintptr_t CNWSModule__SaveModuleInProgress = 0x081BB7A8;
// public void CNWSModule::SaveModuleStart(CExoString&, CExoString&)
constexpr uintptr_t CNWSModule__SaveModuleStart = 0x081B9C90;
// private int32_t CNWSModule::SavePlayers(CResGFF*, CResStruct*, CExoString&, CExoArrayListTemplatedunsignedlong&)
constexpr uintptr_t CNWSModule__SavePlayers = 0x081BBA0C;
// private int32_t CNWSModule::SaveStatic(CERFFile*, CExoString, uint16_t, int32_t)
constexpr uintptr_t CNWSModule__SaveStatic = 0x081BDF5C;
// void CNWSModule::SaveTURDList(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSModule__SaveTURDList = 0x081C07D4;
// void CNWSModule::SetCustomScriptEventId(int32_t)
constexpr uintptr_t CNWSModule__SetCustomScriptEventId = 0x081C1100;
// void CNWSModule::SetEnableScriptDebugger(unsigned char)
constexpr uintptr_t CNWSModule__SetEnableScriptDebugger = 0x081C16B8;
// public void CNWSModule::SetIntraAreaGoal(CPathfindInformation*)
constexpr uintptr_t CNWSModule__SetIntraAreaGoal = 0x081BE92C;
// void CNWSModule::SetIsNWMFile(int32_t)
constexpr uintptr_t CNWSModule__SetIsNWMFile = 0x081C15C4;
// void CNWSModule::SetIsSaveGame(int32_t)
constexpr uintptr_t CNWSModule__SetIsSaveGame = 0x081C14D8;
// void CNWSModule::SetLastEnter(uint32_t)
constexpr uintptr_t CNWSModule__SetLastEnter = 0x081C1124;
// void CNWSModule::SetLastExit(uint32_t)
constexpr uintptr_t CNWSModule__SetLastExit = 0x081C1148;
// void CNWSModule::SetLastItemAcquired(uint32_t)
constexpr uintptr_t CNWSModule__SetLastItemAcquired = 0x081C116C;
// void CNWSModule::SetLastItemAcquiredBy(uint32_t)
constexpr uintptr_t CNWSModule__SetLastItemAcquiredBy = 0x081C11B4;
// void CNWSModule::SetLastItemAcquiredFrom(uint32_t)
constexpr uintptr_t CNWSModule__SetLastItemAcquiredFrom = 0x081C1190;
// void CNWSModule::SetLastItemAcquiredStackSize(int32_t)
constexpr uintptr_t CNWSModule__SetLastItemAcquiredStackSize = 0x081C11D8;
// void CNWSModule::SetLastItemActivated(uint32_t)
constexpr uintptr_t CNWSModule__SetLastItemActivated = 0x081C13AC;
// void CNWSModule::SetLastItemActivatedArea(uint32_t)
constexpr uintptr_t CNWSModule__SetLastItemActivatedArea = 0x081C145C;
// void CNWSModule::SetLastItemActivatedPosition(const Vector&)
constexpr uintptr_t CNWSModule__SetLastItemActivatedPosition = 0x081C142C;
// void CNWSModule::SetLastItemActivatedTarget(uint32_t)
constexpr uintptr_t CNWSModule__SetLastItemActivatedTarget = 0x081C13F4;
// void CNWSModule::SetLastItemActivator(uint32_t)
constexpr uintptr_t CNWSModule__SetLastItemActivator = 0x081C13D0;
// void CNWSModule::SetLastItemLoser(uint32_t)
constexpr uintptr_t CNWSModule__SetLastItemLoser = 0x081C1364;
// void CNWSModule::SetLastItemLost(uint32_t)
constexpr uintptr_t CNWSModule__SetLastItemLost = 0x081C1340;
// void CNWSModule::SetLastItemLostStackSize(int32_t)
constexpr uintptr_t CNWSModule__SetLastItemLostStackSize = 0x081C1388;
// void CNWSModule::SetLastPCCancelCutscene(uint32_t)
constexpr uintptr_t CNWSModule__SetLastPCCancelCutscene = 0x081C14A4;
// void CNWSModule::SetLastPCLevellingUp(uint32_t)
constexpr uintptr_t CNWSModule__SetLastPCLevellingUp = 0x081C1480;
// void CNWSModule::SetLastPlayerChatMessage(const CExoString&)
constexpr uintptr_t CNWSModule__SetLastPlayerChatMessage = 0x081C1700;
// void CNWSModule::SetLastPlayerChatMessageType(unsigned char)
constexpr uintptr_t CNWSModule__SetLastPlayerChatMessageType = 0x081C1718;
// void CNWSModule::SetLastPlayerChatObject(uint32_t)
constexpr uintptr_t CNWSModule__SetLastPlayerChatObject = 0x081C16EC;
// void CNWSModule::SetLastPlayerDied(uint32_t)
constexpr uintptr_t CNWSModule__SetLastPlayerDied = 0x081C128C;
// void CNWSModule::SetLastPlayerDying(uint32_t)
constexpr uintptr_t CNWSModule__SetLastPlayerDying = 0x081C12B0;
// void CNWSModule::SetLastRespawnButtonPresser(uint32_t)
constexpr uintptr_t CNWSModule__SetLastRespawnButtonPresser = 0x081C12D4;
// void CNWSModule::SetLastRested(uint32_t)
constexpr uintptr_t CNWSModule__SetLastRested = 0x081C12F8;
// void CNWSModule::SetLastRestEventType(unsigned char)
constexpr uintptr_t CNWSModule__SetLastRestEventType = 0x081C131C;
// void CNWSModule::SetMaxHenchmen(int32_t)
constexpr uintptr_t CNWSModule__SetMaxHenchmen = 0x081C14FC;
// void CNWSModule::SetNWMResName(CExoString&)
constexpr uintptr_t CNWSModule__SetNWMResName = 0x081C15E4;
// void CNWSModule::SetPCItemLastEquipped(uint32_t)
constexpr uintptr_t CNWSModule__SetPCItemLastEquipped = 0x081C11FC;
// void CNWSModule::SetPCItemLastEquippedBy(uint32_t)
constexpr uintptr_t CNWSModule__SetPCItemLastEquippedBy = 0x081C1220;
// void CNWSModule::SetPCItemLastUnequipped(uint32_t)
constexpr uintptr_t CNWSModule__SetPCItemLastUnequipped = 0x081C1244;
// void CNWSModule::SetPCItemLastUnequippedBy(uint32_t)
constexpr uintptr_t CNWSModule__SetPCItemLastUnequippedBy = 0x081C1268;
// void CNWSModule::SetPlayerPathfindRule(unsigned char)
constexpr uintptr_t CNWSModule__SetPlayerPathfindRule = 0x081C1694;
// public void CNWSModule::SetScriptName(int32_t, CExoString)
constexpr uintptr_t CNWSModule__SetScriptName = 0x081C106C;
// void CNWSModule::SetXPScale(unsigned char)
constexpr uintptr_t CNWSModule__SetXPScale = 0x081C1538;
// private void CNWSModule::TimeStopSanityCheck(void)
constexpr uintptr_t CNWSModule__TimeStopSanityCheck = 0x081BFCDC;
// void CNWSModule::UnloadModule(void)
constexpr uintptr_t CNWSModule__UnloadModule = 0x081C08C8;
// public void CNWSModule::UpdateTime(uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CNWSModule__UpdateTime = 0x081BFAF8;

// public CNWSObject::CNWSObject(unsigned char, uint32_t, int32_t, int32_t)
constexpr uintptr_t CNWSObject__CNWSObjectCtor__1 = 0x081C88F0;
// public CNWSObject::~CNWSObject(void)
constexpr uintptr_t CNWSObject__CNWSObjectDtor = 0x081C8E94;
// public void CNWSObject::AddAction(uint32_t, uint16_t, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*)
constexpr uintptr_t CNWSObject__AddAction = 0x081C9384;
// public void CNWSObject::AddActionAfterFront(uint32_t, uint16_t, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*)
constexpr uintptr_t CNWSObject__AddActionAfterFront = 0x081CADB0;
// protected void CNWSObject::AddActionNodeParameter(CNWSObjectActionNode*, uint32_t, uint32_t, void*)
constexpr uintptr_t CNWSObject__AddActionNodeParameter = 0x081D49E0;
// public void CNWSObject::AddActionToFront(uint32_t, uint16_t, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*, uint32_t, void*)
constexpr uintptr_t CNWSObject__AddActionToFront = 0x081CA5C0;
// public int32_t CNWSObject::AddCloseDoorAction(uint32_t, int32_t)
constexpr uintptr_t CNWSObject__AddCloseDoorAction = 0x081D5590;
// public int32_t CNWSObject::AddDoCommandAction(void*)
constexpr uintptr_t CNWSObject__AddDoCommandAction = 0x081C861C;
// void CNWSObject::AddEffectTarget(uint32_t)
constexpr uintptr_t CNWSObject__AddEffectTarget = 0x081D5B6C;
// public int32_t CNWSObject::AddGiveItemActions(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSObject__AddGiveItemActions = 0x081C7BD8;
// public int32_t CNWSObject::AddLockObjectAction(uint32_t)
constexpr uintptr_t CNWSObject__AddLockObjectAction = 0x081D565C;
// public void CNWSObject::AddLoopingVisualEffect(uint16_t, uint32_t, unsigned char)
constexpr uintptr_t CNWSObject__AddLoopingVisualEffect = 0x081D4E98;
// public void CNWSObject::AddMatchedExpressionString(const CExoString&)
constexpr uintptr_t CNWSObject__AddMatchedExpressionString = 0x081D5254;
// public int32_t CNWSObject::AddOpenDoorAction(uint32_t, int32_t)
constexpr uintptr_t CNWSObject__AddOpenDoorAction = 0x081D552C;
// public int32_t CNWSObject::AddTakeItemActions(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSObject__AddTakeItemActions = 0x081C7C94;
// public int32_t CNWSObject::AddUnlockObjectAction(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CNWSObject__AddUnlockObjectAction = 0x081D55F4;
// public int32_t CNWSObject::AddUseObjectAction(uint32_t)
constexpr uintptr_t CNWSObject__AddUseObjectAction = 0x081C85B0;
// protected uint32_t CNWSObject::AIActionCloseDoor(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__AIActionCloseDoor = 0x081C4A58;
// protected uint32_t CNWSObject::AIActionDialogObject(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__AIActionDialogObject = 0x081C3204;
// void CNWSObject::AIActionDoCommand(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__AIActionDoCommand = 0x081C8448;
// protected uint32_t CNWSObject::AIActionGiveItem(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__AIActionGiveItem = 0x081C43B8;
// protected uint32_t CNWSObject::AIActionLockObject(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__AIActionLockObject = 0x081C6398;
// protected uint32_t CNWSObject::AIActionOpenDoor(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__AIActionOpenDoor = 0x081C4D6C;
// protected uint32_t CNWSObject::AIActionPauseDialog(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__AIActionPauseDialog = 0x081C3A7C;
// protected uint32_t CNWSObject::AIActionPlayAnimation(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__AIActionPlayAnimation = 0x081C4014;
// protected uint32_t CNWSObject::AIActionPlaySound(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__AIActionPlaySound = 0x081C3E18;
// protected uint32_t CNWSObject::AIActionResumeDialog(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__AIActionResumeDialog = 0x081C3B88;
// void CNWSObject::AIActionSetCommandable(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__AIActionSetCommandable = 0x081C8568;
// protected uint32_t CNWSObject::AIActionSpeak(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__AIActionSpeak = 0x081C3CE8;
// void CNWSObject::AIActionSpeakStrRef(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__AIActionSpeakStrRef = 0x081C83C8;
// protected uint32_t CNWSObject::AIActionTakeItem(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__AIActionTakeItem = 0x081C48B4;
// protected uint32_t CNWSObject::AIActionUnlockObject(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__AIActionUnlockObject = 0x081C53D0;
// protected uint32_t CNWSObject::AIActionUseObject(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__AIActionUseObject = 0x081C7274;
// void CNWSObject::AIActionWait(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__AIActionWait = 0x081C84A4;
// public int32_t CNWSObject::AnimationStationary(uint16_t)
constexpr uintptr_t CNWSObject__AnimationStationary = 0x081D4CA8;
// public void CNWSObject::ApplyEffect(CGameEffect*, int32_t, int32_t)
constexpr uintptr_t CNWSObject__ApplyEffect = 0x081CE7D8;
// void CNWSObject::AsNWSObject(void)
constexpr uintptr_t CNWSObject__AsNWSObject = 0x081D5838;
// public void CNWSObject::BroadcastCounterSpellData(CNWSpell*, CNWCCMessageData*)
constexpr uintptr_t CNWSObject__BroadcastCounterSpellData = 0x081D1CD4;
// public void CNWSObject::BroadcastDialog(CExoString, float)
constexpr uintptr_t CNWSObject__BroadcastDialog = 0x081D1604;
// void CNWSObject::BroadcastFloatyData(CNWCCMessageData*)
constexpr uintptr_t CNWSObject__BroadcastFloatyData = 0x081D5338;
// public void CNWSObject::BroadcastFloatyDataSTRREF(uint32_t)
constexpr uintptr_t CNWSObject__BroadcastFloatyDataSTRREF = 0x081D5340;
// public void CNWSObject::BroadcastSafeProjectile(uint32_t, uint32_t, Vector, Vector, uint32_t, unsigned char, uint32_t, unsigned char, unsigned char)
constexpr uintptr_t CNWSObject__BroadcastSafeProjectile = 0x081D2390;
// public void CNWSObject::BroadcastSpellData(CNWSpell*, CNWCCMessageData*)
constexpr uintptr_t CNWSObject__BroadcastSpellData = 0x081D1FEC;
// public void CNWSObject::CalculateLastSpellProjectileTime(unsigned char)
constexpr uintptr_t CNWSObject__CalculateLastSpellProjectileTime = 0x081D2CEC;
// public Vector CNWSObject::CalculateSpellRangedMissTarget(uint32_t, uint32_t)
constexpr uintptr_t CNWSObject__CalculateSpellRangedMissTarget = 0x081D2F9C;
// public int32_t CNWSObject::ClearAction(CNWSObjectActionNode*, int32_t)
constexpr uintptr_t CNWSObject__ClearAction = 0x081D585C;
// public void CNWSObject::ClearAllActions(void)
constexpr uintptr_t CNWSObject__ClearAllActions = 0x081CB77C;
// public void CNWSObject::ClearAllPartyInvalidActions(void)
constexpr uintptr_t CNWSObject__ClearAllPartyInvalidActions = 0x081CB908;
// public void CNWSObject::ClearMatchedExpressionStrings(void)
constexpr uintptr_t CNWSObject__ClearMatchedExpressionStrings = 0x081D52B0;
// public void CNWSObject::ClearSpellEffectsOnOthers(void)
constexpr uintptr_t CNWSObject__ClearSpellEffectsOnOthers = 0x081CFF48;
// public void CNWSObject::CopyScriptVars(CNWSScriptVarTable*)
constexpr uintptr_t CNWSObject__CopyScriptVars = 0x081C9638;
// public void CNWSObject::DeleteCurrentAIAction(void)
constexpr uintptr_t CNWSObject__DeleteCurrentAIAction = 0x081CB678;
// public void CNWSObject::DoDamage(int32_t)
constexpr uintptr_t CNWSObject__DoDamage = 0x081D4D20;
// public int32_t CNWSObject::DoDamageImmunity(CNWSCreature*, int32_t, uint16_t, int32_t, int32_t)
constexpr uintptr_t CNWSObject__DoDamageImmunity = 0x081CDC4C;
// public int32_t CNWSObject::DoDamageReduction(CNWSCreature*, int32_t, unsigned char, int32_t, int32_t)
constexpr uintptr_t CNWSObject__DoDamageReduction = 0x081CBD74;
// public int32_t CNWSObject::DoDamageResistance(CNWSCreature*, int32_t, uint16_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSObject__DoDamageResistance = 0x081CC7BC;
// public int32_t CNWSObject::DoSpellImmunity(CNWSObject*)
constexpr uintptr_t CNWSObject__DoSpellImmunity = 0x081CE490;
// public int32_t CNWSObject::DoSpellLevelAbsorption(CNWSObject*)
constexpr uintptr_t CNWSObject__DoSpellLevelAbsorption = 0x081CDFBC;
// public int32_t CNWSObject::GetAcceptableAction(uint32_t)
constexpr uintptr_t CNWSObject__GetAcceptableAction = 0x081C83A8;
// public uint16_t CNWSObject::GetActionByGroupId(uint16_t, CNWSObjectActionNode**)
constexpr uintptr_t CNWSObject__GetActionByGroupId = 0x081D4770;
// void CNWSObject::GetAILevel(void)
constexpr uintptr_t CNWSObject__GetAILevel = 0x081D5868;
// void CNWSObject::GetAILock(void)
constexpr uintptr_t CNWSObject__GetAILock = 0x081D5874;
// void CNWSObject::GetAIPosList(void)
constexpr uintptr_t CNWSObject__GetAIPosList = 0x081D5880;
// public unsigned char CNWSObject::GetAIStateReaction(uint32_t)
constexpr uintptr_t CNWSObject__GetAIStateReaction = 0x081C8154;
// void CNWSObject::GetAnimation(void)
constexpr uintptr_t CNWSObject__GetAnimation = 0x081D588C;
// void CNWSObject::GetAnimationSpeed(void)
constexpr uintptr_t CNWSObject__GetAnimationSpeed = 0x081D589C;
// void CNWSObject::GetAppliedEffects(void)
constexpr uintptr_t CNWSObject__GetAppliedEffects = 0x081D5B04;
// void CNWSObject::GetApplyingPostProcessEffects(void)
constexpr uintptr_t CNWSObject__GetApplyingPostProcessEffects = 0x081D62E4;
// public uint16_t CNWSObject::GetAQActionIDByID(uint16_t, int32_t)
constexpr uintptr_t CNWSObject__GetAQActionIDByID = 0x081C2D50;
// public CNWSArea* CNWSObject::GetArea(void)
constexpr uintptr_t CNWSObject__GetArea = 0x081D5028;
// void CNWSObject::GetAreaId(void)
constexpr uintptr_t CNWSObject__GetAreaId = 0x081D60B0;
// void CNWSObject::GetBaseHitPoints(void)
constexpr uintptr_t CNWSObject__GetBaseHitPoints = 0x081D5A88;
// void CNWSObject::GetConversationPlayHello(void)
constexpr uintptr_t CNWSObject__GetConversationPlayHello = 0x081D5CCC;
// public int16_t CNWSObject::GetCurrentHitPoints(int32_t)
constexpr uintptr_t CNWSObject__GetCurrentHitPoints = 0x081D4CF8;
// void CNWSObject::GetCustomScriptEventId(void)
constexpr uintptr_t CNWSObject__GetCustomScriptEventId = 0x081D5FB0;
// public char CNWSObject::GetDamageImmunity(unsigned char)
constexpr uintptr_t CNWSObject__GetDamageImmunity = 0x081D4D50;
// public char CNWSObject::GetDamageImmunityByFlags(uint16_t)
constexpr uintptr_t CNWSObject__GetDamageImmunityByFlags = 0x081CDEA4;
// public unsigned char CNWSObject::GetDamageLevel(void)
constexpr uintptr_t CNWSObject__GetDamageLevel = 0x081CE6C8;
// public int32_t CNWSObject::GetDead(void)
constexpr uintptr_t CNWSObject__GetDead = 0x081D1C10;
// void CNWSObject::GetDialogInterruptable(void)
constexpr uintptr_t CNWSObject__GetDialogInterruptable = 0x081D5A40;
// void CNWSObject::GetDialogOwner(void)
constexpr uintptr_t CNWSObject__GetDialogOwner = 0x081D59E4;
// void CNWSObject::GetDialogPrivate(void)
constexpr uintptr_t CNWSObject__GetDialogPrivate = 0x081D5980;
// public CResRef CNWSObject::GetDialogResref(void)
constexpr uintptr_t CNWSObject__GetDialogResref = 0x081D5A1C;
// void CNWSObject::GetDialogValid(void)
constexpr uintptr_t CNWSObject__GetDialogValid = 0x081D596C;
// void CNWSObject::GetEffectArrayIndex(void)
constexpr uintptr_t CNWSObject__GetEffectArrayIndex = 0x081D62C0;
// void CNWSObject::GetEffectSpellId(void)
constexpr uintptr_t CNWSObject__GetEffectSpellId = 0x081D5BBC;
// void CNWSObject::GetEffectTargets(void)
constexpr uintptr_t CNWSObject__GetEffectTargets = 0x081D5B5C;
// void CNWSObject::GetExecutingAIAction(void)
constexpr uintptr_t CNWSObject__GetExecutingAIAction = 0x081D5AD0;
// void CNWSObject::GetExpressionStrings(void)
constexpr uintptr_t CNWSObject__GetExpressionStrings = 0x081D5ED8;
// public CExoLocString& CNWSObject::GetFirstName(void)
constexpr uintptr_t CNWSObject__GetFirstName = 0x081D5A4C;
// public unsigned char CNWSObject::GetGender(void)
constexpr uintptr_t CNWSObject__GetGender = 0x081D509C;
// public int32_t CNWSObject::GetHasFeatEffectApplied(uint16_t)
constexpr uintptr_t CNWSObject__GetHasFeatEffectApplied = 0x081D56C0;
// public uint16_t CNWSObject::GetIDByAQActionID(uint16_t)
constexpr uintptr_t CNWSObject__GetIDByAQActionID = 0x081C305C;
// void CNWSObject::GetInventoryDisturbItem(void)
constexpr uintptr_t CNWSObject__GetInventoryDisturbItem = 0x081D5E38;
// void CNWSObject::GetInventoryDisturbType(void)
constexpr uintptr_t CNWSObject__GetInventoryDisturbType = 0x081D5E14;
// void CNWSObject::GetIsDestroyable(void)
constexpr uintptr_t CNWSObject__GetIsDestroyable = 0x081D5FF8;
// public int32_t CNWSObject::GetIsPCDying(void)
constexpr uintptr_t CNWSObject__GetIsPCDying = 0x081D5498;
// void CNWSObject::GetIsRaiseable(void)
constexpr uintptr_t CNWSObject__GetIsRaiseable = 0x081D601C;
// void CNWSObject::GetKiller(void)
constexpr uintptr_t CNWSObject__GetKiller = 0x081D5D04;
// void CNWSObject::GetLastAttacker(void)
constexpr uintptr_t CNWSObject__GetLastAttacker = 0x081D5D14;
// void CNWSObject::GetLastAttackMode(void)
constexpr uintptr_t CNWSObject__GetLastAttackMode = 0x081D5DA8;
// void CNWSObject::GetLastAttackType(void)
constexpr uintptr_t CNWSObject__GetLastAttackType = 0x081D5D84;
// public CExoString CNWSObject::GetLastConversationResref(void)
constexpr uintptr_t CNWSObject__GetLastConversationResref = 0x081D5C28;
// public int32_t CNWSObject::GetLastDamageAmountByFlags(int32_t)
constexpr uintptr_t CNWSObject__GetLastDamageAmountByFlags = 0x081D4DDC;
// void CNWSObject::GetLastDamager(void)
constexpr uintptr_t CNWSObject__GetLastDamager = 0x081D5D4C;
// void CNWSObject::GetLastDisturbed(void)
constexpr uintptr_t CNWSObject__GetLastDisturbed = 0x081D5DF0;
// void CNWSObject::GetLastGroupID(void)
constexpr uintptr_t CNWSObject__GetLastGroupID = 0x081D5850;
// void CNWSObject::GetLastHostileActor(void)
constexpr uintptr_t CNWSObject__GetLastHostileActor = 0x081D5D74;
// void CNWSObject::GetLastName(void)
constexpr uintptr_t CNWSObject__GetLastName = 0x081D5A58;
// void CNWSObject::GetLastSpeaker(void)
constexpr uintptr_t CNWSObject__GetLastSpeaker = 0x081D5C04;
// void CNWSObject::GetLastSpellCast(void)
constexpr uintptr_t CNWSObject__GetLastSpellCast = 0x081D6130;
// void CNWSObject::GetLastSpellCastAtMe(void)
constexpr uintptr_t CNWSObject__GetLastSpellCastAtMe = 0x081D6170;
// void CNWSObject::GetLastSpellCastAtMeCaster(void)
constexpr uintptr_t CNWSObject__GetLastSpellCastAtMeCaster = 0x081D6160;
// void CNWSObject::GetLastSpellCastAtMeHarmful(void)
constexpr uintptr_t CNWSObject__GetLastSpellCastAtMeHarmful = 0x081D6180;
// void CNWSObject::GetLastSpellCastDomainLevel(void)
constexpr uintptr_t CNWSObject__GetLastSpellCastDomainLevel = 0x081D60EC;
// void CNWSObject::GetLastSpellCastFeat(void)
constexpr uintptr_t CNWSObject__GetLastSpellCastFeat = 0x081D6190;
// void CNWSObject::GetLastSpellCastMetaType(void)
constexpr uintptr_t CNWSObject__GetLastSpellCastMetaType = 0x081D6150;
// void CNWSObject::GetLastSpellCastMulticlass(void)
constexpr uintptr_t CNWSObject__GetLastSpellCastMulticlass = 0x081D60CC;
// void CNWSObject::GetLastSpellCastSpontaneous(void)
constexpr uintptr_t CNWSObject__GetLastSpellCastSpontaneous = 0x081D6140;
// void CNWSObject::GetLastSpellId(void)
constexpr uintptr_t CNWSObject__GetLastSpellId = 0x081D60DC;
// void CNWSObject::GetLastSpellLocationTarget(void)
constexpr uintptr_t CNWSObject__GetLastSpellLocationTarget = 0x081D610C;
// void CNWSObject::GetLastSpellObjectTarget(void)
constexpr uintptr_t CNWSObject__GetLastSpellObjectTarget = 0x081D60FC;
// void CNWSObject::GetLastWeaponAttackedWith(void)
constexpr uintptr_t CNWSObject__GetLastWeaponAttackedWith = 0x081D5DCC;
// public CNWSExpression* CNWSObject::GetListenExpressionObj(int32_t)
constexpr uintptr_t CNWSObject__GetListenExpressionObj = 0x081D51FC;
// void CNWSObject::GetListenExpressions(void)
constexpr uintptr_t CNWSObject__GetListenExpressions = 0x081D5EC8;
// public uint32_t CNWSObject::GetLockOrientationToObject(void)
constexpr uintptr_t CNWSObject__GetLockOrientationToObject = 0x081D5FDC;
// void CNWSObject::GetLoopingVisualEffects(void)
constexpr uintptr_t CNWSObject__GetLoopingVisualEffects = 0x081D5BD0;
// void CNWSObject::GetMatchedPos(void)
constexpr uintptr_t CNWSObject__GetMatchedPos = 0x081D5EA4;
// public int16_t CNWSObject::GetMaxHitPoints(int32_t)
constexpr uintptr_t CNWSObject__GetMaxHitPoints = 0x081D5A64;
// public int32_t CNWSObject::GetMaximumDamageResistanceVsDamageFlag(uint16_t, int32_t*)
constexpr uintptr_t CNWSObject__GetMaximumDamageResistanceVsDamageFlag = 0x081CDB30;
// public uint32_t CNWSObject::GetNearestObjectByName(const CExoString&, float)
constexpr uintptr_t CNWSObject__GetNearestObjectByName = 0x081D103C;
// void CNWSObject::GetNewGroupID(void)
constexpr uintptr_t CNWSObject__GetNewGroupID = 0x081D49BC;
// void CNWSObject::GetNodeById(uint16_t, uint16_t)
constexpr uintptr_t CNWSObject__GetNodeById = 0x081D48A8;
// public int32_t CNWSObject::GetNumActionGroups(void)
constexpr uintptr_t CNWSObject__GetNumActionGroups = 0x081D492C;
// void CNWSObject::GetObjectToDialog(void)
constexpr uintptr_t CNWSObject__GetObjectToDialog = 0x081D59B8;
// void CNWSObject::GetOpenDoorAnimationPlayed(void)
constexpr uintptr_t CNWSObject__GetOpenDoorAnimationPlayed = 0x081D62B0;
// void CNWSObject::GetOrientation(void)
constexpr uintptr_t CNWSObject__GetOrientation = 0x081D58AC;
// void CNWSObject::GetPendingEffectRemoval(void)
constexpr uintptr_t CNWSObject__GetPendingEffectRemoval = 0x081D5B28;
// void CNWSObject::GetPlotObject(void)
constexpr uintptr_t CNWSObject__GetPlotObject = 0x081D5E5C;
// public CResRef CNWSObject::GetPortrait(void)
constexpr uintptr_t CNWSObject__GetPortrait = 0x081D6064;
// public uint16_t CNWSObject::GetPortraitId(void)
constexpr uintptr_t CNWSObject__GetPortraitId = 0x081D60A4;
// void CNWSObject::GetPosition(void)
constexpr uintptr_t CNWSObject__GetPosition = 0x081D58D0;
// public CExoLinkedListNode* CNWSObject::GetPositionByGroupIndex(int32_t)
constexpr uintptr_t CNWSObject__GetPositionByGroupIndex = 0x081D481C;
// void CNWSObject::GetPrivateConversation(void)
constexpr uintptr_t CNWSObject__GetPrivateConversation = 0x081D5CA8;
// void CNWSObject::GetQueuedActionsList(void)
constexpr uintptr_t CNWSObject__GetQueuedActionsList = 0x081D5840;
// public int32_t CNWSObject::GetReputation(uint32_t, int32_t&, int32_t)
constexpr uintptr_t CNWSObject__GetReputation = 0x081C7E5C;
// void CNWSObject::GetSavingThrowSpellId(void)
constexpr uintptr_t CNWSObject__GetSavingThrowSpellId = 0x081D5B38;
// public CScriptLocation CNWSObject::GetScriptLocation(void)
constexpr uintptr_t CNWSObject__GetScriptLocation = 0x081D1B90;
// void CNWSObject::GetScriptVarTable(void)
constexpr uintptr_t CNWSObject__GetScriptVarTable = 0x081D5AF4;
// void CNWSObject::GetSelectableWhenDead(void)
constexpr uintptr_t CNWSObject__GetSelectableWhenDead = 0x081D6040;
// public CExoString* CNWSObject::GetTag(void)
constexpr uintptr_t CNWSObject__GetTag = 0x081D5F80;
// public CExoString* CNWSObject::GetTemplate(void)
constexpr uintptr_t CNWSObject__GetTemplate = 0x081D5F8C;
// void CNWSObject::GetTemporaryHitPoints(void)
constexpr uintptr_t CNWSObject__GetTemporaryHitPoints = 0x081D5AAC;
// public int32_t CNWSObject::HasSpellEffectApplied(uint32_t)
constexpr uintptr_t CNWSObject__HasSpellEffectApplied = 0x081D53DC;
// void CNWSObject::IsAbleToModifyActionQueue(void)
constexpr uintptr_t CNWSObject__IsAbleToModifyActionQueue = 0x081D5BF4;
// void CNWSObject::IsDialogDelay(void)
constexpr uintptr_t CNWSObject__IsDialogDelay = 0x081D50A8;
// void CNWSObject::IsDialogPaused(void)
constexpr uintptr_t CNWSObject__IsDialogPaused = 0x081D59F0;
// void CNWSObject::IsListening(void)
constexpr uintptr_t CNWSObject__IsListening = 0x081D5E94;
// void CNWSObject::IsPCInDialog(void)
constexpr uintptr_t CNWSObject__IsPCInDialog = 0x081D5998;
// protected void CNWSObject::LoadActionQueue(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSObject__LoadActionQueue = 0x081C98BC;
// protected void CNWSObject::LoadEffectList(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSObject__LoadEffectList = 0x081CA0A0;
// protected void CNWSObject::LoadListenData(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSObject__LoadListenData = 0x081CA264;
// public void CNWSObject::LoadObjectState(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSObject__LoadObjectState = 0x081D4B40;
// protected void CNWSObject::LoadVarTable(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSObject__LoadVarTable = 0x081D4BC0;
// public void CNWSObject::PlaySoundSet(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSObject__PlaySoundSet = 0x081D1384;
// public void CNWSObject::RemoveEffect(CGameEffect*)
constexpr uintptr_t CNWSObject__RemoveEffect = 0x081CEDB8;
// public void CNWSObject::RemoveEffectByCreator(uint32_t)
constexpr uintptr_t CNWSObject__RemoveEffectByCreator = 0x081D4F44;
// public int32_t CNWSObject::RemoveEffectById(uint64_t)
constexpr uintptr_t CNWSObject__RemoveEffectById = 0x081CEEA0;
// void CNWSObject::RemoveEffectBySpellId(uint32_t)
constexpr uintptr_t CNWSObject__RemoveEffectBySpellId = 0x081D5434;
// public void CNWSObject::RemoveEffectTarget(uint32_t)
constexpr uintptr_t CNWSObject__RemoveEffectTarget = 0x081CFE84;
// public void CNWSObject::RemoveGroup(uint16_t)
constexpr uintptr_t CNWSObject__RemoveGroup = 0x081C91EC;
// public void CNWSObject::RemoveLoopingVisualEffect(uint16_t)
constexpr uintptr_t CNWSObject__RemoveLoopingVisualEffect = 0x081D4EE0;
// void CNWSObject::RemoveObjectFromDialog(uint32_t)
constexpr uintptr_t CNWSObject__RemoveObjectFromDialog = 0x081D0F8C;
// public void CNWSObject::RemoveSomeEffectsOfDurationType(uint16_t)
constexpr uintptr_t CNWSObject__RemoveSomeEffectsOfDurationType = 0x081D4FB0;
// public int32_t CNWSObject::ReplyDialog(uint32_t, uint32_t, int32_t, uint32_t)
constexpr uintptr_t CNWSObject__ReplyDialog = 0x081D5104;
// public void CNWSObject::ReportOverflow(int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSObject__ReportOverflow = 0x081D3EA4;
// protected void CNWSObject::RunActions(uint32_t, uint32_t, uint64_t)
constexpr uintptr_t CNWSObject__RunActions = 0x081C213C;
// public int32_t CNWSObject::RunDialogOneLiner(const CExoString&, uint32_t)
constexpr uintptr_t CNWSObject__RunDialogOneLiner = 0x081D05CC;
// protected void CNWSObject::SaveActionQueue(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSObject__SaveActionQueue = 0x081C9E44;
// protected void CNWSObject::SaveEffectList(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSObject__SaveEffectList = 0x081CA198;
// protected void CNWSObject::SaveListenData(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSObject__SaveListenData = 0x081D4BF0;
// public void CNWSObject::SaveObjectState(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSObject__SaveObjectState = 0x081D4B80;
// protected void CNWSObject::SaveVarTable(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSObject__SaveVarTable = 0x081D4BD8;
// public int32_t CNWSObject::SendDialogEntry(uint32_t, int32_t)
constexpr uintptr_t CNWSObject__SendDialogEntry = 0x081D0A4C;
// public int32_t CNWSObject::SendDialogReplies(void)
constexpr uintptr_t CNWSObject__SendDialogReplies = 0x081D0B4C;
// void CNWSObject::SetAbleToModifyActionQueue(int32_t)
constexpr uintptr_t CNWSObject__SetAbleToModifyActionQueue = 0x081D5BE0;
// void CNWSObject::SetAILevel(int32_t)
constexpr uintptr_t CNWSObject__SetAILevel = 0x081D58F0;
// void CNWSObject::SetAILock(int32_t)
constexpr uintptr_t CNWSObject__SetAILock = 0x081D5900;
// void CNWSObject::SetAIPosList(CExoLinkedListNode*)
constexpr uintptr_t CNWSObject__SetAIPosList = 0x081D5910;
// public void CNWSObject::SetAnimation(int32_t)
constexpr uintptr_t CNWSObject__SetAnimation = 0x081D4CE4;
// void CNWSObject::SetAnimationSpeed(float)
constexpr uintptr_t CNWSObject__SetAnimationSpeed = 0x081D5920;
// void CNWSObject::SetApplyingPostProcessEffects(int32_t)
constexpr uintptr_t CNWSObject__SetApplyingPostProcessEffects = 0x081D62F4;
// public void CNWSObject::SetArea(CNWSArea*)
constexpr uintptr_t CNWSObject__SetArea = 0x081D5078;
// void CNWSObject::SetAreaId(uint32_t)
constexpr uintptr_t CNWSObject__SetAreaId = 0x081D60BC;
// void CNWSObject::SetBaseHitPoints(int32_t)
constexpr uintptr_t CNWSObject__SetBaseHitPoints = 0x081D5A98;
// void CNWSObject::SetConversationPlayHello(int32_t)
constexpr uintptr_t CNWSObject__SetConversationPlayHello = 0x081D5CDC;
// void CNWSObject::SetCurrentActionTarget(uint32_t)
constexpr uintptr_t CNWSObject__SetCurrentActionTarget = 0x081D5FE8;
// void CNWSObject::SetCurrentHitPoints(int32_t)
constexpr uintptr_t CNWSObject__SetCurrentHitPoints = 0x081D5A74;
// void CNWSObject::SetCustomScriptEventId(int32_t)
constexpr uintptr_t CNWSObject__SetCustomScriptEventId = 0x081D5FC0;
// public void CNWSObject::SetDamageImmunity(uint16_t, int32_t)
constexpr uintptr_t CNWSObject__SetDamageImmunity = 0x081D4D84;
// void CNWSObject::SetDialogAnimation(int32_t)
constexpr uintptr_t CNWSObject__SetDialogAnimation = 0x081D5A0C;
// public void CNWSObject::SetDialogDelay(float)
constexpr uintptr_t CNWSObject__SetDialogDelay = 0x081D0104;
// public void CNWSObject::SetDialogOwner(uint32_t)
constexpr uintptr_t CNWSObject__SetDialogOwner = 0x081D51AC;
// void CNWSObject::SetDialogPaused(int32_t)
constexpr uintptr_t CNWSObject__SetDialogPaused = 0x081D59FC;
// void CNWSObject::SetEffectArrayIndex(uint16_t)
constexpr uintptr_t CNWSObject__SetEffectArrayIndex = 0x081D62D0;
// void CNWSObject::SetEffectSpellId(uint32_t)
constexpr uintptr_t CNWSObject__SetEffectSpellId = 0x081D5BC8;
// void CNWSObject::SetExecutingAIAction(CNWSObjectActionNode*)
constexpr uintptr_t CNWSObject__SetExecutingAIAction = 0x081D5AE0;
// public void CNWSObject::SetGroupInterruptable(uint16_t, int32_t)
constexpr uintptr_t CNWSObject__SetGroupInterruptable = 0x081D4AA4;
// void CNWSObject::SetInventoryDisturbItem(uint32_t)
constexpr uintptr_t CNWSObject__SetInventoryDisturbItem = 0x081D5E48;
// void CNWSObject::SetInventoryDisturbType(int32_t)
constexpr uintptr_t CNWSObject__SetInventoryDisturbType = 0x081D5E24;
// void CNWSObject::SetIsDestroyable(int32_t)
constexpr uintptr_t CNWSObject__SetIsDestroyable = 0x081D6008;
// void CNWSObject::SetIsRaiseable(int32_t)
constexpr uintptr_t CNWSObject__SetIsRaiseable = 0x081D602C;
// void CNWSObject::SetKiller(uint32_t)
constexpr uintptr_t CNWSObject__SetKiller = 0x081D5CF0;
// void CNWSObject::SetLastAnimationTimes(uint32_t, uint32_t)
constexpr uintptr_t CNWSObject__SetLastAnimationTimes = 0x081D5934;
// void CNWSObject::SetLastAttacker(uint32_t)
constexpr uintptr_t CNWSObject__SetLastAttacker = 0x081D5D24;
// void CNWSObject::SetLastAttackMode(unsigned char)
constexpr uintptr_t CNWSObject__SetLastAttackMode = 0x081D5DB8;
// void CNWSObject::SetLastAttackType(uint16_t)
constexpr uintptr_t CNWSObject__SetLastAttackType = 0x081D5D94;
// public void CNWSObject::SetLastConversationResref(CExoString)
constexpr uintptr_t CNWSObject__SetLastConversationResref = 0x081D5C50;
// void CNWSObject::SetLastDamageAmount(int32_t, int32_t)
constexpr uintptr_t CNWSObject__SetLastDamageAmount = 0x081D5D5C;
// void CNWSObject::SetLastDamager(uint32_t)
constexpr uintptr_t CNWSObject__SetLastDamager = 0x081D5D38;
// void CNWSObject::SetLastDisturbed(uint32_t)
constexpr uintptr_t CNWSObject__SetLastDisturbed = 0x081D5E00;
// void CNWSObject::SetLastGroupID(uint16_t)
constexpr uintptr_t CNWSObject__SetLastGroupID = 0x081D6308;
// public void CNWSObject::SetLastHostileActor(uint32_t, int32_t)
constexpr uintptr_t CNWSObject__SetLastHostileActor = 0x081D40A0;
// void CNWSObject::SetLastSpeaker(uint32_t)
constexpr uintptr_t CNWSObject__SetLastSpeaker = 0x081D5C14;
// void CNWSObject::SetLastSpellCast(int32_t)
constexpr uintptr_t CNWSObject__SetLastSpellCast = 0x081D6210;
// void CNWSObject::SetLastSpellCastAtMe(uint32_t)
constexpr uintptr_t CNWSObject__SetLastSpellCastAtMe = 0x081D6260;
// void CNWSObject::SetLastSpellCastAtMeCaster(uint32_t)
constexpr uintptr_t CNWSObject__SetLastSpellCastAtMeCaster = 0x081D624C;
// void CNWSObject::SetLastSpellCastAtMeHarmful(int32_t)
constexpr uintptr_t CNWSObject__SetLastSpellCastAtMeHarmful = 0x081D6274;
// void CNWSObject::SetLastSpellCastDomainLevel(unsigned char)
constexpr uintptr_t CNWSObject__SetLastSpellCastDomainLevel = 0x081D61C8;
// void CNWSObject::SetLastSpellCastFeat(uint16_t)
constexpr uintptr_t CNWSObject__SetLastSpellCastFeat = 0x081D6288;
// void CNWSObject::SetLastSpellCastMetaType(unsigned char)
constexpr uintptr_t CNWSObject__SetLastSpellCastMetaType = 0x081D6238;
// void CNWSObject::SetLastSpellCastMulticlass(unsigned char)
constexpr uintptr_t CNWSObject__SetLastSpellCastMulticlass = 0x081D61A0;
// void CNWSObject::SetLastSpellCastSpontaneous(int32_t)
constexpr uintptr_t CNWSObject__SetLastSpellCastSpontaneous = 0x081D6224;
// void CNWSObject::SetLastSpellId(uint32_t)
constexpr uintptr_t CNWSObject__SetLastSpellId = 0x081D61B4;
// void CNWSObject::SetLastSpellLocationTarget(Vector)
constexpr uintptr_t CNWSObject__SetLastSpellLocationTarget = 0x081D61F0;
// void CNWSObject::SetLastSpellObjectTarget(uint32_t)
constexpr uintptr_t CNWSObject__SetLastSpellObjectTarget = 0x081D61DC;
// void CNWSObject::SetLastWeaponAttackedWith(uint32_t)
constexpr uintptr_t CNWSObject__SetLastWeaponAttackedWith = 0x081D5DDC;
// public int32_t CNWSObject::SetListenExpression(CExoString, int32_t)
constexpr uintptr_t CNWSObject__SetListenExpression = 0x081D1438;
// void CNWSObject::SetListening(int32_t)
constexpr uintptr_t CNWSObject__SetListening = 0x081D5E80;
// void CNWSObject::SetLockOrientationToObject(uint32_t)
constexpr uintptr_t CNWSObject__SetLockOrientationToObject = 0x081D5FD4;
// void CNWSObject::SetMatchedPos(int32_t)
constexpr uintptr_t CNWSObject__SetMatchedPos = 0x081D5EB4;
// void CNWSObject::SetOpenDoorAnimationPlayed(int32_t)
constexpr uintptr_t CNWSObject__SetOpenDoorAnimationPlayed = 0x081D629C;
// public void CNWSObject::SetOrientation(Vector)
constexpr uintptr_t CNWSObject__SetOrientation = 0x081D4E10;
// void CNWSObject::SetPendingEffectRemoval(int32_t)
constexpr uintptr_t CNWSObject__SetPendingEffectRemoval = 0x081D5B14;
// void CNWSObject::SetPlotObject(int32_t)
constexpr uintptr_t CNWSObject__SetPlotObject = 0x081D5E6C;
// public void CNWSObject::SetPortrait(CResRef)
constexpr uintptr_t CNWSObject__SetPortrait = 0x081D6084;
// public void CNWSObject::SetPortraitId(uint16_t)
constexpr uintptr_t CNWSObject__SetPortraitId = 0x081CA41C;
// public void CNWSObject::SetPosition(Vector, int32_t)
constexpr uintptr_t CNWSObject__SetPosition = 0x081D4E30;
// void CNWSObject::SetPrivateConversation(int32_t)
constexpr uintptr_t CNWSObject__SetPrivateConversation = 0x081D5CB8;
// void CNWSObject::SetSavingThrowSpellId(uint32_t)
constexpr uintptr_t CNWSObject__SetSavingThrowSpellId = 0x081D5B48;
// void CNWSObject::SetSelectableWhenDead(int32_t)
constexpr uintptr_t CNWSObject__SetSelectableWhenDead = 0x081D6050;
// void CNWSObject::SetStartActionTimer(uint32_t, uint32_t)
constexpr uintptr_t CNWSObject__SetStartActionTimer = 0x081D5950;
// public void CNWSObject::SetTag(CExoString)
constexpr uintptr_t CNWSObject__SetTag = 0x081D5EE8;
// void CNWSObject::SetTemplate(const CExoString&)
constexpr uintptr_t CNWSObject__SetTemplate = 0x081D5F98;
// void CNWSObject::SetTemporaryHitPoints(int32_t)
constexpr uintptr_t CNWSObject__SetTemporaryHitPoints = 0x081D5ABC;
// public void CNWSObject::SpawnBodyBag(void)
constexpr uintptr_t CNWSObject__SpawnBodyBag = 0x081D3AA8;
// public void CNWSObject::SpellCastAndImpact(uint32_t, Vector, uint32_t, unsigned char, uint32_t, int32_t, int32_t, unsigned char, int32_t)
constexpr uintptr_t CNWSObject__SpellCastAndImpact = 0x081D261C;
// public int32_t CNWSObject::StartDialog(uint32_t, const CExoString&, int32_t, int32_t)
constexpr uintptr_t CNWSObject__StartDialog = 0x081D0198;
// public int32_t CNWSObject::StopDialog(void)
constexpr uintptr_t CNWSObject__StopDialog = 0x081D0E8C;
// void CNWSObject::TerminateAISliceAfterAction(uint32_t)
constexpr uintptr_t CNWSObject__TerminateAISliceAfterAction = 0x081C8380;
// void CNWSObject::TestActionList(void)
constexpr uintptr_t CNWSObject__TestActionList = 0x081D4AFC;
// public int32_t CNWSObject::TestListenExpression(CExoString)
constexpr uintptr_t CNWSObject__TestListenExpression = 0x081D1540;
// void CNWSObject::UpdateAttributesOnEffect(CGameEffect*, int32_t)
constexpr uintptr_t CNWSObject__UpdateAttributesOnEffect = 0x081D6320;
// public int32_t CNWSObject::UpdateDialog(void)
constexpr uintptr_t CNWSObject__UpdateDialog = 0x081D0C38;
// public void CNWSObject::UpdateEffectList(uint32_t, uint32_t)
constexpr uintptr_t CNWSObject__UpdateEffectList = 0x081CF014;
// protected void CNWSObject::UpdateEffectPtrs(void)
constexpr uintptr_t CNWSObject__UpdateEffectPtrs = 0x081D6318;

// public CNWSObjectActionNode::CNWSObjectActionNode(void)
constexpr uintptr_t CNWSObjectActionNode__CNWSObjectActionNodeCtor = 0x081D468C;
// public CNWSObjectActionNode::~CNWSObjectActionNode(void)
constexpr uintptr_t CNWSObjectActionNode__CNWSObjectActionNodeDtor = 0x081D46BC;

// CNWSpell::CNWSpell(void)
constexpr uintptr_t CNWSpell__CNWSpellCtor = 0x081D85A0;
// CNWSpell::~CNWSpell(void)
constexpr uintptr_t CNWSpell__CNWSpellDtor = 0x081DB698;
// public int32_t CNWSpell::GetSpellHasSomaticComponent(void)
constexpr uintptr_t CNWSpell__GetSpellHasSomaticComponent = 0x081DB788;
// public int32_t CNWSpell::GetSpellHasVerbalComponent(void)
constexpr uintptr_t CNWSpell__GetSpellHasVerbalComponent = 0x081DB70C;
// public unsigned char CNWSpell::GetSpellLevel(unsigned char)
constexpr uintptr_t CNWSpell__GetSpellLevel = 0x081D8920;
// void CNWSpell::GetSpellNameText(void)
constexpr uintptr_t CNWSpell__GetSpellNameText = 0x081D897C;
// public uint32_t CNWSpell::GetSubRadialSpell(unsigned char)
constexpr uintptr_t CNWSpell__GetSubRadialSpell = 0x081DB804;
// void CNWSpell::SetSubRadialSpell(unsigned char, uint32_t)
constexpr uintptr_t CNWSpell__SetSubRadialSpell = 0x081DB82C;
// void CNWSpell::SetSubRadialSpellCount(unsigned char)
constexpr uintptr_t CNWSpell__SetSubRadialSpellCount = 0x081DB850;

// public CNWSpellArray::CNWSpellArray(void)
constexpr uintptr_t CNWSpellArray__CNWSpellArrayCtor = 0x081DB8AC;
// public CNWSpellArray::~CNWSpellArray(void)
constexpr uintptr_t CNWSpellArray__CNWSpellArrayDtor = 0x081D8A30;
// void CNWSpellArray::__vc(int32_t) const
constexpr uintptr_t CNWSpellArray____vc = 0x081DAF38;
// public CNWSpell* CNWSpellArray::GetSpell(int32_t) const
constexpr uintptr_t CNWSpellArray__GetSpell = 0x081DB8C4;
// public void CNWSpellArray::Load(void)
constexpr uintptr_t CNWSpellArray__Load = 0x081D8AF0;

// public CNWSPlaceable::CNWSPlaceable(uint32_t)
constexpr uintptr_t CNWSPlaceable__CNWSPlaceableCtor__1 = 0x081DB8F0;
// public CNWSPlaceable::~CNWSPlaceable(void)
constexpr uintptr_t CNWSPlaceable__CNWSPlaceableDtor = 0x081DBE10;
// public int32_t CNWSPlaceable::AcquireItem(CNWSItem**, uint32_t, unsigned char, unsigned char, int32_t)
constexpr uintptr_t CNWSPlaceable__AcquireItem = 0x081E0860;
// public uint32_t CNWSPlaceable::AcquireItemsFromObject(uint32_t, int32_t)
constexpr uintptr_t CNWSPlaceable__AcquireItemsFromObject = 0x081E0A0C;
// public int32_t CNWSPlaceable::AddCastSpellActions(uint32_t, int32_t, Vector, uint32_t, int32_t, unsigned char)
constexpr uintptr_t CNWSPlaceable__AddCastSpellActions = 0x081E15BC;
// public void CNWSPlaceable::AddToArea(CNWSArea*, float, float, float, int32_t)
constexpr uintptr_t CNWSPlaceable__AddToArea = 0x081DF174;
// public uint32_t CNWSPlaceable::AIActionCastSpell(CNWSObjectActionNode*)
constexpr uintptr_t CNWSPlaceable__AIActionCastSpell = 0x081E16B8;
// public void CNWSPlaceable::AIUpdate(void)
constexpr uintptr_t CNWSPlaceable__AIUpdate = 0x081E0614;
// void CNWSPlaceable::AsNWSPlaceable(void)
constexpr uintptr_t CNWSPlaceable__AsNWSPlaceable = 0x081E1E6C;
// protected void CNWSPlaceable::CalculateActionPoints(void)
constexpr uintptr_t CNWSPlaceable__CalculateActionPoints = 0x081DF588;
// public void CNWSPlaceable::CloseInventory(uint32_t, int32_t)
constexpr uintptr_t CNWSPlaceable__CloseInventory = 0x081E11D0;
// public void CNWSPlaceable::ClosePlaceableForAllPlayers(void)
constexpr uintptr_t CNWSPlaceable__ClosePlaceableForAllPlayers = 0x081E1B48;
// public void CNWSPlaceable::DoDamage(int32_t)
constexpr uintptr_t CNWSPlaceable__DoDamage = 0x081E1C94;
// void CNWSPlaceable::DropItemsIntoArea(void)
constexpr uintptr_t CNWSPlaceable__DropItemsIntoArea = 0x081E1330;
// public void CNWSPlaceable::EventHandler(uint32_t, uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CNWSPlaceable__EventHandler = 0x081DF88C;
// void CNWSPlaceable::GetActive(void)
constexpr uintptr_t CNWSPlaceable__GetActive = 0x081E26B0;
// void CNWSPlaceable::GetAppearance(void)
constexpr uintptr_t CNWSPlaceable__GetAppearance = 0x081E1FB0;
// void CNWSPlaceable::GetAutoRemoveKey(void)
constexpr uintptr_t CNWSPlaceable__GetAutoRemoveKey = 0x081E223C;
// void CNWSPlaceable::GetBaseType(void)
constexpr uintptr_t CNWSPlaceable__GetBaseType = 0x081E25FC;
// void CNWSPlaceable::GetBearing(void)
constexpr uintptr_t CNWSPlaceable__GetBearing = 0x081E214C;
// void CNWSPlaceable::GetBodyBag(void)
constexpr uintptr_t CNWSPlaceable__GetBodyBag = 0x081E2924;
// public uint16_t CNWSPlaceable::GetBodyBagAppearance(void)
constexpr uintptr_t CNWSPlaceable__GetBodyBagAppearance = 0x081E1958;
// void CNWSPlaceable::GetCloseLockDC(void)
constexpr uintptr_t CNWSPlaceable__GetCloseLockDC = 0x081E2284;
// void CNWSPlaceable::GetCreatureList(void)
constexpr uintptr_t CNWSPlaceable__GetCreatureList = 0x081E256C;
// void CNWSPlaceable::GetCurrentItemContainer(void)
constexpr uintptr_t CNWSPlaceable__GetCurrentItemContainer = 0x081E27F0;
// public CExoLocString& CNWSPlaceable::GetDescription(void)
constexpr uintptr_t CNWSPlaceable__GetDescription = 0x081E201C;
// public CExoString CNWSPlaceable::GetDescriptionOverride(void)
constexpr uintptr_t CNWSPlaceable__GetDescriptionOverride = 0x081E2084;
// void CNWSPlaceable::GetDetectable(void)
constexpr uintptr_t CNWSPlaceable__GetDetectable = 0x081E2644;
// void CNWSPlaceable::GetDetectDC(void)
constexpr uintptr_t CNWSPlaceable__GetDetectDC = 0x081E25C4;
// public CResRef CNWSPlaceable::GetDialogResref(void)
constexpr uintptr_t CNWSPlaceable__GetDialogResref = 0x081E272C;
// void CNWSPlaceable::GetDieWhenEmpty(void)
constexpr uintptr_t CNWSPlaceable__GetDieWhenEmpty = 0x081E2784;
// void CNWSPlaceable::GetDisarmable(void)
constexpr uintptr_t CNWSPlaceable__GetDisarmable = 0x081E2620;
// void CNWSPlaceable::GetDisarmDC(void)
constexpr uintptr_t CNWSPlaceable__GetDisarmDC = 0x081E26E4;
// void CNWSPlaceable::GetDisplayName(void)
constexpr uintptr_t CNWSPlaceable__GetDisplayName = 0x081E1F00;
// public uint32_t CNWSPlaceable::GetEffectSpellId(void)
constexpr uintptr_t CNWSPlaceable__GetEffectSpellId = 0x081E28DC;
// void CNWSPlaceable::GetFactionId(void)
constexpr uintptr_t CNWSPlaceable__GetFactionId = 0x081E2104;
// void CNWSPlaceable::GetFirstName(void)
constexpr uintptr_t CNWSPlaceable__GetFirstName = 0x081E1E98;
// void CNWSPlaceable::GetFlagged(void)
constexpr uintptr_t CNWSPlaceable__GetFlagged = 0x081E2708;
// void CNWSPlaceable::GetFortSave(void)
constexpr uintptr_t CNWSPlaceable__GetFortSave = 0x081E22A8;
// void CNWSPlaceable::GetHardness(void)
constexpr uintptr_t CNWSPlaceable__GetHardness = 0x081E2128;
// void CNWSPlaceable::GetHasInventory(void)
constexpr uintptr_t CNWSPlaceable__GetHasInventory = 0x081E235C;
// void CNWSPlaceable::GetIsBodyBag(void)
constexpr uintptr_t CNWSPlaceable__GetIsBodyBag = 0x081E29B4;
// void CNWSPlaceable::GetIsGroundPile(void)
constexpr uintptr_t CNWSPlaceable__GetIsGroundPile = 0x081E200C;
// void CNWSPlaceable::GetItemContainerArrayIndex(void)
constexpr uintptr_t CNWSPlaceable__GetItemContainerArrayIndex = 0x081E27CC;
// public uint32_t CNWSPlaceable::GetItemCount(int32_t)
constexpr uintptr_t CNWSPlaceable__GetItemCount = 0x081E1AB4;
// void CNWSPlaceable::GetItemRepository(void)
constexpr uintptr_t CNWSPlaceable__GetItemRepository = 0x081E2774;
// void CNWSPlaceable::GetKeyName(void)
constexpr uintptr_t CNWSPlaceable__GetKeyName = 0x081E2170;
// void CNWSPlaceable::GetKeyRequired(void)
constexpr uintptr_t CNWSPlaceable__GetKeyRequired = 0x081E2198;
// public CExoString CNWSPlaceable::GetKeyRequiredFeedbackMessage(void)
constexpr uintptr_t CNWSPlaceable__GetKeyRequiredFeedbackMessage = 0x081E2214;
// void CNWSPlaceable::GetLastClosed(void)
constexpr uintptr_t CNWSPlaceable__GetLastClosed = 0x081E2548;
// void CNWSPlaceable::GetLastDefaultClickedBy(void)
constexpr uintptr_t CNWSPlaceable__GetLastDefaultClickedBy = 0x081E2524;
// void CNWSPlaceable::GetLastDisarmed(void)
constexpr uintptr_t CNWSPlaceable__GetLastDisarmed = 0x081E2494;
// void CNWSPlaceable::GetLastLocked(void)
constexpr uintptr_t CNWSPlaceable__GetLastLocked = 0x081E24B8;
// void CNWSPlaceable::GetLastOpened(void)
constexpr uintptr_t CNWSPlaceable__GetLastOpened = 0x081E244C;
// void CNWSPlaceable::GetLastTriggered(void)
constexpr uintptr_t CNWSPlaceable__GetLastTriggered = 0x081E2470;
// void CNWSPlaceable::GetLastUnlocked(void)
constexpr uintptr_t CNWSPlaceable__GetLastUnlocked = 0x081E24DC;
// void CNWSPlaceable::GetLastUser(void)
constexpr uintptr_t CNWSPlaceable__GetLastUser = 0x081E2500;
// public int32_t CNWSPlaceable::GetLightIsOn(void)
constexpr uintptr_t CNWSPlaceable__GetLightIsOn = 0x081E1D74;
// void CNWSPlaceable::GetLightStateChange(void)
constexpr uintptr_t CNWSPlaceable__GetLightStateChange = 0x081E2900;
// void CNWSPlaceable::GetLockable(void)
constexpr uintptr_t CNWSPlaceable__GetLockable = 0x081E2338;
// void CNWSPlaceable::GetLocked(void)
constexpr uintptr_t CNWSPlaceable__GetLocked = 0x081E2314;
// void CNWSPlaceable::GetLootableCreatureId(void)
constexpr uintptr_t CNWSPlaceable__GetLootableCreatureId = 0x081E2990;
// public Vector CNWSPlaceable::GetNearestActionPoint(const Vector&)
constexpr uintptr_t CNWSPlaceable__GetNearestActionPoint = 0x081E142C;
// void CNWSPlaceable::GetNeverMakeIntoStaticObject(void)
constexpr uintptr_t CNWSPlaceable__GetNeverMakeIntoStaticObject = 0x081E296C;
// void CNWSPlaceable::GetOneShot(void)
constexpr uintptr_t CNWSPlaceable__GetOneShot = 0x081E2668;
// void CNWSPlaceable::GetOpenLockDC(void)
constexpr uintptr_t CNWSPlaceable__GetOpenLockDC = 0x081E2260;
// void CNWSPlaceable::GetPickable(void)
constexpr uintptr_t CNWSPlaceable__GetPickable = 0x081E23A4;
// public CExoString CNWSPlaceable::GetPortalInfo(void)
constexpr uintptr_t CNWSPlaceable__GetPortalInfo = 0x081E28B4;
// void CNWSPlaceable::GetRecoverable(void)
constexpr uintptr_t CNWSPlaceable__GetRecoverable = 0x081E268C;
// void CNWSPlaceable::GetReflexSave(void)
constexpr uintptr_t CNWSPlaceable__GetReflexSave = 0x081E22F0;
// void CNWSPlaceable::GetRepositoryArrayIndex(void)
constexpr uintptr_t CNWSPlaceable__GetRepositoryArrayIndex = 0x081E27A8;
// void CNWSPlaceable::GetScriptName(int32_t)
constexpr uintptr_t CNWSPlaceable__GetScriptName = 0x081E23C8;
// void CNWSPlaceable::GetSittingCreature(void)
constexpr uintptr_t CNWSPlaceable__GetSittingCreature = 0x081E1E74;
// void CNWSPlaceable::GetStaticObject(void)
constexpr uintptr_t CNWSPlaceable__GetStaticObject = 0x081E2948;
// void CNWSPlaceable::GetTemplateResRef(void)
constexpr uintptr_t CNWSPlaceable__GetTemplateResRef = 0x081E2814;
// void CNWSPlaceable::GetTrapCreator(void)
constexpr uintptr_t CNWSPlaceable__GetTrapCreator = 0x081E257C;
// void CNWSPlaceable::GetTrapFaction(void)
constexpr uintptr_t CNWSPlaceable__GetTrapFaction = 0x081E26D4;
// void CNWSPlaceable::GetTrapped(void)
constexpr uintptr_t CNWSPlaceable__GetTrapped = 0x081E25A0;
// void CNWSPlaceable::GetType(void)
constexpr uintptr_t CNWSPlaceable__GetType = 0x081E1FD4;
// void CNWSPlaceable::GetUpdateDisplayName(void)
constexpr uintptr_t CNWSPlaceable__GetUpdateDisplayName = 0x081E1F8C;
// void CNWSPlaceable::GetUseable(void)
constexpr uintptr_t CNWSPlaceable__GetUseable = 0x081E2380;
// void CNWSPlaceable::GetWillSave(void)
constexpr uintptr_t CNWSPlaceable__GetWillSave = 0x081E22CC;
// public int32_t CNWSPlaceable::LoadBodyBag(uint16_t)
constexpr uintptr_t CNWSPlaceable__LoadBodyBag = 0x081DDB44;
// public int32_t CNWSPlaceable::LoadFromTemplate(CResRef, CExoString*)
constexpr uintptr_t CNWSPlaceable__LoadFromTemplate = 0x081DBF94;
// public int32_t CNWSPlaceable::LoadPlaceable(CResGFF*, CResStruct*, CExoString*)
constexpr uintptr_t CNWSPlaceable__LoadPlaceable = 0x081DC150;
// public void CNWSPlaceable::OpenInventory(uint32_t)
constexpr uintptr_t CNWSPlaceable__OpenInventory = 0x081E0FF0;
// public void CNWSPlaceable::PostProcess(void)
constexpr uintptr_t CNWSPlaceable__PostProcess = 0x081DEFBC;
// public void CNWSPlaceable::RemoveFromArea(void)
constexpr uintptr_t CNWSPlaceable__RemoveFromArea = 0x081DF7C0;
// public int32_t CNWSPlaceable::RemoveItem(CNWSItem*, int32_t)
constexpr uintptr_t CNWSPlaceable__RemoveItem = 0x081E1C30;
// public int32_t CNWSPlaceable::SavePlaceable(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSPlaceable__SavePlaceable = 0x081DE414;
// void CNWSPlaceable::SetActive(int32_t)
constexpr uintptr_t CNWSPlaceable__SetActive = 0x081E269C;
// void CNWSPlaceable::SetAppearance(uint16_t)
constexpr uintptr_t CNWSPlaceable__SetAppearance = 0x081E1FC0;
// void CNWSPlaceable::SetAutoRemoveKey(int32_t)
constexpr uintptr_t CNWSPlaceable__SetAutoRemoveKey = 0x081E224C;
// void CNWSPlaceable::SetBaseType(unsigned char)
constexpr uintptr_t CNWSPlaceable__SetBaseType = 0x081E25E8;
// void CNWSPlaceable::SetBearing(float)
constexpr uintptr_t CNWSPlaceable__SetBearing = 0x081E215C;
// void CNWSPlaceable::SetBodyBag(unsigned char)
constexpr uintptr_t CNWSPlaceable__SetBodyBag = 0x081E2934;
// void CNWSPlaceable::SetCloseLockDC(unsigned char)
constexpr uintptr_t CNWSPlaceable__SetCloseLockDC = 0x081E2294;
// void CNWSPlaceable::SetCurrentItemContainer(uint32_t)
constexpr uintptr_t CNWSPlaceable__SetCurrentItemContainer = 0x081E2800;
// public void CNWSPlaceable::SetDescription(CExoLocString)
constexpr uintptr_t CNWSPlaceable__SetDescription = 0x081E202C;
// public void CNWSPlaceable::SetDescriptionOverride(CExoString)
constexpr uintptr_t CNWSPlaceable__SetDescriptionOverride = 0x081E20AC;
// void CNWSPlaceable::SetDetectable(int32_t)
constexpr uintptr_t CNWSPlaceable__SetDetectable = 0x081E2630;
// void CNWSPlaceable::SetDetectDC(unsigned char)
constexpr uintptr_t CNWSPlaceable__SetDetectDC = 0x081E25D4;
// public void CNWSPlaceable::SetDialogResref(CResRef)
constexpr uintptr_t CNWSPlaceable__SetDialogResref = 0x081E2750;
// void CNWSPlaceable::SetDieWhenEmpty(int32_t)
constexpr uintptr_t CNWSPlaceable__SetDieWhenEmpty = 0x081E2794;
// void CNWSPlaceable::SetDisarmable(int32_t)
constexpr uintptr_t CNWSPlaceable__SetDisarmable = 0x081E260C;
// void CNWSPlaceable::SetDisarmDC(unsigned char)
constexpr uintptr_t CNWSPlaceable__SetDisarmDC = 0x081E26F4;
// public void CNWSPlaceable::SetDisplayName(CExoString)
constexpr uintptr_t CNWSPlaceable__SetDisplayName = 0x081E1F28;
// public void CNWSPlaceable::SetEffectSpellId(uint32_t)
constexpr uintptr_t CNWSPlaceable__SetEffectSpellId = 0x081E28EC;
// void CNWSPlaceable::SetFactionId(int32_t)
constexpr uintptr_t CNWSPlaceable__SetFactionId = 0x081E2114;
// public void CNWSPlaceable::SetFirstName(CExoLocString)
constexpr uintptr_t CNWSPlaceable__SetFirstName = 0x081E1EA8;
// void CNWSPlaceable::SetFlagged(unsigned char)
constexpr uintptr_t CNWSPlaceable__SetFlagged = 0x081E2718;
// void CNWSPlaceable::SetFortSave(unsigned char)
constexpr uintptr_t CNWSPlaceable__SetFortSave = 0x081E22B8;
// void CNWSPlaceable::SetHardness(unsigned char)
constexpr uintptr_t CNWSPlaceable__SetHardness = 0x081E2138;
// void CNWSPlaceable::SetHasInventory(int32_t)
constexpr uintptr_t CNWSPlaceable__SetHasInventory = 0x081E236C;
// void CNWSPlaceable::SetIsBodyBag(int32_t)
constexpr uintptr_t CNWSPlaceable__SetIsBodyBag = 0x081E29C4;
// void CNWSPlaceable::SetIsGroundPile(int32_t)
constexpr uintptr_t CNWSPlaceable__SetIsGroundPile = 0x081E1FF8;
// void CNWSPlaceable::SetItemContainerArrayIndex(uint16_t)
constexpr uintptr_t CNWSPlaceable__SetItemContainerArrayIndex = 0x081E27DC;
// void CNWSPlaceable::SetKeyName(const CExoString&)
constexpr uintptr_t CNWSPlaceable__SetKeyName = 0x081E2180;
// void CNWSPlaceable::SetKeyRequired(int32_t)
constexpr uintptr_t CNWSPlaceable__SetKeyRequired = 0x081E21A8;
// public void CNWSPlaceable::SetKeyRequiredFeedbackMessage(CExoString)
constexpr uintptr_t CNWSPlaceable__SetKeyRequiredFeedbackMessage = 0x081E21BC;
// void CNWSPlaceable::SetLastClosed(uint32_t)
constexpr uintptr_t CNWSPlaceable__SetLastClosed = 0x081E2558;
// void CNWSPlaceable::SetLastDefaultClickedBy(uint32_t)
constexpr uintptr_t CNWSPlaceable__SetLastDefaultClickedBy = 0x081E2534;
// void CNWSPlaceable::SetLastDisarmed(uint32_t)
constexpr uintptr_t CNWSPlaceable__SetLastDisarmed = 0x081E24A4;
// void CNWSPlaceable::SetLastLocked(uint32_t)
constexpr uintptr_t CNWSPlaceable__SetLastLocked = 0x081E24C8;
// void CNWSPlaceable::SetLastOpened(uint32_t)
constexpr uintptr_t CNWSPlaceable__SetLastOpened = 0x081E245C;
// void CNWSPlaceable::SetLastTriggered(uint32_t)
constexpr uintptr_t CNWSPlaceable__SetLastTriggered = 0x081E2480;
// void CNWSPlaceable::SetLastUnlocked(uint32_t)
constexpr uintptr_t CNWSPlaceable__SetLastUnlocked = 0x081E24EC;
// void CNWSPlaceable::SetLastUser(uint32_t)
constexpr uintptr_t CNWSPlaceable__SetLastUser = 0x081E2510;
// public void CNWSPlaceable::SetLightIsOn(int32_t)
constexpr uintptr_t CNWSPlaceable__SetLightIsOn = 0x081E1CC8;
// void CNWSPlaceable::SetLightStateChange(int32_t)
constexpr uintptr_t CNWSPlaceable__SetLightStateChange = 0x081E2910;
// void CNWSPlaceable::SetLockable(int32_t)
constexpr uintptr_t CNWSPlaceable__SetLockable = 0x081E2348;
// void CNWSPlaceable::SetLocked(int32_t)
constexpr uintptr_t CNWSPlaceable__SetLocked = 0x081E2324;
// void CNWSPlaceable::SetLootableCreatureId(uint32_t)
constexpr uintptr_t CNWSPlaceable__SetLootableCreatureId = 0x081E29A0;
// void CNWSPlaceable::SetNeverMakeIntoStaticObject(int32_t)
constexpr uintptr_t CNWSPlaceable__SetNeverMakeIntoStaticObject = 0x081E297C;
// void CNWSPlaceable::SetOneShot(int32_t)
constexpr uintptr_t CNWSPlaceable__SetOneShot = 0x081E2654;
// void CNWSPlaceable::SetOpenLockDC(unsigned char)
constexpr uintptr_t CNWSPlaceable__SetOpenLockDC = 0x081E2270;
// public void CNWSPlaceable::SetOrientation(Vector)
constexpr uintptr_t CNWSPlaceable__SetOrientation = 0x081DF084;
// void CNWSPlaceable::SetPickable(int32_t)
constexpr uintptr_t CNWSPlaceable__SetPickable = 0x081E23B4;
// public void CNWSPlaceable::SetPortalInfo(CExoString)
constexpr uintptr_t CNWSPlaceable__SetPortalInfo = 0x081E285C;
// void CNWSPlaceable::SetRecoverable(int32_t)
constexpr uintptr_t CNWSPlaceable__SetRecoverable = 0x081E2678;
// void CNWSPlaceable::SetReflexSave(unsigned char)
constexpr uintptr_t CNWSPlaceable__SetReflexSave = 0x081E2300;
// void CNWSPlaceable::SetRepositoryArrayIndex(uint16_t)
constexpr uintptr_t CNWSPlaceable__SetRepositoryArrayIndex = 0x081E27B8;
// public void CNWSPlaceable::SetScriptName(int32_t, CExoString)
constexpr uintptr_t CNWSPlaceable__SetScriptName = 0x081E23E4;
// void CNWSPlaceable::SetSittingCreature(uint32_t)
constexpr uintptr_t CNWSPlaceable__SetSittingCreature = 0x081E1E84;
// void CNWSPlaceable::SetStaticObject(int32_t)
constexpr uintptr_t CNWSPlaceable__SetStaticObject = 0x081E2958;
// public void CNWSPlaceable::SetTemplateResRef(CResRef)
constexpr uintptr_t CNWSPlaceable__SetTemplateResRef = 0x081E2838;
// void CNWSPlaceable::SetTrapCreator(uint32_t)
constexpr uintptr_t CNWSPlaceable__SetTrapCreator = 0x081E258C;
// void CNWSPlaceable::SetTrapFaction(int32_t)
constexpr uintptr_t CNWSPlaceable__SetTrapFaction = 0x081E26C0;
// void CNWSPlaceable::SetTrapped(int32_t)
constexpr uintptr_t CNWSPlaceable__SetTrapped = 0x081E25B0;
// void CNWSPlaceable::SetType(unsigned char)
constexpr uintptr_t CNWSPlaceable__SetType = 0x081E1FE4;
// void CNWSPlaceable::SetUpdateDisplayName(int32_t)
constexpr uintptr_t CNWSPlaceable__SetUpdateDisplayName = 0x081E1F9C;
// void CNWSPlaceable::SetUseable(int32_t)
constexpr uintptr_t CNWSPlaceable__SetUseable = 0x081E2390;
// void CNWSPlaceable::SetWillSave(unsigned char)
constexpr uintptr_t CNWSPlaceable__SetWillSave = 0x081E22DC;

// public CNWSPlayer::CNWSPlayer(uint32_t)
constexpr uintptr_t CNWSPlayer__CNWSPlayerCtor__1 = 0x0805397C;
// public CNWSPlayer::~CNWSPlayer(void)
constexpr uintptr_t CNWSPlayer__CNWSPlayerDtor = 0x08053C9C;
// public int32_t CNWSPlayer::AddArea(uint32_t)
constexpr uintptr_t CNWSPlayer__AddArea = 0x0805E944;
// public void CNWSPlayer::AddDMAbilities(CNWSCreature*)
constexpr uintptr_t CNWSPlayer__AddDMAbilities = 0x08055758;
// public void CNWSPlayer::AllocateAreas(int32_t)
constexpr uintptr_t CNWSPlayer__AllocateAreas = 0x0805E8F0;
// void CNWSPlayer::AsNWSPlayer(void)
constexpr uintptr_t CNWSPlayer__AsNWSPlayer = 0x0805EBA4;
// public int32_t CNWSPlayer::BackupServerCharacter(const CExoString&)
constexpr uintptr_t CNWSPlayer__BackupServerCharacter = 0x08057EF0;
// public void CNWSPlayer::CleanMyTURDs(void)
constexpr uintptr_t CNWSPlayer__CleanMyTURDs = 0x0805E6C4;
// void CNWSPlayer::ClearPlayerLastUpdateObject(void)
constexpr uintptr_t CNWSPlayer__ClearPlayerLastUpdateObject = 0x0805EA54;
// public void CNWSPlayer::ClearPlayerOnDestroyGame(void)
constexpr uintptr_t CNWSPlayer__ClearPlayerOnDestroyGame = 0x08053E48;
// public CNWSPlayerLastUpdateObject* CNWSPlayer::CreateNewPlayerLastUpdateObject(void)
constexpr uintptr_t CNWSPlayer__CreateNewPlayerLastUpdateObject = 0x0805E9DC;
// public void CNWSPlayer::DropTURD(void)
constexpr uintptr_t CNWSPlayer__DropTURD = 0x08054150;
// public void CNWSPlayer::EatTURD(CNWSPlayerTURD*)
constexpr uintptr_t CNWSPlayer__EatTURD = 0x08054468;
// void CNWSPlayer::GetAlwaysRun(void)
constexpr uintptr_t CNWSPlayer__GetAlwaysRun = 0x0805ED4C;
// void CNWSPlayer::GetArea(int32_t) const
constexpr uintptr_t CNWSPlayer__GetArea = 0x0805ED1C;
// void CNWSPlayer::GetAreaNum(void) const
constexpr uintptr_t CNWSPlayer__GetAreaNum = 0x0805ED10;
// void CNWSPlayer::GetAreaTransitionBMP(void)
constexpr uintptr_t CNWSPlayer__GetAreaTransitionBMP = 0x0805ECC4;
// void CNWSPlayer::GetAreaTransitionName(void)
constexpr uintptr_t CNWSPlayer__GetAreaTransitionName = 0x0805ECD0;
// public int32_t CNWSPlayer::GetCharacterInfoFromIFO(unsigned char&, int32_t*, unsigned char*, uint32_t&)
constexpr uintptr_t CNWSPlayer__GetCharacterInfoFromIFO = 0x08055380;
// void CNWSPlayer::GetCharacterType(void)
constexpr uintptr_t CNWSPlayer__GetCharacterType = 0x0805ED68;
// void CNWSPlayer::GetCharSheetGUIInfo(void)
constexpr uintptr_t CNWSPlayer__GetCharSheetGUIInfo = 0x0805EC90;
// void CNWSPlayer::GetCommunityNameAuthorized(void)
constexpr uintptr_t CNWSPlayer__GetCommunityNameAuthorized = 0x0805EDC8;
// void CNWSPlayer::GetContainerGUIInfo(void)
constexpr uintptr_t CNWSPlayer__GetContainerGUIInfo = 0x0805ECB4;
// void CNWSPlayer::GetCutsceneState(void)
constexpr uintptr_t CNWSPlayer__GetCutsceneState = 0x0805EE78;
// void CNWSPlayer::GetFileName(void)
constexpr uintptr_t CNWSPlayer__GetFileName = 0x0805ED94;
// void CNWSPlayer::GetFloatyEffects(void)
constexpr uintptr_t CNWSPlayer__GetFloatyEffects = 0x0805ECF4;
// void CNWSPlayer::GetFromSaveGame(void)
constexpr uintptr_t CNWSPlayer__GetFromSaveGame = 0x0805EC24;
// void CNWSPlayer::GetFromTURD(void)
constexpr uintptr_t CNWSPlayer__GetFromTURD = 0x0805EC5C;
// public CNWSObject* CNWSPlayer::GetGameObject(void)
constexpr uintptr_t CNWSPlayer__GetGameObject = 0x0805E8B8;
// void CNWSPlayer::GetIFOCharacterIndex(void)
constexpr uintptr_t CNWSPlayer__GetIFOCharacterIndex = 0x0805EDD8;
// void CNWSPlayer::GetInventoryGUIInfo(void)
constexpr uintptr_t CNWSPlayer__GetInventoryGUIInfo = 0x0805EC9C;
// public int32_t CNWSPlayer::GetIsAllowedToSave(void)
constexpr uintptr_t CNWSPlayer__GetIsAllowedToSave = 0x0805E768;
// void CNWSPlayer::GetIsPrimaryPlayer(void)
constexpr uintptr_t CNWSPlayer__GetIsPrimaryPlayer = 0x0805EC08;
// void CNWSPlayer::GetJournalQuestInfo(void)
constexpr uintptr_t CNWSPlayer__GetJournalQuestInfo = 0x0805EC78;
// void CNWSPlayer::GetLastObjectControlled(void)
constexpr uintptr_t CNWSPlayer__GetLastObjectControlled = 0x0805EBC8;
// void CNWSPlayer::GetLastUpdatedTime(void)
constexpr uintptr_t CNWSPlayer__GetLastUpdatedTime = 0x0805EBE4;
// public CLastUpdateObject* CNWSPlayer::GetLastUpdateObject(uint32_t)
constexpr uintptr_t CNWSPlayer__GetLastUpdateObject = 0x0805E710;
// void CNWSPlayer::GetLoginState(void)
constexpr uintptr_t CNWSPlayer__GetLoginState = 0x0805EBAC;
// void CNWSPlayer::GetModuleInfoSucceeded(void)
constexpr uintptr_t CNWSPlayer__GetModuleInfoSucceeded = 0x0805EE10;
// void CNWSPlayer::GetOtherInventoryGUIInfo(void)
constexpr uintptr_t CNWSPlayer__GetOtherInventoryGUIInfo = 0x0805ECA8;
// void CNWSPlayer::GetPCObject(void)
constexpr uintptr_t CNWSPlayer__GetPCObject = 0x0805EE30;
// void CNWSPlayer::GetPlayerLastUpdateObject(void)
constexpr uintptr_t CNWSPlayer__GetPlayerLastUpdateObject = 0x0805EE3C;
// void CNWSPlayer::GetPlayerListIndex(void)
constexpr uintptr_t CNWSPlayer__GetPlayerListIndex = 0x0805EC40;
// public CExoString CNWSPlayer::GetPlayerName(void)
constexpr uintptr_t CNWSPlayer__GetPlayerName = 0x0805E980;
// void CNWSPlayer::GetPlayModuleListingCharacters(void)
constexpr uintptr_t CNWSPlayer__GetPlayModuleListingCharacters = 0x0805EE58;
// void CNWSPlayer::GetStoreGUIInfo(void)
constexpr uintptr_t CNWSPlayer__GetStoreGUIInfo = 0x0805EC84;
// public int32_t CNWSPlayer::HasExpansionPack(unsigned char, int32_t)
constexpr uintptr_t CNWSPlayer__HasExpansionPack = 0x0805EA80;
// public CNWSCreature* CNWSPlayer::LoadCharacterFromIFO(uint32_t, int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CNWSPlayer__LoadCharacterFromIFO = 0x0805489C;
// public uint32_t CNWSPlayer::LoadCreatureData(CResRef, CNWSCreature*)
constexpr uintptr_t CNWSPlayer__LoadCreatureData = 0x08055FEC;
// public uint32_t CNWSPlayer::LoadDMCharacter(void)
constexpr uintptr_t CNWSPlayer__LoadDMCharacter = 0x08055514;
// public uint32_t CNWSPlayer::LoadLocalCharacter(void)
constexpr uintptr_t CNWSPlayer__LoadLocalCharacter = 0x080547E0;
// public uint32_t CNWSPlayer::LoadServerCharacter(CResRef, int32_t)
constexpr uintptr_t CNWSPlayer__LoadServerCharacter = 0x080555F4;
// public void CNWSPlayer::LoadTURDInfoFromIFO(uint32_t)
constexpr uintptr_t CNWSPlayer__LoadTURDInfoFromIFO = 0x0805507C;
// public int32_t CNWSPlayer::PackCreatureIntoMessage(void)
constexpr uintptr_t CNWSPlayer__PackCreatureIntoMessage = 0x0805D910;
// public int32_t CNWSPlayer::PermittedToDisplayCharacterSheet(uint32_t)
constexpr uintptr_t CNWSPlayer__PermittedToDisplayCharacterSheet = 0x0805E1F4;
// public void CNWSPlayer::RestoreCameraSettings(void)
constexpr uintptr_t CNWSPlayer__RestoreCameraSettings = 0x0805EB14;
// public int32_t CNWSPlayer::SaveServerCharacter(int32_t)
constexpr uintptr_t CNWSPlayer__SaveServerCharacter = 0x080569D4;
// void CNWSPlayer::SetAlwaysRun(int32_t)
constexpr uintptr_t CNWSPlayer__SetAlwaysRun = 0x0805ED3C;
// public void CNWSPlayer::SetAreaTransitionBMP(int32_t, CExoString)
constexpr uintptr_t CNWSPlayer__SetAreaTransitionBMP = 0x0805E794;
// void CNWSPlayer::SetCharacterType(unsigned char)
constexpr uintptr_t CNWSPlayer__SetCharacterType = 0x0805ED58;
// void CNWSPlayer::SetCommunityNameAuthorized(int32_t)
constexpr uintptr_t CNWSPlayer__SetCommunityNameAuthorized = 0x0805EDB4;
// void CNWSPlayer::SetCutsceneState(int32_t)
constexpr uintptr_t CNWSPlayer__SetCutsceneState = 0x0805EE64;
// public void CNWSPlayer::SetFileName(CResRef)
constexpr uintptr_t CNWSPlayer__SetFileName = 0x0805ED74;
// void CNWSPlayer::SetFloatyEffects(int32_t)
constexpr uintptr_t CNWSPlayer__SetFloatyEffects = 0x0805ED00;
// void CNWSPlayer::SetFromSaveGame(int32_t)
constexpr uintptr_t CNWSPlayer__SetFromSaveGame = 0x0805EC30;
// void CNWSPlayer::SetFromTURD(int32_t)
constexpr uintptr_t CNWSPlayer__SetFromTURD = 0x0805EC68;
// public void CNWSPlayer::SetGameObject(CNWSObject*)
constexpr uintptr_t CNWSPlayer__SetGameObject = 0x0805DF90;
// void CNWSPlayer::SetIFOCharacterIndex(uint32_t)
constexpr uintptr_t CNWSPlayer__SetIFOCharacterIndex = 0x0805EDE8;
// void CNWSPlayer::SetIsPrimaryPlayer(int32_t)
constexpr uintptr_t CNWSPlayer__SetIsPrimaryPlayer = 0x0805EC14;
// void CNWSPlayer::SetLastObjectControlled(uint32_t)
constexpr uintptr_t CNWSPlayer__SetLastObjectControlled = 0x0805EBD4;
// void CNWSPlayer::SetLastUpdatedTime(uint64_t)
constexpr uintptr_t CNWSPlayer__SetLastUpdatedTime = 0x0805EBF4;
// void CNWSPlayer::SetLoginState(unsigned char)
constexpr uintptr_t CNWSPlayer__SetLoginState = 0x0805EBB8;
// void CNWSPlayer::SetModuleInfoSucceeded(int32_t)
constexpr uintptr_t CNWSPlayer__SetModuleInfoSucceeded = 0x0805EDFC;
// void CNWSPlayer::SetPCObject(uint32_t)
constexpr uintptr_t CNWSPlayer__SetPCObject = 0x0805EE20;
// void CNWSPlayer::SetPlayerListIndex(uint32_t)
constexpr uintptr_t CNWSPlayer__SetPlayerListIndex = 0x0805EC4C;
// void CNWSPlayer::SetPlayModuleListingCharacters(int32_t)
constexpr uintptr_t CNWSPlayer__SetPlayModuleListingCharacters = 0x0805EE48;
// public void CNWSPlayer::StoreCameraSettings(void)
constexpr uintptr_t CNWSPlayer__StoreCameraSettings = 0x0805EAE8;
// public void CNWSPlayer::StripAllInvalidItemPropertiesInInventory(CNWSCreature*)
constexpr uintptr_t CNWSPlayer__StripAllInvalidItemPropertiesInInventory = 0x0805E278;
// public void CNWSPlayer::StripAllInvalidItemPropertiesOnItem(CNWSItem*)
constexpr uintptr_t CNWSPlayer__StripAllInvalidItemPropertiesOnItem = 0x0805E338;
// public uint32_t CNWSPlayer::ValidateCharacter(int32_t*)
constexpr uintptr_t CNWSPlayer__ValidateCharacter = 0x080580BC;
// void CNWSPlayer::ValidateCharacter_SetNormalBonusFlags(uint16_t, int32_t&, int32_t&, unsigned char)
constexpr uintptr_t CNWSPlayer__ValidateCharacter_SetNormalBonusFlags = 0x0805E800;

// public uint32_t CNWSPlayerCharSheetGUI::ComputeCharacterSheetUpdateRequired(CNWSPlayer*)
constexpr uintptr_t CNWSPlayerCharSheetGUI__ComputeCharacterSheetUpdateRequired = 0x08053054;
// public void CNWSPlayerCharSheetGUI::SetCreatureDisplayed(uint32_t)
constexpr uintptr_t CNWSPlayerCharSheetGUI__SetCreatureDisplayed = 0x0805E4F8;

// CNWSPlayerContainerGUI::CNWSPlayerContainerGUI(void)
constexpr uintptr_t CNWSPlayerContainerGUI__CNWSPlayerContainerGUICtor = 0x0805E6A8;
// public void CNWSPlayerContainerGUI::SetNextPage(CNWSPlayer*)
constexpr uintptr_t CNWSPlayerContainerGUI__SetNextPage = 0x0805385C;
// public void CNWSPlayerContainerGUI::SetOpen(CNWSPlayer*, uint32_t, int32_t)
constexpr uintptr_t CNWSPlayerContainerGUI__SetOpen = 0x08053928;
// public void CNWSPlayerContainerGUI::SetPreviousPage(CNWSPlayer*)
constexpr uintptr_t CNWSPlayerContainerGUI__SetPreviousPage = 0x080538C8;

// public CNWSPlayerInventoryGUI::CNWSPlayerInventoryGUI(void)
constexpr uintptr_t CNWSPlayerInventoryGUI__CNWSPlayerInventoryGUICtor = 0x0805376C;
// public CNWSPlayerInventoryGUI::~CNWSPlayerInventoryGUI(void)
constexpr uintptr_t CNWSPlayerInventoryGUI__CNWSPlayerInventoryGUIDtor = 0x0805E568;
// public void CNWSPlayerInventoryGUI::SetOpen(int32_t)
constexpr uintptr_t CNWSPlayerInventoryGUI__SetOpen = 0x08053804;
// public void CNWSPlayerInventoryGUI::SetOwner(uint32_t)
constexpr uintptr_t CNWSPlayerInventoryGUI__SetOwner = 0x0805E5B8;
// public void CNWSPlayerInventoryGUI::SetPanel(CNWSPlayer*, unsigned char)
constexpr uintptr_t CNWSPlayerInventoryGUI__SetPanel = 0x0805E62C;

// public CNWSPlayerLastUpdateObject::CNWSPlayerLastUpdateObject(void)
constexpr uintptr_t CNWSPlayerLastUpdateObject__CNWSPlayerLastUpdateObjectCtor = 0x081E30D8;
// public CNWSPlayerLastUpdateObject::~CNWSPlayerLastUpdateObject(void)
constexpr uintptr_t CNWSPlayerLastUpdateObject__CNWSPlayerLastUpdateObjectDtor = 0x081E36C8;
// public void CNWSPlayerLastUpdateObject::AddKnownSpell(unsigned char, unsigned char, uint32_t)
constexpr uintptr_t CNWSPlayerLastUpdateObject__AddKnownSpell = 0x081E43F4;
// public void CNWSPlayerLastUpdateObject::ClearActionQueue(void)
constexpr uintptr_t CNWSPlayerLastUpdateObject__ClearActionQueue = 0x081E4768;
// public void CNWSPlayerLastUpdateObject::ClearAutoMapData(void)
constexpr uintptr_t CNWSPlayerLastUpdateObject__ClearAutoMapData = 0x081E47D8;
// void CNWSPlayerLastUpdateObject::ClearEffectIcons(void)
constexpr uintptr_t CNWSPlayerLastUpdateObject__ClearEffectIcons = 0x081E4364;
// public void CNWSPlayerLastUpdateObject::ClearKnownSpells(void)
constexpr uintptr_t CNWSPlayerLastUpdateObject__ClearKnownSpells = 0x081E4314;
// public void CNWSPlayerLastUpdateObject::ClearKnownSpellUsesLeft(void)
constexpr uintptr_t CNWSPlayerLastUpdateObject__ClearKnownSpellUsesLeft = 0x081E4670;
// public void CNWSPlayerLastUpdateObject::ClearMemorizedSpells(void)
constexpr uintptr_t CNWSPlayerLastUpdateObject__ClearMemorizedSpells = 0x081E3928;
// public void CNWSPlayerLastUpdateObject::ClearSpellAddDeleteLists(void)
constexpr uintptr_t CNWSPlayerLastUpdateObject__ClearSpellAddDeleteLists = 0x081E3BD8;
// public void CNWSPlayerLastUpdateObject::ClearVisibilityList(void)
constexpr uintptr_t CNWSPlayerLastUpdateObject__ClearVisibilityList = 0x081E4710;
// public int32_t CNWSPlayerLastUpdateObject::GetIsDomainSpell(unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSPlayerLastUpdateObject__GetIsDomainSpell = 0x081E4548;
// public uint32_t CNWSPlayerLastUpdateObject::GetKnownSpell(unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSPlayerLastUpdateObject__GetKnownSpell = 0x081E4430;
// public unsigned char CNWSPlayerLastUpdateObject::GetKnownSpellUsesLeft(unsigned char, unsigned char)
constexpr uintptr_t CNWSPlayerLastUpdateObject__GetKnownSpellUsesLeft = 0x081E46AC;
// public uint32_t CNWSPlayerLastUpdateObject::GetMemorizedSpell(unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSPlayerLastUpdateObject__GetMemorizedSpell = 0x081E4480;
// public unsigned char CNWSPlayerLastUpdateObject::GetMemorizedSpellMetaType(unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSPlayerLastUpdateObject__GetMemorizedSpellMetaType = 0x081E45AC;
// public int32_t CNWSPlayerLastUpdateObject::GetMemorizedSpellReadied(unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSPlayerLastUpdateObject__GetMemorizedSpellReadied = 0x081E44E4;
// public int32_t CNWSPlayerLastUpdateObject::InitializeAutoMapData(void)
constexpr uintptr_t CNWSPlayerLastUpdateObject__InitializeAutoMapData = 0x081E4810;
// public void CNWSPlayerLastUpdateObject::ResetAutoMapData(uint32_t)
constexpr uintptr_t CNWSPlayerLastUpdateObject__ResetAutoMapData = 0x081E485C;
// public void CNWSPlayerLastUpdateObject::SetKnownSpellUsesLeft(unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSPlayerLastUpdateObject__SetKnownSpellUsesLeft = 0x081E46E0;
// public void CNWSPlayerLastUpdateObject::SetMemorizedSpellReadied(unsigned char, unsigned char, unsigned char, int32_t)
constexpr uintptr_t CNWSPlayerLastUpdateObject__SetMemorizedSpellReadied = 0x081E4610;
// public void CNWSPlayerLastUpdateObject::SetMemorizedSpellSlot(unsigned char, unsigned char, unsigned char, uint32_t, int32_t, unsigned char)
constexpr uintptr_t CNWSPlayerLastUpdateObject__SetMemorizedSpellSlot = 0x081E39D8;
// public void CNWSPlayerLastUpdateObject::SetNumberMemorizedSpellSlots(unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSPlayerLastUpdateObject__SetNumberMemorizedSpellSlots = 0x081E3AD8;

// public CNWSPlayerLUOInventory::CNWSPlayerLUOInventory(void)
constexpr uintptr_t CNWSPlayerLUOInventory__CNWSPlayerLUOInventoryCtor = 0x081E29D8;
// public CNWSPlayerLUOInventory::~CNWSPlayerLUOInventory(void)
constexpr uintptr_t CNWSPlayerLUOInventory__CNWSPlayerLUOInventoryDtor = 0x081E3D38;
// public void CNWSPlayerLUOInventory::ClearBarter(void)
constexpr uintptr_t CNWSPlayerLUOInventory__ClearBarter = 0x081E3E90;
// public void CNWSPlayerLUOInventory::ClearContainer(void)
constexpr uintptr_t CNWSPlayerLUOInventory__ClearContainer = 0x081E3E00;
// public void CNWSPlayerLUOInventory::ClearRepository(void)
constexpr uintptr_t CNWSPlayerLUOInventory__ClearRepository = 0x081E3DC4;
// public void CNWSPlayerLUOInventory::ClearSlots(void)
constexpr uintptr_t CNWSPlayerLUOInventory__ClearSlots = 0x081E3ECC;
// public void CNWSPlayerLUOInventory::ClearStore(void)
constexpr uintptr_t CNWSPlayerLUOInventory__ClearStore = 0x081E3E44;
// public void CNWSPlayerLUOInventory::ItemListAddHead(uint32_t, unsigned char, unsigned char, unsigned char, uint32_t, uint32_t)
constexpr uintptr_t CNWSPlayerLUOInventory__ItemListAddHead = 0x081E41CC;
// public CNWSItem* CNWSPlayerLUOInventory::ItemListGetItem(CExoLinkedListNode*, unsigned char)
constexpr uintptr_t CNWSPlayerLUOInventory__ItemListGetItem = 0x081E2AD4;
// public uint32_t CNWSPlayerLUOInventory::ItemListGetItemObjectID(CExoLinkedListNode*, unsigned char)
constexpr uintptr_t CNWSPlayerLUOInventory__ItemListGetItemObjectID = 0x081E3EF8;
// void CNWSPlayerLUOInventory::ItemListGetNext(CExoLinkedListNode*, unsigned char)
constexpr uintptr_t CNWSPlayerLUOInventory__ItemListGetNext = 0x081E408C;
// public uint32_t CNWSPlayerLUOInventory::ItemListGetNumber(unsigned char)
constexpr uintptr_t CNWSPlayerLUOInventory__ItemListGetNumber = 0x081E416C;
// public void CNWSPlayerLUOInventory::ItemListGetPrev(CExoLinkedListNode*, unsigned char)
constexpr uintptr_t CNWSPlayerLUOInventory__ItemListGetPrev = 0x081E40FC;
// public CNWSPlayerLUOInventoryItem* CNWSPlayerLUOInventory::ItemListGetUpdateItem(CExoLinkedListNode*, unsigned char)
constexpr uintptr_t CNWSPlayerLUOInventory__ItemListGetUpdateItem = 0x081E3F6C;
// public void CNWSPlayerLUOInventory::ItemListRemove(CExoLinkedListNode*, unsigned char)
constexpr uintptr_t CNWSPlayerLUOInventory__ItemListRemove = 0x081E2B7C;
// public void CNWSPlayerLUOInventory::ItemListSetEnd(CExoLinkedListNode*, unsigned char)
constexpr uintptr_t CNWSPlayerLUOInventory__ItemListSetEnd = 0x081E4030;
// void CNWSPlayerLUOInventory::ItemListSetStart(CExoLinkedListNode*, unsigned char)
constexpr uintptr_t CNWSPlayerLUOInventory__ItemListSetStart = 0x081E3FD4;

// CNWSPlayerStoreGUI::CNWSPlayerStoreGUI(void)
constexpr uintptr_t CNWSPlayerStoreGUI__CNWSPlayerStoreGUICtor = 0x0805E4C4;
// public void CNWSPlayerStoreGUI::CloseStore(CNWSPlayer*, int32_t)
constexpr uintptr_t CNWSPlayerStoreGUI__CloseStore = 0x08052F60;
// public void CNWSPlayerStoreGUI::OpenStore(CNWSPlayer*, uint32_t, char, char)
constexpr uintptr_t CNWSPlayerStoreGUI__OpenStore = 0x08052DE4;

// public CNWSPlayerTURD::CNWSPlayerTURD(uint32_t)
constexpr uintptr_t CNWSPlayerTURD__CNWSPlayerTURDCtor__1 = 0x0805F628;
// public CNWSPlayerTURD::~CNWSPlayerTURD(void)
constexpr uintptr_t CNWSPlayerTURD__CNWSPlayerTURDDtor = 0x0805F734;
// public void CNWSPlayerTURD::AddToArea(CNWSArea*, int32_t)
constexpr uintptr_t CNWSPlayerTURD__AddToArea = 0x08060924;
// void CNWSPlayerTURD::AIUpdate(void)
constexpr uintptr_t CNWSPlayerTURD__AIUpdate = 0x08060914;
// void CNWSPlayerTURD::AsNWSPlayerTURD(void)
constexpr uintptr_t CNWSPlayerTURD__AsNWSPlayerTURD = 0x08060CE4;
// void CNWSPlayerTURD::ClearAutomapData(void)
constexpr uintptr_t CNWSPlayerTURD__ClearAutomapData = 0x08060A60;
// public void CNWSPlayerTURD::CopyAutomapData(int32_t, CExoArrayListTemplatedunsignedlong*, unsigned char**)
constexpr uintptr_t CNWSPlayerTURD__CopyAutomapData = 0x080605E4;
// public void CNWSPlayerTURD::CopyEffectList(CExoArrayListTemplatedCGameEffectPtr*)
constexpr uintptr_t CNWSPlayerTURD__CopyEffectList = 0x080609D4;
// public void CNWSPlayerTURD::EventHandler(uint32_t, uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CNWSPlayerTURD__EventHandler = 0x0806091C;
// void CNWSPlayerTURD::GetAutoMapAreasList(void)
constexpr uintptr_t CNWSPlayerTURD__GetAutoMapAreasList = 0x08060E18;
// void CNWSPlayerTURD::GetAutoMapTileData(void)
constexpr uintptr_t CNWSPlayerTURD__GetAutoMapTileData = 0x08060E28;
// void CNWSPlayerTURD::GetCalendarDay(void)
constexpr uintptr_t CNWSPlayerTURD__GetCalendarDay = 0x08060DA0;
// void CNWSPlayerTURD::GetCalendarTimeOfDay(void)
constexpr uintptr_t CNWSPlayerTURD__GetCalendarTimeOfDay = 0x08060DC4;
// public CExoString CNWSPlayerTURD::GetCommunityName(void)
constexpr uintptr_t CNWSPlayerTURD__GetCommunityName = 0x08060CEC;
// void CNWSPlayerTURD::GetFirstName(void)
constexpr uintptr_t CNWSPlayerTURD__GetFirstName = 0x08060D2C;
// public CExoLocString& CNWSPlayerTURD::GetLastName(void)
constexpr uintptr_t CNWSPlayerTURD__GetLastName = 0x08060D54;
// void CNWSPlayerTURD::GetNumAutoMapAreas(void)
constexpr uintptr_t CNWSPlayerTURD__GetNumAutoMapAreas = 0x08060E08;
// void CNWSPlayerTURD::GetPersonalReputation(void)
constexpr uintptr_t CNWSPlayerTURD__GetPersonalReputation = 0x08060DF8;
// void CNWSPlayerTURD::GetPlayerID(void)
constexpr uintptr_t CNWSPlayerTURD__GetPlayerID = 0x08060D7C;
// void CNWSPlayerTURD::GetReputation(void)
constexpr uintptr_t CNWSPlayerTURD__GetReputation = 0x08060DE8;
// private void CNWSPlayerTURD::LoadAutoMapData(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSPlayerTURD__LoadAutoMapData = 0x080606F8;
// public int32_t CNWSPlayerTURD::LoadTURD(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSPlayerTURD__LoadTURD = 0x0805F858;
// public void CNWSPlayerTURD::RemoveFromArea(void)
constexpr uintptr_t CNWSPlayerTURD__RemoveFromArea = 0x08060990;
// void CNWSPlayerTURD::SaveAutoMapData(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSPlayerTURD__SaveAutoMapData = 0x08060AF8;
// public void CNWSPlayerTURD::SaveTURD(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSPlayerTURD__SaveTURD = 0x0805FF5C;
// void CNWSPlayerTURD::SetCalendarDay(uint32_t)
constexpr uintptr_t CNWSPlayerTURD__SetCalendarDay = 0x08060DB0;
// void CNWSPlayerTURD::SetCalendarTimeOfDay(uint32_t)
constexpr uintptr_t CNWSPlayerTURD__SetCalendarTimeOfDay = 0x08060DD4;
// void CNWSPlayerTURD::SetCommunityName(const CExoString&)
constexpr uintptr_t CNWSPlayerTURD__SetCommunityName = 0x08060D14;
// void CNWSPlayerTURD::SetFirstName(const CExoLocString&)
constexpr uintptr_t CNWSPlayerTURD__SetFirstName = 0x08060D3C;
// void CNWSPlayerTURD::SetLastName(const CExoLocString&)
constexpr uintptr_t CNWSPlayerTURD__SetLastName = 0x08060D64;
// public void CNWSPlayerTURD::SetPersonalReputation(CExoArrayListTemplatedCNWSPersonalReputation*)
constexpr uintptr_t CNWSPlayerTURD__SetPersonalReputation = 0x080604F0;
// void CNWSPlayerTURD::SetPlayerID(uint32_t)
constexpr uintptr_t CNWSPlayerTURD__SetPlayerID = 0x08060D8C;
// public void CNWSPlayerTURD::SetReputation(CExoArrayListTemplatedint*)
constexpr uintptr_t CNWSPlayerTURD__SetReputation = 0x08060430;

// public CNWSRules::CNWSRules(void)
constexpr uintptr_t CNWSRules__CNWSRulesCtor = 0x081E4B5C;
// public CNWSRules::~CNWSRules(void)
constexpr uintptr_t CNWSRules__CNWSRulesDtor = 0x081E4B80;

// public CNWSScriptVarTable::~CNWSScriptVarTable(void)
constexpr uintptr_t CNWSScriptVarTable__CNWSScriptVarTableDtor = 0x081F426C;
// void CNWSScriptVarTable::DeleteIndex(CExoString&, uint32_t)
constexpr uintptr_t CNWSScriptVarTable__DeleteIndex = 0x081F3F5C;
// public void CNWSScriptVarTable::DestroyFloat(CExoString&)
constexpr uintptr_t CNWSScriptVarTable__DestroyFloat = 0x081F4320;
// public void CNWSScriptVarTable::DestroyInt(CExoString&)
constexpr uintptr_t CNWSScriptVarTable__DestroyInt = 0x081F362C;
// public void CNWSScriptVarTable::DestroyLocation(CExoString&)
constexpr uintptr_t CNWSScriptVarTable__DestroyLocation = 0x081F4458;
// public void CNWSScriptVarTable::DestroyObject(CExoString&)
constexpr uintptr_t CNWSScriptVarTable__DestroyObject = 0x081F43F0;
// public void CNWSScriptVarTable::DestroyString(CExoString&)
constexpr uintptr_t CNWSScriptVarTable__DestroyString = 0x081F4388;
// public float CNWSScriptVarTable::GetFloat(CExoString&)
constexpr uintptr_t CNWSScriptVarTable__GetFloat = 0x081F3FF0;
// public int32_t CNWSScriptVarTable::GetInt(CExoString&)
constexpr uintptr_t CNWSScriptVarTable__GetInt = 0x081F3FC8;
// public CScriptLocation CNWSScriptVarTable::GetLocation(CExoString&)
constexpr uintptr_t CNWSScriptVarTable__GetLocation = 0x081F40E8;
// public uint32_t CNWSScriptVarTable::GetObject(CExoString&)
constexpr uintptr_t CNWSScriptVarTable__GetObject = 0x081F40BC;
// public CExoString CNWSScriptVarTable::GetString(CExoString&)
constexpr uintptr_t CNWSScriptVarTable__GetString = 0x081F4020;
// public void CNWSScriptVarTable::LoadVarTable(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSScriptVarTable__LoadVarTable = 0x081F3740;
// private CNWSScriptVar* CNWSScriptVarTable::MatchIndex(CExoString&, uint32_t, int32_t)
constexpr uintptr_t CNWSScriptVarTable__MatchIndex = 0x081F32B4;
// public void CNWSScriptVarTable::SaveVarTable(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSScriptVarTable__SaveVarTable = 0x081F3B3C;
// public void CNWSScriptVarTable::SetFloat(CExoString&, float)
constexpr uintptr_t CNWSScriptVarTable__SetFloat = 0x081F4190;
// public void CNWSScriptVarTable::SetInt(CExoString&, int32_t, int32_t)
constexpr uintptr_t CNWSScriptVarTable__SetInt = 0x081F3454;
// public void CNWSScriptVarTable::SetLocation(CExoString&, CScriptLocation)
constexpr uintptr_t CNWSScriptVarTable__SetLocation = 0x081F4204;
// public void CNWSScriptVarTable::SetObject(CExoString&, uint32_t)
constexpr uintptr_t CNWSScriptVarTable__SetObject = 0x081F41E0;
// public void CNWSScriptVarTable::SetString(CExoString&, CExoString&)
constexpr uintptr_t CNWSScriptVarTable__SetString = 0x081F41B4;

// public CNWSSoundObject::CNWSSoundObject(uint32_t)
constexpr uintptr_t CNWSSoundObject__CNWSSoundObjectCtor__1 = 0x081E88F4;
// public CNWSSoundObject::~CNWSSoundObject(void)
constexpr uintptr_t CNWSSoundObject__CNWSSoundObjectDtor = 0x081E9948;
// public void CNWSSoundObject::AddToArea(CNWSArea*, int32_t)
constexpr uintptr_t CNWSSoundObject__AddToArea = 0x081E99A4;
// void CNWSSoundObject::AIUpdate(void)
constexpr uintptr_t CNWSSoundObject__AIUpdate = 0x081E9994;
// void CNWSSoundObject::AsNWSSoundObject(void)
constexpr uintptr_t CNWSSoundObject__AsNWSSoundObject = 0x081E9B28;
// public void CNWSSoundObject::ChangePosition(Vector)
constexpr uintptr_t CNWSSoundObject__ChangePosition = 0x081E97B4;
// public void CNWSSoundObject::ChangeVolume(int32_t)
constexpr uintptr_t CNWSSoundObject__ChangeVolume = 0x081E96BC;
// void CNWSSoundObject::EventHandler(uint32_t, uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CNWSSoundObject__EventHandler = 0x081E999C;
// void CNWSSoundObject::GetContinuous(void)
constexpr uintptr_t CNWSSoundObject__GetContinuous = 0x081E9D68;
// void CNWSSoundObject::GetHours(void)
constexpr uintptr_t CNWSSoundObject__GetHours = 0x081E9D08;
// void CNWSSoundObject::GetInterval(void)
constexpr uintptr_t CNWSSoundObject__GetInterval = 0x081E9D28;
// void CNWSSoundObject::GetIntervalVariance(void)
constexpr uintptr_t CNWSSoundObject__GetIntervalVariance = 0x081E9D38;
// void CNWSSoundObject::GetIsActive(void)
constexpr uintptr_t CNWSSoundObject__GetIsActive = 0x081E9C98;
// void CNWSSoundObject::GetLooping(void)
constexpr uintptr_t CNWSSoundObject__GetLooping = 0x081E9CB8;
// void CNWSSoundObject::GetMaxDistance(void)
constexpr uintptr_t CNWSSoundObject__GetMaxDistance = 0x081E9D58;
// void CNWSSoundObject::GetMinDistance(void)
constexpr uintptr_t CNWSSoundObject__GetMinDistance = 0x081E9D48;
// void CNWSSoundObject::GetPeopleInSoundRange(void)
constexpr uintptr_t CNWSSoundObject__GetPeopleInSoundRange = 0x081E9A54;
// void CNWSSoundObject::GetPitchVariation(void)
constexpr uintptr_t CNWSSoundObject__GetPitchVariation = 0x081E9CF8;
// void CNWSSoundObject::GetPositional(void)
constexpr uintptr_t CNWSSoundObject__GetPositional = 0x081E9CA8;
// void CNWSSoundObject::GetPriority(void)
constexpr uintptr_t CNWSSoundObject__GetPriority = 0x081E9D18;
// void CNWSSoundObject::GetRandom(void)
constexpr uintptr_t CNWSSoundObject__GetRandom = 0x081E9D78;
// void CNWSSoundObject::GetRandomPosition(void)
constexpr uintptr_t CNWSSoundObject__GetRandomPosition = 0x081E9DB0;
// void CNWSSoundObject::GetRandomXRange(void)
constexpr uintptr_t CNWSSoundObject__GetRandomXRange = 0x081E9DC0;
// void CNWSSoundObject::GetRandomYRange(void)
constexpr uintptr_t CNWSSoundObject__GetRandomYRange = 0x081E9DD0;
// void CNWSSoundObject::GetSoundList(void)
constexpr uintptr_t CNWSSoundObject__GetSoundList = 0x081E9D88;
// void CNWSSoundObject::GetTimeofDay(void)
constexpr uintptr_t CNWSSoundObject__GetTimeofDay = 0x081E9CE8;
// void CNWSSoundObject::GetVolume(void)
constexpr uintptr_t CNWSSoundObject__GetVolume = 0x081E9CC8;
// void CNWSSoundObject::GetVolumeVariation(void)
constexpr uintptr_t CNWSSoundObject__GetVolumeVariation = 0x081E9CD8;
// public int32_t CNWSSoundObject::Load(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSSoundObject__Load = 0x081E8A0C;
// public void CNWSSoundObject::PackIntoMessage(CNWSMessage*)
constexpr uintptr_t CNWSSoundObject__PackIntoMessage = 0x081E929C;
// public void CNWSSoundObject::Play(void)
constexpr uintptr_t CNWSSoundObject__Play = 0x081E9524;
// void CNWSSoundObject::RemoveFromArea(void)
constexpr uintptr_t CNWSSoundObject__RemoveFromArea = 0x081E9A10;
// public void CNWSSoundObject::Save(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSSoundObject__Save = 0x081E8FD4;
// void CNWSSoundObject::SetContinuous(int32_t)
constexpr uintptr_t CNWSSoundObject__SetContinuous = 0x081E9C34;
// void CNWSSoundObject::SetHours(uint32_t)
constexpr uintptr_t CNWSSoundObject__SetHours = 0x081E9BBC;
// void CNWSSoundObject::SetInterval(uint32_t)
constexpr uintptr_t CNWSSoundObject__SetInterval = 0x081E9BE4;
// void CNWSSoundObject::SetIntervalVariance(uint32_t)
constexpr uintptr_t CNWSSoundObject__SetIntervalVariance = 0x081E9BF8;
// void CNWSSoundObject::SetIsActive(int32_t)
constexpr uintptr_t CNWSSoundObject__SetIsActive = 0x081E9B30;
// void CNWSSoundObject::SetLooping(int32_t)
constexpr uintptr_t CNWSSoundObject__SetLooping = 0x081E9B58;
// void CNWSSoundObject::SetMaxDistance(float)
constexpr uintptr_t CNWSSoundObject__SetMaxDistance = 0x081E9C20;
// void CNWSSoundObject::SetMinDistance(float)
constexpr uintptr_t CNWSSoundObject__SetMinDistance = 0x081E9C0C;
// void CNWSSoundObject::SetPitchVariation(float)
constexpr uintptr_t CNWSSoundObject__SetPitchVariation = 0x081E9BA8;
// void CNWSSoundObject::SetPositional(int32_t)
constexpr uintptr_t CNWSSoundObject__SetPositional = 0x081E9B44;
// void CNWSSoundObject::SetPriority(unsigned char)
constexpr uintptr_t CNWSSoundObject__SetPriority = 0x081E9BD0;
// void CNWSSoundObject::SetRandom(int32_t)
constexpr uintptr_t CNWSSoundObject__SetRandom = 0x081E9C48;
// void CNWSSoundObject::SetRandomPosition(int32_t)
constexpr uintptr_t CNWSSoundObject__SetRandomPosition = 0x081E9C5C;
// void CNWSSoundObject::SetRandomXRange(float)
constexpr uintptr_t CNWSSoundObject__SetRandomXRange = 0x081E9C70;
// void CNWSSoundObject::SetRandomYRange(float)
constexpr uintptr_t CNWSSoundObject__SetRandomYRange = 0x081E9C84;
// void CNWSSoundObject::SetTimeofDay(CNWSSoundObjectTimeOfDay)
constexpr uintptr_t CNWSSoundObject__SetTimeofDay = 0x081E9B94;
// void CNWSSoundObject::SetVolume(int32_t)
constexpr uintptr_t CNWSSoundObject__SetVolume = 0x081E9B6C;
// void CNWSSoundObject::SetVolumeVariation(int32_t)
constexpr uintptr_t CNWSSoundObject__SetVolumeVariation = 0x081E9B80;
// public void CNWSSoundObject::Stop(void)
constexpr uintptr_t CNWSSoundObject__Stop = 0x081E95F0;

// public int32_t CNWSSpellScriptData::LoadData(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSSpellScriptData__LoadData = 0x0813758C;
// public int32_t CNWSSpellScriptData::SaveData(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSSpellScriptData__SaveData = 0x0813D098;

// public CNWSStats_Spell::CNWSStats_Spell(void)
constexpr uintptr_t CNWSStats_Spell__CNWSStats_SpellCtor = 0x08163BE4;

// public CNWSStats_SpellLikeAbility::CNWSStats_SpellLikeAbility(void)
constexpr uintptr_t CNWSStats_SpellLikeAbility__CNWSStats_SpellLikeAbilityCtor = 0x08163C04;

// public CNWSStore::CNWSStore(uint32_t)
constexpr uintptr_t CNWSStore__CNWSStoreCtor__1 = 0x08083C0C;
// public CNWSStore::~CNWSStore(void)
constexpr uintptr_t CNWSStore__CNWSStoreDtor = 0x08083E88;
// public int32_t CNWSStore::AcquireItem(CNWSItem*, int32_t, unsigned char, unsigned char)
constexpr uintptr_t CNWSStore__AcquireItem = 0x08085404;
// public void CNWSStore::AddCustomer(CNWSPlayer*, char, char)
constexpr uintptr_t CNWSStore__AddCustomer = 0x08085DA0;
// void CNWSStore::AddGold(int32_t)
constexpr uintptr_t CNWSStore__AddGold = 0x08086374;
// protected int32_t CNWSStore::AddItemToInventory(CNWSItem**, unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWSStore__AddItemToInventory = 0x08085690;
// public void CNWSStore::AddToArea(CNWSArea*, float, float, float, int32_t)
constexpr uintptr_t CNWSStore__AddToArea = 0x08085B0C;
// void CNWSStore::AIUpdate(void)
constexpr uintptr_t CNWSStore__AIUpdate = 0x08085BB8;
// public CNWSStore* CNWSStore::AsNWSStore(void)
constexpr uintptr_t CNWSStore__AsNWSStore = 0x08086144;
// public int32_t CNWSStore::CalculateItemBuyPrice(CNWSItem*, uint32_t)
constexpr uintptr_t CNWSStore__CalculateItemBuyPrice = 0x08085BC0;
// public int32_t CNWSStore::CalculateItemSellPrice(CNWSItem*, uint32_t)
constexpr uintptr_t CNWSStore__CalculateItemSellPrice = 0x08085C60;
// public void CNWSStore::EventHandler(uint32_t, uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CNWSStore__EventHandler = 0x080852CC;
// void CNWSStore::GetAppropriateListId(uint32_t)
constexpr uintptr_t CNWSStore__GetAppropriateListId = 0x08085D14;
// void CNWSStore::GetBlackMarket(void)
constexpr uintptr_t CNWSStore__GetBlackMarket = 0x08086218;
// void CNWSStore::GetBlackMarketMarkDown(void)
constexpr uintptr_t CNWSStore__GetBlackMarketMarkDown = 0x0808623C;
// void CNWSStore::GetCustomer(uint32_t)
constexpr uintptr_t CNWSStore__GetCustomer = 0x08085EB4;
// public unsigned char CNWSStore::GetCustomerBuyRate(uint32_t, int32_t)
constexpr uintptr_t CNWSStore__GetCustomerBuyRate = 0x08085F88;
// public int16_t CNWSStore::GetCustomerSellRate(uint32_t)
constexpr uintptr_t CNWSStore__GetCustomerSellRate = 0x08085F0C;
// void CNWSStore::GetGold(void)
constexpr uintptr_t CNWSStore__GetGold = 0x08086328;
// void CNWSStore::GetIdentifyCost(void)
constexpr uintptr_t CNWSStore__GetIdentifyCost = 0x08086390;
// public int32_t CNWSStore::GetIsRestrictedBuyItem(int32_t)
constexpr uintptr_t CNWSStore__GetIsRestrictedBuyItem = 0x08085D40;
// public int32_t CNWSStore::GetItemInInventory(uint32_t)
constexpr uintptr_t CNWSStore__GetItemInInventory__0 = 0x08086018;
// public int32_t CNWSStore::GetItemInInventory(CExoString*)
constexpr uintptr_t CNWSStore__GetItemInInventory__1 = 0x08086080;
// void CNWSStore::GetLastClosed(void)
constexpr uintptr_t CNWSStore__GetLastClosed = 0x080861F4;
// void CNWSStore::GetLastOpened(void)
constexpr uintptr_t CNWSStore__GetLastOpened = 0x080861D0;
// void CNWSStore::GetMarkDown(void)
constexpr uintptr_t CNWSStore__GetMarkDown = 0x08086260;
// void CNWSStore::GetMarkUp(void)
constexpr uintptr_t CNWSStore__GetMarkUp = 0x08086284;
// void CNWSStore::GetMaxBuyPrice(void)
constexpr uintptr_t CNWSStore__GetMaxBuyPrice = 0x080863B4;
// public CExoLocString CNWSStore::GetName(void)
constexpr uintptr_t CNWSStore__GetName = 0x08086300;
// void CNWSStore::GetRepository(unsigned char)
constexpr uintptr_t CNWSStore__GetRepository = 0x08086420;
// void CNWSStore::GetRepositoryArrayIndex(void)
constexpr uintptr_t CNWSStore__GetRepositoryArrayIndex = 0x08086438;
// void CNWSStore::GetRepositoryListNumber(void)
constexpr uintptr_t CNWSStore__GetRepositoryListNumber = 0x0808645C;
// void CNWSStore::GetScriptName(int32_t)
constexpr uintptr_t CNWSStore__GetScriptName = 0x080861B4;
// void CNWSStore::GetWillNotBuyItem(int32_t)
constexpr uintptr_t CNWSStore__GetWillNotBuyItem = 0x080863F8;
// void CNWSStore::GetWillNotBuyListSize(void)
constexpr uintptr_t CNWSStore__GetWillNotBuyListSize = 0x080863D8;
// void CNWSStore::GetWillOnlyBuyItem(int32_t)
constexpr uintptr_t CNWSStore__GetWillOnlyBuyItem = 0x0808640C;
// void CNWSStore::GetWillOnlyBuyListSize(void)
constexpr uintptr_t CNWSStore__GetWillOnlyBuyListSize = 0x080863E8;
// public int32_t CNWSStore::LoadFromTemplate(CResRef, CExoString*)
constexpr uintptr_t CNWSStore__LoadFromTemplate = 0x08084074;
// public int32_t CNWSStore::LoadStore(CResGFF*, CResStruct*, CExoString*)
constexpr uintptr_t CNWSStore__LoadStore = 0x08084230;
// public void CNWSStore::RemoveCustomer(CNWSPlayer*)
constexpr uintptr_t CNWSStore__RemoveCustomer = 0x08085E28;
// void CNWSStore::RemoveFromArea(void)
constexpr uintptr_t CNWSStore__RemoveFromArea = 0x08085B74;
// void CNWSStore::RemoveGold(int32_t)
constexpr uintptr_t CNWSStore__RemoveGold = 0x0808634C;
// public void CNWSStore::RemoveItem(CNWSItem*)
constexpr uintptr_t CNWSStore__RemoveItem = 0x08085CD8;
// protected int32_t CNWSStore::RemoveItemFromInventory(CNWSItem*, unsigned char)
constexpr uintptr_t CNWSStore__RemoveItemFromInventory = 0x080859BC;
// public int32_t CNWSStore::SaveStore(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSStore__SaveStore = 0x08084DB8;
// public int32_t CNWSStore::SellItem(CNWSItem*, CNWSCreature*, unsigned char, unsigned char)
constexpr uintptr_t CNWSStore__SellItem = 0x08085594;
// void CNWSStore::SetBlackMarket(int32_t)
constexpr uintptr_t CNWSStore__SetBlackMarket = 0x08086228;
// void CNWSStore::SetBlackMarketMarkDown(int32_t)
constexpr uintptr_t CNWSStore__SetBlackMarketMarkDown = 0x0808624C;
// void CNWSStore::SetGold(int32_t)
constexpr uintptr_t CNWSStore__SetGold = 0x08086338;
// void CNWSStore::SetIdentifyCost(int32_t)
constexpr uintptr_t CNWSStore__SetIdentifyCost = 0x080863A0;
// void CNWSStore::SetLastClosed(uint32_t)
constexpr uintptr_t CNWSStore__SetLastClosed = 0x08086204;
// void CNWSStore::SetLastOpened(uint32_t)
constexpr uintptr_t CNWSStore__SetLastOpened = 0x080861E0;
// void CNWSStore::SetMarkDown(int32_t)
constexpr uintptr_t CNWSStore__SetMarkDown = 0x08086270;
// void CNWSStore::SetMarkUp(int32_t)
constexpr uintptr_t CNWSStore__SetMarkUp = 0x08086294;
// void CNWSStore::SetMaxBuyPrice(int32_t)
constexpr uintptr_t CNWSStore__SetMaxBuyPrice = 0x080863C4;
// public void CNWSStore::SetName(CExoLocString)
constexpr uintptr_t CNWSStore__SetName = 0x080862A8;
// void CNWSStore::SetRepositoryArrayIndex(uint16_t)
constexpr uintptr_t CNWSStore__SetRepositoryArrayIndex = 0x08086448;
// void CNWSStore::SetRepositoryListNumber(unsigned char)
constexpr uintptr_t CNWSStore__SetRepositoryListNumber = 0x0808646C;
// public void CNWSStore::SetScriptName(int32_t, CExoString)
constexpr uintptr_t CNWSStore__SetScriptName = 0x0808614C;

// public CNWSSysAdmin::CNWSSysAdmin(uint32_t)
constexpr uintptr_t CNWSSysAdmin__CNWSSysAdminCtor__1 = 0x081ECFF0;
// public CNWSSysAdmin::~CNWSSysAdmin(void)
constexpr uintptr_t CNWSSysAdmin__CNWSSysAdminDtor = 0x081ED014;
// void CNWSSysAdmin::AsNWSSysAdmin(void)
constexpr uintptr_t CNWSSysAdmin__AsNWSSysAdmin = 0x081ED0B4;

// public CNWSTile::CNWSTile(void)
constexpr uintptr_t CNWSTile__CNWSTileCtor = 0x081ED8E4;
// public CNWSTile::~CNWSTile(void)
constexpr uintptr_t CNWSTile__CNWSTileDtor = 0x081ED970;
// void CNWSTile::AddDoor(uint32_t)
constexpr uintptr_t CNWSTile__AddDoor = 0x081EE0D4;
// public void CNWSTile::AddTrigger(uint32_t)
constexpr uintptr_t CNWSTile__AddTrigger = 0x081ED9CC;
// public int32_t CNWSTile::ClearLineOfSight(int32_t, Vector, Vector, Vector*)
constexpr uintptr_t CNWSTile__ClearLineOfSight = 0x081ED0BC;
// public int32_t CNWSTile::ClippedLineSegmentWalkable(float, float, float, float, float*, float*, float*, float*, float*, float*)
constexpr uintptr_t CNWSTile__ClippedLineSegmentWalkable = 0x081EDA58;
// public int32_t CNWSTile::ComputeClippedLineSegment(Vector, Vector, Vector*, Vector*)
constexpr uintptr_t CNWSTile__ComputeClippedLineSegment = 0x081ED254;
// public float CNWSTile::ComputeHeight(Vector)
constexpr uintptr_t CNWSTile__ComputeHeight = 0x081EDB30;
// public int32_t CNWSTile::FindClosestRegion(float, float)
constexpr uintptr_t CNWSTile__FindClosestRegion = 0x081EDBBC;
// void CNWSTile::GetDoorsList(void)
constexpr uintptr_t CNWSTile__GetDoorsList = 0x081EE104;
// public int32_t CNWSTile::GetExit(int32_t, float*, float*, int32_t*)
constexpr uintptr_t CNWSTile__GetExit = 0x081EDC14;
// public int32_t CNWSTile::GetExitNumber(float, float)
constexpr uintptr_t CNWSTile__GetExitNumber = 0x081EDC70;
// void CNWSTile::GetFlaggedAsProblem(void)
constexpr uintptr_t CNWSTile__GetFlaggedAsProblem = 0x081EE158;
// void CNWSTile::GetHasPlaceableWithWalkMesh(void)
constexpr uintptr_t CNWSTile__GetHasPlaceableWithWalkMesh = 0x081EE174;
// void CNWSTile::GetMainLightColorChange(void)
constexpr uintptr_t CNWSTile__GetMainLightColorChange = 0x081EE110;
// void CNWSTile::GetNumTriggers(void)
constexpr uintptr_t CNWSTile__GetNumTriggers = 0x081EE0C8;
// public int32_t CNWSTile::GetRegionCoords(int32_t, float*, float*)
constexpr uintptr_t CNWSTile__GetRegionCoords = 0x081EDCC0;
// public int32_t CNWSTile::GetRegionEntrance(float, float)
constexpr uintptr_t CNWSTile__GetRegionEntrance = 0x081EDD1C;
// void CNWSTile::GetSourceLightColorChange(void)
constexpr uintptr_t CNWSTile__GetSourceLightColorChange = 0x081EE12C;
// public int32_t CNWSTile::GetSurfaceMaterial(Vector)
constexpr uintptr_t CNWSTile__GetSurfaceMaterial = 0x081EDE94;
// public CNWTileData* CNWSTile::GetTileData(void)
constexpr uintptr_t CNWSTile__GetTileData = 0x081EDD70;
// public int32_t CNWSTile::GetTotalExits(void)
constexpr uintptr_t CNWSTile__GetTotalExits = 0x081EDD7C;
// void CNWSTile::GetTriggerData(void)
constexpr uintptr_t CNWSTile__GetTriggerData = 0x081EE0BC;
// void CNWSTile::GetWalkMesh(void)
constexpr uintptr_t CNWSTile__GetWalkMesh = 0x081EDE6C;
// void CNWSTile::IntersectLineSegments(float, float, float, float, float, float, float, float, float*, float*)
constexpr uintptr_t CNWSTile__IntersectLineSegments = 0x081ED4BC;
// void CNWSTile::InTrigger(Vector, CExoArrayListTemplatedunsignedlong*)
constexpr uintptr_t CNWSTile__InTrigger = 0x081EDDA0;
// void CNWSTile::LoadWalkMesh(void)
constexpr uintptr_t CNWSTile__LoadWalkMesh = 0x081EDE54;
// public int32_t CNWSTile::NoNonWalkPolysOnTile(float, float, float, float, float, float, float)
constexpr uintptr_t CNWSTile__NoNonWalkPolysOnTile = 0x081EDF08;
// public uint32_t CNWSTile::PlotIntraTilePath(CNWArea*, CPathfindInformation*, float, float, float, float, uint32_t)
constexpr uintptr_t CNWSTile__PlotIntraTilePath = 0x081ED634;
// void CNWSTile::RemoveDoor(uint32_t)
constexpr uintptr_t CNWSTile__RemoveDoor = 0x081EE0EC;
// void CNWSTile::SetFlaggedAsProblem(void)
constexpr uintptr_t CNWSTile__SetFlaggedAsProblem = 0x081EE148;
// void CNWSTile::SetHasPlaceableWithWalkMesh(void)
constexpr uintptr_t CNWSTile__SetHasPlaceableWithWalkMesh = 0x081EE164;
// public void CNWSTile::SetMainLightColor(unsigned char, unsigned char)
constexpr uintptr_t CNWSTile__SetMainLightColor = 0x081EE000;
// void CNWSTile::SetMainLightColorChange(int32_t)
constexpr uintptr_t CNWSTile__SetMainLightColorChange = 0x081EE11C;
// public void CNWSTile::SetSourceLightColor(unsigned char, unsigned char)
constexpr uintptr_t CNWSTile__SetSourceLightColor = 0x081EE02C;
// void CNWSTile::SetSourceLightColorChange(int32_t)
constexpr uintptr_t CNWSTile__SetSourceLightColorChange = 0x081EE138;
// public void CNWSTile::SetTileData(CNWTileData*)
constexpr uintptr_t CNWSTile__SetTileData = 0x081EDFF0;

// public CNWSTrigger::CNWSTrigger(uint32_t)
constexpr uintptr_t CNWSTrigger__CNWSTriggerCtor__1 = 0x081EE180;
// public CNWSTrigger::~CNWSTrigger(void)
constexpr uintptr_t CNWSTrigger__CNWSTriggerDtor = 0x081EE514;
// public void CNWSTrigger::AddToArea(CNWSArea*, float, float, float, int32_t)
constexpr uintptr_t CNWSTrigger__AddToArea = 0x081EE668;
// public void CNWSTrigger::AIUpdate(void)
constexpr uintptr_t CNWSTrigger__AIUpdate = 0x081F2880;
// void CNWSTrigger::AsNWSTrigger(void)
constexpr uintptr_t CNWSTrigger__AsNWSTrigger = 0x081F2D5C;
// public int32_t CNWSTrigger::CalculateNearestPoint(Vector, Vector*)
constexpr uintptr_t CNWSTrigger__CalculateNearestPoint = 0x081EEAA0;
// public void CNWSTrigger::ComputeBoundingBox(float*, float*, float*, float*)
constexpr uintptr_t CNWSTrigger__ComputeBoundingBox = 0x081F2A80;
// public void CNWSTrigger::CreateNewGeometry(float, Vector, CNWSArea*)
constexpr uintptr_t CNWSTrigger__CreateNewGeometry__0 = 0x081F1D18;
// public void CNWSTrigger::CreateNewGeometry(float, CScriptLocation*, CNWSArea*)
constexpr uintptr_t CNWSTrigger__CreateNewGeometry__1 = 0x081F1F94;
// public void CNWSTrigger::EventHandler(uint32_t, uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CNWSTrigger__EventHandler = 0x081EEDFC;
// void CNWSTrigger::GetActive(void)
constexpr uintptr_t CNWSTrigger__GetActive = 0x081F31F4;
// void CNWSTrigger::GetAutoRemoveKey(void)
constexpr uintptr_t CNWSTrigger__GetAutoRemoveKey = 0x081F3068;
// void CNWSTrigger::GetBaseType(void)
constexpr uintptr_t CNWSTrigger__GetBaseType = 0x081F3140;
// public int32_t CNWSTrigger::GetCanFireTrapOnObject(uint32_t, int32_t)
constexpr uintptr_t CNWSTrigger__GetCanFireTrapOnObject = 0x081F24D4;
// public int32_t CNWSTrigger::GetClosestPointWithinTrigger(Vector, Vector*)
constexpr uintptr_t CNWSTrigger__GetClosestPointWithinTrigger = 0x081EE868;
// void CNWSTrigger::GetCreator(void)
constexpr uintptr_t CNWSTrigger__GetCreator = 0x081F3020;
// void CNWSTrigger::GetCreatureList(void)
constexpr uintptr_t CNWSTrigger__GetCreatureList = 0x081F3204;
// void CNWSTrigger::GetCursor(void)
constexpr uintptr_t CNWSTrigger__GetCursor = 0x081F3238;
// void CNWSTrigger::GetCustomScriptEventId(void)
constexpr uintptr_t CNWSTrigger__GetCustomScriptEventId = 0x081F3214;
// public CExoString CNWSTrigger::GetDescriptionOverride(void)
constexpr uintptr_t CNWSTrigger__GetDescriptionOverride = 0x081F2D74;
// void CNWSTrigger::GetDetectable(void)
constexpr uintptr_t CNWSTrigger__GetDetectable = 0x081F30D4;
// void CNWSTrigger::GetDetectDC(void)
constexpr uintptr_t CNWSTrigger__GetDetectDC = 0x081F3188;
// void CNWSTrigger::GetDisarmable(void)
constexpr uintptr_t CNWSTrigger__GetDisarmable = 0x081F30F8;
// void CNWSTrigger::GetDisarmDC(void)
constexpr uintptr_t CNWSTrigger__GetDisarmDC = 0x081F31AC;
// public Vector CNWSTrigger::GetFacingPosition(void)
constexpr uintptr_t CNWSTrigger__GetFacingPosition = 0x081F2948;
// void CNWSTrigger::GetFactionId(void)
constexpr uintptr_t CNWSTrigger__GetFactionId = 0x081F30B0;
// public CExoLocString& CNWSTrigger::GetFirstName(void)
constexpr uintptr_t CNWSTrigger__GetFirstName = 0x081F3280;
// void CNWSTrigger::GetFlagged(void)
constexpr uintptr_t CNWSTrigger__GetFlagged = 0x081F311C;
// void CNWSTrigger::GetIsAreaTransition(void)
constexpr uintptr_t CNWSTrigger__GetIsAreaTransition = 0x081F2D64;
// void CNWSTrigger::GetIsTrap(void)
constexpr uintptr_t CNWSTrigger__GetIsTrap = 0x081F308C;
// void CNWSTrigger::GetKeyName(void)
constexpr uintptr_t CNWSTrigger__GetKeyName = 0x081F2FFC;
// void CNWSTrigger::GetLastDisarmed(void)
constexpr uintptr_t CNWSTrigger__GetLastDisarmed = 0x081F2EB8;
// void CNWSTrigger::GetLastEntered(void)
constexpr uintptr_t CNWSTrigger__GetLastEntered = 0x081F2E70;
// void CNWSTrigger::GetLastLeft(void)
constexpr uintptr_t CNWSTrigger__GetLastLeft = 0x081F2E94;
// void CNWSTrigger::GetLinkedFlags(void)
constexpr uintptr_t CNWSTrigger__GetLinkedFlags = 0x081F3270;
// public CExoString CNWSTrigger::GetLinkedTo(void)
constexpr uintptr_t CNWSTrigger__GetLinkedTo = 0x081F2FBC;
// public uint16_t CNWSTrigger::GetLoadScreenID(void)
constexpr uintptr_t CNWSTrigger__GetLoadScreenID = 0x081F32A4;
// void CNWSTrigger::GetNumVertices(void)
constexpr uintptr_t CNWSTrigger__GetNumVertices = 0x081F2F10;
// void CNWSTrigger::GetObjectArrayIndex(void)
constexpr uintptr_t CNWSTrigger__GetObjectArrayIndex = 0x081F2EDC;
// void CNWSTrigger::GetOneShot(void)
constexpr uintptr_t CNWSTrigger__GetOneShot = 0x081F3164;
// void CNWSTrigger::GetRecoverable(void)
constexpr uintptr_t CNWSTrigger__GetRecoverable = 0x081F31D0;
// public CExoString* CNWSTrigger::GetScriptName(int32_t)
constexpr uintptr_t CNWSTrigger__GetScriptName = 0x081F2CDC;
// public uint32_t CNWSTrigger::GetTargetArea(void)
constexpr uintptr_t CNWSTrigger__GetTargetArea = 0x081F29F8;
// void CNWSTrigger::GetTriggerHeight(void)
constexpr uintptr_t CNWSTrigger__GetTriggerHeight = 0x081F3044;
// void CNWSTrigger::GetVertices(void)
constexpr uintptr_t CNWSTrigger__GetVertices = 0x081F2F00;
// public int32_t CNWSTrigger::InTrigger(Vector)
constexpr uintptr_t CNWSTrigger__InTrigger = 0x081EF0A0;
// public int32_t CNWSTrigger::LineSegmentIntersectTrigger(Vector, Vector)
constexpr uintptr_t CNWSTrigger__LineSegmentIntersectTrigger = 0x081F2C18;
// public int32_t CNWSTrigger::LoadFromTemplate(CResRef)
constexpr uintptr_t CNWSTrigger__LoadFromTemplate = 0x081EF2A4;
// public int32_t CNWSTrigger::LoadTrigger(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSTrigger__LoadTrigger = 0x081F0138;
// public void CNWSTrigger::OnEnterTrap(int32_t)
constexpr uintptr_t CNWSTrigger__OnEnterTrap = 0x081F25CC;
// public void CNWSTrigger::RemoveFromArea(void)
constexpr uintptr_t CNWSTrigger__RemoveFromArea = 0x081F2418;
// public int32_t CNWSTrigger::SaveTrigger(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSTrigger__SaveTrigger = 0x081F1610;
// void CNWSTrigger::SetActive(int32_t)
constexpr uintptr_t CNWSTrigger__SetActive = 0x081F31E0;
// void CNWSTrigger::SetAutoRemoveKey(int32_t)
constexpr uintptr_t CNWSTrigger__SetAutoRemoveKey = 0x081F3054;
// void CNWSTrigger::SetBaseType(unsigned char)
constexpr uintptr_t CNWSTrigger__SetBaseType = 0x081F312C;
// void CNWSTrigger::SetCreator(uint32_t)
constexpr uintptr_t CNWSTrigger__SetCreator = 0x081F300C;
// void CNWSTrigger::SetCursor(unsigned char)
constexpr uintptr_t CNWSTrigger__SetCursor = 0x081F3248;
// void CNWSTrigger::SetCustomScriptEventId(int32_t)
constexpr uintptr_t CNWSTrigger__SetCustomScriptEventId = 0x081F3224;
// public void CNWSTrigger::SetDescriptionOverride(CExoString)
constexpr uintptr_t CNWSTrigger__SetDescriptionOverride = 0x081F2D9C;
// void CNWSTrigger::SetDetectable(int32_t)
constexpr uintptr_t CNWSTrigger__SetDetectable = 0x081F30C0;
// void CNWSTrigger::SetDetectDC(int32_t)
constexpr uintptr_t CNWSTrigger__SetDetectDC = 0x081F3174;
// void CNWSTrigger::SetDisarmable(int32_t)
constexpr uintptr_t CNWSTrigger__SetDisarmable = 0x081F30E4;
// void CNWSTrigger::SetDisarmDC(int32_t)
constexpr uintptr_t CNWSTrigger__SetDisarmDC = 0x081F3198;
// void CNWSTrigger::SetFactionId(int32_t)
constexpr uintptr_t CNWSTrigger__SetFactionId = 0x081F309C;
// void CNWSTrigger::SetFirstName(uint32_t)
constexpr uintptr_t CNWSTrigger__SetFirstName = 0x081F3290;
// void CNWSTrigger::SetFlagged(int32_t)
constexpr uintptr_t CNWSTrigger__SetFlagged = 0x081F3108;
// void CNWSTrigger::SetIsAreaTransition(int32_t)
constexpr uintptr_t CNWSTrigger__SetIsAreaTransition = 0x081F2E5C;
// void CNWSTrigger::SetIsTrap(int32_t)
constexpr uintptr_t CNWSTrigger__SetIsTrap = 0x081F3078;
// void CNWSTrigger::SetKeyName(const CExoString&)
constexpr uintptr_t CNWSTrigger__SetKeyName = 0x081F2FE4;
// void CNWSTrigger::SetLastDisarmed(uint32_t)
constexpr uintptr_t CNWSTrigger__SetLastDisarmed = 0x081F2EC8;
// void CNWSTrigger::SetLastEntered(uint32_t)
constexpr uintptr_t CNWSTrigger__SetLastEntered = 0x081F2E80;
// void CNWSTrigger::SetLastLeft(uint32_t)
constexpr uintptr_t CNWSTrigger__SetLastLeft = 0x081F2EA4;
// void CNWSTrigger::SetLinkedFlags(unsigned char)
constexpr uintptr_t CNWSTrigger__SetLinkedFlags = 0x081F325C;
// void CNWSTrigger::SetLinkedTo(CExoString)
constexpr uintptr_t CNWSTrigger__SetLinkedTo = 0x081F2F20;
// void CNWSTrigger::SetObjectArrayIndex(uint16_t)
constexpr uintptr_t CNWSTrigger__SetObjectArrayIndex = 0x081F2EEC;
// void CNWSTrigger::SetOneShot(unsigned char)
constexpr uintptr_t CNWSTrigger__SetOneShot = 0x081F3150;
// void CNWSTrigger::SetRecoverable(int32_t)
constexpr uintptr_t CNWSTrigger__SetRecoverable = 0x081F31BC;
// public void CNWSTrigger::SetScriptName(int32_t, CExoString)
constexpr uintptr_t CNWSTrigger__SetScriptName = 0x081F2DF4;
// void CNWSTrigger::SetTriggerHeight(float)
constexpr uintptr_t CNWSTrigger__SetTriggerHeight = 0x081F3030;

// public CNWSWaypoint::CNWSWaypoint(uint32_t)
constexpr uintptr_t CNWSWaypoint__CNWSWaypointCtor__1 = 0x081F4648;
// public CNWSWaypoint::~CNWSWaypoint(void)
constexpr uintptr_t CNWSWaypoint__CNWSWaypointDtor = 0x081F46F8;
// public void CNWSWaypoint::AddToArea(CNWSArea*, float, float, float, int32_t)
constexpr uintptr_t CNWSWaypoint__AddToArea = 0x081F505C;
// void CNWSWaypoint::AIUpdate(void)
constexpr uintptr_t CNWSWaypoint__AIUpdate = 0x081F5108;
// void CNWSWaypoint::AsNWSWaypoint(void)
constexpr uintptr_t CNWSWaypoint__AsNWSWaypoint = 0x081F521C;
// public void CNWSWaypoint::EventHandler(uint32_t, uint32_t, void*, uint32_t, uint32_t)
constexpr uintptr_t CNWSWaypoint__EventHandler = 0x081F5110;
// void CNWSWaypoint::GetFirstName(void)
constexpr uintptr_t CNWSWaypoint__GetFirstName = 0x081F52D4;
// void CNWSWaypoint::GetIsMapNote(void)
constexpr uintptr_t CNWSWaypoint__GetIsMapNote = 0x081F5238;
// void CNWSWaypoint::GetMapNoteEnabled(void)
constexpr uintptr_t CNWSWaypoint__GetMapNoteEnabled = 0x081F525C;
// void CNWSWaypoint::GetMapNoteString(void)
constexpr uintptr_t CNWSWaypoint__GetMapNoteString = 0x081F52C4;
// public int32_t CNWSWaypoint::LoadFromTemplate(CResRef, CExoString*)
constexpr uintptr_t CNWSWaypoint__LoadFromTemplate = 0x081F47A8;
// public int32_t CNWSWaypoint::LoadWaypoint(CResGFF*, CResStruct*, CExoString*)
constexpr uintptr_t CNWSWaypoint__LoadWaypoint = 0x081F4964;
// void CNWSWaypoint::RemoveFromArea(void)
constexpr uintptr_t CNWSWaypoint__RemoveFromArea = 0x081F5150;
// public int32_t CNWSWaypoint::SaveWaypoint(CResGFF*, CResStruct*)
constexpr uintptr_t CNWSWaypoint__SaveWaypoint = 0x081F4E70;
// void CNWSWaypoint::SetIsMapNote(int32_t)
constexpr uintptr_t CNWSWaypoint__SetIsMapNote = 0x081F5224;
// void CNWSWaypoint::SetMapNoteEnabled(int32_t)
constexpr uintptr_t CNWSWaypoint__SetMapNoteEnabled = 0x081F5248;
// void CNWSWaypoint::SetMapNoteString(CExoLocString)
constexpr uintptr_t CNWSWaypoint__SetMapNoteString = 0x081F526C;

// public CNWTile::CNWTile(void)
constexpr uintptr_t CNWTile__CNWTileCtor = 0x08086758;
// public CNWTile::~CNWTile(void)
constexpr uintptr_t CNWTile__CNWTileDtor = 0x080867EC;
// public void CNWTile::GetAnimLoop(unsigned char*, unsigned char*, unsigned char*)
constexpr uintptr_t CNWTile__GetAnimLoop = 0x08086A78;
// void CNWTile::GetHeight(void)
constexpr uintptr_t CNWTile__GetHeight = 0x08086B48;
// void CNWTile::GetID(void)
constexpr uintptr_t CNWTile__GetID = 0x08086B54;
// public void CNWTile::GetLocation(int32_t*, int32_t*)
constexpr uintptr_t CNWTile__GetLocation = 0x08086810;
// public void CNWTile::GetMainLightColor(unsigned char*, unsigned char*)
constexpr uintptr_t CNWTile__GetMainLightColor = 0x08086A40;
// void CNWTile::GetModelPosition(void)
constexpr uintptr_t CNWTile__GetModelPosition = 0x08086B28;
// void CNWTile::GetOrientation(void)
constexpr uintptr_t CNWTile__GetOrientation = 0x08086B60;
// void CNWTile::GetReplaceTexture(void)
constexpr uintptr_t CNWTile__GetReplaceTexture = 0x08086B6C;
// public void CNWTile::GetSourceLightColor(unsigned char*, unsigned char*)
constexpr uintptr_t CNWTile__GetSourceLightColor = 0x08086A5C;
// public void CNWTile::RotateCanonicalToReal(float, float, float*, float*)
constexpr uintptr_t CNWTile__RotateCanonicalToReal = 0x080868EC;
// public void CNWTile::RotateCanonicalToRealTile(float, float, float*, float*)
constexpr uintptr_t CNWTile__RotateCanonicalToRealTile = 0x08086834;
// public void CNWTile::RotateRealToCanonical(float, float, float*, float*)
constexpr uintptr_t CNWTile__RotateRealToCanonical = 0x08086950;
// public void CNWTile::RotateRealToCanonicalTile(float, float, float*, float*)
constexpr uintptr_t CNWTile__RotateRealToCanonicalTile = 0x08086890;
// public void CNWTile::SetAnimLoop(unsigned char, unsigned char, unsigned char)
constexpr uintptr_t CNWTile__SetAnimLoop = 0x08086AD4;
// public void CNWTile::SetID(int32_t)
constexpr uintptr_t CNWTile__SetID = 0x080869B4;
// public void CNWTile::SetMainLightColor(unsigned char, unsigned char)
constexpr uintptr_t CNWTile__SetMainLightColor = 0x08086A9C;
// public void CNWTile::SetOrientation(int32_t)
constexpr uintptr_t CNWTile__SetOrientation = 0x08086A30;
// public void CNWTile::SetPosition(int32_t, int32_t, int32_t, float)
constexpr uintptr_t CNWTile__SetPosition = 0x080869C4;
// public void CNWTile::SetReplaceTexture(unsigned char)
constexpr uintptr_t CNWTile__SetReplaceTexture = 0x08086AC4;
// public void CNWTile::SetSourceLightColor(unsigned char, unsigned char)
constexpr uintptr_t CNWTile__SetSourceLightColor = 0x08086AB0;

// CNWTileData::CNWTileData(void)
constexpr uintptr_t CNWTileData__CNWTileDataCtor = 0x081F52E4;
// public CNWTileData::~CNWTileData(void)
constexpr uintptr_t CNWTileData__CNWTileDataDtor = 0x081F5600;
// void CNWTileData::AddPropertyMethodString(uint32_t, CExoString)
constexpr uintptr_t CNWTileData__AddPropertyMethodString = 0x081F5750;
// void CNWTileData::GetCornerType(unsigned char)
constexpr uintptr_t CNWTileData__GetCornerType = 0x081F59D8;
// void CNWTileData::GetEdgeType(unsigned char)
constexpr uintptr_t CNWTileData__GetEdgeType = 0x081F5B00;
// void CNWTileData::GetMapIcon(void)
constexpr uintptr_t CNWTileData__GetMapIcon = 0x081F5B88;
// void CNWTileData::GetModelResRef(void)
constexpr uintptr_t CNWTileData__GetModelResRef = 0x081F5998;
// void CNWTileData::GetNumDoors(void)
constexpr uintptr_t CNWTileData__GetNumDoors = 0x081F5C00;
// void CNWTileData::GetPropertyMethodStringList(uint32_t)
constexpr uintptr_t CNWTileData__GetPropertyMethodStringList = 0x081F597C;
// public CNWTileSurfaceMesh* CNWTileData::GetSurfaceMesh(void)
constexpr uintptr_t CNWTileData__GetSurfaceMesh = 0x081F5BF4;
// public void CNWTileData::SetCornerType(unsigned char, CExoString, int32_t)
constexpr uintptr_t CNWTileData__SetCornerType = 0x081F5844;
// public void CNWTileData::SetEdgeType(unsigned char, CExoString)
constexpr uintptr_t CNWTileData__SetEdgeType = 0x081F5A60;
// public void CNWTileData::SetMapIcon(CResRef)
constexpr uintptr_t CNWTileData__SetMapIcon = 0x081F5BA8;
// public void CNWTileData::SetModelResRef(CResRef)
constexpr uintptr_t CNWTileData__SetModelResRef = 0x081F59B8;
// void CNWTileData::SetNumDoors(unsigned char)
constexpr uintptr_t CNWTileData__SetNumDoors = 0x081F5C0C;

// public CNWTileSet::CNWTileSet(CResRef, int32_t)
constexpr uintptr_t CNWTileSet__CNWTileSetCtor__1 = 0x08088B70;
// public CNWTileSet::~CNWTileSet(void)
constexpr uintptr_t CNWTileSet__CNWTileSetDtor = 0x08089EA0;
// void CNWTileSet::GetCornerType(int32_t, unsigned char, unsigned char)
constexpr uintptr_t CNWTileSet__GetCornerType = 0x08089EF0;
// void CNWTileSet::GetEdgeType(int32_t, unsigned char, unsigned char)
constexpr uintptr_t CNWTileSet__GetEdgeType = 0x08089F3C;
// void CNWTileSet::GetEnvMapResRef(void)
constexpr uintptr_t CNWTileSet__GetEnvMapResRef = 0x08089F88;
// void CNWTileSet::GetGrassAmbientColor(void)
constexpr uintptr_t CNWTileSet__GetGrassAmbientColor = 0x0808A220;
// void CNWTileSet::GetGrassDensity(void)
constexpr uintptr_t CNWTileSet__GetGrassDensity = 0x0808A208;
// void CNWTileSet::GetGrassDiffuseColor(void)
constexpr uintptr_t CNWTileSet__GetGrassDiffuseColor = 0x0808A240;
// void CNWTileSet::GetGrassHeight(void)
constexpr uintptr_t CNWTileSet__GetGrassHeight = 0x0808A214;
// void CNWTileSet::GetGrassTexture(void)
constexpr uintptr_t CNWTileSet__GetGrassTexture = 0x0808A260;
// void CNWTileSet::GetHasGrass(void)
constexpr uintptr_t CNWTileSet__GetHasGrass = 0x0808A1FC;
// public float CNWTileSet::GetHeightTransition(void)
constexpr uintptr_t CNWTileSet__GetHeightTransition = 0x08089FA8;
// public CNWTileData* CNWTileSet::GetTileData(int32_t)
constexpr uintptr_t CNWTileSet__GetTileData = 0x08088CF8;
// void CNWTileSet::GetTileSetName(void)
constexpr uintptr_t CNWTileSet__GetTileSetName = 0x0808A1DC;
// public int32_t CNWTileSet::LoadTileSet(void)
constexpr uintptr_t CNWTileSet__LoadTileSet = 0x08088DD8;
// void CNWTileSet::ParseLine(char*)
constexpr uintptr_t CNWTileSet__ParseLine = 0x0808990C;
// void CNWTileSet::SetTileValue(char*, char*)
constexpr uintptr_t CNWTileSet__SetTileValue = 0x08089AB0;
// void CNWTileSet::UnloadTileSet(void)
constexpr uintptr_t CNWTileSet__UnloadTileSet = 0x08089FB4;

// public CNWTileSetManager::CNWTileSetManager(void)
constexpr uintptr_t CNWTileSetManager__CNWTileSetManagerCtor = 0x080888F8;
// public CNWTileSetManager::~CNWTileSetManager(void)
constexpr uintptr_t CNWTileSetManager__CNWTileSetManagerDtor = 0x0808892C;
// public void CNWTileSetManager::ClearTilePathNodes(void)
constexpr uintptr_t CNWTileSetManager__ClearTilePathNodes = 0x08086CBC;
// public void CNWTileSetManager::ComputePathNodeInformation(unsigned char, int32_t, int32_t&, int32_t&, float**, float**, int32_t**)
constexpr uintptr_t CNWTileSetManager__ComputePathNodeInformation = 0x08086D70;
// void CNWTileSetManager::ComputePathNodeRotation(int32_t, float*, float*)
constexpr uintptr_t CNWTileSetManager__ComputePathNodeRotation = 0x08088AC0;
// public CNWTilePathNode* CNWTileSetManager::GetTilePathNode(unsigned char, unsigned char)
constexpr uintptr_t CNWTileSetManager__GetTilePathNode = 0x08088A44;
// void CNWTileSetManager::InitializeTilePathNodes(void)
constexpr uintptr_t CNWTileSetManager__InitializeTilePathNodes = 0x08088A10;
// public CNWTileSet* CNWTileSetManager::RegisterTileSet(CResRef)
constexpr uintptr_t CNWTileSetManager__RegisterTileSet = 0x08086BA4;
// public void CNWTileSetManager::UnregisterTileSet(CNWTileSet*)
constexpr uintptr_t CNWTileSetManager__UnregisterTileSet = 0x080889A8;

// public CNWTileSurfaceMesh::CNWTileSurfaceMesh(void)
constexpr uintptr_t CNWTileSurfaceMesh__CNWTileSurfaceMeshCtor = 0x0808A37C;
// public CNWTileSurfaceMesh::~CNWTileSurfaceMesh(void)
constexpr uintptr_t CNWTileSurfaceMesh__CNWTileSurfaceMeshDtor = 0x0808A558;
// public int32_t CNWTileSurfaceMesh::CheckAABBNode(int32_t, CNWTileSurfaceMeshAABBNode*, const Vector&, Vector&)
constexpr uintptr_t CNWTileSurfaceMesh__CheckAABBNode = 0x0808B6C0;
// void CNWTileSurfaceMesh::CheckAABBNodeOneWay(int32_t, CNWTileSurfaceMeshAABBNode*, const Vector&, Vector&)
constexpr uintptr_t CNWTileSurfaceMesh__CheckAABBNodeOneWay = 0x0808BBCC;
// public int32_t CNWTileSurfaceMesh::ClearLineOfSight(int32_t, Vector, Vector, Vector*)
constexpr uintptr_t CNWTileSurfaceMesh__ClearLineOfSight = 0x08093540;
// void CNWTileSurfaceMesh::ClearLineOfSightOneWay(int32_t, Vector, Vector, Vector*)
constexpr uintptr_t CNWTileSurfaceMesh__ClearLineOfSightOneWay = 0x080935B0;
// public void CNWTileSurfaceMesh::ClearSubdivision(void)
constexpr uintptr_t CNWTileSurfaceMesh__ClearSubdivision = 0x0808B5FC;
// public int32_t CNWTileSurfaceMesh::ClippedLineSegmentWalkable(CNWTile*, float, float, float, float, float*, float*, float*, float*, float*, float*)
constexpr uintptr_t CNWTileSurfaceMesh__ClippedLineSegmentWalkable = 0x0808A790;
// public int32_t CNWTileSurfaceMesh::ComputeClippedLineSegment(CNWTile*, float, float, float, float, float*, float*, float*, float*)
constexpr uintptr_t CNWTileSurfaceMesh__ComputeClippedLineSegment = 0x0808AFCC;
// public float CNWTileSurfaceMesh::ComputeHeight(Vector)
constexpr uintptr_t CNWTileSurfaceMesh__ComputeHeight = 0x0808B410;
// public void CNWTileSurfaceMesh::ComputePathNodes(void)
constexpr uintptr_t CNWTileSurfaceMesh__ComputePathNodes = 0x08093620;
// public void CNWTileSurfaceMesh::ComputeTriangleAdjacency(void)
constexpr uintptr_t CNWTileSurfaceMesh__ComputeTriangleAdjacency = 0x0808BD98;
// protected unsigned char CNWTileSurfaceMesh::ConvertToTileOrientation(int32_t)
constexpr uintptr_t CNWTileSurfaceMesh__ConvertToTileOrientation = 0x08093E64;
// void CNWTileSurfaceMesh::EstimateDistanceToTarget(float, float)
constexpr uintptr_t CNWTileSurfaceMesh__EstimateDistanceToTarget = 0x08093680;
// public int32_t CNWTileSurfaceMesh::FindClosestRegion(CNWTile*, float, float, unsigned char, int32_t)
constexpr uintptr_t CNWTileSurfaceMesh__FindClosestRegion = 0x0808C1E8;
// public int32_t CNWTileSurfaceMesh::FindRegionViaTriangle(int32_t, int32_t, int32_t*, int32_t*)
constexpr uintptr_t CNWTileSurfaceMesh__FindRegionViaTriangle = 0x0808C3F4;
// public int32_t CNWTileSurfaceMesh::FindTriangle(int32_t, int32_t, float, float, int32_t)
constexpr uintptr_t CNWTileSurfaceMesh__FindTriangle = 0x0808C4E0;
// public int32_t CNWTileSurfaceMesh::GenerateBestIntraTileExit(CNWTile*, CNWArea*, CPathfindInformation*, float, float)
constexpr uintptr_t CNWTileSurfaceMesh__GenerateBestIntraTileExit = 0x0808C788;
// void CNWTileSurfaceMesh::GetDoorVisNode(void)
constexpr uintptr_t CNWTileSurfaceMesh__GetDoorVisNode = 0x0809424C;
// void CNWTileSurfaceMesh::GetDoorVisNodeOrientation(void)
constexpr uintptr_t CNWTileSurfaceMesh__GetDoorVisNodeOrientation = 0x08094264;
// public int32_t CNWTileSurfaceMesh::GetExit(int32_t, float*, float*, int32_t*)
constexpr uintptr_t CNWTileSurfaceMesh__GetExit = 0x08093718;
// public int32_t CNWTileSurfaceMesh::GetExitNumber(float, float)
constexpr uintptr_t CNWTileSurfaceMesh__GetExitNumber = 0x0808D6C0;
// public int32_t* CNWTileSurfaceMesh::GetLOSMaterials(void)
constexpr uintptr_t CNWTileSurfaceMesh__GetLOSMaterials = 0x0808A6D0;
// void CNWTileSurfaceMesh::GetNumTriangles(void)
constexpr uintptr_t CNWTileSurfaceMesh__GetNumTriangles = 0x08094104;
// public unsigned char CNWTileSurfaceMesh::GetPathNode(void)
constexpr uintptr_t CNWTileSurfaceMesh__GetPathNode = 0x08093794;
// public int32_t CNWTileSurfaceMesh::GetPathNodeOrientation(void)
constexpr uintptr_t CNWTileSurfaceMesh__GetPathNodeOrientation = 0x080937A0;
// public int32_t CNWTileSurfaceMesh::GetRegionCoords(int32_t, float*, float*, unsigned char, int32_t)
constexpr uintptr_t CNWTileSurfaceMesh__GetRegionCoords = 0x080937AC;
// public int32_t CNWTileSurfaceMesh::GetRegionEntrance(float, float, unsigned char, int32_t)
constexpr uintptr_t CNWTileSurfaceMesh__GetRegionEntrance = 0x0809380C;
// public int32_t CNWTileSurfaceMesh::GetSurfaceMaterial(Vector)
constexpr uintptr_t CNWTileSurfaceMesh__GetSurfaceMaterial = 0x080934EC;
// void CNWTileSurfaceMesh::GetTopLevelVertexGeometry(int32_t, float*, float*, float*)
constexpr uintptr_t CNWTileSurfaceMesh__GetTopLevelVertexGeometry = 0x080938CC;
// void CNWTileSurfaceMesh::GetTotalExits(void)
constexpr uintptr_t CNWTileSurfaceMesh__GetTotalExits = 0x0809392C;
// public void CNWTileSurfaceMesh::GetTriangleAdjacency(int32_t, int32_t, int32_t*, int32_t*, int32_t*)
constexpr uintptr_t CNWTileSurfaceMesh__GetTriangleAdjacency = 0x08093958;
// public void CNWTileSurfaceMesh::GetTriangleCentroid(int32_t, float*, float*, float*)
constexpr uintptr_t CNWTileSurfaceMesh__GetTriangleCentroid = 0x080939C0;
// public void CNWTileSurfaceMesh::GetTriangleVertices(int32_t, int32_t, int32_t*, int32_t*, int32_t*)
constexpr uintptr_t CNWTileSurfaceMesh__GetTriangleVertices = 0x08093A44;
// void CNWTileSurfaceMesh::GetVertexGeometry(int32_t, float*, float*, float*)
constexpr uintptr_t CNWTileSurfaceMesh__GetVertexGeometry__0 = 0x08093AA4;
// void CNWTileSurfaceMesh::GetVertexGeometry(int32_t, Vector*)
constexpr uintptr_t CNWTileSurfaceMesh__GetVertexGeometry__1 = 0x08093AE0;
// void CNWTileSurfaceMesh::GetVisibilityNode(void)
constexpr uintptr_t CNWTileSurfaceMesh__GetVisibilityNode = 0x08094240;
// void CNWTileSurfaceMesh::GetVisibilityNodeOrientation(void)
constexpr uintptr_t CNWTileSurfaceMesh__GetVisibilityNodeOrientation = 0x08094258;
// void CNWTileSurfaceMesh::GetWalkMesh(void)
constexpr uintptr_t CNWTileSurfaceMesh__GetWalkMesh = 0x08093B18;
// void CNWTileSurfaceMesh::GetWalkTileHashTable(void)
constexpr uintptr_t CNWTileSurfaceMesh__GetWalkTileHashTable = 0x08094110;
// public int32_t CNWTileSurfaceMesh::IntersectLineSegments(Vector, Vector, Vector, Vector, Vector*)
constexpr uintptr_t CNWTileSurfaceMesh__IntersectLineSegments = 0x0808D818;
// public int32_t CNWTileSurfaceMesh::IntraTileDFS(CNWTile*, CNWArea*, CPathfindInformation*, int32_t, float, int32_t, float, float, float, float, float, int32_t)
constexpr uintptr_t CNWTileSurfaceMesh__IntraTileDFS = 0x0808DCFC;
// public int32_t CNWTileSurfaceMesh::IntraTileDFSGenerateSuccessors(int32_t, CNWTile*, CNWArea*, float, float, int32_t, CPathfindInformation*, CPathfindInfoIntraTileSuccessors**)
constexpr uintptr_t CNWTileSurfaceMesh__IntraTileDFSGenerateSuccessors = 0x0808E1CC;
// public void CNWTileSurfaceMesh::LoadDefaultWalkMesh(void)
constexpr uintptr_t CNWTileSurfaceMesh__LoadDefaultWalkMesh = 0x0808FD50;
// public int32_t CNWTileSurfaceMesh::LoadWalkMesh(void)
constexpr uintptr_t CNWTileSurfaceMesh__LoadWalkMesh = 0x08090134;
// void CNWTileSurfaceMesh::LoadWalkMeshString(unsigned char**, uint32_t*, unsigned char*, uint32_t)
constexpr uintptr_t CNWTileSurfaceMesh__LoadWalkMeshString = 0x08093DDC;
// public int32_t CNWTileSurfaceMesh::NoNonWalkPolysOnTile(float, float, float, float, float, float, float)
constexpr uintptr_t CNWTileSurfaceMesh__NoNonWalkPolysOnTile = 0x08092148;
// public uint32_t CNWTileSurfaceMesh::PlotIntraTilePath(CNWTile*, CNWArea*, CPathfindInformation*, float, float, float, float, uint32_t, int32_t)
constexpr uintptr_t CNWTileSurfaceMesh__PlotIntraTilePath = 0x080929E8;
// public int32_t CNWTileSurfaceMesh::PolyHit(const Vector*, int32_t, const Vector&, const Vector&, const Vector&, float, Vector*)
constexpr uintptr_t CNWTileSurfaceMesh__PolyHit = 0x0808B940;
// void CNWTileSurfaceMesh::PrintAABBTreeToPrintLog(CNWTileSurfaceMeshAABBNode*, int32_t)
constexpr uintptr_t CNWTileSurfaceMesh__PrintAABBTreeToPrintLog = 0x0808FFDC;
// public void CNWTileSurfaceMesh::RunSubdivision(int32_t*, int32_t, float*, int32_t, int32_t*, int32_t*, int32_t, float*, int32_t, int32_t*)
constexpr uintptr_t CNWTileSurfaceMesh__RunSubdivision = 0x08092F88;
// void CNWTileSurfaceMesh::SetDoorVisNode(unsigned char)
constexpr uintptr_t CNWTileSurfaceMesh__SetDoorVisNode = 0x08094130;
// void CNWTileSurfaceMesh::SetDoorVisNodeOrientation(int32_t)
constexpr uintptr_t CNWTileSurfaceMesh__SetDoorVisNodeOrientation = 0x080941C0;
// public void CNWTileSurfaceMesh::SetPathNode(unsigned char)
constexpr uintptr_t CNWTileSurfaceMesh__SetPathNode = 0x08093E54;
// void CNWTileSurfaceMesh::SetPathNodeOrientation(int32_t)
constexpr uintptr_t CNWTileSurfaceMesh__SetPathNodeOrientation = 0x08094270;
// void CNWTileSurfaceMesh::SetVisibilityNode(unsigned char)
constexpr uintptr_t CNWTileSurfaceMesh__SetVisibilityNode = 0x08094120;
// void CNWTileSurfaceMesh::SetVisibilityNodeOrientation(int32_t)
constexpr uintptr_t CNWTileSurfaceMesh__SetVisibilityNodeOrientation = 0x08094140;
// void CNWTileSurfaceMesh::SetWalkMesh(CResRef)
constexpr uintptr_t CNWTileSurfaceMesh__SetWalkMesh = 0x08093ED8;
// void CNWTileSurfaceMesh::SetWalkTileHashTable(CNWTileSurfaceMeshHashTableEntry*)
constexpr uintptr_t CNWTileSurfaceMesh__SetWalkTileHashTable = 0x080942F0;
// public void CNWTileSurfaceMesh::Subdivide(void)
constexpr uintptr_t CNWTileSurfaceMesh__Subdivide = 0x0809329C;
// public int32_t CNWTileSurfaceMesh::TestLineForWalkableOnArea(float, float, float, float, float, float, CPathfindInformation*, CNWTile*, CNWArea*)
constexpr uintptr_t CNWTileSurfaceMesh__TestLineForWalkableOnArea = 0x08093CB0;
// public int32_t CNWTileSurfaceMesh::TestLineForWalkableOnTile(float, float, float, float, float*, float*, CPathfindInformation*, CNWTile*, int32_t)
constexpr uintptr_t CNWTileSurfaceMesh__TestLineForWalkableOnTile = 0x08093B38;

// CNWTileSurfaceMeshAABBNode::~CNWTileSurfaceMeshAABBNode(void)
constexpr uintptr_t CNWTileSurfaceMeshAABBNode__CNWTileSurfaceMeshAABBNodeDtor = 0x08094080;

// CNWTileSurfaceMeshHashTableEntry::CNWTileSurfaceMeshHashTableEntry(void)
constexpr uintptr_t CNWTileSurfaceMeshHashTableEntry__CNWTileSurfaceMeshHashTableEntryCtor = 0x08093478;
// void CNWTileSurfaceMeshHashTableEntry::Fetch(int32_t)
constexpr uintptr_t CNWTileSurfaceMeshHashTableEntry__Fetch = 0x0809349C;
// void CNWTileSurfaceMeshHashTableEntry::Store(int32_t, float)
constexpr uintptr_t CNWTileSurfaceMeshHashTableEntry__Store = 0x080934C0;

// public CNWVirtualMachineCommands::~CNWVirtualMachineCommands(void)
constexpr uintptr_t CNWVirtualMachineCommands__CNWVirtualMachineCommandsDtor = 0x082319E4;
// public void* CNWVirtualMachineCommands::CopyGameDefinedStructure(int32_t, void*)
constexpr uintptr_t CNWVirtualMachineCommands__CopyGameDefinedStructure = 0x081FB82C;
// public void* CNWVirtualMachineCommands::CreateGameDefinedStructure(int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__CreateGameDefinedStructure = 0x081FBC2C;
// public int32_t CNWVirtualMachineCommands::DebugGUIGetMessageFrom(char**, int32_t*)
constexpr uintptr_t CNWVirtualMachineCommands__DebugGUIGetMessageFrom = 0x08231C8C;
// public void CNWVirtualMachineCommands::DebugGUISendMessageTo(char*, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__DebugGUISendMessageTo = 0x08231C5C;
// public int32_t CNWVirtualMachineCommands::DebugGUIStart(void)
constexpr uintptr_t CNWVirtualMachineCommands__DebugGUIStart = 0x081FD150;
// public void CNWVirtualMachineCommands::DebugGUIStop(void)
constexpr uintptr_t CNWVirtualMachineCommands__DebugGUIStop = 0x08231C2C;
// void CNWVirtualMachineCommands::DebugGUIUpdate(void)
constexpr uintptr_t CNWVirtualMachineCommands__DebugGUIUpdate = 0x08231CEC;
// public void CNWVirtualMachineCommands::DestroyGameDefinedStructure(int32_t, void*)
constexpr uintptr_t CNWVirtualMachineCommands__DestroyGameDefinedStructure = 0x08231B28;
// public int32_t CNWVirtualMachineCommands::ExecuteCommand(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommand = 0x08231A34;
// void CNWVirtualMachineCommands::ExecuteCommandActionCounterSpell(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionCounterSpell = 0x08235484;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandActionDoCommand(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionDoCommand = 0x082331E8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandActionEquipMostDamagingMelee(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionEquipMostDamagingMelee = 0x08233E0C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandActionEquipMostDamagingRanged(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionEquipMostDamagingRanged = 0x08233E98;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandActionEquipMostEffectiveArmor(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionEquipMostEffectiveArmor = 0x08233F7C;
// void CNWVirtualMachineCommands::ExecuteCommandActionExamine(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionExamine = 0x08235FD4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandActionExchangeItem(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionExchangeItem = 0x082113B8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandActionFollowObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionFollowObject = 0x0820AB20;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandActionInteractObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionInteractObject = 0x08233690;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandActionJumpToObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionJumpToObject = 0x081FF804;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandActionJumpToPoint(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionJumpToPoint = 0x081FF91C;
// void CNWVirtualMachineCommands::ExecuteCommandActionLockActions(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionLockActions = 0x082346D4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandActionMoveAwayFromLocation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionMoveAwayFromLocation = 0x08215BFC;
// void CNWVirtualMachineCommands::ExecuteCommandActionPauseConversation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionPauseConversation = 0x08232C00;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandActionRandomWalk(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionRandomWalk = 0x081FE9B4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandActionRest(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionRest = 0x08233F08;
// void CNWVirtualMachineCommands::ExecuteCommandActionResumeConversation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionResumeConversation = 0x08232C90;
// void CNWVirtualMachineCommands::ExecuteCommandActionSit(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionSit = 0x08234EEC;
// void CNWVirtualMachineCommands::ExecuteCommandActionStartConversation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionStartConversation = 0x0820D030;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandActionUseFeat(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionUseFeat = 0x08212B6C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandActionUseSkill(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionUseSkill = 0x08212C4C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandActionUseTalent(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActionUseTalent = 0x08213738;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandActivatePortal(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandActivatePortal = 0x08219F08;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandAddItemProperty(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandAddItemProperty = 0x08226FC4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandAddJournalQuestEntry(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandAddJournalQuestEntry = 0x082164B0;
// void CNWVirtualMachineCommands::ExecuteCommandAddToParty(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandAddToParty = 0x0821F21C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandAdjustAlignment(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandAdjustAlignment = 0x08211D3C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandAdjustReputation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandAdjustReputation = 0x0820D628;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandAmbientSound(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandAmbientSound = 0x082193A0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandApplyEffectAtPoint(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandApplyEffectAtPoint = 0x0820DA10;
// void CNWVirtualMachineCommands::ExecuteCommandApplyEffectOnObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandApplyEffectOnObject = 0x0820DB94;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandAssignCommand(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandAssignCommand = 0x081FDC8C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandAssociateAccess(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandAssociateAccess = 0x08216330;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandAttack(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandAttack = 0x082321E8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandBeginConversation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandBeginConversation = 0x08210150;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandBlackScreen(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandBlackScreen = 0x08235A9C;
// void CNWVirtualMachineCommands::ExecuteCommandBootPC(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandBootPC = 0x08235404;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandCastSpell(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandCastSpell = 0x081FED80;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandChangeFaction(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandChangeFaction = 0x0820B704;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandClearAllActions(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandClearAllActions = 0x081FDF94;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandCloseDoor(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandCloseDoor = 0x08203304;
// void CNWVirtualMachineCommands::ExecuteCommandCopyItem(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandCopyItem = 0x0821FCB0;
// void CNWVirtualMachineCommands::ExecuteCommandCopyItemAndModify(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandCopyItemAndModify = 0x0821FFE8;
// void CNWVirtualMachineCommands::ExecuteCommandCopyObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandCopyObject = 0x08229E4C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandCreateItemOnObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandCreateItemOnObject = 0x082007E4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandCreateObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandCreateObject = 0x0820E908;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandCreateTrapAtLocation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandCreateTrapAtLocation = 0x0822E05C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandCreateTrapOnObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandCreateTrapOnObject = 0x0822EAA0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandDayNightCycle(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandDayNightCycle = 0x0822B548;
// void CNWVirtualMachineCommands::ExecuteCommandDecrementFeatUses(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandDecrementFeatUses = 0x0821F584;
// void CNWVirtualMachineCommands::ExecuteCommandDecrementSpellUses(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandDecrementSpellUses = 0x0821F650;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandDelayCommand(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandDelayCommand = 0x081FDD44;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandDeleteCampaignVariable(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandDeleteCampaignVariable = 0x08224DC4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandDeleteVar(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandDeleteVar = 0x082115C4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandDestroyCampaignDatabase(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandDestroyCampaignDatabase = 0x08222B94;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandDestroyObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandDestroyObject = 0x0820E84C;
// void CNWVirtualMachineCommands::ExecuteCommandDistanceConversions(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandDistanceConversions = 0x08232E98;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandDoDoorAction(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandDoDoorAction = 0x082146B0;
// void CNWVirtualMachineCommands::ExecuteCommandDoSinglePlayerAutoSave(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandDoSinglePlayerAutoSave = 0x0821CD90;
// void CNWVirtualMachineCommands::ExecuteCommandDoTouchAttack(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandDoTouchAttack = 0x08209E94;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandDoWhirlwindAttack(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandDoWhirlwindAttack = 0x08229460;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectAbilityDecrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectAbilityDecrease = 0x0820579C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectAbilityIncrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectAbilityIncrease = 0x08205654;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectACDecrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectACDecrease = 0x08207548;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectACIncrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectACIncrease = 0x082073B8;
// void CNWVirtualMachineCommands::ExecuteCommandEffectAppear(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectAppear = 0x0821B304;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectAreaEffect(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectAreaEffect = 0x0820B27C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectAttackDecrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectAttackDecrease = 0x08207C34;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectAttackIncrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectAttackIncrease = 0x08207ADC;
// void CNWVirtualMachineCommands::ExecuteCommandEffectBeam(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectBeam = 0x0820D2A4;
// void CNWVirtualMachineCommands::ExecuteCommandEffectBlindness(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectBlindness = 0x0821B038;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectComplex(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectComplex = 0x082092FC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectConcealment(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectConcealment = 0x0821ABAC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectCutsceneGhost(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectCutsceneGhost = 0x08236598;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectDamage(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectDamage = 0x08205458;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectDamageDecrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectDamageDecrease = 0x082080A0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectDamageImmunityDecrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectDamageImmunityDecrease = 0x082124D8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectDamageImmunityIncrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectDamageImmunityIncrease = 0x082123A8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectDamageIncrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectDamageIncrease = 0x08207F18;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectDamageReduction(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectDamageReduction = 0x08207D8C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectDamageResistance(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectDamageResistance = 0x0820717C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectDamageShield(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectDamageShield = 0x0821B86C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectDarkness(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectDarkness = 0x0821AD04;
// void CNWVirtualMachineCommands::ExecuteCommandEffectDisappear(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectDisappear = 0x0821B22C;
// void CNWVirtualMachineCommands::ExecuteCommandEffectDisappearAppear(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectDisappearAppear = 0x0821B0E8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectDisease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectDisease = 0x08210078;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectEthereal(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectEthereal = 0x08229D6C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectHeal(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectHeal = 0x08205318;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectHitPointChangeWhenDying(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectHitPointChangeWhenDying = 0x08218534;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectImmunity(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectImmunity = 0x08211EF4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectInvisibility(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectInvisibility = 0x0821A584;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectLinkEffects(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectLinkEffects = 0x0821148C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectMissChance(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectMissChance = 0x0821AE4C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectModifyAttacks(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectModifyAttacks = 0x0821B3DC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectMovementSpeedDecrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectMovementSpeedDecrease = 0x0820A94C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectMovementSpeedIncrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectMovementSpeedIncrease = 0x0820A830;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectNegativeLevel(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectNegativeLevel = 0x0821B734;
// void CNWVirtualMachineCommands::ExecuteCommandEffectPetrify(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectPetrify = 0x0821FBCC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectPoison(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectPoison = 0x0820FFA0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectResurrection(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectResurrection = 0x082058E4;
// void CNWVirtualMachineCommands::ExecuteCommandEffectSanctuary(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectSanctuary = 0x0821A440;
// void CNWVirtualMachineCommands::ExecuteCommandEffectSavingThrowDecrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectSavingThrowDecrease = 0x08207958;
// void CNWVirtualMachineCommands::ExecuteCommandEffectSavingThrowIncrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectSavingThrowIncrease = 0x082077D4;
// void CNWVirtualMachineCommands::ExecuteCommandEffectSeeInvisible(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectSeeInvisible = 0x0821AF94;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectSkillDecrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectSkillDecrease = 0x082161BC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectSkillIncrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectSkillIncrease = 0x08216048;
// void CNWVirtualMachineCommands::ExecuteCommandEffectSpellFailure(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectSpellFailure = 0x08228B10;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectSpellImmunity(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectSpellImmunity = 0x0821B4CC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectSpellLevelAbsorption(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectSpellLevelAbsorption = 0x0821B5CC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectSpellResistanceDecrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectSpellResistanceDecrease = 0x0820D7D8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectSpellResistanceIncrease(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectSpellResistanceIncrease = 0x0820D700;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectSummonCreature(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectSummonCreature = 0x082059BC;
// void CNWVirtualMachineCommands::ExecuteCommandEffectSwarm(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectSwarm = 0x0821C878;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectTemporaryHP(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectTemporaryHP = 0x082139E0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectTrueSeeing(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectTrueSeeing = 0x0821ADA8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEffectTurnResistance(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectTurnResistance = 0x0821E8E4;
// void CNWVirtualMachineCommands::ExecuteCommandEffectUltravision(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectUltravision = 0x0821CE58;
// void CNWVirtualMachineCommands::ExecuteCommandEffectVisualEffect(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEffectVisualEffect = 0x0820BD38;
// void CNWVirtualMachineCommands::ExecuteCommandEndGame(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEndGame = 0x08234DA8;
// void CNWVirtualMachineCommands::ExecuteCommandEquipItem(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEquipItem = 0x082010A8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEventActivateItem(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEventActivateItem = 0x0821907C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEventConversation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEventConversation = 0x08233264;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandEventSpellCastAt(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEventSpellCastAt = 0x0820F85C;
// void CNWVirtualMachineCommands::ExecuteCommandEventUserDefined(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandEventUserDefined = 0x082099EC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandExecuteScript(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandExecuteScript = 0x081FDE94;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandExploreAreaForPlayer(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandExploreAreaForPlayer = 0x08218E40;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandExportAllCharacters(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandExportAllCharacters = 0x082351D8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandExportSingleCharacter(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandExportSingleCharacter = 0x082351F4;
// void CNWVirtualMachineCommands::ExecuteCommandFindSubString(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandFindSubString = 0x08204EB8;
// void CNWVirtualMachineCommands::ExecuteCommandFloatingText(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandFloatingText = 0x0821D6AC;
// void CNWVirtualMachineCommands::ExecuteCommandFloatToInt(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandFloatToInt = 0x08232F7C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandFloatToString(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandFloatToString = 0x0820A368;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandForceRest(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandForceRest = 0x0822BDAC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGet2DAString(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGet2DAString = 0x08229A7C;
// void CNWVirtualMachineCommands::ExecuteCommandGetAbilityModifier(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetAbilityModifier = 0x082142F0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetAbilityScore(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetAbilityScore = 0x08211844;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetAC(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetAC = 0x082076D8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetActionMode(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetActionMode = 0x081FE228;
// void CNWVirtualMachineCommands::ExecuteCommandGetAge(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetAge = 0x0823486C;
// void CNWVirtualMachineCommands::ExecuteCommandGetAILevel(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetAILevel = 0x08235DD4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetAlignment(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetAlignment = 0x08208228;
// void CNWVirtualMachineCommands::ExecuteCommandGetAnimalCompanionCreatureType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetAnimalCompanionCreatureType = 0x082349D8;
// void CNWVirtualMachineCommands::ExecuteCommandGetAnimalCompanionName(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetAnimalCompanionName = 0x0821C59C;
// void CNWVirtualMachineCommands::ExecuteCommandGetAOEObjectCreator(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetAOEObjectCreator = 0x08211794;
// void CNWVirtualMachineCommands::ExecuteCommandGetAppearanceType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetAppearanceType = 0x0821F4AC;
// void CNWVirtualMachineCommands::ExecuteCommandGetArcaneSpellFailure(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetArcaneSpellFailure = 0x0822B3F0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetArea(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetArea = 0x081FFFB4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetAreaSize(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetAreaSize = 0x0822F948;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetAssociate(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetAssociate = 0x08215F58;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetAssociateType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetAssociateType = 0x082363C0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetAttackTarget(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetAttackTarget = 0x08233400;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetAttemptedAttackTarget(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetAttemptedAttackTarget = 0x08233B64;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetAttemptedSpellTarget(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetAttemptedSpellTarget = 0x08233BBC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetBaseAttackBonus(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetBaseAttackBonus = 0x08235B00;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetBaseItemType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetBaseItemType = 0x08233D98;
// void CNWVirtualMachineCommands::ExecuteCommandGetBattleTrack(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetBattleTrack = 0x082354DC;
// void CNWVirtualMachineCommands::ExecuteCommandGetBlockingDoor(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetBlockingDoor = 0x08233858;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetCalendarDay(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCalendarDay = 0x08231E24;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetCalendarMonth(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCalendarMonth = 0x08231DC4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetCalendarYear(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCalendarYear = 0x08231D64;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetCampaignFloat(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCampaignFloat = 0x08222C80;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetCampaignInt(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCampaignInt = 0x082232AC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetCampaignLocation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCampaignLocation = 0x08223F50;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetCampaignString(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCampaignString = 0x082246B8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetCampaignVector(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCampaignVector = 0x082238CC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetCasterLevel(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCasterLevel = 0x08205C40;
// void CNWVirtualMachineCommands::ExecuteCommandGetChallengeRating(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetChallengeRating = 0x082347F0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetClassInformation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetClassInformation = 0x08215080;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetColor(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetColor = 0x08231634;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetCommandable(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCommandable = 0x08232978;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetCreatureBodyPart(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCreatureBodyPart = 0x0822CB90;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetCreatureHasTalent(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCreatureHasTalent = 0x0821349C;
// void CNWVirtualMachineCommands::ExecuteCommandGetCreatureSize(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCreatureSize = 0x08234660;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetCreatureTailType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCreatureTailType = 0x0822CF84;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetCreatureTalent(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCreatureTalent = 0x0821355C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetCreatureWingType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCreatureWingType = 0x0822C96C;
// void CNWVirtualMachineCommands::ExecuteCommandGetCurrentAction(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCurrentAction = 0x0821D320;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetCutsceneCameraMoveRate(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCutsceneCameraMoveRate = 0x082360DC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetCutsceneMode(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetCutsceneMode = 0x08228E3C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetDamageDealtByType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetDamageDealtByType = 0x08215220;
// void CNWVirtualMachineCommands::ExecuteCommandGetDayTrack(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetDayTrack = 0x08235278;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetDeity(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetDeity = 0x0821BC24;
// void CNWVirtualMachineCommands::ExecuteCommandGetDescription(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetDescription = 0x082302DC;
// void CNWVirtualMachineCommands::ExecuteCommandGetDialogSoundLength(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetDialogSoundLength = 0x08228EE8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetDistanceBetween(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetDistanceBetween = 0x0820A580;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetDistanceBetweenLocations(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetDistanceBetweenLocations = 0x08212F94;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetDistanceToObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetDistanceToObject = 0x082030A0;
// void CNWVirtualMachineCommands::ExecuteCommandGetDroppableFlag(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetDroppableFlag = 0x08235590;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetEffect(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetEffect = 0x08205E54;
// void CNWVirtualMachineCommands::ExecuteCommandGetEffectCreator(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetEffectCreator = 0x08232694;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetEffectDurationType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetEffectDurationType = 0x0823253C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetEffectSpellId(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetEffectSpellId = 0x082332DC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetEffectSubType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetEffectSubType = 0x082325B0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetEffectType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetEffectType = 0x08232624;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetEmotions(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetEmotions = 0x0820E1A4;
// void CNWVirtualMachineCommands::ExecuteCommandGetEncounterData(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetEncounterData = 0x0821260C;
// void CNWVirtualMachineCommands::ExecuteCommandGetEnteringObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetEnteringObject = 0x08200100;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFacing(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFacing = 0x0820056C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFactionAverageGoodEvilAlignment(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFactionAverageGoodEvilAlignment = 0x0820C38C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFactionAverageLawChaosAlignment(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFactionAverageLawChaosAlignment = 0x0820C440;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFactionAverageLevel(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFactionAverageLevel = 0x0820C4F4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFactionAverageReputation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFactionAverageReputation = 0x0820C2BC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFactionAverageXP(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFactionAverageXP = 0x0820C5A8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFactionBestAC(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFactionBestAC = 0x0820C7F4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFactionEqual(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFactionEqual = 0x0820B654;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFactionGold(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFactionGold = 0x0820C208;
// void CNWVirtualMachineCommands::ExecuteCommandGetFactionLeader(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFactionLeader = 0x08235368;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFactionLeastDamagedMember(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFactionLeastDamagedMember = 0x0820C124;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFactionMember(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFactionMember = 0x082182CC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFactionMostDamagedMember(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFactionMostDamagedMember = 0x0820C040;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFactionMostFrequentClass(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFactionMostFrequentClass = 0x0820C65C;
// void CNWVirtualMachineCommands::ExecuteCommandGetFactionNthNearestMember(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFactionNthNearestMember = 0x08232BF8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFactionStrongestMember(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFactionStrongestMember = 0x0820BF5C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFactionWeakestMember(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFactionWeakestMember = 0x0820BE78;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFactionWorstAC(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFactionWorstAC = 0x0820C710;
// void CNWVirtualMachineCommands::ExecuteCommandGetFamiliarCreatureType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFamiliarCreatureType = 0x0823495C;
// void CNWVirtualMachineCommands::ExecuteCommandGetFamiliarName(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFamiliarName = 0x0821C44C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFogAmount(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFogAmount = 0x0822C600;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFogColor(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFogColor = 0x0822C308;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetFootstepType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFootstepType = 0x0822C750;
// void CNWVirtualMachineCommands::ExecuteCommandGetFortitudeSavingThrow(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetFortitudeSavingThrow = 0x0821C14C;
// void CNWVirtualMachineCommands::ExecuteCommandGetGameDifficulty(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetGameDifficulty = 0x08234E64;
// void CNWVirtualMachineCommands::ExecuteCommandGetGoingToBeAttackedBy(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetGoingToBeAttackedBy = 0x08234FB8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetGold(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetGold = 0x08218F18;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetGoldPieceValue(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetGoldPieceValue = 0x08233348;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetHardness(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetHardness = 0x0822D1A8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetHasFeat(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetHasFeat = 0x08212874;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetHasFeatEffect(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetHasFeatEffect = 0x0821E74C;
// void CNWVirtualMachineCommands::ExecuteCommandGetHasInventory(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetHasInventory = 0x0821F130;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetHasSkill(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetHasSkill = 0x08212984;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetHasSpell(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetHasSpell = 0x08217E70;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetHasSpellEffect(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetHasSpellEffect = 0x082133DC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetHenchman(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetHenchman = 0x08215688;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetHitDice(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetHitDice = 0x0820AA68;
// void CNWVirtualMachineCommands::ExecuteCommandGetHitpoints(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetHitpoints = 0x08203B60;
// void CNWVirtualMachineCommands::ExecuteCommandGetIdentified(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIdentified = 0x08233704;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetImmortal(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetImmortal = 0x08235D64;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetInfiniteFlag(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetInfiniteFlag = 0x082369B0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetInPersistentObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetInPersistentObject = 0x08210850;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetInventoryDisturbItem(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetInventoryDisturbItem = 0x082339E8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetInventoryDisturbType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetInventoryDisturbType = 0x08233964;
// void CNWVirtualMachineCommands::ExecuteCommandGetIsAreaAboveGround(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsAreaAboveGround = 0x08234C6C;
// void CNWVirtualMachineCommands::ExecuteCommandGetIsAreaInterior(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsAreaInterior = 0x08235EBC;
// void CNWVirtualMachineCommands::ExecuteCommandGetIsAreaNatural(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsAreaNatural = 0x08234BEC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetIsCreatureDisarmable(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsCreatureDisarmable = 0x0822BCF8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetIsDawn(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsDawn = 0x08234060;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetIsDay(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsDay = 0x08233FB0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetIsDMPossessed(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsDMPossessed = 0x08232E10;
// void CNWVirtualMachineCommands::ExecuteCommandGetIsDoorActionPossible(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsDoorActionPossible = 0x082143EC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetIsDusk(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsDusk = 0x082340B8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetIsEncounterCreature(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsEncounterCreature = 0x08234110;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetIsImmune(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsImmune = 0x08211FF4;
// void CNWVirtualMachineCommands::ExecuteCommandGetIsInCombat(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsInCombat = 0x082334EC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetIsInTrigger(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsInTrigger = 0x0822BC58;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetIsNight(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsNight = 0x08234008;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetIsOpen(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsOpen = 0x08219708;
// void CNWVirtualMachineCommands::ExecuteCommandGetIsPossessedFamiliar(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsPossessedFamiliar = 0x08235E40;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetIsRacialTypePlayable(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsRacialTypePlayable = 0x082138DC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetIsReactionType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsReactionType = 0x08219DE8;
// void CNWVirtualMachineCommands::ExecuteCommandGetIsResting(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsResting = 0x08234A54;
// void CNWVirtualMachineCommands::ExecuteCommandGetIsSkillSuccessful(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsSkillSuccessful = 0x082286D4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetIsTalentValid(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsTalentValid = 0x08233AF4;
// void CNWVirtualMachineCommands::ExecuteCommandGetIsTrapped(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsTrapped = 0x0821E80C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetIsWeaponEffective(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetIsWeaponEffective = 0x08234330;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetItemACValue(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetItemACValue = 0x08218D94;
// void CNWVirtualMachineCommands::ExecuteCommandGetItemAppearance(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetItemAppearance = 0x0822098C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetItemCharges(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetItemCharges = 0x0823582C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetItemCursedFlag(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetItemCursedFlag = 0x082361F0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetItemHasItemProperty(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetItemHasItemProperty = 0x08218CA4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetItemInInventory(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetItemInInventory = 0x082149B4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetItemInSlot(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetItemInSlot = 0x0820A698;
// void CNWVirtualMachineCommands::ExecuteCommandGetItemPossessedBy(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetItemPossessedBy = 0x08200CC8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetItemPossessor(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetItemPossessor = 0x082006CC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetItemProperty(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetItemProperty = 0x08227378;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetItemPropertyDurationType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetItemPropertyDurationType = 0x082359A8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetItemPropertyInfo(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetItemPropertyInfo = 0x082275DC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetItemPropertyType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetItemPropertyType = 0x0823591C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetItemStackSize(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetItemStackSize = 0x082357B8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetJournalQuestExperience(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetJournalQuestExperience = 0x08217B94;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetKeyRequiredFeedbackMessage(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetKeyRequiredFeedbackMessage = 0x0822F4CC;
// void CNWVirtualMachineCommands::ExecuteCommandGetLastAssociateCommand(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastAssociateCommand = 0x0823355C;
// void CNWVirtualMachineCommands::ExecuteCommandGetLastAttacker(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastAttacker = 0x08232144;
// void CNWVirtualMachineCommands::ExecuteCommandGetLastAttackMode(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastAttackMode = 0x08213C84;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLastAttackType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastAttackType = 0x08213B0C;
// void CNWVirtualMachineCommands::ExecuteCommandGetLastClosedBy(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastClosedBy = 0x0821EDCC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLastDamager(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastDamager = 0x082338B0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLastDisarmed(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastDisarmed = 0x082153A4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLastDisturbed(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastDisturbed = 0x08215474;
// void CNWVirtualMachineCommands::ExecuteCommandGetLastEquipped(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastEquipped = 0x08235F3C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLastHostileActor(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastHostileActor = 0x0821E9E0;
// void CNWVirtualMachineCommands::ExecuteCommandGetLastKiller(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastKiller = 0x082343CC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLastLocked(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastLocked = 0x08215520;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLastOpenedBy(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastOpenedBy = 0x08214224;
// void CNWVirtualMachineCommands::ExecuteCommandGetLastPCRested(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastPCRested = 0x08234AD0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLastPerceived(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastPerceived = 0x0823315C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLastPerception(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastPerception = 0x0821055C;
// void CNWVirtualMachineCommands::ExecuteCommandGetLastRestEventType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastRestEventType = 0x08234B24;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLastSpeaker(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastSpeaker = 0x082330CC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLastSpellCastClass(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastSpellCastClass = 0x0822B8E4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLastTrapDetected(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastTrapDetected = 0x0823477C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLastUnlocked(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastUnlocked = 0x082155D4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLastUsedBy(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastUsedBy = 0x0821415C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLastWeaponUsed(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLastWeaponUsed = 0x0823361C;
// void CNWVirtualMachineCommands::ExecuteCommandGetLeavingObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLeavingObject = 0x08200230;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLocation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLocation = 0x08200420;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLocked(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLocked = 0x08214080;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetLockInfo(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLockInfo = 0x0821E488;
// void CNWVirtualMachineCommands::ExecuteCommandGetLootable(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetLootable = 0x08236068;
// void CNWVirtualMachineCommands::ExecuteCommandGetMaster(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetMaster = 0x08233474;
// void CNWVirtualMachineCommands::ExecuteCommandGetMatchedString(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetMatchedString = 0x0820BBAC;
// void CNWVirtualMachineCommands::ExecuteCommandGetMatchedStringsCount(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetMatchedStringsCount = 0x08232B18;
// void CNWVirtualMachineCommands::ExecuteCommandGetMatchedStringsNum(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetMatchedStringsNum = 0x08232B88;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetMaxHenchmen(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetMaxHenchmen = 0x0823636C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetMetaMagicFeat(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetMetaMagicFeat = 0x0823277C;
// void CNWVirtualMachineCommands::ExecuteCommandGetModeState(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetModeState = 0x0821F3F8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetModule(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetModule = 0x08232FE4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetModuleItemStuff(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetModuleItemStuff = 0x082127A0;
// void CNWVirtualMachineCommands::ExecuteCommandGetModuleName(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetModuleName = 0x0821ECA4;
// void CNWVirtualMachineCommands::ExecuteCommandGetMovementRate(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetMovementRate = 0x082348E4;
// void CNWVirtualMachineCommands::ExecuteCommandGetName(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetName = 0x08206620;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetNearestObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetNearestObject = 0x082012F0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetNearestTrap(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetNearestTrap = 0x0821B9B8;
// void CNWVirtualMachineCommands::ExecuteCommandGetNightTrack(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetNightTrack = 0x082352F0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetNumStackedItems(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetNumStackedItems = 0x08234568;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetObjectByTag(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetObjectByTag = 0x0820CBA4;
// void CNWVirtualMachineCommands::ExecuteCommandGetObjectInArea(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetObjectInArea = 0x0820631C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetObjectInShape(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetObjectInShape = 0x08208338;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetObjectType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetObjectType = 0x08206DC0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetObjectValid(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetObjectValid = 0x08232298;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetObjectVisibility(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetObjectVisibility = 0x08210734;
// void CNWVirtualMachineCommands::ExecuteCommandGetPC(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetPC = 0x0823516C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetPCChatMessage(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetPCChatMessage = 0x082312F4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetPCChatSpeaker(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetPCChatSpeaker = 0x08236BF8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetPCChatVolume(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetPCChatVolume = 0x082313FC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetPCIPAddress(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetPCIPAddress = 0x08217660;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetPCLevellingUp(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetPCLevellingUp = 0x08235030;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetPCPlayerName(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetPCPlayerName = 0x082177DC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetPCPublicCDKey(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetPCPublicCDKey = 0x08217268;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetPCSpeaker(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetPCSpeaker = 0x0820E320;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetPhenoType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetPhenoType = 0x0823673C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetPickpocketableFlag(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetPickpocketableFlag = 0x082367C4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetPlaceableIllumination(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetPlaceableIllumination = 0x082350F0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetPlotFlag(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetPlotFlag = 0x082344C8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetPortraitId(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetPortraitId = 0x08236AC0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetPortraitResRef(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetPortraitResRef = 0x0822FF30;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetPosition(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetPosition = 0x08200348;
// void CNWVirtualMachineCommands::ExecuteCommandGetRacialType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetRacialType = 0x08206EB0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetReflexAdjustedDamage(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetReflexAdjustedDamage = 0x08213070;
// void CNWVirtualMachineCommands::ExecuteCommandGetReflexSavingThrow(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetReflexSavingThrow = 0x0821C34C;
// void CNWVirtualMachineCommands::ExecuteCommandGetReputation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetReputation = 0x0820D564;
// void CNWVirtualMachineCommands::ExecuteCommandGetResRef(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetResRef = 0x0821FA18;
// void CNWVirtualMachineCommands::ExecuteCommandGetSittingCreature(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetSittingCreature = 0x08234F44;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetSkillRank(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetSkillRank = 0x08212A5C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetSkyBox(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetSkyBox = 0x0822C1F8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetSpellCast(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetSpellCast = 0x0820F960;
// void CNWVirtualMachineCommands::ExecuteCommandGetSpellCasterItem(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetSpellCasterItem = 0x0823444C;
// void CNWVirtualMachineCommands::ExecuteCommandGetSpellId(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetSpellId = 0x0823303C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetSpellResistance(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetSpellResistance = 0x08236440;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetSpellSaveDC(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetSpellSaveDC = 0x082070AC;
// void CNWVirtualMachineCommands::ExecuteCommandGetSpellTargetLoc(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetSpellTargetLoc = 0x0820DD68;
// void CNWVirtualMachineCommands::ExecuteCommandGetSpellTargetObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetSpellTargetObject = 0x0823230C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetStartingPackage(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetStartingPackage = 0x0823662C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetStat(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetStat = 0x08233A70;
// void CNWVirtualMachineCommands::ExecuteCommandGetStolenFlag(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetStolenFlag = 0x082356B0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetStrByStrRef(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetStrByStrRef = 0x0820E3E0;
// void CNWVirtualMachineCommands::ExecuteCommandGetStringLeft(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetStringLeft = 0x082048A0;
// void CNWVirtualMachineCommands::ExecuteCommandGetStringLength(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetStringLength = 0x082323B8;
// void CNWVirtualMachineCommands::ExecuteCommandGetStringLowerCase(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetStringLowerCase = 0x08204530;
// void CNWVirtualMachineCommands::ExecuteCommandGetStringRight(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetStringRight = 0x082046BC;
// void CNWVirtualMachineCommands::ExecuteCommandGetStringUpperCase(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetStringUpperCase = 0x082043A4;
// void CNWVirtualMachineCommands::ExecuteCommandGetStrRefSoundDuration(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetStrRefSoundDuration = 0x08219CB0;
// void CNWVirtualMachineCommands::ExecuteCommandGetSubRace(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetSubRace = 0x0821BEB8;
// void CNWVirtualMachineCommands::ExecuteCommandGetSubString(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetSubString = 0x08204C80;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetTag(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetTag = 0x0820AC58;
// void CNWVirtualMachineCommands::ExecuteCommandGetTileLightColor(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetTileLightColor = 0x0821D0FC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetTimeHour(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetTimeHour = 0x08231E84;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetTimeMillisecond(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetTimeMillisecond = 0x08231FA4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetTimeMinute(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetTimeMinute = 0x08231EE4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetTimeSecond(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetTimeSecond = 0x08231F44;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetTotalDamageDealt(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetTotalDamageDealt = 0x082152F0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetTrapInfo(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetTrapInfo = 0x0821D984;
// void CNWVirtualMachineCommands::ExecuteCommandGetTurnResistanceHD(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetTurnResistanceHD = 0x082345DC;
// void CNWVirtualMachineCommands::ExecuteCommandGetUseableFlag(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetUseableFlag = 0x08235618;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetUserDefinedEventNumber(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetUserDefinedEventNumber = 0x0820FAFC;
// void CNWVirtualMachineCommands::ExecuteCommandGetVar(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetVar = 0x08203C90;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetWaypointByTag(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetWaypointByTag = 0x0820C8D8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetWaypointByTrigger(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetWaypointByTrigger = 0x0820C9F0;
// void CNWVirtualMachineCommands::ExecuteCommandGetWeaponRanged(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetWeaponRanged = 0x0821CD00;
// void CNWVirtualMachineCommands::ExecuteCommandGetWeather(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetWeather = 0x08234B74;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetWeight(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetWeight = 0x082293B8;
// void CNWVirtualMachineCommands::ExecuteCommandGetWillSavingThrow(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetWillSavingThrow = 0x0821C24C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetXP(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetXP = 0x08218C04;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGetXPScale(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGetXPScale = 0x082368DC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGiveGoldToCreature(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGiveGoldToCreature = 0x08218A20;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandGiveXPToCreature(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandGiveXPToCreature = 0x08218ABC;
// void CNWVirtualMachineCommands::ExecuteCommandIncrementRemainingFeatUses(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandIncrementRemainingFeatUses = 0x0822B220;
// void CNWVirtualMachineCommands::ExecuteCommandInsertString(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandInsertString = 0x08204A84;
// void CNWVirtualMachineCommands::ExecuteCommandIntToFloat(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandIntToFloat = 0x08232F28;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandIntToHexString(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandIntToHexString = 0x08233CAC;
// void CNWVirtualMachineCommands::ExecuteCommandIntToString(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandIntToString = 0x082061FC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandIsAIState(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandIsAIState = 0x08209C48;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandIsDM(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandIsDM = 0x08232D88;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandIsEffectValid(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandIsEffectValid = 0x0823249C;
// void CNWVirtualMachineCommands::ExecuteCommandIsInConversation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandIsInConversation = 0x08219BD8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandIsItemPropertyValid(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandIsItemPropertyValid = 0x082358A0;
// void CNWVirtualMachineCommands::ExecuteCommandIsListening(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandIsListening = 0x08232A10;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandIsPC(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandIsPC = 0x08232D20;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandItemActivated(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandItemActivated = 0x082194F0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandItemPropertyEffect(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandItemPropertyEffect = 0x082276BC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandLevelUpHenchman(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandLevelUpHenchman = 0x08229260;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandLineOfSight(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandLineOfSight = 0x0822B5EC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandLocation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandLocation = 0x0820D8B0;
// void CNWVirtualMachineCommands::ExecuteCommandLocationAccess(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandLocationAccess = 0x0820DF1C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandLockCamera(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandLockCamera = 0x0822F834;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandMath(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandMath = 0x082050C8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandModuleAccess(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandModuleAccess = 0x08212DB8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandMoveAwayFromObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandMoveAwayFromObject = 0x081FFE10;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandMoveToObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandMoveToObject = 0x081FFB78;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandMoveToPoint(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandMoveToPoint = 0x081FEACC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandMusicBackground(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandMusicBackground = 0x082191D4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandMusicBattle(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandMusicBattle = 0x082192C8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandObjectToString(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandObjectToString = 0x08211C2C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandOpenDoor(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandOpenDoor = 0x08203244;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandOpenInventory(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandOpenInventory = 0x082290F8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandOpenStore(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandOpenStore = 0x082181A8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandPersonalReputationAccess(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandPersonalReputationAccess = 0x08218898;
// void CNWVirtualMachineCommands::ExecuteCommandPickUpItem(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandPickUpItem = 0x08232004;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandPlayAnimation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandPlayAnimation = 0x082027D8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandPlaySound(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandPlaySound = 0x08203544;
// void CNWVirtualMachineCommands::ExecuteCommandPlaySoundByStrRef(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandPlaySoundByStrRef = 0x082036A0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandPopUpGUIPanel(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandPopUpGUIPanel = 0x08218634;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandPrintFloat(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandPrintFloat = 0x081FD844;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandPrintInteger(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandPrintInteger = 0x081FDA18;
// void CNWVirtualMachineCommands::ExecuteCommandPrintLogEntry(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandPrintLogEntry = 0x0821EB68;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandPrintObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandPrintObject = 0x081FDAD4;
// void CNWVirtualMachineCommands::ExecuteCommandPrintString(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandPrintString = 0x081FD6DC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandPrintVector(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandPrintVector = 0x081FDB90;
// void CNWVirtualMachineCommands::ExecuteCommandPutDownItem(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandPutDownItem = 0x08232090;
// void CNWVirtualMachineCommands::ExecuteCommandRandom(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandRandom = 0x08231CF4;
// void CNWVirtualMachineCommands::ExecuteCommandRandomName(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandRandomName = 0x0820FBF0;
// void CNWVirtualMachineCommands::ExecuteCommandRecomputeStaticLighting(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandRecomputeStaticLighting = 0x08234EA4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandRemoveEffect(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandRemoveEffect = 0x0820608C;
// void CNWVirtualMachineCommands::ExecuteCommandRemoveFromParty(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandRemoveFromParty = 0x0821F348;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandRemoveItemProperty(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandRemoveItemProperty = 0x082271E0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandRemoveJournalQuestEntry(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandRemoveJournalQuestEntry = 0x08216C88;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandResistSpell(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandResistSpell = 0x0820AE3C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandRestoreBaseAttackBonus(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandRestoreBaseAttackBonus = 0x08236548;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandRestoreCameraFacing(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandRestoreCameraFacing = 0x08235C6C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandRetrieveCampaignObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandRetrieveCampaignObject = 0x08225DC8;
// void CNWVirtualMachineCommands::ExecuteCommandRollDice(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandRollDice = 0x08206CE0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSavingThrow(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSavingThrow = 0x08206F58;
// void CNWVirtualMachineCommands::ExecuteCommandSendMessageToAllDMs(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSendMessageToAllDMs = 0x0821F01C;
// void CNWVirtualMachineCommands::ExecuteCommandSendMessageToPC(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSendMessageToPC = 0x0821EE98;
// void CNWVirtualMachineCommands::ExecuteCommandSendMessageToPCByStrRef(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSendMessageToPCByStrRef = 0x0822B088;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetActionMode(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetActionMode = 0x081FE174;
// void CNWVirtualMachineCommands::ExecuteCommandSetAILevel(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetAILevel = 0x0822AE54;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetAreaTransitionBMP(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetAreaTransitionBMP = 0x0820CD98;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetAssociateListenPatterns(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetAssociateListenPatterns = 0x082335CC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetBaseAttackBonus(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetBaseAttackBonus = 0x082364C0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetCalendar(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetCalendar = 0x081FE668;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetCameraHeight(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetCameraHeight = 0x082366AC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetCameraLocation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetCameraLocation = 0x082033A8;
// void CNWVirtualMachineCommands::ExecuteCommandSetCameraMode(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetCameraMode = 0x0821C6EC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetCampaignFloat(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetCampaignFloat = 0x08220B48;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetCampaignInt(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetCampaignInt = 0x0822116C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetCampaignLocation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetCampaignLocation = 0x08221DCC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetCampaignString(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetCampaignString = 0x082224CC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetCampaignVector(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetCampaignVector = 0x08221790;
// void CNWVirtualMachineCommands::ExecuteCommandSetColor(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetColor = 0x082317A8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetCommandable(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetCommandable = 0x0820A798;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetCreatureAppearanceType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetCreatureAppearanceType = 0x0822BAFC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetCreatureBodyPart(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetCreatureBodyPart = 0x0822CD54;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetCreatureTailType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetCreatureTailType = 0x0822D014;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetCreatureWingType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetCreatureWingType = 0x0822C9FC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetCustomToken(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetCustomToken = 0x0820CEAC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetCutsceneCameraMoveRate(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetCutsceneCameraMoveRate = 0x08236154;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetCutsceneMode(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetCutsceneMode = 0x08228C14;
// void CNWVirtualMachineCommands::ExecuteCommandSetDeity(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetDeity = 0x0821BD74;
// void CNWVirtualMachineCommands::ExecuteCommandSetDescription(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetDescription = 0x08230DEC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetDislike(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetDislike = 0x08217A68;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetDroppableFlag(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetDroppableFlag = 0x08235CEC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetEncounterData(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetEncounterData = 0x082126D0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetFacing(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetFacing = 0x081FE2E8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetFade(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetFade = 0x08229018;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetFogAmount(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetFogAmount = 0x0822C480;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetFogColor(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetFogColor = 0x0822C070;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetFootstepType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetFootstepType = 0x0822C860;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetHardness(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetHardness = 0x0822D270;
// void CNWVirtualMachineCommands::ExecuteCommandSetIdentified(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetIdentified = 0x08233778;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetImmortal(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetImmortal = 0x08235B84;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetInfiniteFlag(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetInfiniteFlag = 0x08236A38;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetIsDestroyable(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetIsDestroyable = 0x08213DA8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetItemCharges(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetItemCharges = 0x08226EF8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetItemCursedFlag(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetItemCursedFlag = 0x08236278;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetItemStackSize(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetItemStackSize = 0x08226DA0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetKeyRequiredFeedbackMessage(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetKeyRequiredFeedbackMessage = 0x0822F680;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetLike(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetLike = 0x0821793C;
// void CNWVirtualMachineCommands::ExecuteCommandSetListening(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetListening = 0x08232A9C;
// void CNWVirtualMachineCommands::ExecuteCommandSetListenString(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetListenString = 0x0820B88C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetLocked(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetLocked = 0x08213F24;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetLockInfo(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetLockInfo = 0x0822D5C4;
// void CNWVirtualMachineCommands::ExecuteCommandSetLootable(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetLootable = 0x0822B494;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetMapPinEnabled(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetMapPinEnabled = 0x0821841C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetMaxHenchmen(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetMaxHenchmen = 0x082362F0;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetName(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetName = 0x0822FA8C;
// void CNWVirtualMachineCommands::ExecuteCommandSetPanelButtonFlash(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetPanelButtonFlash = 0x0821D444;
// void CNWVirtualMachineCommands::ExecuteCommandSetPCChatMessage(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetPCChatMessage = 0x08231490;
// void CNWVirtualMachineCommands::ExecuteCommandSetPCChatVolume(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetPCChatVolume = 0x08231564;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetPhenoType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetPhenoType = 0x0822BFC8;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetPickpocketableFlag(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetPickpocketableFlag = 0x08236864;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetPlaceableIllumination(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetPlaceableIllumination = 0x08235084;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetPlotFlag(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetPlotFlag = 0x08219B0C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetPortraitId(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetPortraitId = 0x08236B64;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetPortraitResRef(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetPortraitResRef = 0x08230074;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetSavingThrow(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetSavingThrow = 0x0822F2EC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetSkyBox(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetSkyBox = 0x0822BE94;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetStolenFlag(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetStolenFlag = 0x08235738;
// void CNWVirtualMachineCommands::ExecuteCommandSetSubRace(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetSubRace = 0x0821C008;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetSubType(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetSubType = 0x082072EC;
// void CNWVirtualMachineCommands::ExecuteCommandSetTileLightColor(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetTileLightColor = 0x0821CEFC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetTime(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetTime = 0x081FE864;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetTrapInfo(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetTrapInfo = 0x0822D994;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetUseableFlag(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetUseableFlag = 0x082301CC;
// void CNWVirtualMachineCommands::ExecuteCommandSetVar(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetVar = 0x08203FF0;
// void CNWVirtualMachineCommands::ExecuteCommandSetWeather(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetWeather = 0x0821C778;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetXP(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetXP = 0x08218B60;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSetXPScale(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSetXPScale = 0x08236938;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSignalEvent(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSignalEvent = 0x08209A90;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSoundObjectPlay(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSoundObjectPlay = 0x08234190;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSoundObjectSetPosition(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSoundObjectSetPosition = 0x0823429C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSoundObjectSetVolume(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSoundObjectSetVolume = 0x08234230;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSoundObjectStop(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSoundObjectStop = 0x082341E0;
// void CNWVirtualMachineCommands::ExecuteCommandSpawnScriptDebugger(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSpawnScriptDebugger = 0x08235554;
// void CNWVirtualMachineCommands::ExecuteCommandSpeakOneLinerConversation(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSpeakOneLinerConversation = 0x0820267C;
// void CNWVirtualMachineCommands::ExecuteCommandSpeakString(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSpeakString = 0x08202404;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSpeakStrRef(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSpeakStrRef = 0x0820E584;
// void CNWVirtualMachineCommands::ExecuteCommandStandardFactionReputationAccess(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandStandardFactionReputationAccess = 0x0821D4E4;
// void CNWVirtualMachineCommands::ExecuteCommandStartNewModule(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandStartNewModule = 0x08234CEC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandStopFade(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandStopFade = 0x08235A38;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandStoreCameraFacing(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandStoreCameraFacing = 0x08235BEC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandStoreCampaignObject(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandStoreCampaignObject = 0x08225328;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandStoreGet(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandStoreGet = 0x0822B990;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandStoreSet(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandStoreSet = 0x0822BA44;
// void CNWVirtualMachineCommands::ExecuteCommandStringConversions(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandStringConversions = 0x0820E054;
// void CNWVirtualMachineCommands::ExecuteCommandSummonAssociate(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSummonAssociate = 0x082337E4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandSurrenderToEnemies(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandSurrenderToEnemies = 0x0821A690;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandTakeGoldFromCreature(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandTakeGoldFromCreature = 0x082197E4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandTalent(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandTalent = 0x08213308;
// void CNWVirtualMachineCommands::ExecuteCommandTalentAccess(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandTalentAccess = 0x08233C14;
// void CNWVirtualMachineCommands::ExecuteCommandTestString(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandTestString = 0x0820B9BC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandTimeConversions(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandTimeConversions = 0x08232804;
// void CNWVirtualMachineCommands::ExecuteCommandUnequipItem(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandUnequipItem = 0x08201248;
// void CNWVirtualMachineCommands::ExecuteCommandUnpossessFamiliar(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandUnpossessFamiliar = 0x0822AFE4;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandVector(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandVector = 0x082328D0;
// void CNWVirtualMachineCommands::ExecuteCommandVectorConversions(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandVectorConversions = 0x08209D2C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandVectorMagnitude(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandVectorMagnitude = 0x0823270C;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandVectorNormalize(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandVectorNormalize = 0x08209B74;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandVersusEffect(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandVersusEffect = 0x08215740;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandVoiceChat(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandVoiceChat = 0x08218FDC;
// public int32_t CNWVirtualMachineCommands::ExecuteCommandWait(int32_t, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ExecuteCommandWait = 0x0820CCB4;
// public CExoString CNWVirtualMachineCommands::GetDebuggerLabelName(int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__GetDebuggerLabelName = 0x081FBD80;
// public void CNWVirtualMachineCommands::GetEngineStructureWatchView(int32_t, void*, int32_t*, CExoString**, CExoString**)
constexpr uintptr_t CNWVirtualMachineCommands__GetEngineStructureWatchView = 0x081FBED0;
// public int32_t CNWVirtualMachineCommands::GetEqualGameDefinedStructure(int32_t, void*, void*)
constexpr uintptr_t CNWVirtualMachineCommands__GetEqualGameDefinedStructure = 0x081FBB7C;
// public CExoString CNWVirtualMachineCommands::GetGameDefinedStructureName(int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__GetGameDefinedStructureName = 0x08231BB4;
// public void CNWVirtualMachineCommands::GetObjectWatchView(uint32_t, int32_t*, CExoString**, CExoString**)
constexpr uintptr_t CNWVirtualMachineCommands__GetObjectWatchView = 0x081FC5A0;
// public C2DA* CNWVirtualMachineCommands::GetTableFromArmorPart(int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__GetTableFromArmorPart = 0x0822B2D0;
// public void CNWVirtualMachineCommands::InitializeCommands(void)
constexpr uintptr_t CNWVirtualMachineCommands__InitializeCommands = 0x081F5CC4;
// public int32_t CNWVirtualMachineCommands::LoadGameDefinedStructure(int32_t, void**, CResGFF*, CResStruct*)
constexpr uintptr_t CNWVirtualMachineCommands__LoadGameDefinedStructure = 0x081FB9AC;
// public void CNWVirtualMachineCommands::ReportError(CExoString&, int32_t)
constexpr uintptr_t CNWVirtualMachineCommands__ReportError = 0x081FB68C;
// public void CNWVirtualMachineCommands::RunScriptCallback(CExoString&)
constexpr uintptr_t CNWVirtualMachineCommands__RunScriptCallback = 0x081FB558;
// public int32_t CNWVirtualMachineCommands::SaveGameDefinedStructure(int32_t, void*, CResGFF*, CResStruct*)
constexpr uintptr_t CNWVirtualMachineCommands__SaveGameDefinedStructure = 0x08231A90;

// CObjectLookupTable::CObjectLookupTable(void)
constexpr uintptr_t CObjectLookupTable__CObjectLookupTableCtor = 0x080949D0;
// CObjectLookupTable::~CObjectLookupTable(void)
constexpr uintptr_t CObjectLookupTable__CObjectLookupTableDtor = 0x08094A10;
// void CObjectLookupTable::AddID(uint32_t)
constexpr uintptr_t CObjectLookupTable__AddID = 0x08094A48;
// void CObjectLookupTable::GetIDFromIndex(uint32_t)
constexpr uintptr_t CObjectLookupTable__GetIDFromIndex = 0x08094AAC;
// void CObjectLookupTable::GetIndexFromID(uint32_t)
constexpr uintptr_t CObjectLookupTable__GetIndexFromID = 0x08094ABC;
// void CObjectLookupTable::GetUpdate(void*, uint32_t*)
constexpr uintptr_t CObjectLookupTable__GetUpdate = 0x08094B9C;
// void CObjectLookupTable::Touch(uint32_t)
constexpr uintptr_t CObjectLookupTable__Touch = 0x08094AF8;
// void CObjectLookupTable::Update(void*, uint32_t)
constexpr uintptr_t CObjectLookupTable__Update = 0x08094C1C;

// public CObjectTableManager::CObjectTableManager(void)
constexpr uintptr_t CObjectTableManager__CObjectTableManagerCtor = 0x08094C60;
// CObjectTableManager::~CObjectTableManager(void)
constexpr uintptr_t CObjectTableManager__CObjectTableManagerDtor = 0x08094C84;
// void CObjectTableManager::AddID(uint32_t, uint32_t*, uint32_t)
constexpr uintptr_t CObjectTableManager__AddID = 0x08094D80;
// public void CObjectTableManager::ClearAll(void)
constexpr uintptr_t CObjectTableManager__ClearAll = 0x08094D18;
// void CObjectTableManager::CreateNewPlayer(uint32_t)
constexpr uintptr_t CObjectTableManager__CreateNewPlayer = 0x0809484C;
// void CObjectTableManager::GetIDFromIndex(uint32_t, uint32_t)
constexpr uintptr_t CObjectTableManager__GetIDFromIndex = 0x08094E28;
// void CObjectTableManager::GetIndexFromID(uint32_t, uint32_t)
constexpr uintptr_t CObjectTableManager__GetIndexFromID = 0x08094E6C;
// public int32_t CObjectTableManager::RemovePlayer(uint32_t)
constexpr uintptr_t CObjectTableManager__RemovePlayer = 0x08094CB8;
// void CObjectTableManager::Touch(uint32_t, uint32_t)
constexpr uintptr_t CObjectTableManager__Touch = 0x0809490C;

// public CPathfindInfoIntraTileSuccessors::CPathfindInfoIntraTileSuccessors(void)
constexpr uintptr_t CPathfindInfoIntraTileSuccessors__CPathfindInfoIntraTileSuccessorsCtor = 0x08242344;

// public CPathfindInformation::CPathfindInformation(void)
constexpr uintptr_t CPathfindInformation__CPathfindInformationCtor = 0x08241BA8;
// public CPathfindInformation::~CPathfindInformation(void)
constexpr uintptr_t CPathfindInformation__CPathfindInformationDtor = 0x08242378;
// protected void CPathfindInformation::ComputeStepTolerance(void)
constexpr uintptr_t CPathfindInformation__ComputeStepTolerance = 0x082427A0;
// public void CPathfindInformation::CreateFirstTileFValueAlternatives(int32_t)
constexpr uintptr_t CPathfindInformation__CreateFirstTileFValueAlternatives = 0x0824269C;
// public void CPathfindInformation::DeleteFirstTileFValueAlternatives(void)
constexpr uintptr_t CPathfindInformation__DeleteFirstTileFValueAlternatives = 0x0824227C;
// public void CPathfindInformation::FlipStartEndPoints(void)
constexpr uintptr_t CPathfindInformation__FlipStartEndPoints = 0x08242724;
// public void CPathfindInformation::FlipTempEndPoints(void)
constexpr uintptr_t CPathfindInformation__FlipTempEndPoints = 0x0824275C;
// public void CPathfindInformation::GetFirstTileFValueAlternatives(int32_t, int32_t*, int32_t*, CPathfindInfoIntraTileSuccessors**)
constexpr uintptr_t CPathfindInformation__GetFirstTileFValueAlternatives = 0x08242628;
// public void CPathfindInformation::Initialize(void)
constexpr uintptr_t CPathfindInformation__Initialize = 0x08241CB4;
// public void CPathfindInformation::ResetAtEndOfPath(void)
constexpr uintptr_t CPathfindInformation__ResetAtEndOfPath = 0x082423AC;
// public void CPathfindInformation::ResetGridSearchData(void)
constexpr uintptr_t CPathfindInformation__ResetGridSearchData = 0x0824251C;
// public void CPathfindInformation::ResetInterAreaPathSearchData(void)
constexpr uintptr_t CPathfindInformation__ResetInterAreaPathSearchData = 0x08242494;
// public void CPathfindInformation::ResetInterAreaSearchData(void)
constexpr uintptr_t CPathfindInformation__ResetInterAreaSearchData = 0x08242430;
// public void CPathfindInformation::ResetInterTileSearchData(void)
constexpr uintptr_t CPathfindInformation__ResetInterTileSearchData = 0x082421D4;
// void CPathfindInformation::ResetIntraTileSearchData(void)
constexpr uintptr_t CPathfindInformation__ResetIntraTileSearchData = 0x082425C4;
// public void CPathfindInformation::ResetWayPointData(void)
constexpr uintptr_t CPathfindInformation__ResetWayPointData = 0x082420EC;
// public void CPathfindInformation::SetFirstTileFValueAlternatives(int32_t, int32_t, int32_t, CPathfindInfoIntraTileSuccessors*)
constexpr uintptr_t CPathfindInformation__SetFirstTileFValueAlternatives = 0x08242664;
// public void CPathfindInformation::Shutdown(void)
constexpr uintptr_t CPathfindInformation__Shutdown = 0x08241FC0;

// public CRes::CRes(void)
constexpr uintptr_t CRes__CResCtor__0 = 0x082B35C8;
// public CRes::CRes(uint32_t)
constexpr uintptr_t CRes__CResCtor__1 = 0x082B3624;
// public CRes::~CRes(void)
constexpr uintptr_t CRes__CResDtor = 0x082B3668;
// public int32_t CRes::CancelRequest(void)
constexpr uintptr_t CRes__CancelRequest = 0x082B36D4;
// public void* CRes::Demand(void)
constexpr uintptr_t CRes__Demand = 0x082B36F0;
// public void CRes::Dump(int32_t)
constexpr uintptr_t CRes__Dump = 0x082B372C;
// public void* CRes::GetData(void)
constexpr uintptr_t CRes__GetData = 0x082B3748;
// void CRes::GetDemands(void)
constexpr uintptr_t CRes__GetDemands = 0x082B3754;
// void CRes::GetFixedResourceDataOffset(void)
constexpr uintptr_t CRes__GetFixedResourceDataOffset = 0x082B3FE8;
// public int32_t CRes::GetFixedResourceSize(void)
constexpr uintptr_t CRes__GetFixedResourceSize = 0x082B3FDC;
// void CRes::GetID(void)
constexpr uintptr_t CRes__GetID = 0x082B376C;
// void CRes::GetRequests(void)
constexpr uintptr_t CRes__GetRequests = 0x082B3760;
// void CRes::GetSize(void)
constexpr uintptr_t CRes__GetSize = 0x082B3778;
// void CRes::OnResourceFreed(void)
constexpr uintptr_t CRes__OnResourceFreed = 0x082B3FF0;
// public int32_t CRes::OnResourceServiced(void)
constexpr uintptr_t CRes__OnResourceServiced = 0x082B3FFC;
// void CRes::ReadRaw(int32_t, char*)
constexpr uintptr_t CRes__ReadRaw = 0x082B370C;
// public int32_t CRes::Release(void)
constexpr uintptr_t CRes__Release = 0x082B3784;
// public int32_t CRes::Request(void)
constexpr uintptr_t CRes__Request = 0x082B37A0;
// void CRes::SetID(uint32_t)
constexpr uintptr_t CRes__SetID = 0x082B37BC;
// void CRes::SetPos(CExoLinkedListNode*)
constexpr uintptr_t CRes__SetPos = 0x082B4008;

// public CRes2DA::CRes2DA(void)
constexpr uintptr_t CRes2DA__CRes2DACtor = 0x082C52B4;
// public CRes2DA::~CRes2DA(void)
constexpr uintptr_t CRes2DA__CRes2DADtor = 0x082C52F0;
// void CRes2DA::Get2DADataPtr(void)
constexpr uintptr_t CRes2DA__Get2DADataPtr = 0x082C5338;
// void CRes2DA::Get2DAHeaderPtr(void)
constexpr uintptr_t CRes2DA__Get2DAHeaderPtr = 0x082C532C;
// void CRes2DA::Get2DASize(void)
constexpr uintptr_t CRes2DA__Get2DASize = 0x082C5344;
// void CRes2DA::IsLoaded(void)
constexpr uintptr_t CRes2DA__IsLoaded = 0x082C5350;
// public int32_t CRes2DA::OnResourceFreed(void)
constexpr uintptr_t CRes2DA__OnResourceFreed = 0x082C535C;
// public int32_t CRes2DA::OnResourceServiced(void)
constexpr uintptr_t CRes2DA__OnResourceServiced = 0x082C5388;

// CResARE::~CResARE(void)
constexpr uintptr_t CResARE__CResAREDtor = 0x080D54EC;

// public CResDWK::CResDWK(void)
constexpr uintptr_t CResDWK__CResDWKCtor = 0x0824048C;
// public CResDWK::~CResDWK(void)
constexpr uintptr_t CResDWK__CResDWKDtor = 0x082404C8;
// void CResDWK::GetDWKDataPtr(void)
constexpr uintptr_t CResDWK__GetDWKDataPtr = 0x08240504;
// void CResDWK::GetDWKSize(void)
constexpr uintptr_t CResDWK__GetDWKSize = 0x08240510;
// void CResDWK::IsLoaded(void)
constexpr uintptr_t CResDWK__IsLoaded = 0x0824051C;
// void CResDWK::OnResourceFreed(void)
constexpr uintptr_t CResDWK__OnResourceFreed = 0x08240528;
// void CResDWK::OnResourceServiced(void)
constexpr uintptr_t CResDWK__OnResourceServiced = 0x0824054C;

// public CResGFF::CResGFF(void)
constexpr uintptr_t CResGFF__CResGFFCtor__0 = 0x082B8370;
// public CResGFF::CResGFF(uint16_t, char*, const CResRef&)
constexpr uintptr_t CResGFF__CResGFFCtor__1 = 0x082B8468;
// public CResGFF::~CResGFF(void)
constexpr uintptr_t CResGFF__CResGFFDtor = 0x082B85E0;
// protected unsigned char* CResGFF::AddDataField(uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CResGFF__AddDataField = 0x082BB654;
// protected unsigned char* CResGFF::AddDataLayoutField(uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CResGFF__AddDataLayoutField = 0x082B93E8;
// protected unsigned char* CResGFF::AddDataLayoutList(uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CResGFF__AddDataLayoutList = 0x082B94A8;
// protected CResGFFField* CResGFF::AddField(CResStruct*, char*, uint32_t)
constexpr uintptr_t CResGFF__AddField = 0x082B9164;
// protected uint32_t CResGFF::AddLabel(char*)
constexpr uintptr_t CResGFF__AddLabel = 0x082B92E0;
// public int32_t CResGFF::AddList(CResList*, CResStruct*, char*)
constexpr uintptr_t CResGFF__AddList = 0x082BBFD8;
// public int32_t CResGFF::AddListElement(CResStruct*, CResList*, uint32_t)
constexpr uintptr_t CResGFF__AddListElement = 0x082B9E50;
// protected uint32_t CResGFF::AddStruct(uint32_t)
constexpr uintptr_t CResGFF__AddStruct = 0x082B90A8;
// public int32_t CResGFF::AddStructToStruct(CResStruct*, CResStruct*, char*, uint32_t)
constexpr uintptr_t CResGFF__AddStructToStruct = 0x082BC078;
// public int32_t CResGFF::CreateGFFFile(CResStruct*, const CExoString&, const CExoString&)
constexpr uintptr_t CResGFF__CreateGFFFile = 0x082BAAC4;
// void CResGFF::GetDataField(CResGFFField*, uint32_t&)
constexpr uintptr_t CResGFF__GetDataField = 0x082BB588;
// void CResGFF::GetDataFieldNum(void)
constexpr uintptr_t CResGFF__GetDataFieldNum = 0x082BC6B8;
// public int32_t CResGFF::GetDataFromPointer(void*, int32_t)
constexpr uintptr_t CResGFF__GetDataFromPointer = 0x082B961C;
// void CResGFF::GetDataLayoutField(CResGFFField*, uint32_t&)
constexpr uintptr_t CResGFF__GetDataLayoutField = 0x082BB5C0;
// void CResGFF::GetDataLayoutFieldNum(void)
constexpr uintptr_t CResGFF__GetDataLayoutFieldNum = 0x082BC6CC;
// void CResGFF::GetDataLayoutList(CResGFFField*, uint32_t&)
constexpr uintptr_t CResGFF__GetDataLayoutList = 0x082BB5F8;
// void CResGFF::GetDataLayoutListNum(void)
constexpr uintptr_t CResGFF__GetDataLayoutListNum = 0x082BC6E0;
// public uint32_t CResGFF::GetElementType(CResStruct*)
constexpr uintptr_t CResGFF__GetElementType = 0x082BB760;
// protected CResGFFField* CResGFF::GetField(CResStruct*, uint32_t)
constexpr uintptr_t CResGFF__GetField__0 = 0x082B8AF8;
// protected CResGFFField* CResGFF::GetField(CResGFFStruct*, uint32_t)
constexpr uintptr_t CResGFF__GetField__1 = 0x082BC708;
// protected uint32_t CResGFF::GetFieldByLabel(CResStruct*, char*)
constexpr uintptr_t CResGFF__GetFieldByLabel = 0x082B8B9C;
// public uint32_t CResGFF::GetFieldCount(CResGFFStruct*)
constexpr uintptr_t CResGFF__GetFieldCount__0 = 0x082BB79C;
// public uint32_t CResGFF::GetFieldCount(CResStruct*)
constexpr uintptr_t CResGFF__GetFieldCount__1 = 0x082BB7B8;
// void CResGFF::GetFieldLabel(CResStruct*, uint32_t)
constexpr uintptr_t CResGFF__GetFieldLabel = 0x082BB838;
// void CResGFF::GetFieldNum(void)
constexpr uintptr_t CResGFF__GetFieldNum = 0x082BC690;
// void CResGFF::GetFieldSize(CResStruct*, char*, uint32_t)
constexpr uintptr_t CResGFF__GetFieldSize = 0x082B9860;
// void CResGFF::GetFieldStringID(CResStruct*, uint32_t)
constexpr uintptr_t CResGFF__GetFieldStringID = 0x082BB888;
// void CResGFF::GetFieldType(CResStruct*, char*, uint32_t)
constexpr uintptr_t CResGFF__GetFieldType = 0x082BB7F4;
// void CResGFF::GetFileData(char*)
constexpr uintptr_t CResGFF__GetFileData = 0x082B9568;
// public void CResGFF::GetGFFFileInfo(CExoString*, CExoString*)
constexpr uintptr_t CResGFF__GetGFFFileInfo = 0x082BB70C;
// void CResGFF::GetLabel(CResStruct*, uint32_t)
constexpr uintptr_t CResGFF__GetLabel = 0x082BB544;
// void CResGFF::GetLabelNum(void)
constexpr uintptr_t CResGFF__GetLabelNum = 0x082BC6A4;
// public int32_t CResGFF::GetList(CResList*, CResStruct*, char*)
constexpr uintptr_t CResGFF__GetList = 0x082BB8F4;
// public uint32_t CResGFF::GetListCount(CResList*)
constexpr uintptr_t CResGFF__GetListCount = 0x082BB990;
// public int32_t CResGFF::GetListElement(CResStruct*, CResList*, uint32_t)
constexpr uintptr_t CResGFF__GetListElement = 0x082B9940;
// void CResGFF::GetStruct(CResStruct*)
constexpr uintptr_t CResGFF__GetStruct = 0x082BB510;
// public int32_t CResGFF::GetStructFromStruct(CResStruct*, CResStruct*, char*)
constexpr uintptr_t CResGFF__GetStructFromStruct = 0x082BBA00;
// void CResGFF::GetStructNum(void)
constexpr uintptr_t CResGFF__GetStructNum = 0x082BC67C;
// public int32_t CResGFF::GetTopLevelStruct(CResStruct*)
constexpr uintptr_t CResGFF__GetTopLevelStruct = 0x082BBA5C;
// public uint32_t CResGFF::GetTotalSize(void)
constexpr uintptr_t CResGFF__GetTotalSize = 0x082BC5C4;
// void CResGFF::GetWastedFieldSpace(void)
constexpr uintptr_t CResGFF__GetWastedFieldSpace = 0x082BC660;
// void CResGFF::GetWastedListSpace(void)
constexpr uintptr_t CResGFF__GetWastedListSpace = 0x082BC66C;
// protected void CResGFF::InitializeForWriting(void)
constexpr uintptr_t CResGFF__InitializeForWriting = 0x082B8D08;
// void CResGFF::IsDataInPlace(uint32_t)
constexpr uintptr_t CResGFF__IsDataInPlace = 0x082BB630;
// void CResGFF::IsLoaded(void)
constexpr uintptr_t CResGFF__IsLoaded = 0x082BC650;
// public int32_t CResGFF::OnResourceFreed(void)
constexpr uintptr_t CResGFF__OnResourceFreed = 0x082BB3F8;
// public int32_t CResGFF::OnResourceServiced(void)
constexpr uintptr_t CResGFF__OnResourceServiced = 0x082B8708;
// public void CResGFF::Pack(unsigned char, uint32_t)
constexpr uintptr_t CResGFF__Pack = 0x082BB120;
// public unsigned char CResGFF::ReadFieldBYTE(CResStruct*, char*, int32_t&, unsigned char)
constexpr uintptr_t CResGFF__ReadFieldBYTE = 0x082BBA7C;
// public CExoLocString CResGFF::ReadFieldCExoLocString(CResStruct*, char*, int32_t&, const CExoLocString&)
constexpr uintptr_t CResGFF__ReadFieldCExoLocString = 0x082B9BA8;
// public CExoString CResGFF::ReadFieldCExoString(CResStruct*, char*, int32_t&, const CExoString&)
constexpr uintptr_t CResGFF__ReadFieldCExoString = 0x082B9AAC;
// public char CResGFF::ReadFieldCHAR(CResStruct*, char*, int32_t&, char)
constexpr uintptr_t CResGFF__ReadFieldCHAR = 0x082BBADC;
// public CResRef CResGFF::ReadFieldCResRef(CResStruct*, char*, int32_t&, const CResRef&)
constexpr uintptr_t CResGFF__ReadFieldCResRef = 0x082B99DC;
// void CResGFF::ReadFieldDOUBLE(CResStruct*, char*, int32_t&, double)
constexpr uintptr_t CResGFF__ReadFieldDOUBLE = 0x082BBE68;
// public uint32_t CResGFF::ReadFieldDWORD(CResStruct*, char*, int32_t&, uint32_t)
constexpr uintptr_t CResGFF__ReadFieldDWORD = 0x082BBBFC;
// public uint64_t CResGFF::ReadFieldDWORD64(CResStruct*, char*, int32_t&, uint64_t)
constexpr uintptr_t CResGFF__ReadFieldDWORD64 = 0x082BBD10;
// public float CResGFF::ReadFieldFLOAT(CResStruct*, char*, int32_t&, float)
constexpr uintptr_t CResGFF__ReadFieldFLOAT = 0x082BBCB4;
// public int32_t CResGFF::ReadFieldINT(CResStruct*, char*, int32_t&, int32_t)
constexpr uintptr_t CResGFF__ReadFieldINT = 0x082BBC58;
// void CResGFF::ReadFieldINT64(CResStruct*, char*, int32_t&, int64_t)
constexpr uintptr_t CResGFF__ReadFieldINT64 = 0x082BBDBC;
// public int16_t CResGFF::ReadFieldSHORT(CResStruct*, char*, int32_t&, int16_t)
constexpr uintptr_t CResGFF__ReadFieldSHORT = 0x082BBB9C;
// public void* CResGFF::ReadFieldVOID(CResStruct*, void*, uint32_t, char*, int32_t&, void*)
constexpr uintptr_t CResGFF__ReadFieldVOID = 0x082BBF1C;
// public uint16_t CResGFF::ReadFieldWORD(CResStruct*, char*, int32_t&, uint16_t)
constexpr uintptr_t CResGFF__ReadFieldWORD = 0x082BBB3C;
// protected void CResGFF::ReleaseResource(void)
constexpr uintptr_t CResGFF__ReleaseResource = 0x082BB454;
// void CResGFF::SetFileType(char*)
constexpr uintptr_t CResGFF__SetFileType = 0x082BC630;
// void CResGFF::SetReplaceExistingFields(int32_t)
constexpr uintptr_t CResGFF__SetReplaceExistingFields = 0x082BC6F4;
// public int32_t CResGFF::WriteFieldBYTE(CResStruct*, unsigned char, char*)
constexpr uintptr_t CResGFF__WriteFieldBYTE = 0x082BC0F4;
// public int32_t CResGFF::WriteFieldCExoLocString(CResStruct*, CExoLocString, char*)
constexpr uintptr_t CResGFF__WriteFieldCExoLocString = 0x082BA650;
// public int32_t CResGFF::WriteFieldCExoString(CResStruct*, const CExoString&, char*)
constexpr uintptr_t CResGFF__WriteFieldCExoString = 0x082BA4EC;
// public int32_t CResGFF::WriteFieldCHAR(CResStruct*, char, char*)
constexpr uintptr_t CResGFF__WriteFieldCHAR = 0x082BC184;
// public int32_t CResGFF::WriteFieldCResRef(CResStruct*, const CResRef&, char*)
constexpr uintptr_t CResGFF__WriteFieldCResRef = 0x082BA368;
// void CResGFF::WriteFieldDOUBLE(CResStruct*, double, char*)
constexpr uintptr_t CResGFF__WriteFieldDOUBLE = 0x082BA20C;
// public int32_t CResGFF::WriteFieldDWORD(CResStruct*, uint32_t, char*)
constexpr uintptr_t CResGFF__WriteFieldDWORD = 0x082BC334;
// public int32_t CResGFF::WriteFieldDWORD64(CResStruct*, uint64_t, char*)
constexpr uintptr_t CResGFF__WriteFieldDWORD64 = 0x082B9F4C;
// public int32_t CResGFF::WriteFieldFLOAT(CResStruct*, float, char*)
constexpr uintptr_t CResGFF__WriteFieldFLOAT = 0x082BC444;
// public int32_t CResGFF::WriteFieldINT(CResStruct*, int32_t, char*)
constexpr uintptr_t CResGFF__WriteFieldINT = 0x082BC3BC;
// void CResGFF::WriteFieldINT64(CResStruct*, int64_t, char*)
constexpr uintptr_t CResGFF__WriteFieldINT64 = 0x082BA0AC;
// public int32_t CResGFF::WriteFieldSHORT(CResStruct*, int16_t, char*)
constexpr uintptr_t CResGFF__WriteFieldSHORT = 0x082BC2A4;
// public int32_t CResGFF::WriteFieldVOID(CResStruct*, const void*, uint32_t, char*)
constexpr uintptr_t CResGFF__WriteFieldVOID = 0x082BA9B0;
// public int32_t CResGFF::WriteFieldWORD(CResStruct*, uint16_t, char*)
constexpr uintptr_t CResGFF__WriteFieldWORD = 0x082BC214;
// public int32_t CResGFF::WriteGFFData(CExoFile&, uint32_t&)
constexpr uintptr_t CResGFF__WriteGFFData = 0x082BAD2C;
// public int32_t CResGFF::WriteGFFFile(char*)
constexpr uintptr_t CResGFF__WriteGFFFile__0 = 0x082BAFCC;
// public int32_t CResGFF::WriteGFFFile(const CExoString&, uint16_t)
constexpr uintptr_t CResGFF__WriteGFFFile__1 = 0x082BC4CC;
// public int32_t CResGFF::WriteGFFToPointer(void**, int32_t&)
constexpr uintptr_t CResGFF__WriteGFFToPointer = 0x082BAE78;

// public uint32_t CResGFFFieldIDHash::Hash(const char*, uint32_t)
constexpr uintptr_t CResGFFFieldIDHash__Hash = 0x082C5270;
// public void CResGFFFieldIDHash::Initialize(void)
constexpr uintptr_t CResGFFFieldIDHash__Initialize = 0x082C5234;

// public CResIFO::~CResIFO(void)
constexpr uintptr_t CResIFO__CResIFODtor = 0x081C1774;

// public CResLTR::CResLTR(void)
constexpr uintptr_t CResLTR__CResLTRCtor = 0x08271BC0;
// public CResLTR::~CResLTR(void)
constexpr uintptr_t CResLTR__CResLTRDtor = 0x08271C3C;
// void CResLTR::GetEndDoubleLetterProb(void)
constexpr uintptr_t CResLTR__GetEndDoubleLetterProb = 0x08271CF4;
// void CResLTR::GetEndSingleLetterProb(void)
constexpr uintptr_t CResLTR__GetEndSingleLetterProb = 0x08271D18;
// void CResLTR::GetEndTripleLetterProb(void)
constexpr uintptr_t CResLTR__GetEndTripleLetterProb = 0x08271CD0;
// void CResLTR::GetLTRHeaderPtr(void)
constexpr uintptr_t CResLTR__GetLTRHeaderPtr = 0x08271CAC;
// void CResLTR::GetMiddleDoubleLetterProb(void)
constexpr uintptr_t CResLTR__GetMiddleDoubleLetterProb = 0x08271CE8;
// void CResLTR::GetMiddleSingleLetterProb(void)
constexpr uintptr_t CResLTR__GetMiddleSingleLetterProb = 0x08271D0C;
// void CResLTR::GetMiddleTripleLetterProb(void)
constexpr uintptr_t CResLTR__GetMiddleTripleLetterProb = 0x08271CC4;
// void CResLTR::GetStartDoubleLetterProb(void)
constexpr uintptr_t CResLTR__GetStartDoubleLetterProb = 0x08271CDC;
// void CResLTR::GetStartSingleLetterProb(void)
constexpr uintptr_t CResLTR__GetStartSingleLetterProb = 0x08271D00;
// void CResLTR::GetStartTripleLetterProb(void)
constexpr uintptr_t CResLTR__GetStartTripleLetterProb = 0x08271CB8;
// public int32_t CResLTR::OnResourceFreed(void)
constexpr uintptr_t CResLTR__OnResourceFreed = 0x08271378;
// public int32_t CResLTR::OnResourceServiced(void)
constexpr uintptr_t CResLTR__OnResourceServiced = 0x08271648;

// public CResNCS::CResNCS(void)
constexpr uintptr_t CResNCS__CResNCSCtor = 0x0826A6CC;
// public CResNCS::~CResNCS(void)
constexpr uintptr_t CResNCS__CResNCSDtor = 0x0826A700;
// void CResNCS::GetNCSDataPtr(void)
constexpr uintptr_t CResNCS__GetNCSDataPtr = 0x0826A73C;
// void CResNCS::GetNCSSize(void)
constexpr uintptr_t CResNCS__GetNCSSize = 0x0826A748;
// void CResNCS::IsLoaded(void)
constexpr uintptr_t CResNCS__IsLoaded = 0x0826A754;
// public int32_t CResNCS::OnResourceFreed(void)
constexpr uintptr_t CResNCS__OnResourceFreed = 0x0826A760;
// void CResNCS::OnResourceServiced(void)
constexpr uintptr_t CResNCS__OnResourceServiced = 0x0826A784;

// public CResNDB::CResNDB(void)
constexpr uintptr_t CResNDB__CResNDBCtor = 0x0826A7EC;
// public CResNDB::~CResNDB(void)
constexpr uintptr_t CResNDB__CResNDBDtor = 0x0826A820;
// void CResNDB::GetNDBDataPtr(void)
constexpr uintptr_t CResNDB__GetNDBDataPtr = 0x0826A85C;
// void CResNDB::GetNDBSize(void)
constexpr uintptr_t CResNDB__GetNDBSize = 0x0826A868;
// void CResNDB::IsLoaded(void)
constexpr uintptr_t CResNDB__IsLoaded = 0x0826A874;
// void CResNDB::OnResourceFreed(void)
constexpr uintptr_t CResNDB__OnResourceFreed = 0x0826A880;
// public int32_t CResNDB::OnResourceServiced(void)
constexpr uintptr_t CResNDB__OnResourceServiced = 0x0826A8A4;

// public CResNSS::CResNSS(void)
constexpr uintptr_t CResNSS__CResNSSCtor = 0x0826A90C;
// public CResNSS::~CResNSS(void)
constexpr uintptr_t CResNSS__CResNSSDtor = 0x0826A940;
// void CResNSS::GetNSSDataPtr(void)
constexpr uintptr_t CResNSS__GetNSSDataPtr = 0x0826A97C;
// void CResNSS::GetNSSSize(void)
constexpr uintptr_t CResNSS__GetNSSSize = 0x0826A988;
// void CResNSS::IsLoaded(void)
constexpr uintptr_t CResNSS__IsLoaded = 0x0826A994;
// void CResNSS::OnResourceFreed(void)
constexpr uintptr_t CResNSS__OnResourceFreed = 0x0826A9A0;
// void CResNSS::OnResourceServiced(void)
constexpr uintptr_t CResNSS__OnResourceServiced = 0x0826A9C4;

// public CResPWK::CResPWK(void)
constexpr uintptr_t CResPWK__CResPWKCtor = 0x082405B4;
// public CResPWK::~CResPWK(void)
constexpr uintptr_t CResPWK__CResPWKDtor = 0x082405F0;
// void CResPWK::GetPWKDataPtr(void)
constexpr uintptr_t CResPWK__GetPWKDataPtr = 0x0824062C;
// void CResPWK::GetPWKSize(void)
constexpr uintptr_t CResPWK__GetPWKSize = 0x08240638;
// void CResPWK::IsLoaded(void)
constexpr uintptr_t CResPWK__IsLoaded = 0x08240644;
// void CResPWK::OnResourceFreed(void)
constexpr uintptr_t CResPWK__OnResourceFreed = 0x08240650;
// void CResPWK::OnResourceServiced(void)
constexpr uintptr_t CResPWK__OnResourceServiced = 0x08240674;

// public CResRef::CResRef(void)
constexpr uintptr_t CResRef__CResRefCtor__0 = 0x082B322C;
// public CResRef::CResRef(const CExoString&)
constexpr uintptr_t CResRef__CResRefCtor__1 = 0x082B3244;
// public CResRef::CResRef(char*)
constexpr uintptr_t CResRef__CResRefCtor__2 = 0x082B3260;
// public CResRef::CResRef(unsigned char*)
constexpr uintptr_t CResRef__CResRefCtor__3 = 0x082B327C;
// public CResRef::CResRef(unsigned char*, unsigned char)
constexpr uintptr_t CResRef__CResRefCtor__4 = 0x082B3298;
// void CResRef::__apl(const CExoString&)
constexpr uintptr_t CResRef____apl = 0x082AEB2C;
// void CResRef::__as(const CExoString&)
constexpr uintptr_t CResRef____as__0 = 0x082AEA8C;
// void CResRef::__as(const CResRef&)
constexpr uintptr_t CResRef____as__1 = 0x082B347C;
// void CResRef::__as(unsigned char*)
constexpr uintptr_t CResRef____as__2 = 0x082B34C8;
// void CResRef::__as(char*)
constexpr uintptr_t CResRef____as__3 = 0x082B3544;
// void CResRef::__eq(char*) const
constexpr uintptr_t CResRef____eq__0 = 0x082AEA24;
// void CResRef::__eq(const CResRef&) const
constexpr uintptr_t CResRef____eq__1 = 0x082B33F4;
// void CResRef::__eq(const CExoString&) const
constexpr uintptr_t CResRef____eq__2 = 0x082B3418;
// void CResRef::__ne(char*) const
constexpr uintptr_t CResRef____ne__0 = 0x082AE9C0;
// void CResRef::__ne(const CResRef&) const
constexpr uintptr_t CResRef____ne__1 = 0x082B33B4;
// void CResRef::__ne(const CExoString&) const
constexpr uintptr_t CResRef____ne__2 = 0x082B33D4;
// void CResRef::__nt(void)
constexpr uintptr_t CResRef____nt = 0x082B346C;
// public void CResRef::CopyToString(CExoString&) const
constexpr uintptr_t CResRef__CopyToString__0 = 0x082B3304;
// public void CResRef::CopyToString(char*) const
constexpr uintptr_t CResRef__CopyToString__1 = 0x082B3338;
// public unsigned char CResRef::GetLength(void) const
constexpr uintptr_t CResRef__GetLength = 0x082B3398;
// void CResRef::GetResRef(void) const
constexpr uintptr_t CResRef__GetResRef__0 = 0x082B3358;
// void CResRef::GetResRef(unsigned char*) const
constexpr uintptr_t CResRef__GetResRef__1 = 0x082B35B0;
// public char* CResRef::GetResRefStr(void) const
constexpr uintptr_t CResRef__GetResRefStr = 0x082B3360;
// void CResRef::IsValid(void) const
constexpr uintptr_t CResRef__IsValid = 0x082B3388;

// public CResSET::CResSET(void)
constexpr uintptr_t CResSET__CResSETCtor = 0x08095658;
// public CResSET::~CResSET(void)
constexpr uintptr_t CResSET__CResSETDtor = 0x08095694;
// void CResSET::CopySETData(unsigned char*)
constexpr uintptr_t CResSET__CopySETData = 0x080956D0;
// public int32_t CResSET::CreateSectionTable(void)
constexpr uintptr_t CResSET__CreateSectionTable = 0x08094FE8;
// void CResSET::GetNextLine(uint32_t, uint32_t*)
constexpr uintptr_t CResSET__GetNextLine = 0x080958DC;
// public void CResSET::GetSectionEntryValue(char*, char*, char*)
constexpr uintptr_t CResSET__GetSectionEntryValue = 0x080957F4;
// void CResSET::GetSETDataPtr(void)
constexpr uintptr_t CResSET__GetSETDataPtr = 0x08095700;
// void CResSET::GetSETSize(void)
constexpr uintptr_t CResSET__GetSETSize = 0x0809570C;
// void CResSET::IsLoaded(void)
constexpr uintptr_t CResSET__IsLoaded = 0x08095718;
// public int32_t CResSET::OnResourceFreed(void)
constexpr uintptr_t CResSET__OnResourceFreed = 0x08094EE0;
// public int32_t CResSET::OnResourceServiced(void)
constexpr uintptr_t CResSET__OnResourceServiced = 0x08095724;
// void CResSET::SkipWhiteSpace(char*)
constexpr uintptr_t CResSET__SkipWhiteSpace = 0x08095930;

// public CResTGA::CResTGA(void)
constexpr uintptr_t CResTGA__CResTGACtor = 0x082BCE00;
// public CResTGA::~CResTGA(void)
constexpr uintptr_t CResTGA__CResTGADtor = 0x082BCE68;
// void CResTGA::CopyTGAData(unsigned char*)
constexpr uintptr_t CResTGA__CopyTGAData = 0x082BCEA4;
// void CResTGA::GetTGAAttrib(uint32_t*, uint32_t*, unsigned char*)
constexpr uintptr_t CResTGA__GetTGAAttrib = 0x082BCED4;
// void CResTGA::GetTGAColorMapPtr(void)
constexpr uintptr_t CResTGA__GetTGAColorMapPtr = 0x082BCF0C;
// void CResTGA::GetTGADataPtr(void)
constexpr uintptr_t CResTGA__GetTGADataPtr = 0x082BCF18;
// void CResTGA::GetTGAHeaderPtr(void)
constexpr uintptr_t CResTGA__GetTGAHeaderPtr = 0x082BCF24;
// void CResTGA::GetTGASize(void)
constexpr uintptr_t CResTGA__GetTGASize = 0x082BCF30;
// void CResTGA::IsColorMapped(void)
constexpr uintptr_t CResTGA__IsColorMapped = 0x082BCF3C;
// void CResTGA::IsCompressed(void)
constexpr uintptr_t CResTGA__IsCompressed = 0x082BCF48;
// void CResTGA::IsLoaded(void)
constexpr uintptr_t CResTGA__IsLoaded = 0x082BCF54;
// public int32_t CResTGA::OnResourceFreed(void)
constexpr uintptr_t CResTGA__OnResourceFreed = 0x082BCF60;
// public int32_t CResTGA::OnResourceServiced(void)
constexpr uintptr_t CResTGA__OnResourceServiced = 0x082BC778;
// private int32_t CResTGA::ReadColorMappedRLETGA(void)
constexpr uintptr_t CResTGA__ReadColorMappedRLETGA = 0x082BCB74;
// private int32_t CResTGA::ReadUnmappedRLETGA(void)
constexpr uintptr_t CResTGA__ReadUnmappedRLETGA = 0x082BCC28;
// public int32_t CResTGA::Write(CExoString&)
constexpr uintptr_t CResTGA__Write = 0x082BC9BC;

// public CResWOK::CResWOK(void)
constexpr uintptr_t CResWOK__CResWOKCtor = 0x0809597C;
// public CResWOK::~CResWOK(void)
constexpr uintptr_t CResWOK__CResWOKDtor = 0x080959B0;
// public unsigned char* CResWOK::GetWOKDataPtr(void)
constexpr uintptr_t CResWOK__GetWOKDataPtr = 0x080959EC;
// void CResWOK::GetWOKSize(void)
constexpr uintptr_t CResWOK__GetWOKSize = 0x080959F8;
// void CResWOK::IsLoaded(void)
constexpr uintptr_t CResWOK__IsLoaded = 0x08095A04;
// void CResWOK::OnResourceFreed(void)
constexpr uintptr_t CResWOK__OnResourceFreed = 0x08095A10;
// void CResWOK::OnResourceServiced(void)
constexpr uintptr_t CResWOK__OnResourceServiced = 0x08095A34;

// CScriptCompiler::CScriptCompiler(void)
constexpr uintptr_t CScriptCompiler__CScriptCompilerCtor = 0x08242F2C;
// CScriptCompiler::~CScriptCompiler(void)
constexpr uintptr_t CScriptCompiler__CScriptCompilerDtor = 0x08243724;
// void CScriptCompiler::AddStructureToStack(const CExoString&, int32_t)
constexpr uintptr_t CScriptCompiler__AddStructureToStack = 0x08252C30;
// void CScriptCompiler::AddSymbolToLabelList(int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CScriptCompiler__AddSymbolToLabelList = 0x08252F48;
// void CScriptCompiler::AddSymbolToQueryList(int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CScriptCompiler__AddSymbolToQueryList = 0x082530E8;
// void CScriptCompiler::AddToGlobalVariableList(CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__AddToGlobalVariableList = 0x0825E4FC;
// void CScriptCompiler::AddToSymbolTableVarStack(int32_t, int32_t, int32_t)
constexpr uintptr_t CScriptCompiler__AddToSymbolTableVarStack = 0x08253538;
// void CScriptCompiler::AddUserDefinedIdentifier(CScriptParseTreeNode*, int32_t)
constexpr uintptr_t CScriptCompiler__AddUserDefinedIdentifier = 0x0825CFC4;
// void CScriptCompiler::AddVariableToStack(int32_t, CExoString*, int32_t)
constexpr uintptr_t CScriptCompiler__AddVariableToStack = 0x08252AA8;
// void CScriptCompiler::CheckForBadLValue(CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__CheckForBadLValue = 0x0825E4BC;
// void CScriptCompiler::CleanUpAfterCompile(int32_t, CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__CleanUpAfterCompile = 0x08248C60;
// void CScriptCompiler::CleanUpAfterCompiles(void)
constexpr uintptr_t CScriptCompiler__CleanUpAfterCompiles = 0x08245D78;
// void CScriptCompiler::CleanUpDuringCompile(int32_t)
constexpr uintptr_t CScriptCompiler__CleanUpDuringCompile = 0x0825E11C;
// void CScriptCompiler::ClearAllSymbolLists(void)
constexpr uintptr_t CScriptCompiler__ClearAllSymbolLists = 0x08254F10;
// void CScriptCompiler::ClearCompiledScriptCode(void)
constexpr uintptr_t CScriptCompiler__ClearCompiledScriptCode = 0x08247F90;
// void CScriptCompiler::ClearSwitchLabelList(void)
constexpr uintptr_t CScriptCompiler__ClearSwitchLabelList = 0x0824A0B8;
// void CScriptCompiler::ClearUserDefinedIdentifiers(void)
constexpr uintptr_t CScriptCompiler__ClearUserDefinedIdentifiers = 0x0824897C;
// void CScriptCompiler::CompileFile(const CExoString&)
constexpr uintptr_t CScriptCompiler__CompileFile = 0x08245E8C;
// void CScriptCompiler::CompileScriptChunk(const CExoString&)
constexpr uintptr_t CScriptCompiler__CompileScriptChunk = 0x08246248;
// void CScriptCompiler::CompileScriptConditional(const CExoString&)
constexpr uintptr_t CScriptCompiler__CompileScriptConditional = 0x0824632C;
// void CScriptCompiler::CreateScriptParseTreeNode(int32_t, CScriptParseTreeNode*, CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__CreateScriptParseTreeNode = 0x08258388;
// void CScriptCompiler::DeleteCompileStack(void)
constexpr uintptr_t CScriptCompiler__DeleteCompileStack = 0x0825E560;
// void CScriptCompiler::DeleteParseTree(int32_t, CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__DeleteParseTree = 0x08247E38;
// void CScriptCompiler::DeleteScriptParseTreeNode(CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__DeleteScriptParseTreeNode = 0x0825E404;
// void CScriptCompiler::DetermineLocationOfCode(void)
constexpr uintptr_t CScriptCompiler__DetermineLocationOfCode = 0x082493C4;
// void CScriptCompiler::DuplicateScriptParseTree(CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__DuplicateScriptParseTree = 0x082584DC;
// void CScriptCompiler::EndLineNumberAtBinaryInstruction(int32_t, int32_t, int32_t)
constexpr uintptr_t CScriptCompiler__EndLineNumberAtBinaryInstruction = 0x08253304;
// void CScriptCompiler::FinalizeFinalCode(void)
constexpr uintptr_t CScriptCompiler__FinalizeFinalCode = 0x08254E80;
// void CScriptCompiler::FoundReturnStatementOnAllBranches(CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__FoundReturnStatementOnAllBranches = 0x08252A08;
// void CScriptCompiler::GenerateCodeForSwitchLabels(CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__GenerateCodeForSwitchLabels = 0x08255000;
// void CScriptCompiler::GenerateDebuggerTypeAbbreviation(int32_t, CExoString)
constexpr uintptr_t CScriptCompiler__GenerateDebuggerTypeAbbreviation = 0x08253E6C;
// void CScriptCompiler::GenerateFinalCodeFromParseTree(CExoString)
constexpr uintptr_t CScriptCompiler__GenerateFinalCodeFromParseTree = 0x08248440;
// void CScriptCompiler::GenerateIdentifierList(void)
constexpr uintptr_t CScriptCompiler__GenerateIdentifierList = 0x08255378;
// void CScriptCompiler::GenerateIdentifiersFromConstantVariables(CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__GenerateIdentifiersFromConstantVariables = 0x0824A214;
// void CScriptCompiler::GenerateParseTree(void)
constexpr uintptr_t CScriptCompiler__GenerateParseTree = 0x08258610;
// void CScriptCompiler::GetCompiledScriptCode(char**, int32_t*)
constexpr uintptr_t CScriptCompiler__GetCompiledScriptCode = 0x08247F6C;
// void CScriptCompiler::GetFunctionNameFromSymbolSubTypes(int32_t, int32_t)
constexpr uintptr_t CScriptCompiler__GetFunctionNameFromSymbolSubTypes = 0x08252E54;
// void CScriptCompiler::GetHashEntryByName(const char*)
constexpr uintptr_t CScriptCompiler__GetHashEntryByName = 0x08245640;
// void CScriptCompiler::GetIdentifierByName(const CExoString&)
constexpr uintptr_t CScriptCompiler__GetIdentifierByName = 0x08255114;
// void CScriptCompiler::GetNewScriptParseTreeNode(void)
constexpr uintptr_t CScriptCompiler__GetNewScriptParseTreeNode = 0x08258020;
// void CScriptCompiler::GetStructureField(const CExoString&, const CExoString&)
constexpr uintptr_t CScriptCompiler__GetStructureField = 0x082551C8;
// void CScriptCompiler::GetStructureSize(const CExoString&)
constexpr uintptr_t CScriptCompiler__GetStructureSize = 0x082550BC;
// void CScriptCompiler::HandleIdentifierToken(void)
constexpr uintptr_t CScriptCompiler__HandleIdentifierToken = 0x08257E94;
// void CScriptCompiler::HandleToken(void)
constexpr uintptr_t CScriptCompiler__HandleToken = 0x08257E54;
// void CScriptCompiler::HashManagerAdd(uint32_t, uint32_t)
constexpr uintptr_t CScriptCompiler__HashManagerAdd = 0x082457B8;
// void CScriptCompiler::HashManagerDelete(uint32_t, uint32_t)
constexpr uintptr_t CScriptCompiler__HashManagerDelete = 0x08245980;
// void CScriptCompiler::HashString(const char*)
constexpr uintptr_t CScriptCompiler__HashString__0 = 0x08247BE8;
// void CScriptCompiler::HashString(const CExoString&)
constexpr uintptr_t CScriptCompiler__HashString__1 = 0x08247C44;
// void CScriptCompiler::Initialize(void)
constexpr uintptr_t CScriptCompiler__Initialize = 0x08243C90;
// void CScriptCompiler::InitializeFinalCode(void)
constexpr uintptr_t CScriptCompiler__InitializeFinalCode = 0x08254E0C;
// void CScriptCompiler::InitializeIncludeFile(int32_t)
constexpr uintptr_t CScriptCompiler__InitializeIncludeFile = 0x08247D78;
// void CScriptCompiler::InitializePreDefinedStructures(void)
constexpr uintptr_t CScriptCompiler__InitializePreDefinedStructures = 0x08247CB0;
// void CScriptCompiler::InitializeSwitchLabelList(void)
constexpr uintptr_t CScriptCompiler__InitializeSwitchLabelList = 0x08254FC0;
// void CScriptCompiler::InsertGlobalVariablesInParseTree(CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__InsertGlobalVariablesInParseTree = 0x08254F88;
// void CScriptCompiler::InstallLoader(void)
constexpr uintptr_t CScriptCompiler__InstallLoader = 0x08248E40;
// void CScriptCompiler::InVisitGenerateCode(CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__InVisitGenerateCode = 0x0824BA14;
// void CScriptCompiler::ModifySRStackReturnTree(CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__ModifySRStackReturnTree = 0x0825E3E0;
// void CScriptCompiler::OutputError(int32_t, CExoString*, int32_t, const CExoString&)
constexpr uintptr_t CScriptCompiler__OutputError = 0x08246410;
// void CScriptCompiler::OutputIdentifierError(const CExoString&, int32_t, int32_t)
constexpr uintptr_t CScriptCompiler__OutputIdentifierError = 0x08249660;
// void CScriptCompiler::OutputWalkTreeError(int32_t, CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__OutputWalkTreeError = 0x08248D4C;
// void CScriptCompiler::ParseCharacterAlphabet(int32_t)
constexpr uintptr_t CScriptCompiler__ParseCharacterAlphabet = 0x08256598;
// void CScriptCompiler::ParseCharacterAmpersand(int32_t)
constexpr uintptr_t CScriptCompiler__ParseCharacterAmpersand = 0x082576B8;
// void CScriptCompiler::ParseCharacterAsterisk(int32_t)
constexpr uintptr_t CScriptCompiler__ParseCharacterAsterisk = 0x0825779C;
// void CScriptCompiler::ParseCharacterCarat(int32_t)
constexpr uintptr_t CScriptCompiler__ParseCharacterCarat = 0x08257CE0;
// void CScriptCompiler::ParseCharacterColon(void)
constexpr uintptr_t CScriptCompiler__ParseCharacterColon = 0x08257E20;
// void CScriptCompiler::ParseCharacterComma(void)
constexpr uintptr_t CScriptCompiler__ParseCharacterComma = 0x08257D6C;
// void CScriptCompiler::ParseCharacterEllipsis(void)
constexpr uintptr_t CScriptCompiler__ParseCharacterEllipsis = 0x08257DA0;
// void CScriptCompiler::ParseCharacterEqualSign(int32_t)
constexpr uintptr_t CScriptCompiler__ParseCharacterEqualSign = 0x08257B80;
// void CScriptCompiler::ParseCharacterExclamationPoint(int32_t)
constexpr uintptr_t CScriptCompiler__ParseCharacterExclamationPoint = 0x08257B24;
// void CScriptCompiler::ParseCharacterHyphen(int32_t)
constexpr uintptr_t CScriptCompiler__ParseCharacterHyphen = 0x08257978;
// void CScriptCompiler::ParseCharacterLeftAngle(int32_t)
constexpr uintptr_t CScriptCompiler__ParseCharacterLeftAngle = 0x08256754;
// void CScriptCompiler::ParseCharacterLeftBrace(void)
constexpr uintptr_t CScriptCompiler__ParseCharacterLeftBrace = 0x082579EC;
// void CScriptCompiler::ParseCharacterLeftBracket(void)
constexpr uintptr_t CScriptCompiler__ParseCharacterLeftBracket = 0x08257A54;
// void CScriptCompiler::ParseCharacterLeftSquareBracket(void)
constexpr uintptr_t CScriptCompiler__ParseCharacterLeftSquareBracket = 0x08257ABC;
// void CScriptCompiler::ParseCharacterNumeric(int32_t)
constexpr uintptr_t CScriptCompiler__ParseCharacterNumeric = 0x082575A8;
// void CScriptCompiler::ParseCharacterPercentSign(int32_t)
constexpr uintptr_t CScriptCompiler__ParseCharacterPercentSign = 0x08257C50;
// void CScriptCompiler::ParseCharacterPeriod(void)
constexpr uintptr_t CScriptCompiler__ParseCharacterPeriod = 0x082564E8;
// void CScriptCompiler::ParseCharacterPlusSign(int32_t)
constexpr uintptr_t CScriptCompiler__ParseCharacterPlusSign = 0x08257BDC;
// void CScriptCompiler::ParseCharacterQuestionMark(void)
constexpr uintptr_t CScriptCompiler__ParseCharacterQuestionMark = 0x08257DEC;
// void CScriptCompiler::ParseCharacterQuotationMark(void)
constexpr uintptr_t CScriptCompiler__ParseCharacterQuotationMark = 0x08257930;
// void CScriptCompiler::ParseCharacterRightAngle(int32_t)
constexpr uintptr_t CScriptCompiler__ParseCharacterRightAngle = 0x08256678;
// void CScriptCompiler::ParseCharacterRightBrace(void)
constexpr uintptr_t CScriptCompiler__ParseCharacterRightBrace = 0x08257A20;
// void CScriptCompiler::ParseCharacterRightBracket(void)
constexpr uintptr_t CScriptCompiler__ParseCharacterRightBracket = 0x08257A88;
// void CScriptCompiler::ParseCharacterRightSquareBracket(void)
constexpr uintptr_t CScriptCompiler__ParseCharacterRightSquareBracket = 0x08257AF0;
// void CScriptCompiler::ParseCharacterSemicolon(void)
constexpr uintptr_t CScriptCompiler__ParseCharacterSemicolon = 0x08257CAC;
// void CScriptCompiler::ParseCharacterSlash(int32_t)
constexpr uintptr_t CScriptCompiler__ParseCharacterSlash = 0x0825762C;
// void CScriptCompiler::ParseCharacterTilde(void)
constexpr uintptr_t CScriptCompiler__ParseCharacterTilde = 0x08257D38;
// void CScriptCompiler::ParseCharacterVerticalBar(int32_t)
constexpr uintptr_t CScriptCompiler__ParseCharacterVerticalBar = 0x08257728;
// void CScriptCompiler::ParseCommentedOutCharacter(int32_t)
constexpr uintptr_t CScriptCompiler__ParseCommentedOutCharacter = 0x082577F4;
// void CScriptCompiler::ParseFloatFromTokenString(void)
constexpr uintptr_t CScriptCompiler__ParseFloatFromTokenString = 0x08256428;
// void CScriptCompiler::ParseIdentifierFile(void)
constexpr uintptr_t CScriptCompiler__ParseIdentifierFile = 0x0825625C;
// void CScriptCompiler::ParseNextCharacter(int32_t, int32_t)
constexpr uintptr_t CScriptCompiler__ParseNextCharacter = 0x0825695C;
// void CScriptCompiler::ParseSource(char*, int32_t)
constexpr uintptr_t CScriptCompiler__ParseSource = 0x0825E1CC;
// void CScriptCompiler::ParseStringCharacter(int32_t, int32_t)
constexpr uintptr_t CScriptCompiler__ParseStringCharacter = 0x08257874;
// void CScriptCompiler::PopSRStack(int32_t*, int32_t*, int32_t*, CScriptParseTreeNode**, CScriptParseTreeNode**)
constexpr uintptr_t CScriptCompiler__PopSRStack = 0x0825E328;
// void CScriptCompiler::PostVisitGenerateCode(CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__PostVisitGenerateCode = 0x0824C7E4;
// void CScriptCompiler::PreVisitGenerateCode(CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__PreVisitGenerateCode = 0x0824A688;
// void CScriptCompiler::PrintBinaryAddress(void)
constexpr uintptr_t CScriptCompiler__PrintBinaryAddress = 0x08255090;
// void CScriptCompiler::PrintParseIdentifierFileError(int32_t)
constexpr uintptr_t CScriptCompiler__PrintParseIdentifierFileError = 0x08256188;
// void CScriptCompiler::PrintParseSourceError(int32_t)
constexpr uintptr_t CScriptCompiler__PrintParseSourceError = 0x0825DFA8;
// void CScriptCompiler::PushSRStack(int32_t, int32_t, int32_t, CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__PushSRStack = 0x08257EF0;
// void CScriptCompiler::RemoveFromSymbolTableVarStack(int32_t, int32_t, int32_t)
constexpr uintptr_t CScriptCompiler__RemoveFromSymbolTableVarStack = 0x08253888;
// void CScriptCompiler::ResolveDebuggingInformation(void)
constexpr uintptr_t CScriptCompiler__ResolveDebuggingInformation = 0x082552E8;
// void CScriptCompiler::ResolveDebuggingInformationForIdentifier(int32_t)
constexpr uintptr_t CScriptCompiler__ResolveDebuggingInformationForIdentifier = 0x08253C64;
// void CScriptCompiler::ResolveLabels(void)
constexpr uintptr_t CScriptCompiler__ResolveLabels = 0x082497A0;
// void CScriptCompiler::SetAutomaticCleanUpAfterCompiles(int32_t)
constexpr uintptr_t CScriptCompiler__SetAutomaticCleanUpAfterCompiles = 0x08247F58;
// void CScriptCompiler::SetCompileConditionalFile(int32_t)
constexpr uintptr_t CScriptCompiler__SetCompileConditionalFile = 0x08247F30;
// void CScriptCompiler::SetCompileConditionalOrMain(int32_t)
constexpr uintptr_t CScriptCompiler__SetCompileConditionalOrMain = 0x08247F44;
// void CScriptCompiler::SetCompileDebugLevel(int32_t)
constexpr uintptr_t CScriptCompiler__SetCompileDebugLevel = 0x08247EC8;
// void CScriptCompiler::SetCompileSymbolicOutput(int32_t)
constexpr uintptr_t CScriptCompiler__SetCompileSymbolicOutput = 0x08247EF0;
// void CScriptCompiler::SetGenerateDebuggerOutput(int32_t)
constexpr uintptr_t CScriptCompiler__SetGenerateDebuggerOutput = 0x08247EDC;
// void CScriptCompiler::SetIdentifierSpecification(const CExoString&)
constexpr uintptr_t CScriptCompiler__SetIdentifierSpecification = 0x08245B64;
// void CScriptCompiler::SetOptimizeBinaryCodeLength(int32_t)
constexpr uintptr_t CScriptCompiler__SetOptimizeBinaryCodeLength = 0x08247F1C;
// void CScriptCompiler::SetOutputAlias(const CExoString&)
constexpr uintptr_t CScriptCompiler__SetOutputAlias = 0x08247F04;
// void CScriptCompiler::ShutDown(void)
constexpr uintptr_t CScriptCompiler__ShutDown = 0x08243A24;
// void CScriptCompiler::ShutdownIncludeFile(int32_t)
constexpr uintptr_t CScriptCompiler__ShutdownIncludeFile = 0x08247DE8;
// void CScriptCompiler::StartLineNumberAtBinaryInstruction(int32_t, int32_t, int32_t)
constexpr uintptr_t CScriptCompiler__StartLineNumberAtBinaryInstruction = 0x0825527C;
// void CScriptCompiler::Test_CompareDirectoryContents(CExoString&, CExoString&)
constexpr uintptr_t CScriptCompiler__Test_CompareDirectoryContents = 0x08246E3C;
// void CScriptCompiler::Test_CompareFileInclusion(CExoString&, CExoString&, CExoStringList*, uint16_t)
constexpr uintptr_t CScriptCompiler__Test_CompareFileInclusion = 0x08247610;
// void CScriptCompiler::Test_CompileAllScriptsInDirectory(CExoString&, CExoString&, CExoString&)
constexpr uintptr_t CScriptCompiler__Test_CompileAllScriptsInDirectory = 0x0824665C;
// void CScriptCompiler::TestIdentifierToken(void)
constexpr uintptr_t CScriptCompiler__TestIdentifierToken = 0x082567F4;
// void CScriptCompiler::TokenInitialize(void)
constexpr uintptr_t CScriptCompiler__TokenInitialize = 0x0825E30C;
// void CScriptCompiler::TraverseTreeForSwitchLabels(CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__TraverseTreeForSwitchLabels = 0x08249C98;
// void CScriptCompiler::ValidateLocationOfIdentifier(const CExoString&)
constexpr uintptr_t CScriptCompiler__ValidateLocationOfIdentifier = 0x082494A0;
// void CScriptCompiler::WalkParseTree(CScriptParseTreeNode*)
constexpr uintptr_t CScriptCompiler__WalkParseTree = 0x08253210;
// void CScriptCompiler::WriteDebuggerOutputToFile(CExoString)
constexpr uintptr_t CScriptCompiler__WriteDebuggerOutputToFile = 0x08254014;
// void CScriptCompiler::WriteFinalCodeToFile(const CExoString&)
constexpr uintptr_t CScriptCompiler__WriteFinalCodeToFile = 0x08248670;
// void CScriptCompiler::WriteResolvedOutput(void)
constexpr uintptr_t CScriptCompiler__WriteResolvedOutput = 0x0824A580;

// CScriptCompilerIdListEntry::CScriptCompilerIdListEntry(void)
constexpr uintptr_t CScriptCompilerIdListEntry__CScriptCompilerIdListEntryCtor = 0x082427EC;
// CScriptCompilerIdListEntry::~CScriptCompilerIdListEntry(void)
constexpr uintptr_t CScriptCompilerIdListEntry__CScriptCompilerIdListEntryDtor = 0x082428FC;
// void CScriptCompilerIdListEntry::ExpandParameterSpace(void)
constexpr uintptr_t CScriptCompilerIdListEntry__ExpandParameterSpace = 0x08242A38;

// public CScriptEvent::CScriptEvent(void)
constexpr uintptr_t CScriptEvent__CScriptEventCtor = 0x080610BC;
// public CScriptEvent::~CScriptEvent(void)
constexpr uintptr_t CScriptEvent__CScriptEventDtor = 0x0806189C;
// void CScriptEvent::__eq(const CScriptEvent&) const
constexpr uintptr_t CScriptEvent____eq = 0x080617B0;
// void CScriptEvent::__ne(const CScriptEvent&) const
constexpr uintptr_t CScriptEvent____ne = 0x08061B4C;
// public void CScriptEvent::CopyScriptEvent(CScriptEvent*)
constexpr uintptr_t CScriptEvent__CopyScriptEvent = 0x08061164;
// public float CScriptEvent::GetFloat(int32_t)
constexpr uintptr_t CScriptEvent__GetFloat = 0x080619A4;
// void CScriptEvent::GetInteger(int32_t)
constexpr uintptr_t CScriptEvent__GetInteger = 0x08061938;
// public uint32_t CScriptEvent::GetObjectID(int32_t)
constexpr uintptr_t CScriptEvent__GetObjectID = 0x08061A10;
// void CScriptEvent::GetString(int32_t)
constexpr uintptr_t CScriptEvent__GetString = 0x08061A80;
// public int32_t CScriptEvent::LoadEvent(CResGFF*, CResStruct*)
constexpr uintptr_t CScriptEvent__LoadEvent = 0x0806147C;
// public int32_t CScriptEvent::SaveEvent(CResGFF*, CResStruct*)
constexpr uintptr_t CScriptEvent__SaveEvent = 0x080612A8;
// public void CScriptEvent::SetFloat(int32_t, float)
constexpr uintptr_t CScriptEvent__SetFloat = 0x080619D0;
// public void CScriptEvent::SetInteger(int32_t, int32_t)
constexpr uintptr_t CScriptEvent__SetInteger = 0x08061964;
// void CScriptEvent::SetObjectID(int32_t, uint32_t)
constexpr uintptr_t CScriptEvent__SetObjectID = 0x08061A40;
// public void CScriptEvent::SetString(int32_t, CExoString)
constexpr uintptr_t CScriptEvent__SetString = 0x08061AC8;

// public CScriptLocation::CScriptLocation(void)
constexpr uintptr_t CScriptLocation__CScriptLocationCtor = 0x081D433C;
// CScriptLocation::~CScriptLocation(void)
constexpr uintptr_t CScriptLocation__CScriptLocationDtor = 0x081D4378;
// public void CScriptLocation::CopyScriptLocation(CScriptLocation*)
constexpr uintptr_t CScriptLocation__CopyScriptLocation = 0x081D4394;
// public int32_t CScriptLocation::LoadLocation(CResGFF*, CResStruct*)
constexpr uintptr_t CScriptLocation__LoadLocation = 0x081C86F8;
// public int32_t CScriptLocation::SaveLocation(CResGFF*, CResStruct*)
constexpr uintptr_t CScriptLocation__SaveLocation = 0x081D43C8;

// public CScriptSourceFile::CScriptSourceFile(void)
constexpr uintptr_t CScriptSourceFile__CScriptSourceFileCtor = 0x08247B24;
// public CScriptSourceFile::~CScriptSourceFile(void)
constexpr uintptr_t CScriptSourceFile__CScriptSourceFileDtor = 0x08248124;
// public int32_t CScriptSourceFile::LoadScript(const CExoString&, char**, uint32_t*)
constexpr uintptr_t CScriptSourceFile__LoadScript = 0x08247B44;
// public void CScriptSourceFile::UnloadScript(void)
constexpr uintptr_t CScriptSourceFile__UnloadScript = 0x08247BAC;

// public CScriptTalent::CScriptTalent(void)
constexpr uintptr_t CScriptTalent__CScriptTalentCtor = 0x081D445C;
// CScriptTalent::~CScriptTalent(void)
constexpr uintptr_t CScriptTalent__CScriptTalentDtor = 0x081D448C;
// public void CScriptTalent::CopyScriptTalent(CScriptTalent*)
constexpr uintptr_t CScriptTalent__CopyScriptTalent = 0x081D44A8;
// public int32_t CScriptTalent::Equals(CScriptTalent*)
constexpr uintptr_t CScriptTalent__Equals = 0x081D4644;
// public int32_t CScriptTalent::LoadTalent(CResGFF*, CResStruct*)
constexpr uintptr_t CScriptTalent__LoadTalent = 0x081D457C;
// public int32_t CScriptTalent::SaveTalent(CResGFF*, CResStruct*)
constexpr uintptr_t CScriptTalent__SaveTalent = 0x081D44E0;

// void CServerAIBodyBagInfo::LoadBodyBag(CResGFF*, CResStruct*)
constexpr uintptr_t CServerAIBodyBagInfo__LoadBodyBag = 0x080985D8;
// void CServerAIBodyBagInfo::SaveBodyBag(CResGFF*, CResStruct*)
constexpr uintptr_t CServerAIBodyBagInfo__SaveBodyBag = 0x08098578;

// public int32_t CServerAIEventNode::LoadNode(CResGFF*, CResStruct*)
constexpr uintptr_t CServerAIEventNode__LoadNode = 0x08097A4C;
// public int32_t CServerAIEventNode::SaveNode(CResGFF*, CResStruct*)
constexpr uintptr_t CServerAIEventNode__SaveNode = 0x0809774C;

// CServerAIList::CServerAIList(void)
constexpr uintptr_t CServerAIList__CServerAIListCtor = 0x08097F7C;
// CServerAIList::~CServerAIList(void)
constexpr uintptr_t CServerAIList__CServerAIListDtor = 0x08097FA0;
// void CServerAIList::AddObject(uint32_t)
constexpr uintptr_t CServerAIList__AddObject = 0x08097FD4;
// void CServerAIList::GetNextObject(void)
constexpr uintptr_t CServerAIList__GetNextObject = 0x08098038;
// void CServerAIList::RemoveObject(uint32_t)
constexpr uintptr_t CServerAIList__RemoveObject = 0x08097FF0;

// public CServerAIMaster::CServerAIMaster(void)
constexpr uintptr_t CServerAIMaster__CServerAIMasterCtor = 0x08095A9C;
// public CServerAIMaster::~CServerAIMaster(void)
constexpr uintptr_t CServerAIMaster__CServerAIMasterDtor = 0x08095C28;
// public int32_t CServerAIMaster::AddEventAbsoluteTime(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, void*)
constexpr uintptr_t CServerAIMaster__AddEventAbsoluteTime = 0x0809813C;
// public int32_t CServerAIMaster::AddEventAbsoluteTimeViaTail(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, void*)
constexpr uintptr_t CServerAIMaster__AddEventAbsoluteTimeViaTail = 0x0809820C;
// public int32_t CServerAIMaster::AddEventDeltaTime(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, void*)
constexpr uintptr_t CServerAIMaster__AddEventDeltaTime = 0x08096388;
// public int32_t CServerAIMaster::AddObject(CNWSObject*, int32_t)
constexpr uintptr_t CServerAIMaster__AddObject = 0x080980E0;
// public void CServerAIMaster::AdjustTargetAndWitnessReputations(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CServerAIMaster__AdjustTargetAndWitnessReputations = 0x08096480;
// public void CServerAIMaster::ClearEventQueue(void)
constexpr uintptr_t CServerAIMaster__ClearEventQueue = 0x080980A4;
// protected void CServerAIMaster::DeleteEventData(uint32_t, void*)
constexpr uintptr_t CServerAIMaster__DeleteEventData = 0x080976C0;
// void CServerAIMaster::EventPending(uint32_t, uint32_t)
constexpr uintptr_t CServerAIMaster__EventPending = 0x080982DC;
// void CServerAIMaster::GetPendingEvent(uint32_t*, uint32_t*, uint32_t*, uint32_t*, uint32_t*, void**)
constexpr uintptr_t CServerAIMaster__GetPendingEvent = 0x08098334;
// public int32_t CServerAIMaster::LoadEventQueue(CResGFF*, CResStruct*)
constexpr uintptr_t CServerAIMaster__LoadEventQueue = 0x0809844C;
// public void CServerAIMaster::LoadReputationAdjustments(void)
constexpr uintptr_t CServerAIMaster__LoadReputationAdjustments = 0x08096DE0;
// public int32_t CServerAIMaster::OnEffectApplied(CNWSObject*, CGameEffect*, int32_t)
constexpr uintptr_t CServerAIMaster__OnEffectApplied = 0x080984E4;
// public int32_t CServerAIMaster::OnEffectRemoved(CNWSObject*, CGameEffect*)
constexpr uintptr_t CServerAIMaster__OnEffectRemoved = 0x08098508;
// public int32_t CServerAIMaster::OnItemPropertyApplied(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t, int32_t)
constexpr uintptr_t CServerAIMaster__OnItemPropertyApplied = 0x08098528;
// public int32_t CServerAIMaster::OnItemPropertyRemoved(CNWSItem*, CNWItemProperty*, CNWSCreature*, uint32_t)
constexpr uintptr_t CServerAIMaster__OnItemPropertyRemoved = 0x08098550;
// public int32_t CServerAIMaster::RemoveObject(CNWSObject*)
constexpr uintptr_t CServerAIMaster__RemoveObject = 0x080962A8;
// public int32_t CServerAIMaster::SaveEventQueue(CResGFF*, CResStruct*)
constexpr uintptr_t CServerAIMaster__SaveEventQueue = 0x080983A8;
// public int32_t CServerAIMaster::SetAILevel(CNWSObject*, int32_t)
constexpr uintptr_t CServerAIMaster__SetAILevel = 0x08096318;
// public void CServerAIMaster::SetExoAppInternal(CServerExoAppInternal*)
constexpr uintptr_t CServerAIMaster__SetExoAppInternal = 0x08098094;
// public void CServerAIMaster::UpdateState(void)
constexpr uintptr_t CServerAIMaster__UpdateState = 0x08095D60;

// public CServerExoApp::CServerExoApp(void)
constexpr uintptr_t CServerExoApp__CServerExoAppCtor = 0x080B1A14;
// public CServerExoApp::~CServerExoApp(void)
constexpr uintptr_t CServerExoApp__CServerExoAppDtor = 0x080B1A68;
// public void CServerExoApp::AddCDKeyToBannedList(CExoString)
constexpr uintptr_t CServerExoApp__AddCDKeyToBannedList = 0x080B27B8;
// public void CServerExoApp::AddCharListRequest(uint32_t)
constexpr uintptr_t CServerExoApp__AddCharListRequest = 0x080B26B0;
// public void CServerExoApp::AddIPToBannedList(CExoString)
constexpr uintptr_t CServerExoApp__AddIPToBannedList = 0x080B26F0;
// public void CServerExoApp::AddPlayerNameToBannedList(CExoString)
constexpr uintptr_t CServerExoApp__AddPlayerNameToBannedList = 0x080B2754;
// public void CServerExoApp::AddSubNetProfileSendSize(uint32_t, uint32_t)
constexpr uintptr_t CServerExoApp__AddSubNetProfileSendSize = 0x080B2B24;
// public void CServerExoApp::AddToExclusionList(uint32_t, unsigned char)
constexpr uintptr_t CServerExoApp__AddToExclusionList = 0x080B25E0;
// public int32_t CServerExoApp::AdmitNetworkAddress(uint32_t, CExoString)
constexpr uintptr_t CServerExoApp__AdmitNetworkAddress = 0x080B2068;
// public int32_t CServerExoApp::AdmitPlayerName(CExoString)
constexpr uintptr_t CServerExoApp__AdmitPlayerName = 0x080B2148;
// public int32_t CServerExoApp::ContinueMessageProcessing(void)
constexpr uintptr_t CServerExoApp__ContinueMessageProcessing = 0x080B21E4;
// void CServerExoApp::ExportAllPlayers(void)
constexpr uintptr_t CServerExoApp__ExportAllPlayers = 0x080B1C74;
// public CExoLinkedListTemplatedunsignedlong* CServerExoApp::GetActiveExclusionList(void)
constexpr uintptr_t CServerExoApp__GetActiveExclusionList = 0x080B2618;
// public unsigned char CServerExoApp::GetActivePauseState(void)
constexpr uintptr_t CServerExoApp__GetActivePauseState = 0x080B25A8;
// public CWorldTimer* CServerExoApp::GetActiveTimer(uint32_t)
constexpr uintptr_t CServerExoApp__GetActiveTimer = 0x080B1FA4;
// public uint32_t CServerExoApp::GetApplicationId(void)
constexpr uintptr_t CServerExoApp__GetApplicationId = 0x080B26C8;
// public CNWSArea* CServerExoApp::GetAreaByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoApp__GetAreaByGameObjectID = 0x080B1E10;
// public CNWSAreaOfEffectObject* CServerExoApp::GetAreaOfEffectByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoApp__GetAreaOfEffectByGameObjectID = 0x080B1E70;
// void CServerExoApp::GetAutoSavePending(void)
constexpr uintptr_t CServerExoApp__GetAutoSavePending = 0x080B1CF0;
// public CExoString CServerExoApp::GetBannedListString(void)
constexpr uintptr_t CServerExoApp__GetBannedListString = 0x080B22F0;
// public int32_t CServerExoApp::GetCDKeys(CExoArrayListTemplatedCExoString**)
constexpr uintptr_t CServerExoApp__GetCDKeys = 0x080B2C78;
// public CNWSPlayer* CServerExoApp::GetClientObjectByObjectId(uint32_t)
constexpr uintptr_t CServerExoApp__GetClientObjectByObjectId = 0x080B24B8;
// public CNWSClient* CServerExoApp::GetClientObjectByPlayerId(uint32_t, unsigned char)
constexpr uintptr_t CServerExoApp__GetClientObjectByPlayerId = 0x080B24D0;
// public CCodeBase* CServerExoApp::GetCodeBase(void)
constexpr uintptr_t CServerExoApp__GetCodeBase = 0x080B2424;
// public CConnectionLib* CServerExoApp::GetConnectionLib(void)
constexpr uintptr_t CServerExoApp__GetConnectionLib = 0x080B2410;
// public CNWSCreature* CServerExoApp::GetCreatureByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoApp__GetCreatureByGameObjectID = 0x080B1DE0;
// public int32_t CServerExoApp::GetCreatureDeathLogging(void)
constexpr uintptr_t CServerExoApp__GetCreatureDeathLogging = 0x080B2B3C;
// public int32_t CServerExoApp::GetDebugMode(void)
constexpr uintptr_t CServerExoApp__GetDebugMode = 0x080B200C;
// public int32_t CServerExoApp::GetDifficultyOption(int32_t)
constexpr uintptr_t CServerExoApp__GetDifficultyOption = 0x080B2698;
// public CNWSDoor* CServerExoApp::GetDoorByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoApp__GetDoorByGameObjectID = 0x080B1E58;
// public CNWSEncounter* CServerExoApp::GetEncounterByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoApp__GetEncounterByGameObjectID = 0x080B1EA0;
// void CServerExoApp::GetExoAppInternal(void)
constexpr uintptr_t CServerExoApp__GetExoAppInternal = 0x080B2BB4;
// public int32_t CServerExoApp::GetExportCharacterPending(void)
constexpr uintptr_t CServerExoApp__GetExportCharacterPending = 0x080B1C24;
// void CServerExoApp::GetExportPlayersCharacter(void)
constexpr uintptr_t CServerExoApp__GetExportPlayersCharacter = 0x080B1C60;
// public void CServerExoApp::GetExtendedServerInfo(CExtendedServerInfo*)
constexpr uintptr_t CServerExoApp__GetExtendedServerInfo__0 = 0x080B1AC4;
// public void CServerExoApp::GetExtendedServerInfo(void)
constexpr uintptr_t CServerExoApp__GetExtendedServerInfo__1 = 0x080B2BC8;
// public int32_t CServerExoApp::GetFactionOfObject(uint32_t, int32_t*)
constexpr uintptr_t CServerExoApp__GetFactionOfObject = 0x080B2558;
// public uint32_t CServerExoApp::GetFirstPCObject(void)
constexpr uintptr_t CServerExoApp__GetFirstPCObject = 0x080B2A8C;
// public float CServerExoApp::GetFPS(void)
constexpr uintptr_t CServerExoApp__GetFPS = 0x080B2BD0;
// public CGameObject* CServerExoApp::GetGameObject(uint32_t)
constexpr uintptr_t CServerExoApp__GetGameObject = 0x080B1D98;
// public int32_t CServerExoApp::GetGameSpyEnabled(void)
constexpr uintptr_t CServerExoApp__GetGameSpyEnabled = 0x080B2AF8;
// void CServerExoApp::GetImportingChar(void)
constexpr uintptr_t CServerExoApp__GetImportingChar = 0x080B1CB4;
// public int32_t CServerExoApp::GetIsCDKeyOnBannedList(CExoString)
constexpr uintptr_t CServerExoApp__GetIsCDKeyOnBannedList = 0x080B2A20;
// public int32_t CServerExoApp::GetIsControlledByPlayer(uint32_t)
constexpr uintptr_t CServerExoApp__GetIsControlledByPlayer = 0x080B2534;
// public int32_t CServerExoApp::GetIsIPOnBannedList(CExoString)
constexpr uintptr_t CServerExoApp__GetIsIPOnBannedList = 0x080B2948;
// void CServerExoApp::GetIsMultiPlayer(void)
constexpr uintptr_t CServerExoApp__GetIsMultiPlayer = 0x080B2AD4;
// public int32_t CServerExoApp::GetIsPlayerNameOnBannedList(CExoString)
constexpr uintptr_t CServerExoApp__GetIsPlayerNameOnBannedList = 0x080B29B4;
// public CNWSItem* CServerExoApp::GetItemByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoApp__GetItemByGameObjectID = 0x080B1DC8;
// public int32_t CServerExoApp::GetLoadingModule(void)
constexpr uintptr_t CServerExoApp__GetLoadingModule = 0x080B1C8C;
// public void* CServerExoApp::GetModule(void)
constexpr uintptr_t CServerExoApp__GetModule = 0x080B1ADC;
// public CNWSModule* CServerExoApp::GetModuleByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoApp__GetModuleByGameObjectID = 0x080B1DF8;
// public CExoLocString CServerExoApp::GetModuleDescription(void)
constexpr uintptr_t CServerExoApp__GetModuleDescription = 0x080B18F4;
// public int32_t CServerExoApp::GetModuleLanguage(void)
constexpr uintptr_t CServerExoApp__GetModuleLanguage = 0x080B1F00;
// public CExoString CServerExoApp::GetModuleName(void)
constexpr uintptr_t CServerExoApp__GetModuleName = 0x080B1AF4;
// void CServerExoApp::GetMoveToModulePending(void)
constexpr uintptr_t CServerExoApp__GetMoveToModulePending = 0x080B1B94;
// void CServerExoApp::GetMoveToModuleString(void)
constexpr uintptr_t CServerExoApp__GetMoveToModuleString = 0x080B1BC8;
// public int32_t CServerExoApp::GetMultiplayerEnabled(void)
constexpr uintptr_t CServerExoApp__GetMultiplayerEnabled = 0x080B2660;
// public CNetLayer* CServerExoApp::GetNetLayer(void)
constexpr uintptr_t CServerExoApp__GetNetLayer = 0x080B1F40;
// public uint32_t CServerExoApp::GetNextPCObject(void)
constexpr uintptr_t CServerExoApp__GetNextPCObject = 0x080B2AA4;
// public void* CServerExoApp::GetNWSMessage(void)
constexpr uintptr_t CServerExoApp__GetNWSMessage = 0x080B1F54;
// public CGameObjectArray* CServerExoApp::GetObjectArray(void)
constexpr uintptr_t CServerExoApp__GetObjectArray = 0x080B1D84;
// public int32_t CServerExoApp::GetPauseState(unsigned char)
constexpr uintptr_t CServerExoApp__GetPauseState = 0x080B258C;
// public CWorldTimer* CServerExoApp::GetPauseTimer(void)
constexpr uintptr_t CServerExoApp__GetPauseTimer = 0x080B1FE4;
// public CNWSPlaceable* CServerExoApp::GetPlaceableByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoApp__GetPlaceableByGameObjectID = 0x080B1E40;
// public CNWPlaceMeshManager* CServerExoApp::GetPlaceMeshManager(void)
constexpr uintptr_t CServerExoApp__GetPlaceMeshManager = 0x080B1F90;
// void CServerExoApp::GetPlayerAddressData(uint32_t, uint32_t*, unsigned char**, unsigned char**, uint32_t*)
constexpr uintptr_t CServerExoApp__GetPlayerAddressData = 0x080B2438;
// public uint32_t CServerExoApp::GetPlayerIDByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoApp__GetPlayerIDByGameObjectID = 0x080B1ED0;
// public int32_t CServerExoApp::GetPlayerLanguage(uint32_t)
constexpr uintptr_t CServerExoApp__GetPlayerLanguage = 0x080B1EE8;
// public void* CServerExoApp::GetPlayerList(void)
constexpr uintptr_t CServerExoApp__GetPlayerList = 0x080B1F2C;
// public CExoString CServerExoApp::GetPlayerListString(void)
constexpr uintptr_t CServerExoApp__GetPlayerListString = 0x080B22CC;
// public CExoString CServerExoApp::GetPortalListString(void)
constexpr uintptr_t CServerExoApp__GetPortalListString = 0x080B2314;
// public int32_t CServerExoApp::GetReloadModuleWhenEmpty(void)
constexpr uintptr_t CServerExoApp__GetReloadModuleWhenEmpty = 0x080B2684;
// public void* CServerExoApp::GetServerAIMaster(void)
constexpr uintptr_t CServerExoApp__GetServerAIMaster = 0x080B1F18;
// public CServerInfo* CServerExoApp::GetServerInfo(void)
constexpr uintptr_t CServerExoApp__GetServerInfo = 0x080B1AB0;
// public int16_t CServerExoApp::GetServerMode(void)
constexpr uintptr_t CServerExoApp__GetServerMode = 0x080B1F7C;
// public CNWSSoundObject* CServerExoApp::GetSoundObjectByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoApp__GetSoundObjectByGameObjectID = 0x080B1EB8;
// public CNWSStore* CServerExoApp::GetStoreByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoApp__GetStoreByGameObjectID = 0x080B1DB0;
// public void* CServerExoApp::GetSysAdminList(void)
constexpr uintptr_t CServerExoApp__GetSysAdminList = 0x080B1F68;
// public CWorldTimer* CServerExoApp::GetTimestopTimer(void)
constexpr uintptr_t CServerExoApp__GetTimestopTimer = 0x080B1FD0;
// public CNWSTrigger* CServerExoApp::GetTriggerByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoApp__GetTriggerByGameObjectID = 0x080B1E28;
// public CNWSWaypoint* CServerExoApp::GetWaypointByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoApp__GetWaypointByGameObjectID = 0x080B1E88;
// public CWorldTimer* CServerExoApp::GetWorldTimer(void)
constexpr uintptr_t CServerExoApp__GetWorldTimer = 0x080B1FBC;
// public void CServerExoApp::GSClientAddServer(void*, char*, char*, int32_t, int32_t, int32_t, int32_t, char*, int32_t, int32_t, char*, int32_t, int32_t, int32_t, char*, char*, int32_t, int32_t, int32_t, int32_t, int32_t, bool)
constexpr uintptr_t CServerExoApp__GSClientAddServer = 0x080B2C48;
// public void CServerExoApp::GSClientChatMessage(int32_t, CExoString, CExoString)
constexpr uintptr_t CServerExoApp__GSClientChatMessage = 0x080B2BE4;
// void CServerExoApp::GSClientClearServers(void)
constexpr uintptr_t CServerExoApp__GSClientClearServers = 0x080B2C60;
// public void CServerExoApp::GSClientGroupRoomAdded(int32_t, uint32_t)
constexpr uintptr_t CServerExoApp__GSClientGroupRoomAdded = 0x080B2BDC;
// void CServerExoApp::GSClientRemoveServer(void*)
constexpr uintptr_t CServerExoApp__GSClientRemoveServer = 0x080B2C50;
// void CServerExoApp::GSClientUpdateConnectionPhase(unsigned char, const CExoString&)
constexpr uintptr_t CServerExoApp__GSClientUpdateConnectionPhase = 0x080B2C68;
// void CServerExoApp::GSClientUpdateServer(void*, char*, char*, int32_t, int32_t, int32_t, int32_t, char*, int32_t, int32_t, char*, int32_t, int32_t, int32_t, char*, char*, int32_t, int32_t, int32_t, int32_t, int32_t, bool)
constexpr uintptr_t CServerExoApp__GSClientUpdateServer = 0x080B2C58;
// public void CServerExoApp::HandleGameSpyToServerMessage(int32_t, void*, int32_t)
constexpr uintptr_t CServerExoApp__HandleGameSpyToServerMessage = 0x080B23F8;
// public int32_t CServerExoApp::HandleMessage(uint32_t, unsigned char*, uint32_t, int32_t)
constexpr uintptr_t CServerExoApp__HandleMessage = 0x080B2020;
// public int32_t CServerExoApp::Initialize(void)
constexpr uintptr_t CServerExoApp__Initialize = 0x080B2038;
// public void CServerExoApp::InitiateModuleForPlayer(void*)
constexpr uintptr_t CServerExoApp__InitiateModuleForPlayer = 0x080B2504;
// void CServerExoApp::IsOnActiveExclusionList(uint32_t)
constexpr uintptr_t CServerExoApp__IsOnActiveExclusionList = 0x080B2630;
// public int32_t CServerExoApp::IsOnExclusionList(uint32_t)
constexpr uintptr_t CServerExoApp__IsOnExclusionList = 0x080B26D8;
// public int32_t CServerExoApp::LoadCharacterFinish(CNWSPlayer*, int32_t, int32_t)
constexpr uintptr_t CServerExoApp__LoadCharacterFinish = 0x080B1D54;
// public int32_t CServerExoApp::LoadCharacterStart(unsigned char, CNWSPlayer*, CResRef, void*, uint32_t)
constexpr uintptr_t CServerExoApp__LoadCharacterStart = 0x080B1D04;
// public int32_t CServerExoApp::LoadGame(uint32_t, CExoString&, CExoString&, CNWSPlayer*)
constexpr uintptr_t CServerExoApp__LoadGame = 0x080B1B50;
// public int32_t CServerExoApp::LoadModule(CExoString, int32_t, CNWSPlayer*)
constexpr uintptr_t CServerExoApp__LoadModule = 0x080B2244;
// void CServerExoApp::LoadPrimaryPlayer(CNWSPlayer*)
constexpr uintptr_t CServerExoApp__LoadPrimaryPlayer = 0x080B1D6C;
// public int32_t CServerExoApp::MainLoop(void)
constexpr uintptr_t CServerExoApp__MainLoop = 0x080B2050;
// public void CServerExoApp::MovePlayerToArea(void*)
constexpr uintptr_t CServerExoApp__MovePlayerToArea = 0x080B251C;
// void CServerExoApp::OnCDChange(void)
constexpr uintptr_t CServerExoApp__OnCDChange = 0x080B2338;
// void CServerExoApp::OnExit(void)
constexpr uintptr_t CServerExoApp__OnExit = 0x080B2350;
// void CServerExoApp::OnGainFocus(void)
constexpr uintptr_t CServerExoApp__OnGainFocus = 0x080B2368;
// void CServerExoApp::OnLostFocus(void)
constexpr uintptr_t CServerExoApp__OnLostFocus = 0x080B2380;
// void CServerExoApp::OnVideoChange(void)
constexpr uintptr_t CServerExoApp__OnVideoChange = 0x080B2398;
// public void CServerExoApp::PlayerListChange(uint32_t, int32_t, int32_t)
constexpr uintptr_t CServerExoApp__PlayerListChange = 0x080B21B4;
// public void CServerExoApp::PushMessageOverWall(unsigned char*, uint32_t)
constexpr uintptr_t CServerExoApp__PushMessageOverWall = 0x080B2ABC;
// public void CServerExoApp::RemoveCDKeyFromBannedList(CExoString)
constexpr uintptr_t CServerExoApp__RemoveCDKeyFromBannedList = 0x080B28E4;
// public void CServerExoApp::RemoveFromExclusionList(uint32_t, unsigned char)
constexpr uintptr_t CServerExoApp__RemoveFromExclusionList = 0x080B25FC;
// public void CServerExoApp::RemoveIPFromBannedList(CExoString)
constexpr uintptr_t CServerExoApp__RemoveIPFromBannedList = 0x080B281C;
// void CServerExoApp::RemovePCFromWorld(CNWSPlayer*)
constexpr uintptr_t CServerExoApp__RemovePCFromWorld = 0x080B21FC;
// public void CServerExoApp::RemovePlayerNameFromBannedList(CExoString)
constexpr uintptr_t CServerExoApp__RemovePlayerNameFromBannedList = 0x080B2880;
// public uint32_t CServerExoApp::ResolvePlayerByFirstName(const CExoString&)
constexpr uintptr_t CServerExoApp__ResolvePlayerByFirstName = 0x080B2648;
// void CServerExoApp::RestartNetLayer(void)
constexpr uintptr_t CServerExoApp__RestartNetLayer = 0x080B2488;
// public int32_t CServerExoApp::RunModule(void)
constexpr uintptr_t CServerExoApp__RunModule = 0x080B22B4;
// public int32_t CServerExoApp::SaveGame(uint32_t, CExoString&, CExoString&, CNWSPlayer*, int32_t, CExoString&)
constexpr uintptr_t CServerExoApp__SaveGame = 0x080B1B18;
// void CServerExoApp::SendCharacterQuery(CNWSPlayer*)
constexpr uintptr_t CServerExoApp__SendCharacterQuery = 0x080B1B38;
// public void CServerExoApp::SetApplicationIdsMatch(int32_t)
constexpr uintptr_t CServerExoApp__SetApplicationIdsMatch = 0x080B2C70;
// public void CServerExoApp::SetAutoSavePending(int32_t)
constexpr uintptr_t CServerExoApp__SetAutoSavePending = 0x080B1CDC;
// public void CServerExoApp::SetDebugMode(int32_t)
constexpr uintptr_t CServerExoApp__SetDebugMode = 0x080B1FF8;
// public void CServerExoApp::SetEndGamePending(int32_t)
constexpr uintptr_t CServerExoApp__SetEndGamePending = 0x080B1BF0;
// public void CServerExoApp::SetEndGameString(CExoString&)
constexpr uintptr_t CServerExoApp__SetEndGameString = 0x080B1C04;
// public void CServerExoApp::SetExportCharacterPending(int32_t)
constexpr uintptr_t CServerExoApp__SetExportCharacterPending = 0x080B1C38;
// public void CServerExoApp::SetExportPlayersCharacter(uint32_t)
constexpr uintptr_t CServerExoApp__SetExportPlayersCharacter = 0x080B1C4C;
// void CServerExoApp::SetForceUpdate(void)
constexpr uintptr_t CServerExoApp__SetForceUpdate = 0x080B23E0;
// public void CServerExoApp::SetGameSpyEnabled(int32_t)
constexpr uintptr_t CServerExoApp__SetGameSpyEnabled = 0x080B2AE4;
// void CServerExoApp::SetGameSpyReporting(int32_t)
constexpr uintptr_t CServerExoApp__SetGameSpyReporting = 0x080B23B0;
// public void CServerExoApp::SetImportingChar(int32_t)
constexpr uintptr_t CServerExoApp__SetImportingChar = 0x080B1CC8;
// public void CServerExoApp::SetLoadingModule(int32_t)
constexpr uintptr_t CServerExoApp__SetLoadingModule = 0x080B1CA0;
// public void CServerExoApp::SetMoveToModulePending(int32_t)
constexpr uintptr_t CServerExoApp__SetMoveToModulePending = 0x080B1B80;
// public void CServerExoApp::SetMoveToModuleString(CExoString&)
constexpr uintptr_t CServerExoApp__SetMoveToModuleString = 0x080B1BA8;
// public int32_t CServerExoApp::SetNetworkAddressBan(uint32_t, CExoString, int32_t)
constexpr uintptr_t CServerExoApp__SetNetworkAddressBan = 0x080B20D8;
// public void CServerExoApp::SetPauseState(unsigned char, int32_t)
constexpr uintptr_t CServerExoApp__SetPauseState = 0x080B25C0;
// public void CServerExoApp::SetReloadModuleWhenEmpty(int32_t)
constexpr uintptr_t CServerExoApp__SetReloadModuleWhenEmpty = 0x080B2670;
// void CServerExoApp::SetWeGotDisconnected(void)
constexpr uintptr_t CServerExoApp__SetWeGotDisconnected = 0x080B2C80;
// public void CServerExoApp::Shutdown(int32_t, int32_t)
constexpr uintptr_t CServerExoApp__Shutdown = 0x080B2214;
// void CServerExoApp::ShutdownNetLayer(void)
constexpr uintptr_t CServerExoApp__ShutdownNetLayer = 0x080B2470;
// void CServerExoApp::ShutDownToMainMenu(void)
constexpr uintptr_t CServerExoApp__ShutDownToMainMenu = 0x080B2BC0;
// public int32_t CServerExoApp::StartNewModule(CExoString&)
constexpr uintptr_t CServerExoApp__StartNewModule = 0x080B1B68;
// public void CServerExoApp::StartServices(void)
constexpr uintptr_t CServerExoApp__StartServices = 0x080B2458;
// public void CServerExoApp::StopServices(void)
constexpr uintptr_t CServerExoApp__StopServices = 0x080B24A0;
// public int32_t CServerExoApp::StripColorTokens(CExoString&)
constexpr uintptr_t CServerExoApp__StripColorTokens = 0x080B2B0C;
// public void CServerExoApp::TogglePauseState(unsigned char)
constexpr uintptr_t CServerExoApp__TogglePauseState = 0x080B2570;
// public void CServerExoApp::Uninitialize(void)
constexpr uintptr_t CServerExoApp__Uninitialize = 0x080B23C8;
// void CServerExoApp::UnloadModule(void)
constexpr uintptr_t CServerExoApp__UnloadModule = 0x080B222C;
// void CServerExoApp::ValidatePlayerLogin(void*)
constexpr uintptr_t CServerExoApp__ValidatePlayerLogin = 0x080B24EC;
// public void CServerExoApp::VomitServerOptionsToLog(void)
constexpr uintptr_t CServerExoApp__VomitServerOptionsToLog = 0x080B21CC;

// public CServerExoAppInternal::CServerExoAppInternal(void)
constexpr uintptr_t CServerExoAppInternal__CServerExoAppInternalCtor = 0x08098854;
// public CServerExoAppInternal::~CServerExoAppInternal(void)
constexpr uintptr_t CServerExoAppInternal__CServerExoAppInternalDtor = 0x08098C9C;
// public void CServerExoAppInternal::AddCDKeyToBannedList(CExoString)
constexpr uintptr_t CServerExoAppInternal__AddCDKeyToBannedList = 0x080B0EB4;
// public void CServerExoAppInternal::AddCharListRequest(uint32_t)
constexpr uintptr_t CServerExoAppInternal__AddCharListRequest = 0x080B0C80;
// public void CServerExoAppInternal::AddIPToBannedList(CExoString)
constexpr uintptr_t CServerExoAppInternal__AddIPToBannedList = 0x080B0DC4;
// void CServerExoAppInternal::AddPendingAuthorization(uint32_t)
constexpr uintptr_t CServerExoAppInternal__AddPendingAuthorization = 0x080B07FC;
// public void CServerExoAppInternal::AddPlayerNameToBannedList(CExoString)
constexpr uintptr_t CServerExoAppInternal__AddPlayerNameToBannedList = 0x080B0E3C;
// protected void CServerExoAppInternal::AddSubNetProfile(uint32_t, CExoString, CExoString)
constexpr uintptr_t CServerExoAppInternal__AddSubNetProfile = 0x080AF7AC;
// void CServerExoAppInternal::AddSubNetProfileRecvSize(uint32_t, uint32_t)
constexpr uintptr_t CServerExoAppInternal__AddSubNetProfileRecvSize = 0x080B131C;
// public void CServerExoAppInternal::AddSubNetProfileSendSize(uint32_t, uint32_t)
constexpr uintptr_t CServerExoAppInternal__AddSubNetProfileSendSize = 0x080B12A4;
// public void CServerExoAppInternal::AddToExclusionList(uint32_t, unsigned char)
constexpr uintptr_t CServerExoAppInternal__AddToExclusionList = 0x080ADF8C;
// public int32_t CServerExoAppInternal::AdmitNetworkAddress(uint32_t, CExoString)
constexpr uintptr_t CServerExoAppInternal__AdmitNetworkAddress = 0x080AFCD0;
// public int32_t CServerExoAppInternal::AdmitPlayerName(CExoString)
constexpr uintptr_t CServerExoAppInternal__AdmitPlayerName = 0x080AFD00;
// protected void CServerExoAppInternal::CheckMasterServerTranslation(void)
constexpr uintptr_t CServerExoAppInternal__CheckMasterServerTranslation = 0x080AE270;
// protected void CServerExoAppInternal::ConnectionLibMainLoop(void)
constexpr uintptr_t CServerExoAppInternal__ConnectionLibMainLoop = 0x080AB720;
// void CServerExoAppInternal::ContinueMessageProcessing(void)
constexpr uintptr_t CServerExoAppInternal__ContinueMessageProcessing = 0x080B02E4;
// void CServerExoAppInternal::CopyModuleToCurrentGame(CExoString&, CExoString&, uint16_t)
constexpr uintptr_t CServerExoAppInternal__CopyModuleToCurrentGame = 0x0809E430;
// public int32_t CServerExoAppInternal::CreateServerVaultLostAndFound(void)
constexpr uintptr_t CServerExoAppInternal__CreateServerVaultLostAndFound = 0x080B1214;
// public void CServerExoAppInternal::DealWithLoadGameError(uint32_t)
constexpr uintptr_t CServerExoAppInternal__DealWithLoadGameError = 0x080A10F4;
// void CServerExoAppInternal::EndGame(const CExoString&)
constexpr uintptr_t CServerExoAppInternal__EndGame = 0x08099A90;
// void CServerExoAppInternal::ExportAllPlayers(void)
constexpr uintptr_t CServerExoAppInternal__ExportAllPlayers = 0x080AFEB0;
// public int32_t CServerExoAppInternal::ExportPlayer(CNWSPlayer*)
constexpr uintptr_t CServerExoAppInternal__ExportPlayer = 0x080AFF10;
// void CServerExoAppInternal::GetActiveExclusionList(void)
constexpr uintptr_t CServerExoAppInternal__GetActiveExclusionList = 0x080AE088;
// public unsigned char CServerExoAppInternal::GetActivePauseState(void)
constexpr uintptr_t CServerExoAppInternal__GetActivePauseState = 0x080B0A38;
// public CWorldTimer* CServerExoAppInternal::GetActiveTimer(uint32_t)
constexpr uintptr_t CServerExoAppInternal__GetActiveTimer = 0x080ADA7C;
// public CNWSArea* CServerExoAppInternal::GetAreaByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoAppInternal__GetAreaByGameObjectID = 0x080B0484;
// public CNWSAreaOfEffectObject* CServerExoAppInternal::GetAreaOfEffectByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoAppInternal__GetAreaOfEffectByGameObjectID = 0x080B05D4;
// public CExoString CServerExoAppInternal::GetBannedListString(void)
constexpr uintptr_t CServerExoAppInternal__GetBannedListString = 0x080AD4B0;
// public CNWSPlayer* CServerExoAppInternal::GetClientObjectByObjectId(uint32_t)
constexpr uintptr_t CServerExoAppInternal__GetClientObjectByObjectId = 0x080AFD30;
// public CNWSClient* CServerExoAppInternal::GetClientObjectByPlayerId(uint32_t, unsigned char)
constexpr uintptr_t CServerExoAppInternal__GetClientObjectByPlayerId = 0x08098E94;
// public CNWSCreature* CServerExoAppInternal::GetCreatureByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoAppInternal__GetCreatureByGameObjectID = 0x080B03DC;
// public int32_t CServerExoAppInternal::GetDifficultyOption(int32_t)
constexpr uintptr_t CServerExoAppInternal__GetDifficultyOption = 0x080B0C58;
// public CNWSDoor* CServerExoAppInternal::GetDoorByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoAppInternal__GetDoorByGameObjectID = 0x080B0580;
// public CNWSEncounter* CServerExoAppInternal::GetEncounterByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoAppInternal__GetEncounterByGameObjectID = 0x080B067C;
// public void CServerExoAppInternal::GetExtendedServerInfo(CExtendedServerInfo*)
constexpr uintptr_t CServerExoAppInternal__GetExtendedServerInfo = 0x080A0318;
// public int32_t CServerExoAppInternal::GetFactionOfObject(uint32_t, int32_t*)
constexpr uintptr_t CServerExoAppInternal__GetFactionOfObject = 0x080AC4D4;
// void CServerExoAppInternal::GetFirstPCObject(void)
constexpr uintptr_t CServerExoAppInternal__GetFirstPCObject = 0x080B1100;
// public CGameObject* CServerExoAppInternal::GetGameObject(uint32_t)
constexpr uintptr_t CServerExoAppInternal__GetGameObject = 0x080B02FC;
// public int32_t CServerExoAppInternal::GetIsCDKeyOnBannedList(CExoString)
constexpr uintptr_t CServerExoAppInternal__GetIsCDKeyOnBannedList = 0x080AEF04;
// public int32_t CServerExoAppInternal::GetIsIPOnBannedList(CExoString)
constexpr uintptr_t CServerExoAppInternal__GetIsIPOnBannedList = 0x080AE8DC;
// public int32_t CServerExoAppInternal::GetIsPlayerNameOnBannedList(CExoString)
constexpr uintptr_t CServerExoAppInternal__GetIsPlayerNameOnBannedList = 0x080AEC10;
// public CNWSItem* CServerExoAppInternal::GetItemByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoAppInternal__GetItemByGameObjectID = 0x080B0388;
// public CNWSModule* CServerExoAppInternal::GetModule(void)
constexpr uintptr_t CServerExoAppInternal__GetModule = 0x080AFDC8;
// public CNWSModule* CServerExoAppInternal::GetModuleByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoAppInternal__GetModuleByGameObjectID = 0x080B0430;
// public int32_t CServerExoAppInternal::GetModuleExists(const CExoString&)
constexpr uintptr_t CServerExoAppInternal__GetModuleExists = 0x0809FD64;
// void CServerExoAppInternal::GetModuleLanguage(void)
constexpr uintptr_t CServerExoAppInternal__GetModuleLanguage = 0x080B0790;
// public CExoString CServerExoAppInternal::GetModuleName(void)
constexpr uintptr_t CServerExoAppInternal__GetModuleName = 0x08098F58;
// void CServerExoAppInternal::GetNextPCObject(void)
constexpr uintptr_t CServerExoAppInternal__GetNextPCObject = 0x080B117C;
// public int32_t CServerExoAppInternal::GetPauseState(unsigned char)
constexpr uintptr_t CServerExoAppInternal__GetPauseState = 0x080B0958;
// public CNWSPlaceable* CServerExoAppInternal::GetPlaceableByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoAppInternal__GetPlaceableByGameObjectID = 0x080B052C;
// void CServerExoAppInternal::GetPlayerAddressData(uint32_t, uint32_t*, unsigned char**, unsigned char**, uint32_t*)
constexpr uintptr_t CServerExoAppInternal__GetPlayerAddressData = 0x080B0000;
// public uint32_t CServerExoAppInternal::GetPlayerIDByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoAppInternal__GetPlayerIDByGameObjectID = 0x080B0BB0;
// public int32_t CServerExoAppInternal::GetPlayerLanguage(uint32_t)
constexpr uintptr_t CServerExoAppInternal__GetPlayerLanguage = 0x080B0724;
// public CExoString CServerExoAppInternal::GetPlayerListString(void)
constexpr uintptr_t CServerExoAppInternal__GetPlayerListString = 0x080AC5E8;
// public CExoString CServerExoAppInternal::GetPortalListString(void)
constexpr uintptr_t CServerExoAppInternal__GetPortalListString = 0x080B08A8;
// protected void CServerExoAppInternal::GetServerInfoFromIniFile(void)
constexpr uintptr_t CServerExoAppInternal__GetServerInfoFromIniFile = 0x080A5570;
// public CNWSSoundObject* CServerExoAppInternal::GetSoundObjectByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoAppInternal__GetSoundObjectByGameObjectID = 0x080B06D0;
// public CNWSStore* CServerExoAppInternal::GetStoreByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoAppInternal__GetStoreByGameObjectID = 0x080B0334;
// public CNWSTrigger* CServerExoAppInternal::GetTriggerByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoAppInternal__GetTriggerByGameObjectID = 0x080B04D8;
// public CNWSWaypoint* CServerExoAppInternal::GetWaypointByGameObjectID(uint32_t)
constexpr uintptr_t CServerExoAppInternal__GetWaypointByGameObjectID = 0x080B0628;
// public void CServerExoAppInternal::HandleGameSpyToServerMessage(int32_t, void*, int32_t)
constexpr uintptr_t CServerExoAppInternal__HandleGameSpyToServerMessage = 0x080AB024;
// public int32_t CServerExoAppInternal::HandleMessage(uint32_t, unsigned char*, uint32_t, int32_t)
constexpr uintptr_t CServerExoAppInternal__HandleMessage = 0x0809DF80;
// void CServerExoAppInternal::Initialize(void)
constexpr uintptr_t CServerExoAppInternal__Initialize = 0x080AFFC8;
// protected void CServerExoAppInternal::InitializeNetLayer(void)
constexpr uintptr_t CServerExoAppInternal__InitializeNetLayer = 0x080A5238;
// public void CServerExoAppInternal::InitiateModuleForPlayer(void*)
constexpr uintptr_t CServerExoAppInternal__InitiateModuleForPlayer = 0x080A1284;
// void CServerExoAppInternal::IsOnActiveExclusionList(uint32_t)
constexpr uintptr_t CServerExoAppInternal__IsOnActiveExclusionList = 0x080B0B44;
// public int32_t CServerExoAppInternal::IsOnExclusionList(uint32_t)
constexpr uintptr_t CServerExoAppInternal__IsOnExclusionList = 0x080ADE9C;
// public int32_t CServerExoAppInternal::LoadCharacterFinish(CNWSPlayer*, int32_t, int32_t)
constexpr uintptr_t CServerExoAppInternal__LoadCharacterFinish = 0x0809DA64;
// public int32_t CServerExoAppInternal::LoadCharacterStart(unsigned char, CNWSPlayer*, CResRef, void*, uint32_t)
constexpr uintptr_t CServerExoAppInternal__LoadCharacterStart = 0x0809CBD4;
// public int32_t CServerExoAppInternal::LoadGame(uint32_t, CExoString&, CExoString&, CNWSPlayer*)
constexpr uintptr_t CServerExoAppInternal__LoadGame = 0x08099760;
// public int32_t CServerExoAppInternal::LoadModule(CExoString, int32_t, CNWSPlayer*)
constexpr uintptr_t CServerExoAppInternal__LoadModule = 0x0809E4E8;
// void CServerExoAppInternal::LoadPrimaryPlayer(CNWSPlayer*)
constexpr uintptr_t CServerExoAppInternal__LoadPrimaryPlayer = 0x080AFE64;
// public int32_t CServerExoAppInternal::MainLoop(void)
constexpr uintptr_t CServerExoAppInternal__MainLoop = 0x080A0474;
// void CServerExoAppInternal::MarkUpdateClientsForObject(uint32_t)
constexpr uintptr_t CServerExoAppInternal__MarkUpdateClientsForObject = 0x080B0104;
// public void CServerExoAppInternal::MovePlayerToArea(void*)
constexpr uintptr_t CServerExoAppInternal__MovePlayerToArea = 0x080A1B08;
// void CServerExoAppInternal::OnCDChange(void)
constexpr uintptr_t CServerExoAppInternal__OnCDChange = 0x080B0024;
// void CServerExoAppInternal::OnExit(void)
constexpr uintptr_t CServerExoAppInternal__OnExit = 0x080B002C;
// void CServerExoAppInternal::OnGainFocus(void)
constexpr uintptr_t CServerExoAppInternal__OnGainFocus = 0x080B0034;
// void CServerExoAppInternal::OnLostFocus(void)
constexpr uintptr_t CServerExoAppInternal__OnLostFocus = 0x080B003C;
// void CServerExoAppInternal::OnVideoChange(void)
constexpr uintptr_t CServerExoAppInternal__OnVideoChange = 0x080B0044;
// public void CServerExoAppInternal::PlayerListChange(uint32_t, int32_t, int32_t)
constexpr uintptr_t CServerExoAppInternal__PlayerListChange = 0x080A1D18;
// public void CServerExoAppInternal::PushMessageOverWall(unsigned char*, uint32_t)
constexpr uintptr_t CServerExoAppInternal__PushMessageOverWall = 0x080B11E4;
// protected void CServerExoAppInternal::ReadBannedLists(void)
constexpr uintptr_t CServerExoAppInternal__ReadBannedLists = 0x080A9910;
// public void CServerExoAppInternal::RemoveCDKeyFromBannedList(CExoString)
constexpr uintptr_t CServerExoAppInternal__RemoveCDKeyFromBannedList = 0x080B1064;
// public void CServerExoAppInternal::RemoveFromExclusionList(uint32_t, unsigned char)
constexpr uintptr_t CServerExoAppInternal__RemoveFromExclusionList = 0x080B0A5C;
// public void CServerExoAppInternal::RemoveIPFromBannedList(CExoString)
constexpr uintptr_t CServerExoAppInternal__RemoveIPFromBannedList = 0x080B0F2C;
// public void CServerExoAppInternal::RemovePCFromWorld(CNWSPlayer*)
constexpr uintptr_t CServerExoAppInternal__RemovePCFromWorld = 0x080A4C94;
// void CServerExoAppInternal::RemovePendingAuthorization(uint32_t)
constexpr uintptr_t CServerExoAppInternal__RemovePendingAuthorization = 0x080B0854;
// public void CServerExoAppInternal::RemovePlayerNameFromBannedList(CExoString)
constexpr uintptr_t CServerExoAppInternal__RemovePlayerNameFromBannedList = 0x080B0FC8;
// protected void CServerExoAppInternal::RemoveSubNetProfile(uint32_t)
constexpr uintptr_t CServerExoAppInternal__RemoveSubNetProfile = 0x080AF90C;
// void CServerExoAppInternal::ReprocessExclusionListActions(unsigned char)
constexpr uintptr_t CServerExoAppInternal__ReprocessExclusionListActions = 0x080B0970;
// public uint32_t CServerExoAppInternal::ResolvePlayerByFirstName(const CExoString&)
constexpr uintptr_t CServerExoAppInternal__ResolvePlayerByFirstName = 0x080AE0D4;
// void CServerExoAppInternal::RestartNetLayer(void)
constexpr uintptr_t CServerExoAppInternal__RestartNetLayer = 0x080B00F8;
// void CServerExoAppInternal::RunModule(void)
constexpr uintptr_t CServerExoAppInternal__RunModule = 0x080A28A4;
// public int32_t CServerExoAppInternal::SaveGame(uint32_t, CExoString&, CExoString&, CNWSPlayer*, int32_t, CExoString&)
constexpr uintptr_t CServerExoAppInternal__SaveGame = 0x0809902C;
// void CServerExoAppInternal::SendCharacterQuery(CNWSPlayer*)
constexpr uintptr_t CServerExoAppInternal__SendCharacterQuery = 0x080AFF6C;
// void CServerExoAppInternal::SendEnteringStartNewModuleMessage(void)
constexpr uintptr_t CServerExoAppInternal__SendEnteringStartNewModuleMessage = 0x080AFE0C;
// void CServerExoAppInternal::SendExitingStartNewModuleMessage(int32_t)
constexpr uintptr_t CServerExoAppInternal__SendExitingStartNewModuleMessage = 0x080AFE34;
// public int32_t CServerExoAppInternal::SendHeartbeatToMasterServer(void)
constexpr uintptr_t CServerExoAppInternal__SendHeartbeatToMasterServer = 0x080AE4E4;
// void CServerExoAppInternal::SendStartStallEvent(uint32_t)
constexpr uintptr_t CServerExoAppInternal__SendStartStallEvent = 0x080AFFD4;
// public void CServerExoAppInternal::SetEstimatedSaveSize(const CExoString&, uint16_t)
constexpr uintptr_t CServerExoAppInternal__SetEstimatedSaveSize = 0x080A01A8;
// void CServerExoAppInternal::SetGameSpyReporting(int32_t)
constexpr uintptr_t CServerExoAppInternal__SetGameSpyReporting = 0x080B0798;
// public int32_t CServerExoAppInternal::SetNetworkAddressBan(uint32_t, CExoString, int32_t)
constexpr uintptr_t CServerExoAppInternal__SetNetworkAddressBan = 0x080B004C;
// public void CServerExoAppInternal::SetPauseState(unsigned char, int32_t)
constexpr uintptr_t CServerExoAppInternal__SetPauseState = 0x080ADB18;
// public void CServerExoAppInternal::Shutdown(int32_t, int32_t)
constexpr uintptr_t CServerExoAppInternal__Shutdown = 0x080A4FD0;
// void CServerExoAppInternal::ShutdownNetLayer(void)
constexpr uintptr_t CServerExoAppInternal__ShutdownNetLayer = 0x080B00C0;
// protected void CServerExoAppInternal::ShutdownServerProfiles(void)
constexpr uintptr_t CServerExoAppInternal__ShutdownServerProfiles = 0x080AFB1C;
// public void CServerExoAppInternal::StallEventSaveGame(void)
constexpr uintptr_t CServerExoAppInternal__StallEventSaveGame = 0x080A0E64;
// public int32_t CServerExoAppInternal::StartNewModule(CExoString&)
constexpr uintptr_t CServerExoAppInternal__StartNewModule = 0x08099B68;
// void CServerExoAppInternal::StartServices(void)
constexpr uintptr_t CServerExoAppInternal__StartServices = 0x080A2AF8;
// void CServerExoAppInternal::StartShutdownTimer(uint64_t, uint64_t)
constexpr uintptr_t CServerExoAppInternal__StartShutdownTimer = 0x080B0C98;
// void CServerExoAppInternal::StopServices(void)
constexpr uintptr_t CServerExoAppInternal__StopServices = 0x080A4524;
// protected int32_t CServerExoAppInternal::StorePlayerCharacters(void)
constexpr uintptr_t CServerExoAppInternal__StorePlayerCharacters = 0x0809A8B4;
// public int32_t CServerExoAppInternal::StripColorTokens(CExoString&)
constexpr uintptr_t CServerExoAppInternal__StripColorTokens = 0x080AF440;
// void CServerExoAppInternal::Test_Unit_Script_Compile(void)
constexpr uintptr_t CServerExoAppInternal__Test_Unit_Script_Compile = 0x080AF110;
// void CServerExoAppInternal::Test_Unit_Script_Run(void)
constexpr uintptr_t CServerExoAppInternal__Test_Unit_Script_Run = 0x080AF2F0;
// public void CServerExoAppInternal::TogglePauseState(unsigned char)
constexpr uintptr_t CServerExoAppInternal__TogglePauseState = 0x080B0924;
// void CServerExoAppInternal::Uninitialize(void)
constexpr uintptr_t CServerExoAppInternal__Uninitialize = 0x080B0298;
// public int32_t CServerExoAppInternal::UnloadModule(void)
constexpr uintptr_t CServerExoAppInternal__UnloadModule = 0x0809E070;
// public void CServerExoAppInternal::UnlockBiowareModule(CNWSModule*)
constexpr uintptr_t CServerExoAppInternal__UnlockBiowareModule = 0x08099C24;
// void CServerExoAppInternal::UpdateAutoSaveTimer(void)
constexpr uintptr_t CServerExoAppInternal__UpdateAutoSaveTimer = 0x080AF018;
// void CServerExoAppInternal::UpdateClientGameObjects(int32_t)
constexpr uintptr_t CServerExoAppInternal__UpdateClientGameObjects = 0x080B021C;
// public void CServerExoAppInternal::UpdateClientGameObjectsForPlayer(CNWSPlayer*, int32_t, uint64_t)
constexpr uintptr_t CServerExoAppInternal__UpdateClientGameObjectsForPlayer = 0x080A4A70;
// void CServerExoAppInternal::UpdateClientsForObject(uint32_t)
constexpr uintptr_t CServerExoAppInternal__UpdateClientsForObject = 0x080B0198;
// void CServerExoAppInternal::UpdateLogHeartbeatTimer(uint64_t)
constexpr uintptr_t CServerExoAppInternal__UpdateLogHeartbeatTimer = 0x080B0CC8;
// protected int32_t CServerExoAppInternal::UpdateShutdownTimer(uint64_t)
constexpr uintptr_t CServerExoAppInternal__UpdateShutdownTimer = 0x080AE6F0;
// void CServerExoAppInternal::UpdateWindowTitle(void)
constexpr uintptr_t CServerExoAppInternal__UpdateWindowTitle = 0x080B00B8;
// public uint32_t CServerExoAppInternal::ValidateCreateServerCharacter(CNWSPlayer*, void*, uint32_t)
constexpr uintptr_t CServerExoAppInternal__ValidateCreateServerCharacter = 0x0809AE78;
// void CServerExoAppInternal::ValidatePlayerLogin(void*)
constexpr uintptr_t CServerExoAppInternal__ValidatePlayerLogin = 0x080B02A0;
// public void CServerExoAppInternal::VomitServerOptionsToLog(void)
constexpr uintptr_t CServerExoAppInternal__VomitServerOptionsToLog = 0x080AA870;
// protected void CServerExoAppInternal::WriteServerInfoToIniFile(void)
constexpr uintptr_t CServerExoAppInternal__WriteServerInfoToIniFile = 0x080A9E14;

// public CServerInfo::CServerInfo(void)
constexpr uintptr_t CServerInfo__CServerInfoCtor = 0x080B2CB4;
// public int32_t CServerInfo::FindOptionIndex(CExoString, CExoString)
constexpr uintptr_t CServerInfo__FindOptionIndex = 0x080B3AA4;
// public void CServerInfo::SetDifficultyLevel(int32_t, int32_t)
constexpr uintptr_t CServerInfo__SetDifficultyLevel = 0x080B3BC4;

// CStoreCustomer::CStoreCustomer(void)
constexpr uintptr_t CStoreCustomer__CStoreCustomerCtor = 0x08085AD4;

// public CTlkFile::CTlkFile(CExoString)
constexpr uintptr_t CTlkFile__CTlkFileCtor__1 = 0x082B614C;
// void CTlkFile::ReadHeader(void)
constexpr uintptr_t CTlkFile__ReadHeader = 0x082B61F8;

// public CTlkTable::CTlkTable(void)
constexpr uintptr_t CTlkTable__CTlkTableCtor = 0x082B6238;
// public CTlkTable::~CTlkTable(void)
constexpr uintptr_t CTlkTable__CTlkTableDtor = 0x082B4220;
// public void CTlkTable::ClearCustomTokens(void)
constexpr uintptr_t CTlkTable__ClearCustomTokens = 0x082B636C;
// void CTlkTable::CloseFile(CTlkFile**)
constexpr uintptr_t CTlkTable__CloseFile = 0x082B6284;
// public void CTlkTable::CloseFileAlternate(void)
constexpr uintptr_t CTlkTable__CloseFileAlternate = 0x082B62E4;
// public int32_t CTlkTable::ExoIsDBCSLeadByte(unsigned char)
constexpr uintptr_t CTlkTable__ExoIsDBCSLeadByte = 0x082B6348;
// protected int32_t CTlkTable::FetchInternal(uint32_t, STR_RES&, int32_t)
constexpr uintptr_t CTlkTable__FetchInternal = 0x082B4404;
// public uint32_t CTlkTable::GetLanguageVersion(void)
constexpr uintptr_t CTlkTable__GetLanguageVersion = 0x082B63C8;
// public CExoString CTlkTable::GetSimpleString(uint32_t)
constexpr uintptr_t CTlkTable__GetSimpleString = 0x082B4AF8;
// void CTlkTable::GetTokenValue(const CTlkTableToken&, CExoString&)
constexpr uintptr_t CTlkTable__GetTokenValue = 0x082B6474;
// public int32_t CTlkTable::OpenFile(CExoString)
constexpr uintptr_t CTlkTable__OpenFile__0 = 0x082B4BA0;
// public int32_t CTlkTable::OpenFile(const CExoString&, CTlkFile**)
constexpr uintptr_t CTlkTable__OpenFile__1 = 0x082B553C;
// public int32_t CTlkTable::OpenFileAlternate(const CExoString&)
constexpr uintptr_t CTlkTable__OpenFileAlternate = 0x082B6350;
// public void CTlkTable::ParseStr(CExoString&)
constexpr uintptr_t CTlkTable__ParseStr = 0x082B5B24;
// void CTlkTable::RemapFontName(char*)
constexpr uintptr_t CTlkTable__RemapFontName = 0x082B432C;
// public void CTlkTable::SetCustomToken(int32_t, const CExoString&)
constexpr uintptr_t CTlkTable__SetCustomToken = 0x082B58D4;
// void CTlkTable::SetUseLargeDialogFont(int32_t)
constexpr uintptr_t CTlkTable__SetUseLargeDialogFont = 0x082B63EC;

// public CTwoDimArrays::CTwoDimArrays(void)
constexpr uintptr_t CTwoDimArrays__CTwoDimArraysCtor = 0x080B3C14;
// public CTwoDimArrays::~CTwoDimArrays(void)
constexpr uintptr_t CTwoDimArrays__CTwoDimArraysDtor = 0x080B4030;
// public void CTwoDimArrays::ClearCached2DAs(void)
constexpr uintptr_t CTwoDimArrays__ClearCached2DAs = 0x080B98A4;
// public C2DA* CTwoDimArrays::GetCached2DA(CExoString, int32_t)
constexpr uintptr_t CTwoDimArrays__GetCached2DA = 0x080B92A8;
// public unsigned char CTwoDimArrays::GetEpicAttackBonus(unsigned char)
constexpr uintptr_t CTwoDimArrays__GetEpicAttackBonus = 0x080B9A68;
// public unsigned char CTwoDimArrays::GetEpicFortSaveBonus(unsigned char)
constexpr uintptr_t CTwoDimArrays__GetEpicFortSaveBonus = 0x080B9A04;
// public unsigned char CTwoDimArrays::GetEpicRefSaveBonus(unsigned char)
constexpr uintptr_t CTwoDimArrays__GetEpicRefSaveBonus = 0x080B9A24;
// public unsigned char CTwoDimArrays::GetEpicWillSaveBonus(unsigned char)
constexpr uintptr_t CTwoDimArrays__GetEpicWillSaveBonus = 0x080B9A48;
// public C2DA* CTwoDimArrays::GetIPRPCostTable(unsigned char)
constexpr uintptr_t CTwoDimArrays__GetIPRPCostTable = 0x080B99E0;
// public int32_t CTwoDimArrays::Load2DArrays(void)
constexpr uintptr_t CTwoDimArrays__Load2DArrays = 0x080B4CAC;
// private int32_t CTwoDimArrays::LoadEpicAttacks(void)
constexpr uintptr_t CTwoDimArrays__LoadEpicAttacks = 0x080B91A0;
// private int32_t CTwoDimArrays::LoadEpicSaves(void)
constexpr uintptr_t CTwoDimArrays__LoadEpicSaves = 0x080B8FE4;
// private int32_t CTwoDimArrays::LoadIPRPCostTables(void)
constexpr uintptr_t CTwoDimArrays__LoadIPRPCostTables = 0x080B8D14;
// public int32_t CTwoDimArrays::UnLoad2DArrays(void)
constexpr uintptr_t CTwoDimArrays__UnLoad2DArrays = 0x080B7728;
// void CTwoDimArrays::UnLoadIPRPCostTables(void)
constexpr uintptr_t CTwoDimArrays__UnLoadIPRPCostTables = 0x080B9964;
// void CTwoDimArrays::Update2DACache(CExoLinkedListTemplatedC2DA*, int32_t, C2DA*)
constexpr uintptr_t CTwoDimArrays__Update2DACache = 0x080B9A88;

// public CVirtualMachine::CVirtualMachine(void)
constexpr uintptr_t CVirtualMachine__CVirtualMachineCtor = 0x0825F150;
// public CVirtualMachine::~CVirtualMachine(void)
constexpr uintptr_t CVirtualMachine__CVirtualMachineDtor = 0x0825F9A0;
// private void CVirtualMachine::Debugger(int32_t*)
constexpr uintptr_t CVirtualMachine__Debugger = 0x08263D98;
// void CVirtualMachine::DeleteScript(CVirtualMachineScript*)
constexpr uintptr_t CVirtualMachine__DeleteScript = 0x082641EC;
// public void CVirtualMachine::DeleteScriptSituation(void*)
constexpr uintptr_t CVirtualMachine__DeleteScriptSituation = 0x08264550;
// public int32_t CVirtualMachine::ExecuteCode(int32_t*, char*, int32_t, CVirtualMachineDebuggingContext*)
constexpr uintptr_t CVirtualMachine__ExecuteCode = 0x0825FD0C;
// public int32_t CVirtualMachine::GetRunScriptReturnValue(int32_t*, void**)
constexpr uintptr_t CVirtualMachine__GetRunScriptReturnValue = 0x08264324;
// void CVirtualMachine::GetScriptLog(const CExoString&)
constexpr uintptr_t CVirtualMachine__GetScriptLog = 0x082642C4;
// void CVirtualMachine::InitializeScript(CVirtualMachineScript*, char*, int32_t)
constexpr uintptr_t CVirtualMachine__InitializeScript = 0x08264194;
// private int32_t CVirtualMachine::LoadScriptSituation_Internal(CVirtualMachineScript**, CResGFF*, CResStruct*)
constexpr uintptr_t CVirtualMachine__LoadScriptSituation_Internal = 0x08263244;
// void CVirtualMachine::PopInstructionPtr(int32_t*)
constexpr uintptr_t CVirtualMachine__PopInstructionPtr = 0x08264258;
// void CVirtualMachine::PushInstructionPtr(int32_t)
constexpr uintptr_t CVirtualMachine__PushInstructionPtr = 0x08264294;
// private int32_t CVirtualMachine::ReadScriptFile(CExoString*)
constexpr uintptr_t CVirtualMachine__ReadScriptFile = 0x08261C2C;
// public int32_t CVirtualMachine::RunScript(CExoString*, uint32_t, int32_t)
constexpr uintptr_t CVirtualMachine__RunScript = 0x08261F94;
// private int32_t CVirtualMachine::RunScriptFile(int32_t)
constexpr uintptr_t CVirtualMachine__RunScriptFile = 0x0826276C;
// public int32_t CVirtualMachine::RunScriptSituation(void*, uint32_t, int32_t)
constexpr uintptr_t CVirtualMachine__RunScriptSituation = 0x08262534;
// private int32_t CVirtualMachine::SaveScriptSituation_Internal(CVirtualMachineScript*, CResGFF*, CResStruct*)
constexpr uintptr_t CVirtualMachine__SaveScriptSituation_Internal = 0x0826306C;
// public void CVirtualMachine::SetCommandImplementer(CVirtualMachineCmdImplementer*)
constexpr uintptr_t CVirtualMachine__SetCommandImplementer = 0x082645CC;
// public void CVirtualMachine::SetDebugGUIFlag(int32_t)
constexpr uintptr_t CVirtualMachine__SetDebugGUIFlag = 0x082645B8;
// private int32_t CVirtualMachine::SetUpScriptSituation(CVirtualMachineScript*)
constexpr uintptr_t CVirtualMachine__SetUpScriptSituation = 0x08262920;
// private int32_t CVirtualMachine::StackPopCommand_Internal(CVirtualMachineScript**)
constexpr uintptr_t CVirtualMachine__StackPopCommand_Internal = 0x08262EBC;
// public int32_t CVirtualMachine::StackPopEngineStructure(int32_t, void**)
constexpr uintptr_t CVirtualMachine__StackPopEngineStructure = 0x08262CFC;
// public int32_t CVirtualMachine::StackPopFloat(float*)
constexpr uintptr_t CVirtualMachine__StackPopFloat = 0x08262AD8;
// public int32_t CVirtualMachine::StackPopInteger(int32_t*)
constexpr uintptr_t CVirtualMachine__StackPopInteger = 0x082629FC;
// public int32_t CVirtualMachine::StackPopObject(uint32_t*)
constexpr uintptr_t CVirtualMachine__StackPopObject = 0x08262DFC;
// public int32_t CVirtualMachine::StackPopString(CExoString*)
constexpr uintptr_t CVirtualMachine__StackPopString = 0x08262C18;
// public int32_t CVirtualMachine::StackPopVector(Vector*)
constexpr uintptr_t CVirtualMachine__StackPopVector = 0x082643C8;
// public int32_t CVirtualMachine::StackPushEngineStructure(int32_t, void*)
constexpr uintptr_t CVirtualMachine__StackPushEngineStructure = 0x082644AC;
// public int32_t CVirtualMachine::StackPushFloat(float)
constexpr uintptr_t CVirtualMachine__StackPushFloat = 0x08264388;
// public int32_t CVirtualMachine::StackPushInteger(int32_t)
constexpr uintptr_t CVirtualMachine__StackPushInteger = 0x0826434C;
// public int32_t CVirtualMachine::StackPushObject(uint32_t)
constexpr uintptr_t CVirtualMachine__StackPushObject = 0x08264514;
// public int32_t CVirtualMachine::StackPushString(const CExoString&)
constexpr uintptr_t CVirtualMachine__StackPushString = 0x08264430;
// public int32_t CVirtualMachine::StackPushVector(Vector)
constexpr uintptr_t CVirtualMachine__StackPushVector = 0x08262B98;
// void CVirtualMachine::Test_RunAllScriptsInDirectory(CExoString&)
constexpr uintptr_t CVirtualMachine__Test_RunAllScriptsInDirectory = 0x082634C4;

// CVirtualMachineCache::~CVirtualMachineCache(void)
constexpr uintptr_t CVirtualMachineCache__CVirtualMachineCacheDtor = 0x082640D8;
// public void CVirtualMachineCache::ClearAllFiles(void)
constexpr uintptr_t CVirtualMachineCache__ClearAllFiles = 0x08264114;
// public void CVirtualMachineCache::PrecacheFile(const CExoString&)
constexpr uintptr_t CVirtualMachineCache__PrecacheFile = 0x0825F0B4;

// CVirtualMachineCmdImplementer::~CVirtualMachineCmdImplementer(void)
constexpr uintptr_t CVirtualMachineCmdImplementer__CVirtualMachineCmdImplementerDtor = 0x08236D84;

// public CVirtualMachineDebuggerInstance::CVirtualMachineDebuggerInstance(void)
constexpr uintptr_t CVirtualMachineDebuggerInstance__CVirtualMachineDebuggerInstanceCtor = 0x08264C00;
// public CVirtualMachineDebuggerInstance::~CVirtualMachineDebuggerInstance(void)
constexpr uintptr_t CVirtualMachineDebuggerInstance__CVirtualMachineDebuggerInstanceDtor = 0x08264DF0;
// private int32_t CVirtualMachineDebuggerInstance::DebuggerDisplayCurrentLocation(int32_t, int32_t)
constexpr uintptr_t CVirtualMachineDebuggerInstance__DebuggerDisplayCurrentLocation = 0x08269A88;
// public int32_t CVirtualMachineDebuggerInstance::DebuggerMainLoop(void)
constexpr uintptr_t CVirtualMachineDebuggerInstance__DebuggerMainLoop = 0x0826A07C;
// private int32_t CVirtualMachineDebuggerInstance::DebuggerSingleStep(int32_t)
constexpr uintptr_t CVirtualMachineDebuggerInstance__DebuggerSingleStep = 0x08265540;
// private int32_t CVirtualMachineDebuggerInstance::FindEmptyWatchViewEntry(void)
constexpr uintptr_t CVirtualMachineDebuggerInstance__FindEmptyWatchViewEntry = 0x08268178;
// void CVirtualMachineDebuggerInstance::FindWatchViewEntry(CExoString*, CExoString*, int32_t)
constexpr uintptr_t CVirtualMachineDebuggerInstance__FindWatchViewEntry = 0x0826A4F0;
// private CExoString CVirtualMachineDebuggerInstance::GenerateCallStackParameterView(int32_t, CExoString*, CExoString*)
constexpr uintptr_t CVirtualMachineDebuggerInstance__GenerateCallStackParameterView = 0x08267914;
// private CExoString CVirtualMachineDebuggerInstance::GenerateCallStackView(int32_t, int32_t, int32_t)
constexpr uintptr_t CVirtualMachineDebuggerInstance__GenerateCallStackView = 0x08267A30;
// void CVirtualMachineDebuggerInstance::GenerateDebugVariableLocationForParameter(int32_t, int32_t)
constexpr uintptr_t CVirtualMachineDebuggerInstance__GenerateDebugVariableLocationForParameter = 0x0826A490;
// void CVirtualMachineDebuggerInstance::GenerateFunctionIDFromInstructionPointer(int32_t)
constexpr uintptr_t CVirtualMachineDebuggerInstance__GenerateFunctionIDFromInstructionPointer = 0x0826A2F8;
// public int32_t CVirtualMachineDebuggerInstance::GenerateLineNumberFromInstructionPointer(int32_t, int32_t)
constexpr uintptr_t CVirtualMachineDebuggerInstance__GenerateLineNumberFromInstructionPointer = 0x0826A338;
// private int32_t CVirtualMachineDebuggerInstance::GenerateStackSizeAtInstructionPointer(int32_t, int32_t)
constexpr uintptr_t CVirtualMachineDebuggerInstance__GenerateStackSizeAtInstructionPointer = 0x08267760;
// private CExoString CVirtualMachineDebuggerInstance::GenerateTypeName(CExoString*)
constexpr uintptr_t CVirtualMachineDebuggerInstance__GenerateTypeName = 0x08267488;
// private int32_t CVirtualMachineDebuggerInstance::GenerateTypeSize(CExoString*)
constexpr uintptr_t CVirtualMachineDebuggerInstance__GenerateTypeSize = 0x082673C8;
// private CExoString CVirtualMachineDebuggerInstance::GenerateTypeValueFromStackLocation(int32_t, CExoString*)
constexpr uintptr_t CVirtualMachineDebuggerInstance__GenerateTypeValueFromStackLocation = 0x082675F0;
// private int32_t CVirtualMachineDebuggerInstance::GetNextDebugVariable(int32_t, int32_t, int32_t)
constexpr uintptr_t CVirtualMachineDebuggerInstance__GetNextDebugVariable = 0x0826A3F4;
// private int32_t CVirtualMachineDebuggerInstance::LoadDebugInfo(CVirtualMachineDebugLoader*)
constexpr uintptr_t CVirtualMachineDebuggerInstance__LoadDebugInfo = 0x082659D4;
// void CVirtualMachineDebuggerInstance::LoadDebugInfoLine(unsigned char*, uint32_t, uint32_t, uint32_t*)
constexpr uintptr_t CVirtualMachineDebuggerInstance__LoadDebugInfoLine = 0x0826A2B4;
// private char* CVirtualMachineDebuggerInstance::LoadScriptLine(unsigned char*, uint32_t, uint32_t, uint32_t*, int32_t)
constexpr uintptr_t CVirtualMachineDebuggerInstance__LoadScriptLine = 0x0826A254;
// private int32_t CVirtualMachineDebuggerInstance::ParseAndExecuteMessage(int32_t*)
constexpr uintptr_t CVirtualMachineDebuggerInstance__ParseAndExecuteMessage = 0x08265684;
// void CVirtualMachineDebuggerInstance::ReadIntegerFromInput(int32_t*, int32_t*)
constexpr uintptr_t CVirtualMachineDebuggerInstance__ReadIntegerFromInput = 0x0826A158;
// private int32_t CVirtualMachineDebuggerInstance::ReadStringFromInput(int32_t*, CExoString*)
constexpr uintptr_t CVirtualMachineDebuggerInstance__ReadStringFromInput = 0x082655CC;
// private void CVirtualMachineDebuggerInstance::SendCallStackWindowUpdateCommands(void)
constexpr uintptr_t CVirtualMachineDebuggerInstance__SendCallStackWindowUpdateCommands = 0x08267EE8;
// private void CVirtualMachineDebuggerInstance::SendCodeWindowUpdateCommands(CExoString, int32_t)
constexpr uintptr_t CVirtualMachineDebuggerInstance__SendCodeWindowUpdateCommands = 0x08267084;
// private void CVirtualMachineDebuggerInstance::SendLabelsAndKeywords(void)
constexpr uintptr_t CVirtualMachineDebuggerInstance__SendLabelsAndKeywords = 0x08269CF8;
// private void CVirtualMachineDebuggerInstance::SendWatchWindowEntry(CExoString*, CExoString*, CExoString*, CExoString*, int32_t)
constexpr uintptr_t CVirtualMachineDebuggerInstance__SendWatchWindowEntry = 0x08268804;
// private void CVirtualMachineDebuggerInstance::SendWatchWindowUpdateCommands(int32_t)
constexpr uintptr_t CVirtualMachineDebuggerInstance__SendWatchWindowUpdateCommands = 0x08269238;
// public void CVirtualMachineDebuggerInstance::ShutDownDebugger(void)
constexpr uintptr_t CVirtualMachineDebuggerInstance__ShutDownDebugger = 0x0826A100;
// public int32_t CVirtualMachineDebuggerInstance::SpawnDebugger(void)
constexpr uintptr_t CVirtualMachineDebuggerInstance__SpawnDebugger = 0x08265364;
// private void CVirtualMachineDebuggerInstance::ToggleWatchWindowExpansion(CExoString)
constexpr uintptr_t CVirtualMachineDebuggerInstance__ToggleWatchWindowExpansion = 0x0826A1B0;

// public CVirtualMachineDebugLoader::~CVirtualMachineDebugLoader(void)
constexpr uintptr_t CVirtualMachineDebugLoader__CVirtualMachineDebugLoaderDtor = 0x08248214;
// public int32_t CVirtualMachineDebugLoader::DemandDebugInfo(CExoString*)
constexpr uintptr_t CVirtualMachineDebugLoader__DemandDebugInfo = 0x08264B08;
// void CVirtualMachineDebugLoader::GetDataPtr(void)
constexpr uintptr_t CVirtualMachineDebugLoader__GetDataPtr = 0x08269FE4;
// void CVirtualMachineDebugLoader::GetSize(void)
constexpr uintptr_t CVirtualMachineDebugLoader__GetSize = 0x0826A004;
// void CVirtualMachineDebugLoader::ReleaseDebugInfo(void)
constexpr uintptr_t CVirtualMachineDebugLoader__ReleaseDebugInfo = 0x0826A024;

// CVirtualMachineFile::CVirtualMachineFile(void)
constexpr uintptr_t CVirtualMachineFile__CVirtualMachineFileCtor = 0x08263F8C;
// public CVirtualMachineFile::~CVirtualMachineFile(void)
constexpr uintptr_t CVirtualMachineFile__CVirtualMachineFileDtor = 0x08263FAC;
// void CVirtualMachineFile::GetData(char**, uint32_t&)
constexpr uintptr_t CVirtualMachineFile__GetData = 0x082640A4;
// void CVirtualMachineFile::LoadFile(const CExoString&)
constexpr uintptr_t CVirtualMachineFile__LoadFile = 0x08264028;
// void CVirtualMachineFile::UnloadFile(void)
constexpr uintptr_t CVirtualMachineFile__UnloadFile = 0x08264068;

// CVirtualMachineStack::CVirtualMachineStack(void)
constexpr uintptr_t CVirtualMachineStack__CVirtualMachineStackCtor = 0x08263E30;
// public CVirtualMachineStack::~CVirtualMachineStack(void)
constexpr uintptr_t CVirtualMachineStack__CVirtualMachineStackDtor = 0x08263E5C;
// public void CVirtualMachineStack::AddToTopOfStack(int32_t)
constexpr uintptr_t CVirtualMachineStack__AddToTopOfStack = 0x0825E5C4;
// public void CVirtualMachineStack::AssignLocationToLocation(int32_t, int32_t)
constexpr uintptr_t CVirtualMachineStack__AssignLocationToLocation = 0x0825E738;
// public void CVirtualMachineStack::ClearStack(void)
constexpr uintptr_t CVirtualMachineStack__ClearStack = 0x0825EFD0;
// public void CVirtualMachineStack::CopyFromStack(CVirtualMachineStack*, int32_t, int32_t)
constexpr uintptr_t CVirtualMachineStack__CopyFromStack = 0x0825E89C;
// void CVirtualMachineStack::GetBasePointer(void)
constexpr uintptr_t CVirtualMachineStack__GetBasePointer = 0x08263EC4;
// void CVirtualMachineStack::GetStackPointer(void)
constexpr uintptr_t CVirtualMachineStack__GetStackPointer = 0x08263EE0;
// void CVirtualMachineStack::InitializeStack(void)
constexpr uintptr_t CVirtualMachineStack__InitializeStack = 0x08263E90;
// public int32_t CVirtualMachineStack::LoadStack(CResGFF*, CResStruct*)
constexpr uintptr_t CVirtualMachineStack__LoadStack = 0x0825ED18;
// void CVirtualMachineStack::ModifyIntegerAtLocation(int32_t, int32_t)
constexpr uintptr_t CVirtualMachineStack__ModifyIntegerAtLocation = 0x08263E9C;
// public int32_t CVirtualMachineStack::SaveStack(CResGFF*, CResStruct*)
constexpr uintptr_t CVirtualMachineStack__SaveStack = 0x0825EB80;
// void CVirtualMachineStack::SetBasePointer(int32_t)
constexpr uintptr_t CVirtualMachineStack__SetBasePointer = 0x08263ED0;
// public void CVirtualMachineStack::SetStackPointer(int32_t)
constexpr uintptr_t CVirtualMachineStack__SetStackPointer = 0x08263EEC;

// public CWorldTimer::CWorldTimer(void)
constexpr uintptr_t CWorldTimer__CWorldTimerCtor = 0x08241160;
// public CWorldTimer::~CWorldTimer(void)
constexpr uintptr_t CWorldTimer__CWorldTimerDtor = 0x082411C0;
// public uint32_t CWorldTimer::AddWorldTimes(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*, uint32_t*)
constexpr uintptr_t CWorldTimer__AddWorldTimes = 0x08241804;
// public void CWorldTimer::AdvanceToTime(int32_t, int32_t, int32_t, int32_t)
constexpr uintptr_t CWorldTimer__AdvanceToTime = 0x08240CE0;
// public int32_t CWorldTimer::CompareWorldTimes(uint32_t, uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CWorldTimer__CompareWorldTimes = 0x082418AC;
// public void CWorldTimer::ConvertFromCalendarDay(uint32_t, uint32_t*, uint32_t*, uint32_t*)
constexpr uintptr_t CWorldTimer__ConvertFromCalendarDay = 0x08241388;
// public void CWorldTimer::ConvertFromTimeOfDay(uint32_t, uint32_t*, uint32_t*, uint32_t*, uint32_t*)
constexpr uintptr_t CWorldTimer__ConvertFromTimeOfDay = 0x082413F8;
// public uint32_t CWorldTimer::ConvertToCalendarDay(uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CWorldTimer__ConvertToCalendarDay = 0x082412A0;
// void CWorldTimer::ConvertToTimeOfDay(uint32_t, uint32_t, uint32_t, uint32_t)
constexpr uintptr_t CWorldTimer__ConvertToTimeOfDay = 0x082412F4;
// public uint32_t CWorldTimer::GetCalendarDayFromSeconds(float)
constexpr uintptr_t CWorldTimer__GetCalendarDayFromSeconds = 0x08241A8C;
// public uint64_t CWorldTimer::GetSnapshotTime(void)
constexpr uintptr_t CWorldTimer__GetSnapshotTime = 0x08241274;
// public uint64_t CWorldTimer::GetSnapshotTimeDifference(void)
constexpr uintptr_t CWorldTimer__GetSnapshotTimeDifference = 0x08241284;
// void CWorldTimer::GetTimeDifferenceFromWorldTime(uint32_t, uint32_t)
constexpr uintptr_t CWorldTimer__GetTimeDifferenceFromWorldTime = 0x08241650;
// public uint32_t CWorldTimer::GetTimeOfDayFromSeconds(float)
constexpr uintptr_t CWorldTimer__GetTimeOfDayFromSeconds = 0x08241AF0;
// public void CWorldTimer::GetWorldTime(uint32_t*, uint32_t*)
constexpr uintptr_t CWorldTimer__GetWorldTime = 0x082416A4;
// void CWorldTimer::GetWorldTimeCalendarDay(void)
constexpr uintptr_t CWorldTimer__GetWorldTimeCalendarDay = 0x0824084C;
// void CWorldTimer::GetWorldTimeCalendarDayString(void)
constexpr uintptr_t CWorldTimer__GetWorldTimeCalendarDayString = 0x08240938;
// public uint32_t CWorldTimer::GetWorldTimeDay(void)
constexpr uintptr_t CWorldTimer__GetWorldTimeDay = 0x0824196C;
// public uint32_t CWorldTimer::GetWorldTimeHour(void)
constexpr uintptr_t CWorldTimer__GetWorldTimeHour = 0x08241994;
// public uint32_t CWorldTimer::GetWorldTimeMillisecond(void)
constexpr uintptr_t CWorldTimer__GetWorldTimeMillisecond = 0x08241A3C;
// public uint32_t CWorldTimer::GetWorldTimeMinute(void)
constexpr uintptr_t CWorldTimer__GetWorldTimeMinute = 0x082419CC;
// public uint32_t CWorldTimer::GetWorldTimeMonth(void)
constexpr uintptr_t CWorldTimer__GetWorldTimeMonth = 0x08241934;
// public uint32_t CWorldTimer::GetWorldTimeSecond(void)
constexpr uintptr_t CWorldTimer__GetWorldTimeSecond = 0x08241A08;
// void CWorldTimer::GetWorldTimeTimeOfDay(void)
constexpr uintptr_t CWorldTimer__GetWorldTimeTimeOfDay = 0x08240A10;
// void CWorldTimer::GetWorldTimeTimeOfDayString(void)
constexpr uintptr_t CWorldTimer__GetWorldTimeTimeOfDayString = 0x08240AFC;
// public uint32_t CWorldTimer::GetWorldTimeYear(void)
constexpr uintptr_t CWorldTimer__GetWorldTimeYear = 0x082418F8;
// public void CWorldTimer::PauseWorldTimer(void)
constexpr uintptr_t CWorldTimer__PauseWorldTimer = 0x082406DC;
// public void CWorldTimer::ResetTimer(CWorldTimer*)
constexpr uintptr_t CWorldTimer__ResetTimer = 0x082417A0;
// void CWorldTimer::SetFixedSnapshotRate(int32_t, int32_t)
constexpr uintptr_t CWorldTimer__SetFixedSnapshotRate = 0x08241A5C;
// public void CWorldTimer::SetMinutesPerHour(unsigned char)
constexpr uintptr_t CWorldTimer__SetMinutesPerHour = 0x082411DC;
// public void CWorldTimer::SetSnapshotTime(void)
constexpr uintptr_t CWorldTimer__SetSnapshotTime = 0x0824121C;
// public void CWorldTimer::SetWorldTime(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int32_t)
constexpr uintptr_t CWorldTimer__SetWorldTime__0 = 0x08241478;
// public void CWorldTimer::SetWorldTime(uint32_t, uint32_t, int32_t)
constexpr uintptr_t CWorldTimer__SetWorldTime__1 = 0x08241590;
// public uint32_t CWorldTimer::SubtractWorldTimes(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*, uint32_t*)
constexpr uintptr_t CWorldTimer__SubtractWorldTimes = 0x08241850;
// void CWorldTimer::TranslateWorldTimeToString(uint32_t, uint32_t, CExoString&, CExoString&)
constexpr uintptr_t CWorldTimer__TranslateWorldTimeToString = 0x08240BCC;
// public void CWorldTimer::UnpauseWorldTimer(void)
constexpr uintptr_t CWorldTimer__UnpauseWorldTimer = 0x082407BC;

// void FreeStanding::AdminClientInfo(CExoString)
constexpr uintptr_t FreeStanding__AdminClientInfo = 0x080501E0;
// void FreeStanding::AdminClientList(void)
constexpr uintptr_t FreeStanding__AdminClientList = 0x0804F2BC;
// void FreeStanding::AdminKick(CExoString)
constexpr uintptr_t FreeStanding__AdminKick = 0x0804FF0C;
// void FreeStanding::AdminLoadGame(int32_t)
constexpr uintptr_t FreeStanding__AdminLoadGame = 0x0804E870;
// void FreeStanding::AdminLoadModule(char*)
constexpr uintptr_t FreeStanding__AdminLoadModule = 0x0804E534;
// int32_t FreeStanding::AdminSaveGame(int32_t, CExoString, int32_t)
constexpr uintptr_t FreeStanding__AdminSaveGame = 0x0804EDB8;
// void FreeStanding::AdminSay(CExoString)
constexpr uintptr_t FreeStanding__AdminSay = 0x080509F4;
// void FreeStanding::AdminSetPort(uint32_t)
constexpr uintptr_t FreeStanding__AdminSetPort = 0x08050D40;
// void FreeStanding::AdminStatus(void)
constexpr uintptr_t FreeStanding__AdminStatus = 0x0804FA20;
// void FreeStanding::ExoFree(void*)
constexpr uintptr_t FreeStanding__ExoFree = 0x082C8F6C;
// void* FreeStanding::ExoMalloc(uint32_t)
constexpr uintptr_t FreeStanding__ExoMalloc = 0x082C8F60;

// void Matrix::getquaternion(void) const
constexpr uintptr_t Matrix__getquaternion = 0x0826BED0;

// void Plane::Transform(const Vector&, const Quaternion&)
constexpr uintptr_t Plane__Transform = 0x0826C164;

// void Quaternion::__aml(float)
constexpr uintptr_t Quaternion____aml = 0x0826FEB4;

// void Vector::__adv(float)
constexpr uintptr_t Vector____adv = 0x0826FB64;
// void Vector::__ami(const Vector&)
constexpr uintptr_t Vector____ami = 0x0826FB1C;
// void Vector::__aml(float)
constexpr uintptr_t Vector____aml = 0x0826FB40;
// void Vector::__apl(const Vector&)
constexpr uintptr_t Vector____apl = 0x0826FAF8;
// public void Vector::Normalize(void)
constexpr uintptr_t Vector__Normalize = 0x0826B0D0;

}

#endif // NWNX_UNIFIED__FUNCTIONS_LINUX_HPP
