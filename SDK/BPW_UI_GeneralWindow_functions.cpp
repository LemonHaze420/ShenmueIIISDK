
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

// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.GetDataString
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void UBPW_UI_GeneralWindow_C::GetDataString(const struct FName& Label, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.GetDataString");

	UBPW_UI_GeneralWindow_C_GetDataString_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.CenterButton
// (NetRequest, Exec, Event, NetResponse, NetMulticast, Protected, NetServer, BlueprintCallable)
// Parameters:
// bool                           RightButton                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_C::CenterButton(bool RightButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.CenterButton");

	UBPW_UI_GeneralWindow_C_CenterButton_Params params;
	params.RightButton = RightButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.SetupButton
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, Private, NetServer, NetClient, DLLImport)
// Parameters:
// struct FST_GeneralWindow_Button Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_C::STATIC_SetupButton(const struct FST_GeneralWindow_Button& Data, bool Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.SetupButton");

	UBPW_UI_GeneralWindow_C_SetupButton_Params params;
	params.Data = Data;
	params.Right = Right;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.SetData
// (NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintPure)

void UBPW_UI_GeneralWindow_C::SetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.SetData");

	UBPW_UI_GeneralWindow_C_SetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.PreConstruct
// (NetRequest, Exec, Event, Public, Private, Delegate, NetServer, NetClient, DLLImport)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.PreConstruct");

	UBPW_UI_GeneralWindow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.Construct
// (NetReliable, Native, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, BlueprintEvent)

void UBPW_UI_GeneralWindow_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.Construct");

	UBPW_UI_GeneralWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.ExecuteUbergraph_BPW_UI_GeneralWindow
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_C::STATIC_ExecuteUbergraph_BPW_UI_GeneralWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.ExecuteUbergraph_BPW_UI_GeneralWindow");

	UBPW_UI_GeneralWindow_C_ExecuteUbergraph_BPW_UI_GeneralWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
