// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SE_DinoColorSet_Moth_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoColorSet_Moth.SE_DinoColorSet_Moth_C.ExecuteUbergraph_SE_DinoColorSet_Moth
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoColorSet_Moth_C::ExecuteUbergraph_SE_DinoColorSet_Moth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoColorSet_Moth.SE_DinoColorSet_Moth_C.ExecuteUbergraph_SE_DinoColorSet_Moth");

	USE_DinoColorSet_Moth_C_ExecuteUbergraph_SE_DinoColorSet_Moth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif