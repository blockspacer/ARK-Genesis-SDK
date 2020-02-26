#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_RegrowEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RegrowEmitter.RegrowEmitter_C
// 0x0000 (0x0510 - 0x0510)
class ARegrowEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RegrowEmitter.RegrowEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_RegrowEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif