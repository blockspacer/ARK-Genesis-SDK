#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_Ovi_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Ovi.DinoEntry_Ovi_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Ovi_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Ovi.DinoEntry_Ovi_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Ovi(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
