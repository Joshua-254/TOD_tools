#pragma once

#include "stdafx.h"
#include "StringsPool.h"
#include "SavesDirectoriesInformation.h"

class FileInternal;
class SavePoint;

#define SAVEPOINT_CLASS_SIZE 64

struct SavePoint__vtable {
	void(__thiscall* Release)(SavePoint* _this, bool);	//	@86BFE0
	char(__thiscall* SaveBuffersDataToFile)(SavePoint* _this);	//	@86C3D0
	int(__cdecl* vsnprintf)(const char*, ...);	//	@42EFC0
	int(__cdecl* _42F020)(const char*, ...);	//	@42F020
	int(__thiscall* WriteFormattedVarlistDataToBuffer)(SavePoint* _this, const char*, va_list);	//	@42F040
	void(__thiscall* CheckFormattingSymbol)(SavePoint* _this, const char*, int*);	//	@42F0A0
	int(__thiscall* ReadBlock)(SavePoint* _this);	//	@86C480
	int(__thiscall* ReadBlockAndGetPosition)(SavePoint* _this);	//	@86C4E0
	char(__thiscall* WriteBufferBlockAndInsertNewLine)(SavePoint* _this, int unk);	//	@86C3A0
	int(__thiscall* Read)(SavePoint* _this, void* buffer, int size);	//	@86C420
	int(__thiscall* WriteBuffer)(SavePoint* _this, int unk);	//	@86C540
	int(__thiscall* WriteBufferWithSize)(SavePoint* _this, const char* buffer, int size);	//	@86C340
	int(__thiscall* Seek)(SavePoint* _this, int position);	//	@86C570
	bool(__thiscall* _86BFC0)(SavePoint* _this);	//	@86BFC0
	bool(__thiscall* _86C700)(SavePoint* _this);	//	@86C700
	int(__thiscall* GetPosition)(SavePoint* _this);	//	@86C5D0
	bool(__thiscall* ReadBlockAndDecreasePosition)(SavePoint* _this);	//	@86C630
	bool(__thiscall* ReadBlockIfFailed)(SavePoint* _this);	//	@86C680
	const char* (__thiscall* GetSaveSlotDir)(SavePoint* _this);	//	@86C250
};

class SavePoint
{
private:
	SavePoint__vtable* lpVtbl;
	SavesDirectoriesInformation* m_pSavesDirInfo;
	String m_sSaveDir;
	String m_sSlotId;
	FileInternal* m_pSaveFileHandle;
	int m_nUnkState;
	String m_sUnkStr3;
};

static_assert(sizeof(SavePoint) == SAVEPOINT_CLASS_SIZE, MESSAGE_WRONG_CLASS_SIZE("SavePoint"));