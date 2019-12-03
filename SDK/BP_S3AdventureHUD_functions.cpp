
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

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowsClockOnPlayerBehavior
// (NetRequest, Native, MulticastDelegate, Public, Protected, Delegate, DLLImport, Const)
// Parameters:
// ES3PlayerBehavior              Behavior                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3AdventureHUD_C::ShowsClockOnPlayerBehavior(ES3PlayerBehavior Behavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowsClockOnPlayerBehavior");

	ABP_S3AdventureHUD_C_ShowsClockOnPlayerBehavior_Params params;
	params.Behavior = Behavior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.DestroyDevelopmentText
// (Net, NetReliable, Exec, NetMulticast, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_S3AdventureHUD_C::DestroyDevelopmentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.DestroyDevelopmentText");

	ABP_S3AdventureHUD_C_DestroyDevelopmentText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.HideEyecatch
// (Net, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_S3AdventureHUD_C::HideEyecatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.HideEyecatch");

	ABP_S3AdventureHUD_C_HideEyecatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMenuManagerActor
// (NetRequest, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::STATIC_GetMenuManagerActor(class AActor** Actor)
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
// (Exec, NetResponse, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent)
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
// (Net, NetReliable, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::STATIC_ForbidDetectAction_Impl(class AActor* Actor, bool* dummy)
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
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::PermitWindowUI_Impl(class AActor* Actor, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.PermitWindowUI_Impl");

	ABP_S3AdventureHUD_C_PermitWindowUI_Impl_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ForbidWindowUI_Impl
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::STATIC_ForbidWindowUI_Impl(class AActor* Actor, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ForbidWindowUI_Impl");

	ABP_S3AdventureHUD_C_ForbidWindowUI_Impl_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.UpdateClockVisibility
// (Net, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void ABP_S3AdventureHUD_C::STATIC_UpdateClockVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.UpdateClockVisibility");

	ABP_S3AdventureHUD_C_UpdateClockVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.SpawnManager
// (Net, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_S3AdventureHUD_C::STATIC_SpawnManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.SpawnManager");

	ABP_S3AdventureHUD_C_SpawnManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.HideMoneyStatus
// (Net, NetRequest, Exec, Native, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::HideMoneyStatus(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.HideMoneyStatus");

	ABP_S3AdventureHUD_C_HideMoneyStatus_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowMoneyStatus
// (Event, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
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
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, NetServer)
// Parameters:
// class ABP_money_status_C*      BP_MoneyStatus                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::GetMoneyStatus(class ABP_money_status_C** BP_MoneyStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMoneyStatus");

	ABP_S3AdventureHUD_C_GetMoneyStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_MoneyStatus != nullptr)
		*BP_MoneyStatus = params.BP_MoneyStatus;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowEyecatch
// (Net, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
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
// (Net, NetRequest, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_MiniMap2DManager_C*  BP_MinimapManager              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::STATIC_GetMinimap2DManager(class ABP_MiniMap2DManager_C** BP_MinimapManager)
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
// (NetResponse, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
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
// (NetReliable, Native, Event, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMemoTextureDataManager
// (NetRequest, Event, NetResponse, NetMulticast, NetServer)
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
// (Net, NetReliable, Event, NetResponse, NetMulticast, NetServer)
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
// (NetReliable, Event, NetResponse, NetMulticast, NetServer)
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
// (Net, Event, NetResponse, NetMulticast, NetServer)
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
// (Event, NetResponse, NetMulticast, NetServer)
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
// (NetReliable, NetResponse, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport)

void ABP_S3AdventureHUD_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.UserConstructionScript");

	ABP_S3AdventureHUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, NetServer)

void ABP_S3AdventureHUD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ReceiveBeginPlay");

	ABP_S3AdventureHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ReceiveTick
// (NetReliable, NetRequest, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ReceiveTick");

	ABP_S3AdventureHUD_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ReceiveDestroyed
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, NetServer)

void ABP_S3AdventureHUD_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ReceiveDestroyed");

	ABP_S3AdventureHUD_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.CastChildActor
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, NetServer)

void ABP_S3AdventureHUD_C::CastChildActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.CastChildActor");

	ABP_S3AdventureHUD_C_CastChildActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowRewardNotice
// (NetReliable, NetRequest, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3RewardCategory              Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventureHUD_C::STATIC_ShowRewardNotice(ES3RewardCategory Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowRewardNotice");

	ABP_S3AdventureHUD_C_ShowRewardNotice_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ExecuteUbergraph_BP_S3AdventureHUD
// (Net, Event, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
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
