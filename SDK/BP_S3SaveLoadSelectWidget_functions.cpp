
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

// Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.OnKeyDown
// (Exec, Event, Static, NetMulticast, Private, Delegate, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_S3SaveLoadSelectWidget_C::STATIC_OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.OnKeyDown");

	UBP_S3SaveLoadSelectWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.Construct
// (NetRequest, Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintEvent)

void UBP_S3SaveLoadSelectWidget_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.Construct");

	UBP_S3SaveLoadSelectWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.BndEvt__Save_K2Node_ComponentBoundEvent_886_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintEvent)

void UBP_S3SaveLoadSelectWidget_C::STATIC_BndEvt__Save_K2Node_ComponentBoundEvent_886_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.BndEvt__Save_K2Node_ComponentBoundEvent_886_OnButtonClickedEvent__DelegateSignature");

	UBP_S3SaveLoadSelectWidget_C_BndEvt__Save_K2Node_ComponentBoundEvent_886_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.BndEvt__Load_K2Node_ComponentBoundEvent_907_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintEvent)

void UBP_S3SaveLoadSelectWidget_C::STATIC_BndEvt__Load_K2Node_ComponentBoundEvent_907_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.BndEvt__Load_K2Node_ComponentBoundEvent_907_OnButtonClickedEvent__DelegateSignature");

	UBP_S3SaveLoadSelectWidget_C_BndEvt__Load_K2Node_ComponentBoundEvent_907_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature
// (NetReliable, Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintEvent)

void UBP_S3SaveLoadSelectWidget_C::STATIC_BndEvt__Button_2_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature");

	UBP_S3SaveLoadSelectWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.Destruct
// (NetRequest, Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintEvent)

void UBP_S3SaveLoadSelectWidget_C::STATIC_Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.Destruct");

	UBP_S3SaveLoadSelectWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.Finish
// (Net, NetRequest, Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintEvent)

void UBP_S3SaveLoadSelectWidget_C::STATIC_Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.Finish");

	UBP_S3SaveLoadSelectWidget_C_Finish_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.Tick
// (Net, Event, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintCallable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadSelectWidget_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.Tick");

	UBP_S3SaveLoadSelectWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.ExecuteUbergraph_BP_S3SaveLoadSelectWidget
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadSelectWidget_C::STATIC_ExecuteUbergraph_BP_S3SaveLoadSelectWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.ExecuteUbergraph_BP_S3SaveLoadSelectWidget");

	UBP_S3SaveLoadSelectWidget_C_ExecuteUbergraph_BP_S3SaveLoadSelectWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.ED_Load__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, NetMulticast, Public, Delegate, HasOutParms, BlueprintEvent)

void UBP_S3SaveLoadSelectWidget_C::ED_Load__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.ED_Load__DelegateSignature");

	UBP_S3SaveLoadSelectWidget_C_ED_Load__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.ED_Save__DelegateSignature
// (NetReliable, NetRequest, Native, Static, Public, Delegate, HasOutParms, BlueprintEvent)

void UBP_S3SaveLoadSelectWidget_C::STATIC_ED_Save__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.ED_Save__DelegateSignature");

	UBP_S3SaveLoadSelectWidget_C_ED_Save__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.ED_Cancel__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void UBP_S3SaveLoadSelectWidget_C::STATIC_ED_Cancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadSelectWidget.BP_S3SaveLoadSelectWidget_C.ED_Cancel__DelegateSignature");

	UBP_S3SaveLoadSelectWidget_C_ED_Cancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
