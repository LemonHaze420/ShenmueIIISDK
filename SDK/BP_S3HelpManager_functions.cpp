
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

// Function BP_S3HelpManager.BP_S3HelpManager_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_S3HelpManager_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.GetPriority");

	ABP_S3HelpManager_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_S3HelpManager_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.GetDetectAction");

	ABP_S3HelpManager_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.SelectHelpInventoryTexture
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_S3HelpManager_C::SelectHelpInventoryTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.SelectHelpInventoryTexture");

	ABP_S3HelpManager_C_SelectHelpInventoryTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.SelectTexture
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3HelpManager_C::SelectTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.SelectTexture");

	ABP_S3HelpManager_C_SelectTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.CheckValidRegistHelp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3HelpManager_C::CheckValidRegistHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.CheckValidRegistHelp");

	ABP_S3HelpManager_C_CheckValidRegistHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.GetHelpPriority
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3HelpPriority                Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::GetHelpPriority(class AActor* Actor, ES3HelpPriority* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.GetHelpPriority");

	ABP_S3HelpManager_C_GetHelpPriority_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.SetPageButtonVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3HelpManager_C::SetPageButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.SetPageButtonVisibility");

	ABP_S3HelpManager_C_SetPageButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.ChangePage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNext                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::ChangePage(bool IsNext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.ChangePage");

	ABP_S3HelpManager_C_ChangePage_Params params;
	params.IsNext = IsNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.SetForceDisable
// (Public, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.StartHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   HelpId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::StartHelp(const struct FName& HelpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.StartHelp");

	ABP_S3HelpManager_C_StartHelp_Params params;
	params.HelpId = HelpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.GetHelpName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FST_HelpRegisterInfo    Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::GetHelpName(struct FST_HelpRegisterInfo* Info, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.GetHelpName");

	ABP_S3HelpManager_C_GetHelpName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.PressDownOrUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::PressDownOrUp(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.PressDownOrUp");

	ABP_S3HelpManager_C_PressDownOrUp_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.CheckBlinkIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3HelpManager_C::CheckBlinkIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.CheckBlinkIcon");

	ABP_S3HelpManager_C_CheckBlinkIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.IsActivateHelp
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Activate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::IsActivateHelp(class AActor* Actor, bool* Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.IsActivateHelp");

	ABP_S3HelpManager_C_IsActivateHelp_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Activate != nullptr)
		*Activate = params.Activate;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.CanOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::CanOpen(bool* CAN)
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
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::RemoveHelpItemByActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.RemoveHelpItemByActor");

	ABP_S3HelpManager_C_RemoveHelpItemByActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.RemoveHelpItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 HelpName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_S3HelpManager_C::AddHelpItem(class AActor* Actor, const struct FString& HelpName)
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3HelpManager_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.EndMiniGame");

	ABP_S3HelpManager_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.makeWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3HelpManager_C::makeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.makeWidget");

	ABP_S3HelpManager_C_makeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.AddCategory
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3HelpManager_C::AddCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.AddCategory");

	ABP_S3HelpManager_C_AddCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.makeCategoryList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3HelpManager_C::makeCategoryList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.makeCategoryList");

	ABP_S3HelpManager_C_makeCategoryList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.AutoChangeCurrentOpenIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3HelpManager_C::AutoChangeCurrentOpenIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.AutoChangeCurrentOpenIndex");

	ABP_S3HelpManager_C_AutoChangeCurrentOpenIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.UpdNowPosCursor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3HelpManager_C::UpdNowPosCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.UpdNowPosCursor");

	ABP_S3HelpManager_C_UpdNowPosCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.IsNoScrollRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::ChangeCursorPos(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.ChangeCursorPos");

	ABP_S3HelpManager_C_ChangeCursorPos_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.ChangeHelpImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::ChangeHelpImage(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.ChangeHelpImage");

	ABP_S3HelpManager_C_ChangeHelpImage_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.ChangeStatus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3HelpManager_C::ChangeStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.ChangeStatus");

	ABP_S3HelpManager_C_ChangeStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.ReturnStatus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3HelpManager_C::ReturnStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.ReturnStatus");

	ABP_S3HelpManager_C_ReturnStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3HelpManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.UserConstructionScript");

	ABP_S3HelpManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_18");

	ABP_S3HelpManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17");

	ABP_S3HelpManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16");

	ABP_S3HelpManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15");

	ABP_S3HelpManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_14");

	ABP_S3HelpManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_13");

	ABP_S3HelpManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12");

	ABP_S3HelpManager_C_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::InpActEvt_SearchRightButton_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_11");

	ABP_S3HelpManager_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchLeftButton_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HelpManager_C::InpActEvt_SearchLeftButton_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchLeftButton_K2Node_InputActionEvent_10");

	ABP_S3HelpManager_C_InpActEvt_SearchLeftButton_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3HelpManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.ReceiveBeginPlay");

	ABP_S3HelpManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.ReceiveTick");

	ABP_S3HelpManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.OnHelpWindowOpen
// (BlueprintCallable, BlueprintEvent)

void ABP_S3HelpManager_C::OnHelpWindowOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.OnHelpWindowOpen");

	ABP_S3HelpManager_C_OnHelpWindowOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.EndHelpActor
// (BlueprintCallable, BlueprintEvent)
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
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.DecideDetectAction");

	ABP_S3HelpManager_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.DownSelect
// (BlueprintCallable, BlueprintEvent)

void ABP_S3HelpManager_C::DownSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.DownSelect");

	ABP_S3HelpManager_C_DownSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.UpSelect
// (BlueprintCallable, BlueprintEvent)

void ABP_S3HelpManager_C::UpSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.UpSelect");

	ABP_S3HelpManager_C_UpSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.QuickHelp
// (BlueprintCallable, BlueprintEvent)

void ABP_S3HelpManager_C::QuickHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.QuickHelp");

	ABP_S3HelpManager_C_QuickHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_3
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HelpManager_C::InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_3(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_3");

	ABP_S3HelpManager_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_3_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HelpManager.BP_S3HelpManager_C.ExecuteUbergraph_BP_S3HelpManager
// (HasDefaults)
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
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_S3HelpManager_C::ED_HelpEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HelpManager.BP_S3HelpManager_C.ED_HelpEnd__DelegateSignature");

	ABP_S3HelpManager_C_ED_HelpEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
