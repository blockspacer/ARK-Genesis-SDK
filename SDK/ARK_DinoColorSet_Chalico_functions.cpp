// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Chalico_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Chalico.DinoColorSet_Chalico_C.ExecuteUbergraph_DinoColorSet_Chalico
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Chalico_C::ExecuteUbergraph_DinoColorSet_Chalico(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Chalico.DinoColorSet_Chalico_C.ExecuteUbergraph_DinoColorSet_Chalico");

	UDinoColorSet_Chalico_C_ExecuteUbergraph_DinoColorSet_Chalico_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif