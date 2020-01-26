
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

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetPlayerMotionSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::SetPlayerMotionSpeed(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetPlayerMotionSpeed");

	ABP_MiniGame_CC_Manager_C_SetPlayerMotionSpeed_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetRewardUnitPrice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_MiniGame_CC_Manager_C::GetRewardUnitPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetRewardUnitPrice");

	ABP_MiniGame_CC_Manager_C_GetRewardUnitPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetClothMeshComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_MiniGame_CC_Manager_C::GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetClothMeshComponent");

	ABP_MiniGame_CC_Manager_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InitAsyncLoad
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InitAsyncLoad");

	ABP_MiniGame_CC_Manager_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.IsFirstPlayDuck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGame_CC_Manager_C::IsFirstPlayDuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.IsFirstPlayDuck");

	ABP_MiniGame_CC_Manager_C_IsFirstPlayDuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetNPCVisibleOnDuck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::SetNPCVisibleOnDuck(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetNPCVisibleOnDuck");

	ABP_MiniGame_CC_Manager_C_SetNPCVisibleOnDuck_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetMiniGameHelpName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void ABP_MiniGame_CC_Manager_C::GetMiniGameHelpName(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetMiniGameHelpName");

	ABP_MiniGame_CC_Manager_C_GetMiniGameHelpName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetQTEButtonIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::GetQTEButtonIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetQTEButtonIndex");

	ABP_MiniGame_CC_Manager_C_GetQTEButtonIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.EnableChickenFromPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::EnableChickenFromPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.EnableChickenFromPlayer");

	ABP_MiniGame_CC_Manager_C_EnableChickenFromPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetSafeAngle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                newParam                       (Parm, OutParm, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::GetSafeAngle(struct FRotator* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetSafeAngle");

	ABP_MiniGame_CC_Manager_C_GetSafeAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetSequenceRate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::SetSequenceRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetSequenceRate");

	ABP_MiniGame_CC_Manager_C_SetSequenceRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SpawnSequenceActor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*          InSequence                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  AttachParentActor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachSocketName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_SpawnableSequenceActor_C* SpawnObj                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::SpawnSequenceActor(class ULevelSequence* InSequence, class AActor* AttachParentActor, const struct FName& AttachSocketName, class ABP_SpawnableSequenceActor_C** SpawnObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SpawnSequenceActor");

	ABP_MiniGame_CC_Manager_C_SpawnSequenceActor_Params params;
	params.InSequence = InSequence;
	params.AttachParentActor = AttachParentActor;
	params.AttachSocketName = AttachSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnObj != nullptr)
		*SpawnObj = params.SpawnObj;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.PauseGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::PauseGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.PauseGame");

	ABP_MiniGame_CC_Manager_C_PauseGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.UpdateProgressTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::UpdateProgressTime(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.UpdateProgressTime");

	ABP_MiniGame_CC_Manager_C_UpdateProgressTime_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ForceEndSequence
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::ForceEndSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ForceEndSequence");

	ABP_MiniGame_CC_Manager_C_ForceEndSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetQTEWaitTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::SetQTEWaitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetQTEWaitTime");

	ABP_MiniGame_CC_Manager_C_SetQTEWaitTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InitializeValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::InitializeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InitializeValue");

	ABP_MiniGame_CC_Manager_C_InitializeValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.UpdateQte
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::UpdateQte(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.UpdateQte");

	ABP_MiniGame_CC_Manager_C_UpdateQte_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ActivateCatch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGame_CC_Chicken_C* CCPawn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanPlay                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::ActivateCatch(class ABP_MiniGame_CC_Chicken_C* CCPawn, bool* CanPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ActivateCatch");

	ABP_MiniGame_CC_Manager_C_ActivateCatch_Params params;
	params.CCPawn = CCPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPlay != nullptr)
		*CanPlay = params.CanPlay;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SpawnPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::SpawnPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SpawnPlayer");

	ABP_MiniGame_CC_Manager_C_SpawnPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.CheckEndGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::CheckEndGame(bool* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.CheckEndGame");

	ABP_MiniGame_CC_Manager_C_CheckEndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (End != nullptr)
		*End = params.End;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SpawnInputControlActor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGame_CC_Manager_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SpawnInputControlActor");

	ABP_MiniGame_CC_Manager_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SpawnChicken
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::SpawnChicken()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SpawnChicken");

	ABP_MiniGame_CC_Manager_C_SpawnChicken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.PlaySequence
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGame_CC_Chicken_C* CCPawn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanPlay                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::PlaySequence(class ABP_MiniGame_CC_Chicken_C* CCPawn, bool* CanPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.PlaySequence");

	ABP_MiniGame_CC_Manager_C_PlaySequence_Params params;
	params.CCPawn = CCPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPlay != nullptr)
		*CanPlay = params.CanPlay;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.UserConstructionScript");

	ABP_MiniGame_CC_Manager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.StartMiniGame");

	ABP_MiniGame_CC_Manager_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.EndMiniGame");

	ABP_MiniGame_CC_Manager_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnFinishedFade
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::OnFinishedFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnFinishedFade");

	ABP_MiniGame_CC_Manager_C_OnFinishedFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.WinMiniGame");

	ABP_MiniGame_CC_Manager_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.LoseMiniGame");

	ABP_MiniGame_CC_Manager_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.DrawMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.DrawMiniGame");

	ABP_MiniGame_CC_Manager_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.FinalizeTalk
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.FinalizeTalk");

	ABP_MiniGame_CC_Manager_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_StartMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::Event_StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_StartMiniGame");

	ABP_MiniGame_CC_Manager_C_Event_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_EndResult
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::Event_EndResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_EndResult");

	ABP_MiniGame_CC_Manager_C_Event_EndResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ClothesChangedCC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::ClothesChangedCC(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ClothesChangedCC");

	ABP_MiniGame_CC_Manager_C_ClothesChangedCC_Params params;
	params.Interface = Interface;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ReceiveBeginPlay");

	ABP_MiniGame_CC_Manager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ReceiveTick");

	ABP_MiniGame_CC_Manager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_InputStart
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::Event_InputStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_InputStart");

	ABP_MiniGame_CC_Manager_C_Event_InputStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_InputEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::Event_InputEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_InputEnd");

	ABP_MiniGame_CC_Manager_C_Event_InputEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.BindFinishSequence
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::BindFinishSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.BindFinishSequence");

	ABP_MiniGame_CC_Manager_C_BindFinishSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputQTE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Input                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_CC_Manager_C::InputQTE(const struct FKey& Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputQTE");

	ABP_MiniGame_CC_Manager_C_InputQTE_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerMoveForward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::InputPlayerMoveForward(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerMoveForward");

	ABP_MiniGame_CC_Manager_C_InputPlayerMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerMoveRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::InputPlayerMoveRight(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerMoveRight");

	ABP_MiniGame_CC_Manager_C_InputPlayerMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerRunPressed
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::InputPlayerRunPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerRunPressed");

	ABP_MiniGame_CC_Manager_C_InputPlayerRunPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerRunReleased
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::InputPlayerRunReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerRunReleased");

	ABP_MiniGame_CC_Manager_C_InputPlayerRunReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputCameraRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::InputCameraRight(float Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputCameraRight");

	ABP_MiniGame_CC_Manager_C_InputCameraRight_Params params;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ChangeLocoState
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::ChangeLocoState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ChangeLocoState");

	ABP_MiniGame_CC_Manager_C_ChangeLocoState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.EndSequence
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::EndSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.EndSequence");

	ABP_MiniGame_CC_Manager_C_EndSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ExecuteMiniGameResultEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGameResult>  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::ExecuteMiniGameResultEvent(TEnumAsByte<E_MiniGameResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ExecuteMiniGameResultEvent");

	ABP_MiniGame_CC_Manager_C_ExecuteMiniGameResultEvent_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnFinishedEvent_Sequence
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::OnFinishedEvent_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnFinishedEvent_Sequence");

	ABP_MiniGame_CC_Manager_C_OnFinishedEvent_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_CC_Manager_C_BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_CC_Manager_C_BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ReceiveEndPlay");

	ABP_MiniGame_CC_Manager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.DestroyChicken
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::DestroyChicken()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.DestroyChicken");

	ABP_MiniGame_CC_Manager_C_DestroyChicken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ChangeGameTimeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::ChangeGameTimeEvent(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ChangeGameTimeEvent");

	ABP_MiniGame_CC_Manager_C_ChangeGameTimeEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.CancelMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.CancelMiniGame");

	ABP_MiniGame_CC_Manager_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_EndMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Manager_C::Event_EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_EndMiniGame");

	ABP_MiniGame_CC_Manager_C_Event_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnBeginOverlapWallCollision
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::OnBeginOverlapWallCollision(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnBeginOverlapWallCollision");

	ABP_MiniGame_CC_Manager_C_OnBeginOverlapWallCollision_Params params;
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


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnEndOverlapWallCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::OnEndOverlapWallCollision(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnEndOverlapWallCollision");

	ABP_MiniGame_CC_Manager_C_OnEndOverlapWallCollision_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ExecuteUbergraph_BP_MiniGame_CC_Manager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::ExecuteUbergraph_BP_MiniGame_CC_Manager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ExecuteUbergraph_BP_MiniGame_CC_Manager");

	ABP_MiniGame_CC_Manager_C_ExecuteUbergraph_BP_MiniGame_CC_Manager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
