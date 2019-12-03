
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

// Function BPW_UI_Config.BPW_UI_Config_C.SetDiscription
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_C::SetDiscription(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config.BPW_UI_Config_C.SetDiscription");

	UBPW_UI_Config_C_SetDiscription_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config.BPW_UI_Config_C.ChangeSelectButtonIcon
// (Exec, NetResponse, NetClient, Const)

void UBPW_UI_Config_C::ChangeSelectButtonIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config.BPW_UI_Config_C.ChangeSelectButtonIcon");

	UBPW_UI_Config_C_ChangeSelectButtonIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config.BPW_UI_Config_C.PushLeftRightIndex
// (Net, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_C::STATIC_PushLeftRightIndex(int Index, int Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config.BPW_UI_Config_C.PushLeftRightIndex");

	UBPW_UI_Config_C_PushLeftRightIndex_Params params;
	params.Index = Index;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config.BPW_UI_Config_C.InitChoiceList
// (Net, Native, Event, Static, MulticastDelegate, Public, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ChoiceList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPW_UI_Config_C::STATIC_InitChoiceList(int Index, TArray<struct FString>* ChoiceList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config.BPW_UI_Config_C.InitChoiceList");

	UBPW_UI_Config_C_InitChoiceList_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChoiceList != nullptr)
		*ChoiceList = params.ChoiceList;
}


// Function BPW_UI_Config.BPW_UI_Config_C.SetPage
// (Net, Exec, Event, NetResponse, Static, Private, Protected, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_C::STATIC_SetPage(int page)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config.BPW_UI_Config_C.SetPage");

	UBPW_UI_Config_C_SetPage_Params params;
	params.page = page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config.BPW_UI_Config_C.InitDescription
// (Net, NetReliable, NetRequest, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// TArray<struct FString>         DescriptionList                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPW_UI_Config_C::InitDescription(TArray<struct FString>* DescriptionList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config.BPW_UI_Config_C.InitDescription");

	UBPW_UI_Config_C_InitDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DescriptionList != nullptr)
		*DescriptionList = params.DescriptionList;
}


// Function BPW_UI_Config.BPW_UI_Config_C.SetConfigName
// (Net, NetReliable, NetRequest, Event, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// TArray<struct FString>         NameList                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPW_UI_Config_C::STATIC_SetConfigName(TArray<struct FString>* NameList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config.BPW_UI_Config_C.SetConfigName");

	UBPW_UI_Config_C_SetConfigName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NameList != nullptr)
		*NameList = params.NameList;
}


// Function BPW_UI_Config.BPW_UI_Config_C.FocusButtonIndex
// (NetReliable, NetRequest, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_C::STATIC_FocusButtonIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config.BPW_UI_Config_C.FocusButtonIndex");

	UBPW_UI_Config_C_FocusButtonIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config.BPW_UI_Config_C.PreConstruct
// (NetReliable, NetRequest, Event, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config.BPW_UI_Config_C.PreConstruct");

	UBPW_UI_Config_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config.BPW_UI_Config_C.Construct
// (Net, NetRequest, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_UI_Config_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config.BPW_UI_Config_C.Construct");

	UBPW_UI_Config_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config.BPW_UI_Config_C.ExecuteUbergraph_BPW_UI_Config
// (Net, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_C::ExecuteUbergraph_BPW_UI_Config(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config.BPW_UI_Config_C.ExecuteUbergraph_BPW_UI_Config");

	UBPW_UI_Config_C_ExecuteUbergraph_BPW_UI_Config_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
