
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

// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.ClearCloseTimerHandle
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_SimpleYesCancelDialog_C::ClearCloseTimerHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.ClearCloseTimerHandle");

	UWBP_SimpleYesCancelDialog_C_ClearCloseTimerHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.RequestSelectRight
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SimpleYesCancelDialog_C::RequestSelectRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.RequestSelectRight");

	UWBP_SimpleYesCancelDialog_C_RequestSelectRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.RequestSelectLeft
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SimpleYesCancelDialog_C::RequestSelectLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.RequestSelectLeft");

	UWBP_SimpleYesCancelDialog_C_RequestSelectLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.RequestSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SimpleYesCancelDialog_C::RequestSelect(bool InIsLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.RequestSelect");

	UWBP_SimpleYesCancelDialog_C_RequestSelect_Params params;
	params.InIsLeft = InIsLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.IsSelectable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SimpleYesCancelDialog_C::IsSelectable(bool* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.IsSelectable");

	UWBP_SimpleYesCancelDialog_C_IsSelectable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.IsClosable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SimpleYesCancelDialog_C::IsOpenable(bool* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.IsOpenable");

	UWBP_SimpleYesCancelDialog_C_IsOpenable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.OnFinishedCloseAnimation
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_SimpleYesCancelDialog_C::OnFinishedCloseAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.OnFinishedCloseAnimation");

	UWBP_SimpleYesCancelDialog_C_OnFinishedCloseAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SimpleYesCancelDialog_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Close");

	UWBP_SimpleYesCancelDialog_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Open
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SimpleYesCancelDialog_C::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Open");

	UWBP_SimpleYesCancelDialog_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.IsYesSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_SimpleYesCancelDialog_C::IsYesSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.IsYesSelected");

	UWBP_SimpleYesCancelDialog_C_IsYesSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Finalize
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SimpleYesCancelDialog_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Finalize");

	UWBP_SimpleYesCancelDialog_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_SimpleYesCancelDialog_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Initialize");

	UWBP_SimpleYesCancelDialog_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_SimpleYesCancelDialog_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Construct");

	UWBP_SimpleYesCancelDialog_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_SimpleYesCancelDialog_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.Destruct");

	UWBP_SimpleYesCancelDialog_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.ExecuteUbergraph_WBP_SimpleYesCancelDialog
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SimpleYesCancelDialog_C::ExecuteUbergraph_WBP_SimpleYesCancelDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.ExecuteUbergraph_WBP_SimpleYesCancelDialog");

	UWBP_SimpleYesCancelDialog_C_ExecuteUbergraph_WBP_SimpleYesCancelDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.OnFinishedClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_SimpleYesCancelDialog_C::OnFinishedClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C.OnFinishedClose__DelegateSignature");

	UWBP_SimpleYesCancelDialog_C_OnFinishedClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
