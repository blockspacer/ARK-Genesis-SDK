// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_HUDCustomTextWidget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUDCustomTextWidget.HUDCustomTextWidget_C.ExecuteUbergraph_HUDCustomTextWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHUDCustomTextWidget_C::ExecuteUbergraph_HUDCustomTextWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDCustomTextWidget.HUDCustomTextWidget_C.ExecuteUbergraph_HUDCustomTextWidget");

	UHUDCustomTextWidget_C_ExecuteUbergraph_HUDCustomTextWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
