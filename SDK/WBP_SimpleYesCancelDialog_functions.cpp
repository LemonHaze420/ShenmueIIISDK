
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

// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.ClearCloseTimerHandle
// (NetReliable, NetResponse, NetMulticast, Private, Protected, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)

void UWBP_SimpleYesCancelDialog_C::ClearCloseTimerHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.ClearCloseTimerHandle");

	UWBP_SimpleYesCancelDialog_C_ClearCloseTimerHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.RequestSelectRight
// (Net, NetReliable, NetRequest, Static, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UWBP_SimpleYesCancelDialog_C::STATIC_RequestSelectRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.RequestSelectRight");

	UWBP_SimpleYesCancelDialog_C_RequestSelectRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.RequestSelectLeft
// (NetReliable, NetRequest, Static, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UWBP_SimpleYesCancelDialog_C::STATIC_RequestSelectLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.RequestSelectLeft");

	UWBP_SimpleYesCancelDialog_C_RequestSelectLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.RequestSelect
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           InIsLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SimpleYesCancelDialog_C::STATIC_RequestSelect(bool InIsLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.RequestSelect");

	UWBP_SimpleYesCancelDialog_C_RequestSelect_Params params;
	params.InIsLeft = InIsLeft;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.IsSelectable
// (NetReliable, Native, Event, Static, MulticastDelegate, Private, Protected, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SimpleYesCancelDialog_C::STATIC_IsSelectable(bool* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.IsSelectable");

	UWBP_SimpleYesCancelDialog_C_IsSelectable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.IsClosable
// (NetRequest, NetResponse, NetMulticast, Private, Protected, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SimpleYesCancelDialog_C::IsClosable(bool* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.IsClosable");

	UWBP_SimpleYesCancelDialog_C_IsClosable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.IsOpenable
// (NetReliable, Native, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SimpleYesCancelDialog_C::STATIC_IsOpenable(bool* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.IsOpenable");

	UWBP_SimpleYesCancelDialog_C_IsOpenable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.OnFinishedCloseAnimation
// (Net, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UWBP_SimpleYesCancelDialog_C::OnFinishedCloseAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.OnFinishedCloseAnimation");

	UWBP_SimpleYesCancelDialog_C_OnFinishedCloseAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Close
// (Net, NetReliable, NetResponse, MulticastDelegate, Public, Private, Protected, NetServer, HasDefaults, BlueprintEvent, BlueprintPure)

void UWBP_SimpleYesCancelDialog_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Close");

	UWBP_SimpleYesCancelDialog_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Open
// (Native, Event, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintPure)

void UWBP_SimpleYesCancelDialog_C::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Open");

	UWBP_SimpleYesCancelDialog_C_Open_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.IsYesSelected
// (NetReliable, Native, Event, Static, NetMulticast, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_SimpleYesCancelDialog_C::STATIC_IsYesSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.IsYesSelected");

	UWBP_SimpleYesCancelDialog_C_IsYesSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Finalize
// (Net, Exec, Static, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UWBP_SimpleYesCancelDialog_C::STATIC_Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Finalize");

	UWBP_SimpleYesCancelDialog_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Initialize
// (NetRequest, Exec, Event, NetResponse, NetMulticast, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UWBP_SimpleYesCancelDialog_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Initialize");

	UWBP_SimpleYesCancelDialog_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Construct
// (Net, Native, Event, Static, NetMulticast, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_SimpleYesCancelDialog_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Construct");

	UWBP_SimpleYesCancelDialog_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Destruct
// (Native, Event, Static, NetMulticast, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_SimpleYesCancelDialog_C::STATIC_Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Destruct");

	UWBP_SimpleYesCancelDialog_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.ExecuteUbergraph_WBP_SimpleYesCancelDialog
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SimpleYesCancelDialog_C::STATIC_ExecuteUbergraph_WBP_SimpleYesCancelDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.ExecuteUbergraph_WBP_SimpleYesCancelDialog");

	UWBP_SimpleYesCancelDialog_C_ExecuteUbergraph_WBP_SimpleYesCancelDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.OnFinishedClose__DelegateSignature
// (Net, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)

void UWBP_SimpleYesCancelDialog_C::OnFinishedClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.OnFinishedClose__DelegateSignature");

	UWBP_SimpleYesCancelDialog_C_OnFinishedClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
