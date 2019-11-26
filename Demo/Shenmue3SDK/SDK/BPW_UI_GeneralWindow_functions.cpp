
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

// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.GetDataString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void UBPW_UI_GeneralWindow_C::GetDataString(const struct FName& Label, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.GetDataString");

	UBPW_UI_GeneralWindow_C_GetDataString_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.CenterButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_GeneralWindow_Button Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_C::SetupButton(const struct FST_GeneralWindow_Button& Data, bool Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.SetupButton");

	UBPW_UI_GeneralWindow_C_SetupButton_Params params;
	params.Data = Data;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_GeneralWindow_C::SetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.SetData");

	UBPW_UI_GeneralWindow_C_SetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.PreConstruct");

	UBPW_UI_GeneralWindow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_UI_GeneralWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.Construct");

	UBPW_UI_GeneralWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.ExecuteUbergraph_BPW_UI_GeneralWindow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_C::ExecuteUbergraph_BPW_UI_GeneralWindow(int EntryPoint)
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
