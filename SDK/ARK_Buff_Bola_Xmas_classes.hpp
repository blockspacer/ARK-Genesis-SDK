#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Bola_Xmas_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Bola_Xmas.Buff_Bola_Xmas_C
// 0x0000 (0x09E2 - 0x09E2)
class ABuff_Bola_Xmas_C : public ABuff_Bola_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Bola_Xmas.Buff_Bola_Xmas_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Bola_Xmas(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
