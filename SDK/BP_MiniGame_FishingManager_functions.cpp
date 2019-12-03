
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

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.DisableCheckSuspendTime
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_FishingManager_C::DisableCheckSuspendTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.DisableCheckSuspendTime");

	ABP_MiniGame_FishingManager_C_DisableCheckSuspendTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SetEnabledPlayFishing
// (Net, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           bEnabledPlayFishing            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::STATIC_SetEnabledPlayFishing(bool bEnabledPlayFishing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SetEnabledPlayFishing");

	ABP_MiniGame_FishingManager_C_SetEnabledPlayFishing_Params params;
	params.bEnabledPlayFishing = bEnabledPlayFishing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.GetEnabledPlayFishing
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           bEnabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::STATIC_GetEnabledPlayFishing(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.GetEnabledPlayFishing");

	ABP_MiniGame_FishingManager_C_GetEnabledPlayFishing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnabled != nullptr)
		*bEnabled = params.bEnabled;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.UpdateLimitTIme
// (Net, NetReliable, Native, Event, Static, Private, Protected, NetClient, Const)

void ABP_MiniGame_FishingManager_C::STATIC_UpdateLimitTIme()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.UpdateLimitTIme");

	ABP_MiniGame_FishingManager_C_UpdateLimitTIme_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ResetRentalData
// (Net, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_FishingManager_C::STATIC_ResetRentalData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ResetRentalData");

	ABP_MiniGame_FishingManager_C_ResetRentalData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.InitializeRentalData
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, Delegate, NetClient, Const)

void ABP_MiniGame_FishingManager_C::STATIC_InitializeRentalData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.InitializeRentalData");

	ABP_MiniGame_FishingManager_C_InitializeRentalData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SetEnabledPlayerControl
// (Exec, Event, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::SetEnabledPlayerControl(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SetEnabledPlayerControl");

	ABP_MiniGame_FishingManager_C_SetEnabledPlayerControl_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.CreateReatalEndPop
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_FishingManager_C::STATIC_CreateReatalEndPop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.CreateReatalEndPop");

	ABP_MiniGame_FishingManager_C_CreateReatalEndPop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ResetTimeLimit
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_MiniGame_FishingManager_C::STATIC_ResetTimeLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ResetTimeLimit");

	ABP_MiniGame_FishingManager_C_ResetTimeLimit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.StartUpdateResult
// (Net, NetRequest, Native, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// TArray<struct FST_Fishing_ResultFishData> result_fish_array              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MiniGame_FishingManager_C::StartUpdateResult(TArray<struct FST_Fishing_ResultFishData>* result_fish_array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.StartUpdateResult");

	ABP_MiniGame_FishingManager_C_StartUpdateResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (result_fish_array != nullptr)
		*result_fish_array = params.result_fish_array;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SetResultFishArray
// (Net, NetRequest, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// TArray<struct FST_Fishing_ResultFishData> result_fish_array              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MiniGame_FishingManager_C::STATIC_SetResultFishArray(TArray<struct FST_Fishing_ResultFishData>* result_fish_array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SetResultFishArray");

	ABP_MiniGame_FishingManager_C_SetResultFishArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (result_fish_array != nullptr)
		*result_fish_array = params.result_fish_array;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SetNowShopData
// (Net, NetReliable, Static, Private, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_FishingManager_C::STATIC_SetNowShopData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SetNowShopData");

	ABP_MiniGame_FishingManager_C_SetNowShopData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SpawnSequenceActor
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*          Sequence                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  AttachParent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_SpawnableSequenceActor_C* SpawnObj                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::SpawnSequenceActor(class ULevelSequence* Sequence, class AActor* AttachParent, class ABP_SpawnableSequenceActor_C** SpawnObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SpawnSequenceActor");

	ABP_MiniGame_FishingManager_C_SpawnSequenceActor_Params params;
	params.Sequence = Sequence;
	params.AttachParent = AttachParent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnObj != nullptr)
		*SpawnObj = params.SpawnObj;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.GetSellPosition
// (NetRequest, Exec, Event, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// struct FVector                 pos                            (Parm, OutParm, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::GetSellPosition(struct FVector* pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.GetSellPosition");

	ABP_MiniGame_FishingManager_C_GetSellPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pos != nullptr)
		*pos = params.pos;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.GetResultRank
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::STATIC_GetResultRank(int* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.GetResultRank");

	ABP_MiniGame_FishingManager_C_GetResultRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rank != nullptr)
		*Rank = params.Rank;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.CreateShopResult
// (Net, NetReliable, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_FishingManager_C::STATIC_CreateShopResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.CreateShopResult");

	ABP_MiniGame_FishingManager_C_CreateShopResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.UpdateShopResult
