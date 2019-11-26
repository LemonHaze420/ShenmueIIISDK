
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

// Function BPF_UserWidget.BPF_UserWidget_C.BPF_SafeRemoveWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_UserWidget_C::STATIC_BPF_SafeRemoveWidget(class UObject* __WorldContext, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_UserWidget.BPF_UserWidget_C.BPF_SafeRemoveWidget");

	UBPF_UserWidget_C_BPF_SafeRemoveWidget_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BPF_UserWidget.BPF_UserWidget_C.BPF_ReaddWidgetToHorizontalBox
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHorizontalBox*          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_UserWidget_C::STATIC_BPF_ReaddWidgetToHorizontalBox(class UHorizontalBox* Target, class UWidget* Content, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_UserWidget.BPF_UserWidget_C.BPF_ReaddWidgetToHorizontalBox");

	UBPF_UserWidget_C_BPF_ReaddWidgetToHorizontalBox_Params params;
	params.Target = Target;
	params.Content = Content;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
