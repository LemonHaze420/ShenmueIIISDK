
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.PushRightButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Window_C::PushRightButton(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.PushRightButton");

	UBPW_UI_Config_Window_C_PushRightButton_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.PushLeftRightCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Window_C::PushLeftRightCursor(int Index, int Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.PushLeftRightCursor");

	UBPW_UI_Config_Window_C_PushLeftRightCursor_Params params;
	params.Index = Index;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.InitChoiceList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ChoiceList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPW_UI_Config_Window_C::InitChoiceList(int Index, TArray<struct FString>* ChoiceList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.InitChoiceList");

	UBPW_UI_Config_Window_C_InitChoiceList_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChoiceList != nullptr)
		*ChoiceList = params.ChoiceList;
}


// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.SetConfigName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         NameList                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPW_UI_Config_Window_C::SetConfigName(TArray<struct FString>* NameList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.SetConfigName");

	UBPW_UI_Config_Window_C_SetConfigName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NameList != nullptr)
		*NameList = params.NameList;
}


// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.FocusButtonIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Window_C::FocusButtonIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.FocusButtonIndex");

	UBPW_UI_Config_Window_C_FocusButtonIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_UI_Config_Window_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.Construct");

	UBPW_UI_Config_Window_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.ExecuteUbergraph_BPW_UI_Config_Window
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Window_C::ExecuteUbergraph_BPW_UI_Config_Window(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.ExecuteUbergraph_BPW_UI_Config_Window");

	UBPW_UI_Config_Window_C_ExecuteUbergraph_BPW_UI_Config_Window_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
