
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

// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.PushRightButton
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Window_C::PushRightButton(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.PushRightButton");

	UBPW_UI_Config_Window_C_PushRightButton_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.PushLeftRightCursor
// (NetRequest, Native, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.InitChoiceList
// (Exec, Native, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ChoiceList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPW_UI_Config_Window_C::InitChoiceList(int Index, TArray<struct FString>* ChoiceList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.InitChoiceList");

	UBPW_UI_Config_Window_C_InitChoiceList_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChoiceList != nullptr)
		*ChoiceList = params.ChoiceList;
}


// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.SetConfigName
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
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
// (Native, Event, NetResponse, Static, NetMulticast, Protected, Delegate, HasDefaults, NetClient)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Window_C::STATIC_FocusButtonIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.FocusButtonIndex");

	UBPW_UI_Config_Window_C_FocusButtonIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.Construct
// (NetReliable, NetRequest, Native, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_UI_Config_Window_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.Construct");

	UBPW_UI_Config_Window_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.ExecuteUbergraph_BPW_UI_Config_Window
// (NetRequest, Exec, MulticastDelegate, Public, Private, Protected, NetClient, Const)
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
