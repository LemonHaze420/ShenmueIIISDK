
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

// Function BW_DebugInputCategory.BW_DebugInputCategory_C.OnFocusReceived
// (Net, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_DebugInputCategory_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugInputCategory.BW_DebugInputCategory_C.OnFocusReceived");

	UBW_DebugInputCategory_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugInputCategory.BW_DebugInputCategory_C.GetCategoryColor
// (Exec, Native, Event, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBW_DebugInputCategory_C::STATIC_GetCategoryColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugInputCategory.BW_DebugInputCategory_C.GetCategoryColor");

	UBW_DebugInputCategory_C_GetCategoryColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugInputCategory.BW_DebugInputCategory_C.GetCategoryName
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_DebugInputCategory_C::STATIC_GetCategoryName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugInputCategory.BW_DebugInputCategory_C.GetCategoryName");

	UBW_DebugInputCategory_C_GetCategoryName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugInputCategory.BW_DebugInputCategory_C.AddWidgetToCategory
// (NetReliable, NetRequest, Exec, Static, NetMulticast, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_DebugInputCategory_C::STATIC_AddWidgetToCategory(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugInputCategory.BW_DebugInputCategory_C.AddWidgetToCategory");

	UBW_DebugInputCategory_C_AddWidgetToCategory_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugInputCategory.BW_DebugInputCategory_C.Tick
// (NetRequest, NetResponse, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugInputCategory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugInputCategory.BW_DebugInputCategory_C.Tick");

	UBW_DebugInputCategory_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugInputCategory.BW_DebugInputCategory_C.BndEvt__Button_393_K2Node_ComponentBoundEvent_282_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugInputCategory_C::STATIC_BndEvt__Button_393_K2Node_ComponentBoundEvent_282_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugInputCategory.BW_DebugInputCategory_C.BndEvt__Button_393_K2Node_ComponentBoundEvent_282_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugInputCategory_C_BndEvt__Button_393_K2Node_ComponentBoundEvent_282_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugInputCategory.BW_DebugInputCategory_C.ExecuteUbergraph_BW_DebugInputCategory
// (NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugInputCategory_C::STATIC_ExecuteUbergraph_BW_DebugInputCategory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugInputCategory.BW_DebugInputCategory_C.ExecuteUbergraph_BW_DebugInputCategory");

	UBW_DebugInputCategory_C_ExecuteUbergraph_BW_DebugInputCategory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
