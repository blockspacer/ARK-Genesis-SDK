#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Oviraptor_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Oviraptor_AnimBlueprint.Oviraptor_AnimBlueprint_C
// 0x0000 (0x1669 - 0x1669)
class UOviraptor_AnimBlueprint_C : public UDinoBlueprintBase_VariableMovement_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Oviraptor_AnimBlueprint.Oviraptor_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Oviraptor_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
