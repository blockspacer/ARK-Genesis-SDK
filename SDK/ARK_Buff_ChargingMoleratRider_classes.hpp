#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ChargingMoleratRider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargingMoleratRider.Buff_ChargingMoleratRider_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_ChargingMoleratRider_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargingMoleratRider.Buff_ChargingMoleratRider_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChargingMoleratRider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif