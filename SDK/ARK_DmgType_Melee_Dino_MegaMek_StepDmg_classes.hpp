#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DmgType_Melee_Dino_MegaMek_StepDmg_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_Dino_MegaMek_StepDmg.DmgType_Melee_Dino_MegaMek_StepDmg_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Melee_Dino_MegaMek_StepDmg_C : public UDmgType_Melee_Dino_Herbivore_Large_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_Dino_MegaMek_StepDmg.DmgType_Melee_Dino_MegaMek_StepDmg_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif