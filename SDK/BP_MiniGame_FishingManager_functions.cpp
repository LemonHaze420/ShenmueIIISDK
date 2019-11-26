
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FishingManager_C::DisableCheckSuspendTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.DisableCheckSuspendTime");

	ABP_MiniGame_FishingManager_C_DisableCheckSuspendTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SetEnabledPlayFishing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabledPlayFishing            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::SetEnabledPlayFishing(bool bEnabledPlayFishing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SetEnabledPlayFishing");

	ABP_MiniGame_FishingManager_C_SetEnabledPlayFishing_Params params;
	params.bEnabledPlayFishing = bEnabledPlayFishing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.GetEnabledPlayFishing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bEnabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::GetEnabledPlayFishing(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.GetEnabledPlayFishing");

	ABP_MiniGame_FishingManager_C_GetEnabledPlayFishing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnabled != nullptr)
		*bEnabled = params.bEnabled;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.UpdateLimitTIme
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FishingManager_C::UpdateLimitTIme()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.UpdateLimitTIme");

	ABP_MiniGame_FishingManager_C_UpdateLimitTIme_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ResetRentalData
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FishingManager_C::ResetRentalData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ResetRentalData");

	ABP_MiniGame_FishingManager_C_ResetRentalData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.InitializeRentalData
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FishingManager_C::InitializeRentalData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.InitializeRentalData");

	ABP_MiniGame_FishingManager_C_InitializeRentalData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SetEnabledPlayerControl
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FishingManager_C::CreateReatalEndPop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.CreateReatalEndPop");

	ABP_MiniGame_FishingManager_C_CreateReatalEndPop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ResetTimeLimit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FishingManager_C::ResetTimeLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ResetTimeLimit");

	ABP_MiniGame_FishingManager_C_ResetTimeLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.StartUpdateResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_Fishing_ResultFishData> result_fish_array              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MiniGame_FishingManager_C::StartUpdateResult(TArray<struct FST_Fishing_ResultFishData>* result_fish_array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.StartUpdateResult");

	ABP_MiniGame_FishingManager_C_StartUpdateResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (result_fish_array != nullptr)
		*result_fish_array = params.result_fish_array;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SetResultFishArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_Fishing_ResultFishData> result_fish_array              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MiniGame_FishingManager_C::SetResultFishArray(TArray<struct FST_Fishing_ResultFishData>* result_fish_array)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FishingManager_C::SetNowShopData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SetNowShopData");

	ABP_MiniGame_FishingManager_C_SetNowShopData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SpawnSequenceActor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::GetResultRank(int* Rank)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FishingManager_C::CreateShopResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.CreateShopResult");

	ABP_MiniGame_FishingManager_C_CreateShopResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.UpdateShopResult
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FishingManager_C::UpdateShopResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.UpdateShopResult");

	ABP_MiniGame_FishingManager_C_UpdateShopResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.IsPlayingFishing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ShopIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ResultRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::LoadFishingACScript(int ShopIndex, int ResultRank, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.LoadFishingACScript");

	ABP_MiniGame_FishingManager_C_LoadFishingACScript_Params params;
	params.ShopIndex = ShopIndex;
	params.ResultRank = ResultRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.GetCurrentShopID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            shop_id                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::GetCurrentShopID(int* shop_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.GetCurrentShopID");

	ABP_MiniGame_FishingManager_C_GetCurrentShopID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shop_id != nullptr)
		*shop_id = params.shop_id;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FishingManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.UserConstructionScript");

	ABP_MiniGame_FishingManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_FishingManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ReceiveBeginPlay");

	ABP_MiniGame_FishingManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ReceiveTick");

	ABP_MiniGame_FishingManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ResetToolsData
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FishingManager_C::ResetToolsData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ResetToolsData");

	ABP_MiniGame_FishingManager_C_ResetToolsData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.Event_JumpToShopResult
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FishingManager_C::Event_JumpToShopResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.Event_JumpToShopResult");

	ABP_MiniGame_FishingManager_C_Event_JumpToShopResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnEndJumpToShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::OnEndJumpToShop(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
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
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::OnEndJumpToSavePos(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
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
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseDialog                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::ReturnFishingTools(bool UseDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ReturnFishingTools");

	ABP_MiniGame_FishingManager_C_ReturnFishingTools_Params params;
	params.UseDialog = UseDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.DialogInputTimeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FishingManager_C::DialogInputTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.DialogInputTimeOut");

	ABP_MiniGame_FishingManager_C_DialogInputTimeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.EndFishing
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FishingManager_C::EndFishing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.EndFishing");

	ABP_MiniGame_FishingManager_C_EndFishing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.PlayShopAC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ResultRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::PlayShopAC(int ResultRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.PlayShopAC");

	ABP_MiniGame_FishingManager_C_PlayShopAC_Params params;
	params.ResultRank = ResultRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnInputButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::OnInputButton(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnInputButton");

	ABP_MiniGame_FishingManager_C_OnInputButton_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnLoadACScript
// (BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.FlagChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::FlagChanged(int ArrayIndex, int SetFlags)
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
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*    LevelSequencePlayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingManager_C::OnFinishedSequence(class ULevelSequencePlayer* LevelSequencePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnFinishedSequence");

	ABP_MiniGame_FishingManager_C_OnFinishedSequence_Params params;
	params.LevelSequencePlayer = LevelSequencePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ExecuteUbergraph_BP_MiniGame_FishingManager
// (HasDefaults)
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
