#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapSparkler_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapSparkler.WeapSparkler_C
// 0x0010 (0x0D60 - 0x0D50)
class AWeapSparkler_C : public AShooterWeapon_Melee
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0D50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapSparkler.WeapSparkler_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapSparkler(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
