#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LanternPug_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LanternPug_Character_BP.LanternPug_Character_BP_C
// 0x0008 (0x2440 - 0x2438)
class ALanternPug_Character_BP_C : public ALanternPet_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_LanternPug_C* DinoCharacterStatus_BP_LanternPug_C1;                     // 0x2438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LanternPug_Character_BP.LanternPug_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_LanternPug_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
