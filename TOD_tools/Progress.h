#pragma once

#include "Entity.h"
#include "GfxInternal_Dx9_Texture.h"
#include "List.h"
#include "MemoryAllocators.h"

#define PROGRESS_CLASS_SIZE 112

class Progress;

struct Progress__vtable {
	void(__thiscall* Destroy)(Progress* _this);
	void(__thiscall* nullsub1)(Progress* _this);
	void(__thiscall* UpdateProgress)(Progress* _this, int time, signed int);
};

class Progress
{
private:
	Progress__vtable* lpVtbl;
	int field_4;
	List<int> m_unkList;				//	Don't really know what list it is.
	int field_18;
	int field_1C;
	int field_20;
	int field_24;
	int field_28;
	int field_2C;
	int field_30;
	int field_34;
	__int64 m_nUnkTimeStart_1;
	int m_nUnkTimeStart;
	int m_nUnkTimeEnd;
	int field_48;
	int field_4C;
	int field_50;
	int field_54;
	Entity* m_pLoadScreenSprite;
	GfxInternal_Dx9_Texture* m_pTexture;
	int* m_p60;
	int* m_p64;
	byte m_bEnabled;
	byte field_69[3];
	int field_6C;

public:
	Progress()
	{
		debug("Progress created at %X\n", this);
	}

	~Progress()
	{
		debug("Progress destroyed!\n");
	}

	void* operator new (size_t size)
	{
		return Allocators::AllocatorsList->ALLOCATOR_DEFAULT->allocate(size);
	}

	void operator delete(void* ptr)
	{
		if (ptr)
			Allocators::MemoryAllocators::ReleaseMemory(ptr, 0);
	}

	void	Init();	//	@87B720
};

extern Progress* g_Progress;	//	@A3D7D0

static_assert(sizeof(Progress) == PROGRESS_CLASS_SIZE, MESSAGE_WRONG_CLASS_SIZE("Progress"));