// (Net, NetResponse, Static, Public, Protected, Delegate, NetClient, Const)

void ABP_MiniGame_FishingManager_C::STATIC_UpdateShopResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.UpdateShopResult");

	ABP_MiniGame_FishingManager_C_UpdateShopResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.IsPlayingFishing
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           IsFishing                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::IsPlayingFishing(bool* IsFishing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.IsPlayingFishing");

	ABP_MiniGame_FishingManager_C_IsPlayingFishing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFishing != nullptr)
		*IsFishing = params.IsFishing;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.LoadFishingACScript
// (Native, NetResponse, Static, Private, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ShopIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ResultRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::STATIC_LoadFishingACScript(int ShopIndex, int ResultRank, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.LoadFishingACScript");

	ABP_MiniGame_FishingManager_C_LoadFishingACScript_Params params;
	params.ShopIndex = ShopIndex;
	params.ResultRank = ResultRank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.GetCurrentShopID
// (Net, Native, Public, Private, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            shop_id                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::GetCurrentShopID(int* shop_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.GetCurrentShopID");

	ABP_MiniGame_FishingManager_C_GetCurrentShopID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shop_id != nullptr)
		*shop_id = params.shop_id;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.UserConstructionScript
// (Net, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)

void ABP_MiniGame_FishingManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.UserConstructionScript");

	ABP_MiniGame_FishingManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ReceiveBeginPlay
// (NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_MiniGame_FishingManager_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ReceiveBeginPlay");

	ABP_MiniGame_FishingManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ReceiveTick
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ReceiveTick");

	ABP_MiniGame_FishingManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ResetToolsData
// (Net, NetReliable, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_MiniGame_FishingManager_C::ResetToolsData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ResetToolsData");

	ABP_MiniGame_FishingManager_C_ResetToolsData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.Event_JumpToShopResult
// (Net, NetReliable, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_MiniGame_FishingManager_C::Event_JumpToShopResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.Event_JumpToShopResult");

	ABP_MiniGame_FishingManager_C_Event_JumpToShopResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnEndJumpToShop
// (Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::STATIC_OnEndJumpToShop(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnEndJumpToShop");

	ABP_MiniGame_FishingManager_C_OnEndJumpToShop_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnEndJumpToSavePos
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::STATIC_OnEndJumpToSavePos(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnEndJumpToSavePos");

	ABP_MiniGame_FishingManager_C_OnEndJumpToSavePos_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ReturnFishingTools
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           UseDialog                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::ReturnFishingTools(bool UseDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ReturnFishingTools");

	ABP_MiniGame_FishingManager_C_ReturnFishingTools_Params params;
	params.UseDialog = UseDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.DialogInputTimeOut
// (Net, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_MiniGame_FishingManager_C::DialogInputTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.DialogInputTimeOut");

	ABP_MiniGame_FishingManager_C_DialogInputTimeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.EndFishing
// (NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_MiniGame_FishingManager_C::EndFishing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.EndFishing");

	ABP_MiniGame_FishingManager_C_EndFishing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.PlayShopAC
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            ResultRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::PlayShopAC(int ResultRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.PlayShopAC");

	ABP_MiniGame_FishingManager_C_PlayShopAC_Params params;
	params.ResultRank = ResultRank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnInputButton
// (Net, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::OnInputButton(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnInputButton");

	ABP_MiniGame_FishingManager_C_OnInputButton_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnLoadACScript
// (Net, Exec, Native, MulticastDelegate, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 LoadId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 LoadedObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::OnLoadACScript(const struct FString& LoadId, class UObject* LoadedObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnLoadACScript");

	ABP_MiniGame_FishingManager_C_OnLoadACScript_Params params;
	params.LoadId = LoadId;
	params.LoadedObject = LoadedObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.FlagChanged
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::STATIC_FlagChanged(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.FlagChanged");

	ABP_MiniGame_FishingManager_C_FlagChanged_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnFinishedSequence
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class ULevelSequencePlayer*    LevelSequencePlayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::OnFinishedSequence(class ULevelSequencePlayer* LevelSequencePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnFinishedSequence");

	ABP_MiniGame_FishingManager_C_OnFinishedSequence_Params params;
	params.LevelSequencePlayer = LevelSequencePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ExecuteUbergraph_BP_MiniGame_FishingManager
// (NetReliable, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::ExecuteUbergraph_BP_MiniGame_FishingManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ExecuteUbergraph_BP_MiniGame_FishingManager");

	ABP_MiniGame_FishingManager_C_ExecuteUbergraph_BP_MiniGame_FishingManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
