#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Allosaurus_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Allosaurus_AnimBlueprint.Allosaurus_AnimBlueprint_C
// 0x0000 (0x1630 - 0x1630)
class UAllosaurus_AnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Allosaurus_AnimBlueprint.Allosaurus_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Allosaurus_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif