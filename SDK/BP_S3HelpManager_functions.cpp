
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

// Function BP_S3HelpManager.BP_S3HelpManager_C.GetPriority
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_S3HelpManager_C::STATIC_GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.GetPriority");

	ABP_S3HelpManager_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.GetDetectAction
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_S3HelpManager_C::STATIC_GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.GetDetectAction");

	ABP_S3HelpManager_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.SelectHelpInventoryTexture
// (Net, NetRequest, Native, NetResponse, NetMulticast, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_S3HelpManager_C::SelectHelpInventoryTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.SelectHelpInventoryTexture");

	ABP_S3HelpManager_C_SelectHelpInventoryTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.SelectTexture
// (Net, NetRequest, Native, NetResponse, NetMulticast, HasOutParms, HasDefaults, DLLImport)

void ABP_S3HelpManager_C::SelectTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.SelectTexture");

	ABP_S3HelpManager_C_SelectTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.CheckValidRegistHelp
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3HelpManager_C::STATIC_CheckValidRegistHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.CheckValidRegistHelp");

	ABP_S3HelpManager_C_CheckValidRegistHelp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.GetHelpPriority
// (Net, Exec, Native, Event, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3HelpPriority                Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::GetHelpPriority(class AActor* Actor, ES3HelpPriority* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.GetHelpPriority");

	ABP_S3HelpManager_C_GetHelpPriority_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.SetPageButtonVisibility
// (Net, Event, NetMulticast, MulticastDelegate, Private, Protected, Delegate)

void ABP_S3HelpManager_C::SetPageButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.SetPageButtonVisibility");

	ABP_S3HelpManager_C_SetPageButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.ChangePage
// (Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNext                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::STATIC_ChangePage(bool IsNext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.ChangePage");

	ABP_S3HelpManager_C_ChangePage_Params params;
	params.IsNext = IsNext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.SetForceDisable
// (NetReliable, Native, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Disable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::SetForceDisable(class AActor* Executor, bool Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.SetForceDisable");

	ABP_S3HelpManager_C_SetForceDisable_Params params;
	params.Executor = Executor;
	params.Disable = Disable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.StartHelp
// (Exec, Native, Event, Static, NetMulticast, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   HelpId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::STATIC_StartHelp(const struct FName& HelpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.StartHelp");

	ABP_S3HelpManager_C_StartHelp_Params params;
	params.HelpId = HelpId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.GetHelpName
// (Net, NetRequest, Exec, Native, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_HelpRegisterInfo    Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::GetHelpName(struct FST_HelpRegisterInfo* Info, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.GetHelpName");

	ABP_S3HelpManager_C_GetHelpName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.PressDownOrUp
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::STATIC_PressDownOrUp(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.PressDownOrUp");

	ABP_S3HelpManager_C_PressDownOrUp_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.CheckBlinkIcon
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)

void ABP_S3HelpManager_C::STATIC_CheckBlinkIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.CheckBlinkIcon");

	ABP_S3HelpManager_C_CheckBlinkIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.IsActivateHelp
// (Net, Exec, Native, NetResponse, NetMulticast, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Activate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::IsActivateHelp(class AActor* Actor, bool* Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.IsActivateHelp");

	ABP_S3HelpManager_C_IsActivateHelp_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Activate != nullptr)
		*Activate = params.Activate;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.CanOpen
// (NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::STATIC_CanOpen(bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.CanOpen");

	ABP_S3HelpManager_C_CanOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.EndButtonVisibility
// (Net, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::EndButtonVisibility(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.EndButtonVisibility");

	ABP_S3HelpManager_C_EndButtonVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.RemoveHelpItemByActor
// (Native, Event, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::STATIC_RemoveHelpItemByActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.RemoveHelpItemByActor");

	ABP_S3HelpManager_C_RemoveHelpItemByActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.RemoveHelpItem
// (NetRequest, NetMulticast, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HelpName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_S3HelpManager_C::RemoveHelpItem(const struct FString& HelpName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.RemoveHelpItem");

	ABP_S3HelpManager_C_RemoveHelpItem_Params params;
	params.HelpName = HelpName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.AddHelpItem
// (Exec, Static, NetMulticast, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 HelpName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_S3HelpManager_C::STATIC_AddHelpItem(class AActor* Actor, const struct FString& HelpName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.AddHelpItem");

	ABP_S3HelpManager_C_AddHelpItem_Params params;
	params.Actor = Actor;
	params.HelpName = HelpName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.EndMiniGame
// (NetReliable, NetRequest, Exec, Native, Event, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_S3HelpManager_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.EndMiniGame");

	ABP_S3HelpManager_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.makeWidget
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_S3HelpManager_C::makeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.makeWidget");

	ABP_S3HelpManager_C_makeWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.AddCategory
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3HelpManager_C::STATIC_AddCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.AddCategory");

	ABP_S3HelpManager_C_AddCategory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.makeCategoryList
// (Net, NetRequest, Exec, Native, Static, Public, Private, Protected, Delegate, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3HelpManager_C::STATIC_makeCategoryList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.makeCategoryList");

	ABP_S3HelpManager_C_makeCategoryList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.AutoChangeCurrentOpenIndex
// (Net, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate)

void ABP_S3HelpManager_C::AutoChangeCurrentOpenIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.AutoChangeCurrentOpenIndex");

	ABP_S3HelpManager_C_AutoChangeCurrentOpenIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.UpdNowPosCursor
// (NetReliable, Exec, NetResponse, Static, NetMulticast, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_S3HelpManager_C::STATIC_UpdNowPosCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.UpdNowPosCursor");

	ABP_S3HelpManager_C_UpdNowPosCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.IsNoScrollRange
// (Net, NetReliable, NetResponse, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3HelpManager_C::IsNoScrollRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.IsNoScrollRange");

	ABP_S3HelpManager_C_IsNoScrollRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.ChangeCursorPos
// (NetRequest, Event, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::STATIC_ChangeCursorPos(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.ChangeCursorPos");

	ABP_S3HelpManager_C_ChangeCursorPos_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.ChangeHelpImage
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::STATIC_ChangeHelpImage(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.ChangeHelpImage");

	ABP_S3HelpManager_C_ChangeHelpImage_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.ChangeStatus
// (Net, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void ABP_S3HelpManager_C::STATIC_ChangeStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.ChangeStatus");

	ABP_S3HelpManager_C_ChangeStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.ReturnStatus
// (Net, NetReliable, Exec, Event, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void ABP_S3HelpManager_C::ReturnStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.ReturnStatus");

	ABP_S3HelpManager_C_ReturnStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.UserConstructionScript
// (Net, NetReliable, Event, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3HelpManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.UserConstructionScript");

	ABP_S3HelpManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_18
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::STATIC_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_18");

	ABP_S3HelpManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17
// (Net, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::STATIC_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17");

	ABP_S3HelpManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16
// (Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::STATIC_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16");

	ABP_S3HelpManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::STATIC_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15");

	ABP_S3HelpManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_14
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::STATIC_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_14");

	ABP_S3HelpManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_13
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::STATIC_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_13");

	ABP_S3HelpManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::STATIC_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12");

	ABP_S3HelpManager_C_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_11
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::STATIC_InpActEvt_SearchRightButton_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_11");

	ABP_S3HelpManager_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchLeftButton_K2Node_InputActionEvent_10
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::STATIC_InpActEvt_SearchLeftButton_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchLeftButton_K2Node_InputActionEvent_10");

	ABP_S3HelpManager_C_InpActEvt_SearchLeftButton_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.ReceiveBeginPlay
// (Net, Exec, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_S3HelpManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.ReceiveBeginPlay");

	ABP_S3HelpManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.ReceiveTick
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.ReceiveTick");

	ABP_S3HelpManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.OnHelpWindowOpen
// (Exec, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_S3HelpManager_C::OnHelpWindowOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.OnHelpWindowOpen");

	ABP_S3HelpManager_C_OnHelpWindowOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.EndHelpActor
// (Net, NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::EndHelpActor(class AActor* Actor, unsigned char Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.EndHelpActor");

	ABP_S3HelpManager_C_EndHelpActor_Params params;
	params.Actor = Actor;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.DecideDetectAction
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::STATIC_DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.DecideDetectAction");

	ABP_S3HelpManager_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.DownSelect
// (Net, NetReliable, NetRequest, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_S3HelpManager_C::DownSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.DownSelect");

	ABP_S3HelpManager_C_DownSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.UpSelect
// (NetReliable, NetRequest, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_S3HelpManager_C::UpSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.UpSelect");

	ABP_S3HelpManager_C_UpSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.QuickHelp
// (NetReliable, NetRequest, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_S3HelpManager_C::QuickHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.QuickHelp");

	ABP_S3HelpManager_C_QuickHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_3
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::STATIC_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_3(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_3");

	ABP_S3HelpManager_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_3_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.ExecuteUbergraph_BP_S3HelpManager
// (Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::ExecuteUbergraph_BP_S3HelpManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.ExecuteUbergraph_BP_S3HelpManager");

	ABP_S3HelpManager_C_ExecuteUbergraph_BP_S3HelpManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.ED_HelpEnd__DelegateSignature
// (Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3HelpManager_C::ED_HelpEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.ED_HelpEnd__DelegateSignature");

	ABP_S3HelpManager_C_ED_HelpEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
