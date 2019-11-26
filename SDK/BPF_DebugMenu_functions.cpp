
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

// Function BPF_DebugMenu.BPF_DebugMenu_C.CheckPressButton
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPanelWidget*            PanelWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           press                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_DebugMenu_C::STATIC_CheckPressButton(const struct FKeyEvent& InKeyEvent, class UPanelWidget* PanelWidget, class UObject* __WorldContext, bool* press)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DebugMenu.BPF_DebugMenu_C.CheckPressButton");

	UBPF_DebugMenu_C_CheckPressButton_Params params;
	params.InKeyEvent = InKeyEvent;
	params.PanelWidget = PanelWidget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (press != nullptr)
		*press = params.press;
}


// Function BPF_DebugMenu.BPF_DebugMenu_C.GetDebugMenu
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBW_DebugMenu_C*         DebugMenu                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPF_DebugMenu_C::STATIC_GetDebugMenu(class UObject* __WorldContext, class UBW_DebugMenu_C** DebugMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DebugMenu.BPF_DebugMenu_C.GetDebugMenu");

	UBPF_DebugMenu_C_GetDebugMenu_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DebugMenu != nullptr)
		*DebugMenu = params.DebugMenu;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
