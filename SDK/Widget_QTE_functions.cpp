
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Widget_QTE.Widget_QTE_C.SetVisibleQTEIcon
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_QTE_C::SetVisibleQTEIcon(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QTE.Widget_QTE_C.SetVisibleQTEIcon");

	UWidget_QTE_C_SetVisibleQTEIcon_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
