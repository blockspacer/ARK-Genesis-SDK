// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_Ankylo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Ankylo.DinoCharacterStatusComponent_BP_Ankylo_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ankylo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Ankylo_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ankylo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Ankylo.DinoCharacterStatusComponent_BP_Ankylo_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ankylo");

	UDinoCharacterStatusComponent_BP_Ankylo_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Ankylo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif