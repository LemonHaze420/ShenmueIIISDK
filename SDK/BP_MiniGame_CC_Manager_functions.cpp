
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

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetPlayerMotionSpeed
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::STATIC_SetPlayerMotionSpeed(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetPlayerMotionSpeed");

	ABP_MiniGame_CC_Manager_C_SetPlayerMotionSpeed_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetRewardUnitPrice
// (NetReliable, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_MiniGame_CC_Manager_C::STATIC_GetRewardUnitPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetRewardUnitPrice");

	ABP_MiniGame_CC_Manager_C_GetRewardUnitPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetClothMeshComponent
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_MiniGame_CC_Manager_C::GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetClothMeshComponent");

	ABP_MiniGame_CC_Manager_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InitAsyncLoad
// (Net, NetRequest, Exec, Native, Static, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::STATIC_InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InitAsyncLoad");

	ABP_MiniGame_CC_Manager_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.IsFirstPlayDuck
// (NetReliable, Exec, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, Const)
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
// (Event, NetMulticast, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
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
// (NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void ABP_MiniGame_CC_Manager_C::GetMiniGameHelpName(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetMiniGameHelpName");

	ABP_MiniGame_CC_Manager_C_GetMiniGameHelpName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetQTEButtonIndex
// (Net, NetReliable, Exec, Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::STATIC_GetQTEButtonIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetQTEButtonIndex");

	ABP_MiniGame_CC_Manager_C_GetQTEButtonIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.EnableChickenFromPlayer
// (NetReliable, NetRequest, Exec, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintPure)

void ABP_MiniGame_CC_Manager_C::STATIC_EnableChickenFromPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.EnableChickenFromPlayer");

	ABP_MiniGame_CC_Manager_C_EnableChickenFromPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetSafeAngle
// (Exec, Native, NetMulticast, Private, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                newParam                       (Parm, OutParm, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::GetSafeAngle(struct FRotator* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetSafeAngle");

	ABP_MiniGame_CC_Manager_C_GetSafeAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetSequenceRate
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Manager_C::STATIC_SetSequenceRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetSequenceRate");

	ABP_MiniGame_CC_Manager_C_SetSequenceRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SpawnSequenceActor
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*          InSequence                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  AttachParentActor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachSocketName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_SpawnableSequenceActor_C* SpawnObj                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::STATIC_SpawnSequenceActor(class ULevelSequence* InSequence, class AActor* AttachParentActor, const struct FName& AttachSocketName, class ABP_SpawnableSequenceActor_C** SpawnObj)
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
// (NetReliable, NetRequest, Exec, Event, Static, Protected, NetClient, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Manager_C::STATIC_PauseGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.PauseGame");

	ABP_MiniGame_CC_Manager_C_PauseGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.UpdateProgressTime
// (NetRequest, NetMulticast, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
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
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Manager_C::ForceEndSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ForceEndSequence");

	ABP_MiniGame_CC_Manager_C_ForceEndSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetQTEWaitTime
// (Net, NetReliable, NetMulticast, Private, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_CC_Manager_C::SetQTEWaitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetQTEWaitTime");

	ABP_MiniGame_CC_Manager_C_SetQTEWaitTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InitializeValue
// (Net, NetRequest, Event, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Manager_C::InitializeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InitializeValue");

	ABP_MiniGame_CC_Manager_C_InitializeValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.UpdateQte
// (Native, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::STATIC_UpdateQte(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.UpdateQte");

	ABP_MiniGame_CC_Manager_C_UpdateQte_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ActivateCatch
// (NetReliable, Native, NetResponse, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ABP_MiniGame_CC_Chicken_C* CCPawn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanPlay                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::STATIC_ActivateCatch(class ABP_MiniGame_CC_Chicken_C* CCPawn, bool* CanPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ActivateCatch");

	ABP_MiniGame_CC_Manager_C_ActivateCatch_Params params;
	params.CCPawn = CCPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPlay != nullptr)
		*CanPlay = params.CanPlay;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SpawnPlayer
// (NetReliable, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Manager_C::STATIC_SpawnPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SpawnPlayer");

	ABP_MiniGame_CC_Manager_C_SpawnPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.CheckEndGame
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Public, Protected, NetServer, DLLImport, Const)
// Parameters:
// bool                           End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::CheckEndGame(bool* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.CheckEndGame");

	ABP_MiniGame_CC_Manager_C_CheckEndGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (End != nullptr)
		*End = params.End;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SpawnInputControlActor
// (NetRequest, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)
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
// (Net, Static, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintPure)

void ABP_MiniGame_CC_Manager_C::STATIC_SpawnChicken()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SpawnChicken");

	ABP_MiniGame_CC_Manager_C_SpawnChicken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.PlaySequence
// (Net, NetReliable, Static, MulticastDelegate, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ABP_MiniGame_CC_Chicken_C* CCPawn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanPlay                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::STATIC_PlaySequence(class ABP_MiniGame_CC_Chicken_C* CCPawn, bool* CanPlay)
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
// (NetRequest, Event, NetResponse, Static, NetMulticast, Private, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Manager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.UserConstructionScript");

	ABP_MiniGame_CC_Manager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.StartMiniGame
// (Net, NetReliable, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Manager_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.StartMiniGame");

	ABP_MiniGame_CC_Manager_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.EndMiniGame
// (NetRequest, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Manager_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.EndMiniGame");

	ABP_MiniGame_CC_Manager_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnFinishedFade
// (Net, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Manager_C::STATIC_OnFinishedFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnFinishedFade");

	ABP_MiniGame_CC_Manager_C_OnFinishedFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.WinMiniGame
// (NetRequest, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Manager_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.WinMiniGame");

	ABP_MiniGame_CC_Manager_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.LoseMiniGame
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Manager_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.LoseMiniGame");

	ABP_MiniGame_CC_Manager_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.DrawMiniGame
// (Net, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Manager_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.DrawMiniGame");

	ABP_MiniGame_CC_Manager_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.FinalizeTalk
// (Net, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Manager_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.FinalizeTalk");

	ABP_MiniGame_CC_Manager_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_StartMiniGame
// (Net, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Manager_C::STATIC_Event_StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_StartMiniGame");

	ABP_MiniGame_CC_Manager_C_Event_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_EndResult
// (Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Manager_C::STATIC_Event_EndResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_EndResult");

	ABP_MiniGame_CC_Manager_C_Event_EndResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ClothesChangedCC
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::STATIC_ClothesChangedCC(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ClothesChangedCC");

	ABP_MiniGame_CC_Manager_C_ClothesChangedCC_Params params;
	params.Interface = Interface;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ReceiveBeginPlay
// (NetReliable, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Manager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ReceiveBeginPlay");

	ABP_MiniGame_CC_Manager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ReceiveTick
// (NetReliable, Native, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ReceiveTick");

	ABP_MiniGame_CC_Manager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_InputStart
// (Net, NetReliable, NetRequest, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Manager_C::STATIC_Event_InputStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_InputStart");

	ABP_MiniGame_CC_Manager_C_Event_InputStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_InputEnd
// (Net, NetReliable, NetRequest, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Manager_C::STATIC_Event_InputEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_InputEnd");

	ABP_MiniGame_CC_Manager_C_Event_InputEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.BindFinishSequence
// (NetReliable, NetRequest, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Manager_C::STATIC_BindFinishSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.BindFinishSequence");

	ABP_MiniGame_CC_Manager_C_BindFinishSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputQTE
// (Net, Native, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Input                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_CC_Manager_C::STATIC_InputQTE(const struct FKey& Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputQTE");

	ABP_MiniGame_CC_Manager_C_InputQTE_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerMoveForward
// (Net, Native, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::STATIC_InputPlayerMoveForward(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerMoveForward");

	ABP_MiniGame_CC_Manager_C_InputPlayerMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerMoveRight
// (Native, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::STATIC_InputPlayerMoveRight(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerMoveRight");

	ABP_MiniGame_CC_Manager_C_InputPlayerMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerRunPressed
// (NetRequest, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Manager_C::STATIC_InputPlayerRunPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerRunPressed");

	ABP_MiniGame_CC_Manager_C_InputPlayerRunPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerRunReleased
// (NetRequest, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Manager_C::STATIC_InputPlayerRunReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerRunReleased");

	ABP_MiniGame_CC_Manager_C_InputPlayerRunReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputCameraRight
// (Net, NetReliable, NetRequest, Exec, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::STATIC_InputCameraRight(float Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputCameraRight");

	ABP_MiniGame_CC_Manager_C_InputCameraRight_Params params;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ChangeLocoState
// (Net, NetReliable, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Manager_C::STATIC_ChangeLocoState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ChangeLocoState");

	ABP_MiniGame_CC_Manager_C_ChangeLocoState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.EndSequence
// (NetReliable, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Manager_C::STATIC_EndSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.EndSequence");

	ABP_MiniGame_CC_Manager_C_EndSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ExecuteMiniGameResultEvent
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<E_MiniGameResult>  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::STATIC_ExecuteMiniGameResultEvent(TEnumAsByte<E_MiniGameResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ExecuteMiniGameResultEvent");

	ABP_MiniGame_CC_Manager_C_ExecuteMiniGameResultEvent_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnFinishedEvent_Sequence
// (NetReliable, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Manager_C::STATIC_OnFinishedEvent_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnFinishedEvent_Sequence");

	ABP_MiniGame_CC_Manager_C_OnFinishedEvent_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
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
// (Exec, Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::STATIC_BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_CC_Manager_C_BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ReceiveEndPlay
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ReceiveEndPlay");

	ABP_MiniGame_CC_Manager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.DestroyChicken
// (Net, Exec, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Manager_C::STATIC_DestroyChicken()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.DestroyChicken");

	ABP_MiniGame_CC_Manager_C_DestroyChicken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ChangeGameTimeEvent
// (Net, NetReliable, Native, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::STATIC_ChangeGameTimeEvent(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ChangeGameTimeEvent");

	ABP_MiniGame_CC_Manager_C_ChangeGameTimeEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.CancelMiniGame
// (NetReliable, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Manager_C::CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.CancelMiniGame");

	ABP_MiniGame_CC_Manager_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_EndMiniGame
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Manager_C::Event_EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_EndMiniGame");

	ABP_MiniGame_CC_Manager_C_Event_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnBeginOverlapWallCollision
// (Net, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnEndOverlapWallCollision
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, NetServer, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Manager_C::STATIC_OnEndOverlapWallCollision(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnEndOverlapWallCollision");

	ABP_MiniGame_CC_Manager_C_OnEndOverlapWallCollision_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ExecuteUbergraph_BP_MiniGame_CC_Manager
// (NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
