#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDeathHarvestingComponent_DoubleHugest_Oil_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_DoubleHugest_Oil.DinoDeathHarvestingComponent_DoubleHugest_Oil_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_DoubleHugest_Oil_C : public UDinoDeathHarvestingComponent_Hugest_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_DoubleHugest_Oil.DinoDeathHarvestingComponent_DoubleHugest_Oil_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_DoubleHugest_Oil(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
