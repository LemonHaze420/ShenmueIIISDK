
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

// Function BW_DebugItemViewer.BW_DebugItemViewer_C.On_ViewerButton_MouseButtonDown_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_DebugItemViewer_C::On_ViewerButton_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugItemViewer.BW_DebugItemViewer_C.On_ViewerButton_MouseButtonDown_1");

	UBW_DebugItemViewer_C_On_ViewerButton_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function BW_DebugItemViewer.BW_DebugItemViewer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_DebugItemViewer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugItemViewer.BW_DebugItemViewer_C.Construct");

	UBW_DebugItemViewer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugItemViewer.BW_DebugItemViewer_C.BndEvt__MorningButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugItemViewer_C::BndEvt__MorningButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugItemViewer.BW_DebugItemViewer_C.BndEvt__MorningButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugItemViewer_C_BndEvt__MorningButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugItemViewer.BW_DebugItemViewer_C.ExecuteUbergraph_BW_DebugItemViewer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugItemViewer_C::ExecuteUbergraph_BW_DebugItemViewer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugItemViewer.BW_DebugItemViewer_C.ExecuteUbergraph_BW_DebugItemViewer");

	UBW_DebugItemViewer_C_ExecuteUbergraph_BW_DebugItemViewer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugItemViewer.BW_DebugItemViewer_C.OnClickedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBW_DebugItemViewer_C::OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugItemViewer.BW_DebugItemViewer_C.OnClickedDispatcher__DelegateSignature");

	UBW_DebugItemViewer_C_OnClickedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
