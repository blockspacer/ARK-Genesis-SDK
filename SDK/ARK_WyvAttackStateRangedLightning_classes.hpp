#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WyvAttackStateRangedLightning_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WyvAttackStateRangedLightning.WyvAttackStateRangedLightning_C
// 0x0000 (0x00A0 - 0x00A0)
class UWyvAttackStateRangedLightning_C : public UPrimalAIStateDinoRangedState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WyvAttackStateRangedLightning.WyvAttackStateRangedLightning_C");
		return ptr;
	}


	void ExecuteUbergraph_WyvAttackStateRangedLightning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
