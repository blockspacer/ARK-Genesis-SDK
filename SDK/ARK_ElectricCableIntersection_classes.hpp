#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ElectricCableIntersection_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElectricCableIntersection.ElectricCableIntersection_C
// 0x0000 (0x0AD8 - 0x0AD8)
class AElectricCableIntersection_C : public AElectricCableBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElectricCableIntersection.ElectricCableIntersection_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ElectricCableIntersection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
