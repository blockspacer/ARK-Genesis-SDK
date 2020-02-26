#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_IndustrialForgeEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IndustrialForgeEmitter.IndustrialForgeEmitter_C
// 0x0000 (0x0510 - 0x0510)
class AIndustrialForgeEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IndustrialForgeEmitter.IndustrialForgeEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_IndustrialForgeEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif