// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_BearTrap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_BearTrap.EngramEntry_BearTrap_C.ExecuteUbergraph_EngramEntry_BearTrap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_BearTrap_C::ExecuteUbergraph_EngramEntry_BearTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_BearTrap.EngramEntry_BearTrap_C.ExecuteUbergraph_EngramEntry_BearTrap");

	UEngramEntry_BearTrap_C_ExecuteUbergraph_EngramEntry_BearTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
