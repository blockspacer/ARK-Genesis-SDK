#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_Diplocaulus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Diplocaulus.DinoCharacterStatusComponent_BP_Diplocaulus_C
// 0x0004 (0x108C - 0x1088)
class UDinoCharacterStatusComponent_BP_Diplocaulus_C : public UDinoCharacterStatusComponent_BP_C
{
public:
	float                                              HealthWhileInWaterRegenMultiplier;                        // 0x1088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Diplocaulus.DinoCharacterStatusComponent_BP_Diplocaulus_C");
		return ptr;
	}


	float BPAdjustStatusValueModification(TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* amount, class UClass** DamageTypeClass, bool* bManualModification);
	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_Diplocaulus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
