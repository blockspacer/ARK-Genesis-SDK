#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_Sand_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Sand.PrimalItemResource_Sand_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemResource_Sand_C : public UPrimalItemResourceGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Sand.PrimalItemResource_Sand_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Sand(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif