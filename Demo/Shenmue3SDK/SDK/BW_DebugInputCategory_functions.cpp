
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BW_DebugInputCategory.BW_DebugInputCategory_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_DebugInputCategory_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugInputCategory.BW_DebugInputCategory_C.OnFocusReceived");

	UBW_DebugInputCategory_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugInputCategory.BW_DebugInputCategory_C.GetCategoryColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBW_DebugInputCategory_C::GetCategoryColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugInputCategory.BW_DebugInputCategory_C.GetCategoryColor");

	UBW_DebugInputCategory_C_GetCategoryColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugInputCategory.BW_DebugInputCategory_C.GetCategoryName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_DebugInputCategory_C::GetCategoryName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugInputCategory.BW_DebugInputCategory_C.GetCategoryName");

	UBW_DebugInputCategory_C_GetCategoryName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugInputCategory.BW_DebugInputCategory_C.AddWidgetToCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_DebugInputCategory_C::AddWidgetToCategory(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugInputCategory.BW_DebugInputCategory_C.AddWidgetToCategory");

	UBW_DebugInputCategory_C_AddWidgetToCategory_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugInputCategory.BW_DebugInputCategory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugInputCategory_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
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
// (BlueprintEvent)

void UBW_DebugInputCategory_C::BndEvt__Button_393_K2Node_ComponentBoundEvent_282_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugInputCategory.BW_DebugInputCategory_C.BndEvt__Button_393_K2Node_ComponentBoundEvent_282_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugInputCategory_C_BndEvt__Button_393_K2Node_ComponentBoundEvent_282_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugInputCategory.BW_DebugInputCategory_C.ExecuteUbergraph_BW_DebugInputCategory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugInputCategory_C::ExecuteUbergraph_BW_DebugInputCategory(int EntryPoint)
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
