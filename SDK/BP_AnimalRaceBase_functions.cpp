
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

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetAnimalCameraPos
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IndexNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_AnimalRaceBase_C::GetAnimalCameraPos(int IndexNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetAnimalCameraPos");

	ABP_AnimalRaceBase_C_GetAnimalCameraPos_Params params;
	params.IndexNum = IndexNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetAnimalDelayTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::GetAnimalDelayTime(int Index, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetAnimalDelayTime");

	ABP_AnimalRaceBase_C_GetAnimalDelayTime_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetFortuneGrade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GradeNum                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::GetFortuneGrade(int* GradeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetFortuneGrade");

	ABP_AnimalRaceBase_C_GetFortuneGrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GradeNum != nullptr)
		*GradeNum = params.GradeNum;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CheckAnimalWallCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CheckActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         CheckComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            CheckAnimalIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBeginOverlap                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::CheckAnimalWallCollision(class AActor* CheckActor, class UActorComponent* CheckComponent, int CheckAnimalIndex, bool IsRight, bool IsBeginOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CheckAnimalWallCollision");

	ABP_AnimalRaceBase_C_CheckAnimalWallCollision_Params params;
	params.CheckActor = CheckActor;
	params.CheckComponent = CheckComponent;
	params.CheckAnimalIndex = CheckAnimalIndex;
	params.IsRight = IsRight;
	params.IsBeginOverlap = IsBeginOverlap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdatePlayCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsToad                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceUseHighTable             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::UpdatePlayCount(bool IsToad, bool* bForceUseHighTable, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdatePlayCount");

	ABP_AnimalRaceBase_C_UpdatePlayCount_Params params;
	params.IsToad = IsToad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bForceUseHighTable != nullptr)
		*bForceUseHighTable = params.bForceUseHighTable;
	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetCollisionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::SetCollisionEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetCollisionEnabled");

	ABP_AnimalRaceBase_C_SetCollisionEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.InitializeOnBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::InitializeOnBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.InitializeOnBeginPlay");

	ABP_AnimalRaceBase_C_InitializeOnBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.InitializeAnimalData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::InitializeAnimalData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.InitializeAnimalData");

	ABP_AnimalRaceBase_C_InitializeAnimalData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetMiniGameBGMID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::GetMiniGameBGMID(struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetMiniGameBGMID");

	ABP_AnimalRaceBase_C_GetMiniGameBGMID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.TestFunc
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::TestFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.TestFunc");

	ABP_AnimalRaceBase_C_TestFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetAnimalCondition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::SetAnimalCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetAnimalCondition");

	ABP_AnimalRaceBase_C_SetAnimalCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ChangeSpeedFromCache
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::ChangeSpeedFromCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ChangeSpeedFromCache");

	ABP_AnimalRaceBase_C_ChangeSpeedFromCache_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdateResultCache
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ResultSuccess                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::UpdateResultCache(bool ResultSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdateResultCache");

	ABP_AnimalRaceBase_C_UpdateResultCache_Params params;
	params.ResultSuccess = ResultSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ResetQTEInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::ResetQTEInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ResetQTEInfo");

	ABP_AnimalRaceBase_C_ResetQTEInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdateQte
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::UpdateQte()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdateQte");

	ABP_AnimalRaceBase_C_UpdateQte_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.IsToadRace
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bToad                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::IsToadRace(bool* bToad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.IsToadRace");

	ABP_AnimalRaceBase_C_IsToadRace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bToad != nullptr)
		*bToad = params.bToad;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetFortuneResult
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::SetFortuneResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetFortuneResult");

	ABP_AnimalRaceBase_C_SetFortuneResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetBoardInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::SetBoardInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetBoardInfo");

	ABP_AnimalRaceBase_C_SetBoardInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetMiniGameHelpName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void ABP_AnimalRaceBase_C::GetMiniGameHelpName(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetMiniGameHelpName");

	ABP_AnimalRaceBase_C_GetMiniGameHelpName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetAnimalCrySEVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CrySEVolume                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::SetAnimalCrySEVolume(float CrySEVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetAnimalCrySEVolume");

	ABP_AnimalRaceBase_C_SetAnimalCrySEVolume_Params params;
	params.CrySEVolume = CrySEVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetAnimalSE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AR_Animal_Base_C*    Animal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::SetAnimalSE(class ABP_AR_Animal_Base_C* Animal, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetAnimalSE");

	ABP_AnimalRaceBase_C_SetAnimalSE_Params params;
	params.Animal = Animal;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdateOpeningCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::UpdateOpeningCamera(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdateOpeningCamera");

	ABP_AnimalRaceBase_C_UpdateOpeningCamera_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdateBetAnimalUI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::UpdateBetAnimalUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdateBetAnimalUI");

	ABP_AnimalRaceBase_C_UpdateBetAnimalUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdateCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdateCamera");

	ABP_AnimalRaceBase_C_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetRewardMoney
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Money                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::GetRewardMoney(int* Money)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetRewardMoney");

	ABP_AnimalRaceBase_C_GetRewardMoney_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Money != nullptr)
		*Money = params.Money;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.set Select Point Location
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::set_Select_Point_Location(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.set Select Point Location");

	ABP_AnimalRaceBase_C_set_Select_Point_Location_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SpawnInputControlActor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_AnimalRaceBase_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SpawnInputControlActor");

	ABP_AnimalRaceBase_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UserConstructionScript");

	ABP_AnimalRaceBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CountDown__FinishedFunc
// (BlueprintEvent)

void ABP_AnimalRaceBase_C::CountDown__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CountDown__FinishedFunc");

	ABP_AnimalRaceBase_C_CountDown__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CountDown__UpdateFunc
// (BlueprintEvent)

void ABP_AnimalRaceBase_C::CountDown__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CountDown__UpdateFunc");

	ABP_AnimalRaceBase_C_CountDown__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ResultCheck
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::ResultCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ResultCheck");

	ABP_AnimalRaceBase_C_ResultCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.RaceTick
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::RaceTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.RaceTick");

	ABP_AnimalRaceBase_C_RaceTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GameStartFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*    LevelSequencePlayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::GameStartFinished(class ULevelSequencePlayer* LevelSequencePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GameStartFinished");

	ABP_AnimalRaceBase_C_GameStartFinished_Params params;
	params.LevelSequencePlayer = LevelSequencePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Bet Tick
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Bet_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Bet Tick");

	ABP_AnimalRaceBase_C_Bet_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Result Tick
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Result_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Result Tick");

	ABP_AnimalRaceBase_C_Result_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_AnimalRaceBase_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature");

	ABP_AnimalRaceBase_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_AnimalRaceBase_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature");

	ABP_AnimalRaceBase_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ResumeMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AnimalRaceBase_C::ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ResumeMiniGame");

	ABP_AnimalRaceBase_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.OnTalkScriptEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.OnTalkScriptEvent");

	ABP_AnimalRaceBase_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.StartMiniGame");

	ABP_AnimalRaceBase_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.EndMiniGame");

	ABP_AnimalRaceBase_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.RestartMiniGame");

	ABP_AnimalRaceBase_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.WinMiniGame");

	ABP_AnimalRaceBase_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.LoseMiniGame");

	ABP_AnimalRaceBase_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.DrawMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.DrawMiniGame");

	ABP_AnimalRaceBase_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.AnimalRace End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           is_success                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::AnimalRace_End(bool is_success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.AnimalRace End");

	ABP_AnimalRaceBase_C_AnimalRace_End_Params params;
	params.is_success = is_success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CancelMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CancelMiniGame");

	ABP_AnimalRaceBase_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.StartGameFadeOutFinish
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::StartGameFadeOutFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.StartGameFadeOutFinish");

	ABP_AnimalRaceBase_C_StartGameFadeOutFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.WinGameFadeOutFinish
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::WinGameFadeOutFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.WinGameFadeOutFinish");

	ABP_AnimalRaceBase_C_WinGameFadeOutFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.LoseGameFadeOutFinish
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::LoseGameFadeOutFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.LoseGameFadeOutFinish");

	ABP_AnimalRaceBase_C_LoseGameFadeOutFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CancelFadeEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::CancelFadeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CancelFadeEnd");

	ABP_AnimalRaceBase_C_CancelFadeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Back Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Back_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Back Pushed");

	ABP_AnimalRaceBase_C_Back_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Action Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Action_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Action Pushed");

	ABP_AnimalRaceBase_C_Action_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Up Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Up_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Up Pushed");

	ABP_AnimalRaceBase_C_Up_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Down Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Down_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Down Pushed");

	ABP_AnimalRaceBase_C_Down_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Bet Left Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Bet_Left_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Bet Left Pushed");

	ABP_AnimalRaceBase_C_Bet_Left_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Bet Right Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Bet_Right_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Bet Right Pushed");

	ABP_AnimalRaceBase_C_Bet_Right_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Race Up Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Race_Up_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Race Up Pushed");

	ABP_AnimalRaceBase_C_Race_Up_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Race Down Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Race_Down_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Race Down Pushed");

	ABP_AnimalRaceBase_C_Race_Down_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Race Right Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Race_Right_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Race Right Pushed");

	ABP_AnimalRaceBase_C_Race_Right_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Race Left Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Race_Left_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Race Left Pushed");

	ABP_AnimalRaceBase_C_Race_Left_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Right Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Right_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Right Pushed");

	ABP_AnimalRaceBase_C_Right_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Left Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Left_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Left Pushed");

	ABP_AnimalRaceBase_C_Left_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CountDownFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::CountDownFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CountDownFinished");

	ABP_AnimalRaceBase_C_CountDownFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Add Push Count
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_padSwitch>      ButtonType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::Add_Push_Count(TEnumAsByte<EN_padSwitch> ButtonType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Add Push Count");

	ABP_AnimalRaceBase_C_Add_Push_Count_Params params;
	params.ButtonType = ButtonType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.count max
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::count_max()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.count max");

	ABP_AnimalRaceBase_C_count_max_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Input Update
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Input_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Input Update");

	ABP_AnimalRaceBase_C_Input_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Event_StopCountDown
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Event_StopCountDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Event_StopCountDown");

	ABP_AnimalRaceBase_C_Event_StopCountDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AnimalRaceBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ReceiveBeginPlay");

	ABP_AnimalRaceBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ReceiveTick");

	ABP_AnimalRaceBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AnimalRaceBase_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AnimalRaceBase_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__camera_move_collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AnimalRaceBase_C::BndEvt__camera_move_collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__camera_move_collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AnimalRaceBase_C_BndEvt__camera_move_collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall01_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AnimalRaceBase_C::BndEvt__wall01_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall01_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AnimalRaceBase_C_BndEvt__wall01_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall02_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AnimalRaceBase_C::BndEvt__wall02_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall02_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AnimalRaceBase_C_BndEvt__wall02_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall03_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AnimalRaceBase_C::BndEvt__wall03_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall03_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AnimalRaceBase_C_BndEvt__wall03_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall04_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AnimalRaceBase_C::BndEvt__wall04_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall04_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AnimalRaceBase_C_BndEvt__wall04_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall05_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AnimalRaceBase_C::BndEvt__wall05_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall05_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AnimalRaceBase_C_BndEvt__wall05_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall01_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::BndEvt__wall01_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall01_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature");

	ABP_AnimalRaceBase_C_BndEvt__wall01_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall02_K2Node_ComponentBoundEvent_12_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::BndEvt__wall02_K2Node_ComponentBoundEvent_12_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall02_K2Node_ComponentBoundEvent_12_ComponentEndOverlapSignature__DelegateSignature");

	ABP_AnimalRaceBase_C_BndEvt__wall02_K2Node_ComponentBoundEvent_12_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall03_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::BndEvt__wall03_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall03_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature");

	ABP_AnimalRaceBase_C_BndEvt__wall03_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall04_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::BndEvt__wall04_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall04_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature");

	ABP_AnimalRaceBase_C_BndEvt__wall04_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall05_K2Node_ComponentBoundEvent_16_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::BndEvt__wall05_K2Node_ComponentBoundEvent_16_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall05_K2Node_ComponentBoundEvent_16_ComponentEndOverlapSignature__DelegateSignature");

	ABP_AnimalRaceBase_C_BndEvt__wall05_K2Node_ComponentBoundEvent_16_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__support1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AnimalRaceBase_C::BndEvt__support1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__support1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AnimalRaceBase_C_BndEvt__support1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__support2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AnimalRaceBase_C::BndEvt__support2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__support2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AnimalRaceBase_C_BndEvt__support2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ResetSupport1
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::ResetSupport1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ResetSupport1");

	ABP_AnimalRaceBase_C_ResetSupport1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ResetSupport2
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::ResetSupport2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ResetSupport2");

	ABP_AnimalRaceBase_C_ResetSupport2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Game Start
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Game_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Game Start");

	ABP_AnimalRaceBase_C_Game_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Game End
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Game_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Game End");

	ABP_AnimalRaceBase_C_Game_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__camera_move_collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AnimalRaceBase_C::BndEvt__camera_move_collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__camera_move_collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_AnimalRaceBase_C_BndEvt__camera_move_collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Pre Game End
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Pre_Game_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Pre Game End");

	ABP_AnimalRaceBase_C_Pre_Game_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Set Animal Tick Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::Set_Animal_Tick_Enable(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Set Animal Tick Enable");

	ABP_AnimalRaceBase_C_Set_Animal_Tick_Enable_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Event_EndMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Event_EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Event_EndMiniGame");

	ABP_AnimalRaceBase_C_Event_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Event_ChearAnimal
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Event_ChearAnimal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Event_ChearAnimal");

	ABP_AnimalRaceBase_C_Event_ChearAnimal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Event_EndCheer
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::Event_EndCheer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Event_EndCheer");

	ABP_AnimalRaceBase_C_Event_EndCheer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ConsumeGamblePrice
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimalRaceBase_C::ConsumeGamblePrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ConsumeGamblePrice");

	ABP_AnimalRaceBase_C_ConsumeGamblePrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ExecuteUbergraph_BP_AnimalRaceBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalRaceBase_C::ExecuteUbergraph_BP_AnimalRaceBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ExecuteUbergraph_BP_AnimalRaceBase");

	ABP_AnimalRaceBase_C_ExecuteUbergraph_BP_AnimalRaceBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
