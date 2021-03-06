#pragma once

#include "stdafx.h"

#include "Types.h"
#include "MemoryAllocators.h"

namespace Audio {

#define AUDIO_DIESELPO_CLASS_SIZE 40

	class DieselPower;

	struct DieselPower__vtable {
		;
		int field_0;
		int field_4;
		int field_8;
		int field_C;
		int field_10;
		int field_14;
		int field_18;
		int field_1C;
		int field_20;
		int field_24;
		int field_28;
		int field_2C;
		int field_30;
		int field_34;
		int field_38;
		int field_3C;
		int field_40;
		int field_44;
		int field_48;
		int field_4C;
		int field_50;
		int field_54;
		int (*field_58)(void);
		int* (*field_5C)(void);
		void(__thiscall* field_60)(DieselPower* _this, signed int);
		void(__stdcall* field_64)(signed int);
		int field_68;
		int field_6C;
		int field_70;
		int field_74;
		int field_78;
		int field_7C;
		int field_80;
		int field_84;
		int field_88;
		char* (*GetName)(void);
		IDirectSound* (*GetDirectSoundPtr)(void);
		int field_94;
		int field_98;
		int field_9C;
		int field_A0;
		int field_A4;
		int field_A8;
		int field_AC;
		int field_B0;
	};

	class DieselPower
	{
	private:
		DieselPower__vtable* lpVtbl;
		int field_4;
		int field_8;
		int field_C;
		int field_10;
		int field_14;
		int field_18;
		int field_1C;
		int field_20;
		int field_24;

	public:
		DieselPower()
		{
			debug("Audio::DieselPower created at %X\n", this);
		}

		~DieselPower()
		{
			debug("Audio::DieselPower destroyed!\n");
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
	};

	extern DieselPower* g_DieselPower;
}

static_assert(sizeof(Audio::DieselPower) == AUDIO_DIESELPO_CLASS_SIZE, MESSAGE_WRONG_CLASS_SIZE("DieselPower"));