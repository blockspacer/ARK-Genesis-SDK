#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalInventoryBP_StorageBox_Huge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_StorageBox_Huge.PrimalInventoryBP_StorageBox_Huge_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_StorageBox_Huge_C : public UPrimalInventoryBP_StorageBox_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_StorageBox_Huge.PrimalInventoryBP_StorageBox_Huge_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_StorageBox_Huge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
