#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_JellyVenom_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_JellyVenom.PrimalItemConsumable_JellyVenom_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_JellyVenom_C : public UPrimalItemConsumableEatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_JellyVenom.PrimalItemConsumable_JellyVenom_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_JellyVenom(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif