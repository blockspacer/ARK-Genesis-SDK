#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponPoisonTrap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponPoisonTrap.PrimalItem_WeaponPoisonTrap_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_WeaponPoisonTrap_C : public UPrimalItemWeaponGenericAmmolessConsumeSelf_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponPoisonTrap.PrimalItem_WeaponPoisonTrap_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponPoisonTrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif