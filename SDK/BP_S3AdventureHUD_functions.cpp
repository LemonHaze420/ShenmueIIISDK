
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

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowsClockOnPlayerBehavior
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3PlayerBehavior              Behavior                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3AdventureHUD_C::ShowsClockOnPlayerBehavior(ES3PlayerBehavior Behavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowsClockOnPlayerBehavior");

	ABP_S3AdventureHUD_C_ShowsClockOnPlayerBehavior_Params params;
	params.Behavior = Behavior;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.DestroyDevelopmentText
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AdventureHUD_C::DestroyDevelopmentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.DestroyDevelopmentText");

	ABP_S3AdventureHUD_C_DestroyDevelopmentText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.HideEyecatch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3AdventureHUD_C::HideEyecatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.HideEyecatch");

	ABP_S3AdventureHUD_C_HideEyecatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMenuManagerActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::GetMenuManagerActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMenuManagerActor");

	ABP_S3AdventureHUD_C_GetMenuManagerActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.PermitDetectAction_Impl
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::PermitDetectAction_Impl(class AActor* Actor, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.PermitDetectAction_Impl");

	ABP_S3AdventureHUD_C_PermitDetectAction_Impl_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ForbidDetectAction_Impl
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::ForbidDetectAction_Impl(class AActor* Actor, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ForbidDetectAction_Impl");

	ABP_S3AdventureHUD_C_ForbidDetectAction_Impl_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.PermitWindowUI_Impl
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::PermitWindowUI_Impl(class AActor* Actor, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.PermitWindowUI_Impl");

	ABP_S3AdventureHUD_C_PermitWindowUI_Impl_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ForbidWindowUI_Impl
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::ForbidWindowUI_Impl(class AActor* Actor, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ForbidWindowUI_Impl");

	ABP_S3AdventureHUD_C_ForbidWindowUI_Impl_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.UpdateClockVisibility
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3AdventureHUD_C::UpdateClockVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.UpdateClockVisibility");

	ABP_S3AdventureHUD_C_UpdateClockVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.SpawnManager
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3AdventureHUD_C::SpawnManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.SpawnManager");

	ABP_S3AdventureHUD_C_SpawnManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.HideMoneyStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::HideMoneyStatus(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.HideMoneyStatus");

	ABP_S3AdventureHUD_C_HideMoneyStatus_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowMoneyStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::ShowMoneyStatus(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowMoneyStatus");

	ABP_S3AdventureHUD_C_ShowMoneyStatus_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMoneyStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_money_status_C*      BP_MoneyStatus                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::GetMoneyStatus(class ABP_money_status_C** BP_MoneyStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMoneyStatus");

	ABP_S3AdventureHUD_C_GetMoneyStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_MoneyStatus != nullptr)
		*BP_MoneyStatus = params.BP_MoneyStatus;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowEyecatch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   ForceId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::ShowEyecatch(const struct FVector& Location, const struct FName& ForceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowEyecatch");

	ABP_S3AdventureHUD_C_ShowEyecatch_Params params;
	params.Location = Location;
	params.ForceId = ForceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMinimap2DManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_MiniMap2DManager_C*  BP_MinimapManager              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::GetMinimap2DManager(class ABP_MiniMap2DManager_C** BP_MinimapManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMinimap2DManager");

	ABP_S3AdventureHUD_C_GetMinimap2DManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_MinimapManager != nullptr)
		*BP_MinimapManager = params.BP_MinimapManager;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowCharaName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::ShowCharaName(class AActor* Actor, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowCharaName");

	ABP_S3AdventureHUD_C_ShowCharaName_Params params;
	params.Actor = Actor;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ChangeDetectIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::ChangeDetectIcon(class AActor* Actor, ES3ActionIconType Type, int Index, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ChangeDetectIcon");

	ABP_S3AdventureHUD_C_ChangeDetectIcon_Params params;
	params.Actor = Actor;
	params.Type = Type;
	params.Index = Index;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMemoTextureDataManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_MemoTextureDataManager_C* BP_MemoTextureDataManager      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::GetMemoTextureDataManager(class ABP_MemoTextureDataManager_C** BP_MemoTextureDataManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMemoTextureDataManager");

	ABP_S3AdventureHUD_C_GetMemoTextureDataManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_MemoTextureDataManager != nullptr)
		*BP_MemoTextureDataManager = params.BP_MemoTextureDataManager;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetPopupItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_PopupItem_C*         BP_PopupItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::GetPopupItem(class ABP_PopupItem_C** BP_PopupItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetPopupItem");

	ABP_S3AdventureHUD_C_GetPopupItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_PopupItem != nullptr)
		*BP_PopupItem = params.BP_PopupItem;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMenuManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_MenuWindowManager_C* menuManager                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::GetMenuManager(class ABP_MenuWindowManager_C** menuManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMenuManager");

	ABP_S3AdventureHUD_C_GetMenuManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (menuManager != nullptr)
		*menuManager = params.menuManager;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMemopadManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_S3MemopadManager_C*  AsBP_S3Memopad_Manager         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::GetMemopadManager(class ABP_S3MemopadManager_C** AsBP_S3Memopad_Manager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMemopadManager");

	ABP_S3AdventureHUD_C_GetMemopadManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBP_S3Memopad_Manager != nullptr)
		*AsBP_S3Memopad_Manager = params.AsBP_S3Memopad_Manager;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetDetectAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_S3DetectAction_C*    AsBP_S3Detect_Action           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::GetDetectAction(class ABP_S3DetectAction_C** AsBP_S3Detect_Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetDetectAction");

	ABP_S3AdventureHUD_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBP_S3Detect_Action != nullptr)
		*AsBP_S3Detect_Action = params.AsBP_S3Detect_Action;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AdventureHUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.UserConstructionScript");

	ABP_S3AdventureHUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3AdventureHUD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ReceiveBeginPlay");

	ABP_S3AdventureHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ReceiveTick");

	ABP_S3AdventureHUD_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_S3AdventureHUD_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ReceiveDestroyed");

	ABP_S3AdventureHUD_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.CastChildActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AdventureHUD_C::CastChildActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.CastChildActor");

	ABP_S3AdventureHUD_C_CastChildActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowRewardNotice
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3RewardCategory              Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::ShowRewardNotice(ES3RewardCategory Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowRewardNotice");

	ABP_S3AdventureHUD_C_ShowRewardNotice_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ExecuteUbergraph_BP_S3AdventureHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::ExecuteUbergraph_BP_S3AdventureHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ExecuteUbergraph_BP_S3AdventureHUD");

	ABP_S3AdventureHUD_C_ExecuteUbergraph_BP_S3AdventureHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
