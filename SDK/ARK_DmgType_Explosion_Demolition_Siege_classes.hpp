#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DmgType_Explosion_Demolition_Siege_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Explosion_Demolition_Siege.DmgType_Explosion_Demolition_Siege_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Explosion_Demolition_Siege_C : public UDmgType_Explosion_Demolition_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Explosion_Demolition_Siege.DmgType_Explosion_Demolition_Siege_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif