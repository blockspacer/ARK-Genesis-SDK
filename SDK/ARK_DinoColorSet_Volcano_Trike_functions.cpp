// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Volcano_Trike_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Volcano_Trike.DinoColorSet_Volcano_Trike_C.ExecuteUbergraph_DinoColorSet_Volcano_Trike
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Volcano_Trike_C::ExecuteUbergraph_DinoColorSet_Volcano_Trike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Volcano_Trike.DinoColorSet_Volcano_Trike_C.ExecuteUbergraph_DinoColorSet_Volcano_Trike");

	UDinoColorSet_Volcano_Trike_C_ExecuteUbergraph_DinoColorSet_Volcano_Trike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif