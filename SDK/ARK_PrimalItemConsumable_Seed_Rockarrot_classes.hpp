#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Seed_Rockarrot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Seed_Rockarrot.PrimalItemConsumable_Seed_Rockarrot_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_Seed_Rockarrot_C : public UPrimalItemConsumable_Seed_BaseVeggie_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Seed_Rockarrot.PrimalItemConsumable_Seed_Rockarrot_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Seed_Rockarrot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif