#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_CavewolfPromoSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_CavewolfPromoSaddle.PrimalItemArmor_CavewolfPromoSaddle_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemArmor_CavewolfPromoSaddle_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_CavewolfPromoSaddle.PrimalItemArmor_CavewolfPromoSaddle_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_CavewolfPromoSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
