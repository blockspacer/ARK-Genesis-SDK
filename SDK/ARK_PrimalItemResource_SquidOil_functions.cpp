// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_SquidOil_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_SquidOil.PrimalItemResource_SquidOil_C.ExecuteUbergraph_PrimalItemResource_SquidOil
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_SquidOil_C::ExecuteUbergraph_PrimalItemResource_SquidOil(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_SquidOil.PrimalItemResource_SquidOil_C.ExecuteUbergraph_PrimalItemResource_SquidOil");

	UPrimalItemResource_SquidOil_C_ExecuteUbergraph_PrimalItemResource_SquidOil_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif