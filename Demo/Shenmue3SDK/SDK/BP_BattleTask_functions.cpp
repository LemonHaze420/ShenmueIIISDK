
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_BattleTask.BP_BattleTask_C.GetAssetReferenceHolder
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* ABP_BattleTask_C::GetAssetReferenceHolder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.GetAssetReferenceHolder");

	ABP_BattleTask_C_GetAssetReferenceHolder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleTask.BP_BattleTask_C.EndBattle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBattleWinLoseResult>* Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTask_C::EndBattle(TEnumAsByte<EBattleWinLoseResult>* Result, bool* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.EndBattle");

	ABP_BattleTask_C_EndBattle_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BP_BattleTask.BP_BattleTask_C.EnableGameTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTask_C::EnableGameTime(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.EnableGameTime");

	ABP_BattleTask_C_EnableGameTime_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.RunOnBothTransitions
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleTask_C::RunOnBothTransitions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.RunOnBothTransitions");

	ABP_BattleTask_C_RunOnBothTransitions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.CheckFadeFinishedOrCancelled
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Done                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTask_C::CheckFadeFinishedOrCancelled(bool* Done)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.CheckFadeFinishedOrCancelled");

	ABP_BattleTask_C_CheckFadeFinishedOrCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Done != nullptr)
		*Done = params.Done;
}


// Function BP_BattleTask.BP_BattleTask_C.StartChangeClothes
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StartBattle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTask_C::StartChangeClothes(bool StartBattle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.StartChangeClothes");

	ABP_BattleTask_C_StartChangeClothes_Params params;
	params.StartBattle = StartBattle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.SetPostBattleEventFlags
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleTask_C::SetPostBattleEventFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.SetPostBattleEventFlags");

	ABP_BattleTask_C_SetPostBattleEventFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.StartFadeStep
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanStartFade                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MustWait                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTask_C::StartFadeStep(bool FadeOut, bool CanStartFade, bool* MustWait)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.StartFadeStep");

	ABP_BattleTask_C_StartFadeStep_Params params;
	params.FadeOut = FadeOut;
	params.CanStartFade = CanStartFade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MustWait != nullptr)
		*MustWait = params.MustWait;
}


// Function BP_BattleTask.BP_BattleTask_C.CheckFadeFinished
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Finished                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTask_C::CheckFadeFinished(bool FadeOut, bool* Finished)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.CheckFadeFinished");

	ABP_BattleTask_C_CheckFadeFinished_Params params;
	params.FadeOut = FadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Finished != nullptr)
		*Finished = params.Finished;
}


// Function BP_BattleTask.BP_BattleTask_C.CheckFadeInProgress
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InProgress                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTask_C::CheckFadeInProgress(bool FadeOut, bool* InProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.CheckFadeInProgress");

	ABP_BattleTask_C_CheckFadeInProgress_Params params;
	params.FadeOut = FadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InProgress != nullptr)
		*InProgress = params.InProgress;
}


// Function BP_BattleTask.BP_BattleTask_C.StartBattle_ByMediator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BattleMediatorBase_C* MediatorBase                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTask_C::StartBattle_ByMediator(class ABP_BattleMediatorBase_C* MediatorBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.StartBattle_ByMediator");

	ABP_BattleTask_C_StartBattle_ByMediator_Params params;
	params.MediatorBase = MediatorBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.StartBattle_ByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   BattleId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LoadLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTask_C::StartBattle_ByID(const struct FName& BattleId, const struct FName& LoadLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.StartBattle_ByID");

	ABP_BattleTask_C_StartBattle_ByID_Params params;
	params.BattleId = BattleId;
	params.LoadLevel = LoadLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.FindMediator
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_BattleMediatorBase_C* Battle                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTask_C::FindMediator(const struct FName& ID, class ABP_BattleMediatorBase_C** Battle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.FindMediator");

	ABP_BattleTask_C_FindMediator_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Battle != nullptr)
		*Battle = params.Battle;
}


// Function BP_BattleTask.BP_BattleTask_C.CallEndEvents
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleTask_C::CallEndEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.CallEndEvents");

	ABP_BattleTask_C_CallEndEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleTask_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.UserConstructionScript");

	ABP_BattleTask_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.OnLoaded_3AC68FA04E82B1C21019C4A9165E85C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTask_C::OnLoaded_3AC68FA04E82B1C21019C4A9165E85C1(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.OnLoaded_3AC68FA04E82B1C21019C4A9165E85C1");

	ABP_BattleTask_C_OnLoaded_3AC68FA04E82B1C21019C4A9165E85C1_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.OnLoaded_F3EFC8734A9BA6BB6F0861A8C832BDC2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTask_C::OnLoaded_F3EFC8734A9BA6BB6F0861A8C832BDC2(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.OnLoaded_F3EFC8734A9BA6BB6F0861A8C832BDC2");

	ABP_BattleTask_C_OnLoaded_F3EFC8734A9BA6BB6F0861A8C832BDC2_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.OnBattleEndEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBattleWinLoseResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTask_C::OnBattleEndEvent(TEnumAsByte<EBattleWinLoseResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.OnBattleEndEvent");

	ABP_BattleTask_C_OnBattleEndEvent_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.AbortBattle
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleTask_C::AbortBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.AbortBattle");

	ABP_BattleTask_C_AbortBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.ClothesChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTask_C::ClothesChanged(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.ClothesChanged");

	ABP_BattleTask_C_ClothesChanged_Params params;
	params.Interface = Interface;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTask_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.ReceiveEndPlay");

	ABP_BattleTask_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.StartBattle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleTask_C::StartBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.StartBattle");

	ABP_BattleTask_C_StartBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.FinishedUnloadLevel
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleTask_C::FinishedUnloadLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.FinishedUnloadLevel");

	ABP_BattleTask_C_FinishedUnloadLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.FinishEnvLevelStreaming
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTask_C::FinishEnvLevelStreaming(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.FinishEnvLevelStreaming");

	ABP_BattleTask_C_FinishEnvLevelStreaming_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.OnHintWindowClose
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleTask_C::OnHintWindowClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.OnHintWindowClose");

	ABP_BattleTask_C_OnHintWindowClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTask.BP_BattleTask_C.ExecuteUbergraph_BP_BattleTask
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTask_C::ExecuteUbergraph_BP_BattleTask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTask.BP_BattleTask_C.ExecuteUbergraph_BP_BattleTask");

	ABP_BattleTask_C_ExecuteUbergraph_BP_BattleTask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
