// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ImmuneToHoneyLure_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ImmuneToHoneyLure.Buff_ImmuneToHoneyLure_C.UserConstructionScript
// ()

void ABuff_ImmuneToHoneyLure_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImmuneToHoneyLure.Buff_ImmuneToHoneyLure_C.UserConstructionScript");

	ABuff_ImmuneToHoneyLure_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ImmuneToHoneyLure.Buff_ImmuneToHoneyLure_C.ExecuteUbergraph_Buff_ImmuneToHoneyLure
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ImmuneToHoneyLure_C::ExecuteUbergraph_Buff_ImmuneToHoneyLure(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImmuneToHoneyLure.Buff_ImmuneToHoneyLure_C.ExecuteUbergraph_Buff_ImmuneToHoneyLure");

	ABuff_ImmuneToHoneyLure_C_ExecuteUbergraph_Buff_ImmuneToHoneyLure_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif