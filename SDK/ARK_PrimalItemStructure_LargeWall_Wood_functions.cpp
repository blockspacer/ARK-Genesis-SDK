// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_LargeWall_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_LargeWall_Wood.PrimalItemStructure_LargeWall_Wood_C.ExecuteUbergraph_PrimalItemStructure_LargeWall_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_LargeWall_Wood_C::ExecuteUbergraph_PrimalItemStructure_LargeWall_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_LargeWall_Wood.PrimalItemStructure_LargeWall_Wood_C.ExecuteUbergraph_PrimalItemStructure_LargeWall_Wood");

	UPrimalItemStructure_LargeWall_Wood_C_ExecuteUbergraph_PrimalItemStructure_LargeWall_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
