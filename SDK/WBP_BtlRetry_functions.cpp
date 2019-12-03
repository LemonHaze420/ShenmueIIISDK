
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

// Function WBP_BtlRetry.WBP_BtlRetry_C.SetTextByLabel
// (NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              TextWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3TextPathType                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_BtlRetry_C::STATIC_SetTextByLabel(class UTextBlock* TextWidget, const struct FName& Label, ES3TextPathType Type, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BtlRetry.WBP_BtlRetry_C.SetTextByLabel");

	UWBP_BtlRetry_C_SetTextByLabel_Params params;
	params.TextWidget = TextWidget;
	params.Label = Label;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function WBP_BtlRetry.WBP_BtlRetry_C.SetImageVisibilty
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   TextID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BtlRetry_C::SetImageVisibilty(const struct FName& TextID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BtlRetry.WBP_BtlRetry_C.SetImageVisibilty");

	UWBP_BtlRetry_C_SetImageVisibilty_Params params;
	params.TextID = TextID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BtlRetry.WBP_BtlRetry_C.SetAllOpacity
// (Exec, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BtlRetry_C::SetAllOpacity(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BtlRetry.WBP_BtlRetry_C.SetAllOpacity");

	UWBP_BtlRetry_C_SetAllOpacity_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BtlRetry.WBP_BtlRetry_C.PushEvent
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UWBP_BtlRetry_C::STATIC_PushEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BtlRetry.WBP_BtlRetry_C.PushEvent");

	UWBP_BtlRetry_C_PushEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BtlRetry.WBP_BtlRetry_C.ChangeLocationText
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   UI_Text_ID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BtlRetry_C::ChangeLocationText(const struct FName& UI_Text_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BtlRetry.WBP_BtlRetry_C.ChangeLocationText");

	UWBP_BtlRetry_C_ChangeLocationText_Params params;
	params.UI_Text_ID = UI_Text_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BtlRetry.WBP_BtlRetry_C.GetTargetText
// (Net, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   UI_Text_ID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3TextPathType                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TargetText                     (Parm, OutParm)
// bool                           Null_Error                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_BtlRetry_C::GetTargetText(const struct FName& UI_Text_ID, ES3TextPathType Type, struct FText* TargetText, bool* Null_Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BtlRetry.WBP_BtlRetry_C.GetTargetText");

	UWBP_BtlRetry_C_GetTargetText_Params params;
	params.UI_Text_ID = UI_Text_ID;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetText != nullptr)
		*TargetText = params.TargetText;
	if (Null_Error != nullptr)
		*Null_Error = params.Null_Error;
}


// Function WBP_BtlRetry.WBP_BtlRetry_C.ChangeText
// (NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   UI_Text_ID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BtlRetry_C::ChangeText(const struct FName& UI_Text_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BtlRetry.WBP_BtlRetry_C.ChangeText");

	UWBP_BtlRetry_C_ChangeText_Params params;
	params.UI_Text_ID = UI_Text_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BtlRetry.WBP_BtlRetry_C.Construct
// (Net, NetReliable, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_BtlRetry_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BtlRetry.WBP_BtlRetry_C.Construct");

	UWBP_BtlRetry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BtlRetry.WBP_BtlRetry_C.Tick
// (NetRequest, Native, Event, NetMulticast, Public, Private, Protected, NetServer, BlueprintCallable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BtlRetry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BtlRetry.WBP_BtlRetry_C.Tick");

	UWBP_BtlRetry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BtlRetry.WBP_BtlRetry_C.PreConstruct
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BtlRetry_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BtlRetry.WBP_BtlRetry_C.PreConstruct");

	UWBP_BtlRetry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BtlRetry.WBP_BtlRetry_C.ExecuteUbergraph_WBP_BtlRetry
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BtlRetry_C::ExecuteUbergraph_WBP_BtlRetry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BtlRetry.WBP_BtlRetry_C.ExecuteUbergraph_WBP_BtlRetry");

	UWBP_BtlRetry_C_ExecuteUbergraph_WBP_BtlRetry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
