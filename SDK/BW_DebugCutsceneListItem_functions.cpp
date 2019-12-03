
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

// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.StartCutscene
// (Native, NetResponse, Static, NetMulticast, NetClient, Const)

void UBW_DebugCutsceneListItem_C::STATIC_StartCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.StartCutscene");

	UBW_DebugCutsceneListItem_C_StartCutscene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.SetupLastSelectedDebugMenuCutsceneID
// (Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, Const)

void UBW_DebugCutsceneListItem_C::STATIC_SetupLastSelectedDebugMenuCutsceneID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.SetupLastSelectedDebugMenuCutsceneID");

	UBW_DebugCutsceneListItem_C_SetupLastSelectedDebugMenuCutsceneID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.GetCutsceneID
// (Net, NetReliable, Exec, Native, Event, Static, MulticastDelegate, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBW_DebugCutsceneListItem_C::STATIC_GetCutsceneID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.GetCutsceneID");

	UBW_DebugCutsceneListItem_C_GetCutsceneID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.SetFocusToButton
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UBW_DebugCutsceneListItem_C::STATIC_SetFocusToButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.SetFocusToButton");

	UBW_DebugCutsceneListItem_C_SetFocusToButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.GetCutsceneListLabel
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBW_DebugCutsceneListItem_C::STATIC_GetCutsceneListLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.GetCutsceneListLabel");

	UBW_DebugCutsceneListItem_C_GetCutsceneListLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.Get_Description_Text
// (Net, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_DebugCutsceneListItem_C::Get_Description_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.Get_Description_Text");

	UBW_DebugCutsceneListItem_C_Get_Description_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.Get_MainButtonLabel_Text
// (Net, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_DebugCutsceneListItem_C::Get_MainButtonLabel_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.Get_MainButtonLabel_Text");

	UBW_DebugCutsceneListItem_C_Get_MainButtonLabel_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.Construct
// (NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBW_DebugCutsceneListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.Construct");

	UBW_DebugCutsceneListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (Net, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBW_DebugCutsceneListItem_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugCutsceneListItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.ExecuteUbergraph_BW_DebugCutsceneListItem
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugCutsceneListItem_C::STATIC_ExecuteUbergraph_BW_DebugCutsceneListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.ExecuteUbergraph_BW_DebugCutsceneListItem");

	UBW_DebugCutsceneListItem_C_ExecuteUbergraph_BW_DebugCutsceneListItem_Params params;
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
