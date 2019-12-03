
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

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.CreateIconMaterial
// (Net, NetReliable, Event, NetResponse, Static, Private, Protected, HasOutParms, Const)
// Parameters:
// class UMaterialBillboardComponent* Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTexture*                Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::STATIC_CreateIconMaterial(class UMaterialBillboardComponent* Component, class UTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.CreateIconMaterial");

	ABP_Minigame_QTETitle_C_CreateIconMaterial_Params params;
	params.Component = Component;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GetTimeOutValue
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_Minigame_QTETitle_C::STATIC_GetTimeOutValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GetTimeOutValue");

	ABP_Minigame_QTETitle_C_GetTimeOutValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.InitializePadTrans
// (Net, NetRequest, Native, Event, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_Minigame_QTETitle_C::STATIC_InitializePadTrans()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.InitializePadTrans");

	ABP_Minigame_QTETitle_C_InitializePadTrans_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SetTime
// (Exec, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::SetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SetTime");

	ABP_Minigame_QTETitle_C_SetTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GetLevelSequence
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, Public, Protected, NetServer, DLLImport, Const)
// Parameters:
// TEnumAsByte<EQTETitleSequence> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          Sequence                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::GetLevelSequence(TEnumAsByte<EQTETitleSequence> Type, class ULevelSequence** Sequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GetLevelSequence");

	ABP_Minigame_QTETitle_C_GetLevelSequence_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sequence != nullptr)
		*Sequence = params.Sequence;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.InitAsyncLoad
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::STATIC_InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.InitAsyncLoad");

	ABP_Minigame_QTETitle_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.InitButtonIcon
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_InitButtonIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.InitButtonIcon");

	ABP_Minigame_QTETitle_C_InitButtonIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ResetScore
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    ChildComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Minigame_QTETitle_C::STATIC_ResetScore(class UChildActorComponent* ChildComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ResetScore");

	ABP_Minigame_QTETitle_C_ResetScore_Params params;
	params.ChildComponent = ChildComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SetScoreNum
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    ChildActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsStage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::STATIC_SetScoreNum(class UChildActorComponent* ChildActor, int Number, bool IsStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SetScoreNum");

	ABP_Minigame_QTETitle_C_SetScoreNum_Params params;
	params.ChildActor = ChildActor;
	params.Number = Number;
	params.IsStage = IsStage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SetEnabledScore
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::SetEnabledScore(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SetEnabledScore");

	ABP_Minigame_QTETitle_C_SetEnabledScore_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.AllDestroySequenceActors
// (Net, NetRequest, Exec, Event, Static, NetMulticast, Private, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_AllDestroySequenceActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.AllDestroySequenceActors");

	ABP_Minigame_QTETitle_C_AllDestroySequenceActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SpawnSequenceActor
// (Net, NetReliable, Event, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*          InSequence                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  AttachParentActor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachSocketName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_SpawnableSequenceActor_C* SpawnObj                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::SpawnSequenceActor(class ULevelSequence* InSequence, class AActor* AttachParentActor, const struct FName& AttachSocketName, class ABP_SpawnableSequenceActor_C** SpawnObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SpawnSequenceActor");

	ABP_Minigame_QTETitle_C_SpawnSequenceActor_Params params;
	params.InSequence = InSequence;
	params.AttachParentActor = AttachParentActor;
	params.AttachSocketName = AttachSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnObj != nullptr)
		*SpawnObj = params.SpawnObj;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.DebugDispLog
// (Net, NetReliable, Exec, Event, Public, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_Minigame_QTETitle_C::DebugDispLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.DebugDispLog");

	ABP_Minigame_QTETitle_C_DebugDispLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.DebugAutoPlay
// (Net, NetReliable, Static, MulticastDelegate, Private, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_DebugAutoPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.DebugAutoPlay");

	ABP_Minigame_QTETitle_C_DebugAutoPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Load
// (Net, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Protected, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::Load()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Load");

	ABP_Minigame_QTETitle_C_Load_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Save
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, Const)

void ABP_Minigame_QTETitle_C::STATIC_Save()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Save");

	ABP_Minigame_QTETitle_C_Save_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ItemGetCheck
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            item_count1                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::STATIC_ItemGetCheck(int* item_count1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ItemGetCheck");

	ABP_Minigame_QTETitle_C_ItemGetCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (item_count1 != nullptr)
		*item_count1 = params.item_count1;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.FeintCommandCheck
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FQTECommandStruct       Param                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           is_feint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::STATIC_FeintCommandCheck(const struct FQTECommandStruct& Param, bool* is_feint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.FeintCommandCheck");

	ABP_Minigame_QTETitle_C_FeintCommandCheck_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (is_feint != nullptr)
		*is_feint = params.is_feint;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.AddRightCommand
// (NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Minigame_QTETitle_C::STATIC_AddRightCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.AddRightCommand");

	ABP_Minigame_QTETitle_C_AddRightCommand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.AddMiddleCommand
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Minigame_QTETitle_C::STATIC_AddMiddleCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.AddMiddleCommand");

	ABP_Minigame_QTETitle_C_AddMiddleCommand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.AddLeftCommand
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Minigame_QTETitle_C::STATIC_AddLeftCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.AddLeftCommand");

	ABP_Minigame_QTETitle_C_AddLeftCommand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.RefreshScores
// (Native, Event, Static, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AWBP_QT2_Score2_C*       Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UChildActorComponent*    ChildComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Minigame_QTETitle_C::STATIC_RefreshScores(class AWBP_QT2_Score2_C* Score, class UChildActorComponent* ChildComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.RefreshScores");

	ABP_Minigame_QTETitle_C_RefreshScores_Params params;
	params.Score = Score;
	params.ChildComponent = ChildComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.QTETitleFadeIn
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Minigame_QTETitle_C::STATIC_QTETitleFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.QTETitleFadeIn");

	ABP_Minigame_QTETitle_C_QTETitleFadeIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SetPlayRate
// (Net, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Buttons                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequencePlayer*    SequencerRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::STATIC_SetPlayRate(int Buttons, class ULevelSequencePlayer* SequencerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SetPlayRate");

	ABP_Minigame_QTETitle_C_SetPlayRate_Params params;
	params.Buttons = Buttons;
	params.SequencerRef = SequencerRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.InitializeBoxingSequencers
// (NetReliable, Event, Static, MulticastDelegate, Private, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_InitializeBoxingSequencers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.InitializeBoxingSequencers");

	ABP_Minigame_QTETitle_C_InitializeBoxingSequencers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PickUpRandomBoxingSequencer
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class ABP_SpawnableSequenceActor_C*> InputSequencerArray            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ABP_SpawnableSequenceActor_C* OutputSequencer                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::STATIC_PickUpRandomBoxingSequencer(TArray<class ABP_SpawnableSequenceActor_C*>* InputSequencerArray, class ABP_SpawnableSequenceActor_C** OutputSequencer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PickUpRandomBoxingSequencer");

	ABP_Minigame_QTETitle_C_PickUpRandomBoxingSequencer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputSequencerArray != nullptr)
		*InputSequencerArray = params.InputSequencerArray;
	if (OutputSequencer != nullptr)
		*OutputSequencer = params.OutputSequencer;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ResetButtonUnPushed
// (NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::ResetButtonUnPushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ResetButtonUnPushed");

	ABP_Minigame_QTETitle_C_ResetButtonUnPushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LoseCheck
// (Net, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            LifeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LostGame                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::STATIC_LoseCheck(int LifeLeft, bool* LostGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LoseCheck");

	ABP_Minigame_QTETitle_C_LoseCheck_Params params;
	params.LifeLeft = LifeLeft;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LostGame != nullptr)
		*LostGame = params.LostGame;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.HideAllIcons
// (NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::HideAllIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.HideAllIcons");

	ABP_Minigame_QTETitle_C_HideAllIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ToggleIconRight
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::STATIC_ToggleIconRight(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ToggleIconRight");

	ABP_Minigame_QTETitle_C_ToggleIconRight_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ToggleIconMiddle
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::ToggleIconMiddle(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ToggleIconMiddle");

	ABP_Minigame_QTETitle_C_ToggleIconMiddle_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ToggleIconLeft
// (Exec, Event, NetResponse, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::STATIC_ToggleIconLeft(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ToggleIconLeft");

	ABP_Minigame_QTETitle_C_ToggleIconLeft_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.TransferNameToEnum
// (Net, NetReliable, NetMulticast, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// Enum_QTETitleCommand           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::TransferNameToEnum(const struct FName& InputName, Enum_QTETitleCommand* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.TransferNameToEnum");

	ABP_Minigame_QTETitle_C_TransferNameToEnum_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SpawnInputControlActor
// (Net, NetReliable, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_Minigame_QTETitle_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SpawnInputControlActor");

	ABP_Minigame_QTETitle_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.UserConstructionScript
// (NetReliable, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.UserConstructionScript");

	ABP_Minigame_QTETitle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadLeftTimeline__FinishedFunc
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MovingPadLeftTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadLeftTimeline__FinishedFunc");

	ABP_Minigame_QTETitle_C_MovingPadLeftTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadLeftTimeline__UpdateFunc
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MovingPadLeftTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadLeftTimeline__UpdateFunc");

	ABP_Minigame_QTETitle_C_MovingPadLeftTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadLeftTimeline__SE_Timing__EventFunc
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MovingPadLeftTimeline__SE_Timing__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadLeftTimeline__SE_Timing__EventFunc");

	ABP_Minigame_QTETitle_C_MovingPadLeftTimeline__SE_Timing__EventFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadLeftTimeline__Feint_Finish__EventFunc
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MovingPadLeftTimeline__Feint_Finish__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadLeftTimeline__Feint_Finish__EventFunc");

	ABP_Minigame_QTETitle_C_MovingPadLeftTimeline__Feint_Finish__EventFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadLeftTimeline__ShowIcon__EventFunc
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MovingPadLeftTimeline__ShowIcon__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadLeftTimeline__ShowIcon__EventFunc");

	ABP_Minigame_QTETitle_C_MovingPadLeftTimeline__ShowIcon__EventFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadMiddleTimeline__FinishedFunc
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MovingPadMiddleTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadMiddleTimeline__FinishedFunc");

	ABP_Minigame_QTETitle_C_MovingPadMiddleTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadMiddleTimeline__UpdateFunc
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MovingPadMiddleTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadMiddleTimeline__UpdateFunc");

	ABP_Minigame_QTETitle_C_MovingPadMiddleTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadMiddleTimeline__SE_Timing__EventFunc
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MovingPadMiddleTimeline__SE_Timing__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadMiddleTimeline__SE_Timing__EventFunc");

	ABP_Minigame_QTETitle_C_MovingPadMiddleTimeline__SE_Timing__EventFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadMiddleTimeline__Feint_Finish__EventFunc
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MovingPadMiddleTimeline__Feint_Finish__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadMiddleTimeline__Feint_Finish__EventFunc");

	ABP_Minigame_QTETitle_C_MovingPadMiddleTimeline__Feint_Finish__EventFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadMiddleTimeline__ShowIcon__EventFunc
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MovingPadMiddleTimeline__ShowIcon__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadMiddleTimeline__ShowIcon__EventFunc");

	ABP_Minigame_QTETitle_C_MovingPadMiddleTimeline__ShowIcon__EventFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadRightTimeline__FinishedFunc
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MovingPadRightTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadRightTimeline__FinishedFunc");

	ABP_Minigame_QTETitle_C_MovingPadRightTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadRightTimeline__UpdateFunc
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MovingPadRightTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadRightTimeline__UpdateFunc");

	ABP_Minigame_QTETitle_C_MovingPadRightTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadRightTimeline__SE_Timing__EventFunc
// (Net, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MovingPadRightTimeline__SE_Timing__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadRightTimeline__SE_Timing__EventFunc");

	ABP_Minigame_QTETitle_C_MovingPadRightTimeline__SE_Timing__EventFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadRightTimeline__Feint_Finish__EventFunc
// (Net, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MovingPadRightTimeline__Feint_Finish__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadRightTimeline__Feint_Finish__EventFunc");

	ABP_Minigame_QTETitle_C_MovingPadRightTimeline__Feint_Finish__EventFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadRightTimeline__ShowIcon__EventFunc
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MovingPadRightTimeline__ShowIcon__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadRightTimeline__ShowIcon__EventFunc");

	ABP_Minigame_QTETitle_C_MovingPadRightTimeline__ShowIcon__EventFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.򠪦􆖐񍳔_
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC__UnknownFunc01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.򠪦􆖐񍳔_");

	ABP_Minigame_QTETitle_C__UnknownFunc01__Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ScoreFlashTimeline__FinishedFunc
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_ScoreFlashTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ScoreFlashTimeline__FinishedFunc");

	ABP_Minigame_QTETitle_C_ScoreFlashTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ScoreFlashTimeline__UpdateFunc
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_ScoreFlashTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ScoreFlashTimeline__UpdateFunc");

	ABP_Minigame_QTETitle_C_ScoreFlashTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ScoreFlashTimeline__test2__EventFunc
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_ScoreFlashTimeline__test2__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ScoreFlashTimeline__test2__EventFunc");

	ABP_Minigame_QTETitle_C_ScoreFlashTimeline__test2__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ScoreFlashTimeline__test__EventFunc
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_ScoreFlashTimeline__test__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ScoreFlashTimeline__test__EventFunc");

	ABP_Minigame_QTETitle_C_ScoreFlashTimeline__test__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ReceiveBeginPlay
// (NetRequest, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Minigame_QTETitle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ReceiveBeginPlay");

	ABP_Minigame_QTETitle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ReceiveActorBeginOverlap
// (Net, NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ReceiveActorBeginOverlap");

	ABP_Minigame_QTETitle_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ReceiveTick
// (Net, Exec, Native, Event, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ReceiveTick");

	ABP_Minigame_QTETitle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.StartMiniGame
// (NetReliable, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Minigame_QTETitle_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.StartMiniGame");

	ABP_Minigame_QTETitle_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PlayIntro
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_PlayIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PlayIntro");

	ABP_Minigame_QTETitle_C_PlayIntro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GameStart
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_GameStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GameStart");

	ABP_Minigame_QTETitle_C_GameStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GetCommand
// (Net, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_GetCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GetCommand");

	ABP_Minigame_QTETitle_C_GetCommand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LeftPunchPushed
// (Net, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_LeftPunchPushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LeftPunchPushed");

	ABP_Minigame_QTETitle_C_LeftPunchPushed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MiddlePunchPushed
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MiddlePunchPushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MiddlePunchPushed");

	ABP_Minigame_QTETitle_C_MiddlePunchPushed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.RightPunchPushed
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_RightPunchPushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.RightPunchPushed");

	ABP_Minigame_QTETitle_C_RightPunchPushed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.StartPlayList
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_StartPlayList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.StartPlayList");

	ABP_Minigame_QTETitle_C_StartPlayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ContinuePlayList
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_ContinuePlayList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ContinuePlayList");

	ABP_Minigame_QTETitle_C_ContinuePlayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.EndMiniGame
// (Exec, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Minigame_QTETitle_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.EndMiniGame");

	ABP_Minigame_QTETitle_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.onFinishScreenFadeOut_Event_1
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_onFinishScreenFadeOut_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.onFinishScreenFadeOut_Event_1");

	ABP_Minigame_QTETitle_C_onFinishScreenFadeOut_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.TimeOutCheck
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_TimeOutCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.TimeOutCheck");

	ABP_Minigame_QTETitle_C_TimeOutCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.WinMiniGame
// (Exec, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Minigame_QTETitle_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.WinMiniGame");

	ABP_Minigame_QTETitle_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.RightButtonPushed
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_RightButtonPushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.RightButtonPushed");

	ABP_Minigame_QTETitle_C_RightButtonPushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.RightButtonReleased
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_RightButtonReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.RightButtonReleased");

	ABP_Minigame_QTETitle_C_RightButtonReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MiddleButtonPushed
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MiddleButtonPushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MiddleButtonPushed");

	ABP_Minigame_QTETitle_C_MiddleButtonPushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MiddleButtonReleased
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_MiddleButtonReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MiddleButtonReleased");

	ABP_Minigame_QTETitle_C_MiddleButtonReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LeftButtonPushed
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_LeftButtonPushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LeftButtonPushed");

	ABP_Minigame_QTETitle_C_LeftButtonPushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LeftButtonReleased
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_LeftButtonReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LeftButtonReleased");

	ABP_Minigame_QTETitle_C_LeftButtonReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.FaceButtonRPushed
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_FaceButtonRPushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.FaceButtonRPushed");

	ABP_Minigame_QTETitle_C_FaceButtonRPushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.FaceButtonMPushed
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_FaceButtonMPushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.FaceButtonMPushed");

	ABP_Minigame_QTETitle_C_FaceButtonMPushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.FaceButtonLPushed
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_FaceButtonLPushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.FaceButtonLPushed");

	ABP_Minigame_QTETitle_C_FaceButtonLPushed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ShowMovingPadLeft
// (Native, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bHide                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::ShowMovingPadLeft(bool bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ShowMovingPadLeft");

	ABP_Minigame_QTETitle_C_ShowMovingPadLeft_Params params;
	params.bHide = bHide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadLeftBack
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_PadLeftBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadLeftBack");

	ABP_Minigame_QTETitle_C_PadLeftBack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ReversePads
// (Net, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_ReversePads()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ReversePads");

	ABP_Minigame_QTETitle_C_ReversePads_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ShowMovingPadMiddle
// (Net, NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bHide                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::ShowMovingPadMiddle(bool bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ShowMovingPadMiddle");

	ABP_Minigame_QTETitle_C_ShowMovingPadMiddle_Params params;
	params.bHide = bHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadMiddleBack
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_PadMiddleBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadMiddleBack");

	ABP_Minigame_QTETitle_C_PadMiddleBack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ShowMovingPadRight
// (Net, NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bHide                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::ShowMovingPadRight(bool bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ShowMovingPadRight");

	ABP_Minigame_QTETitle_C_ShowMovingPadRight_Params params;
	params.bHide = bHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadRightBack
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_PadRightBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadRightBack");

	ABP_Minigame_QTETitle_C_PadRightBack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PunchSucceed
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_PunchSucceed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PunchSucceed");

	ABP_Minigame_QTETitle_C_PunchSucceed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LoseMiniGame
// (NetReliable, NetRequest, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Minigame_QTETitle_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LoseMiniGame");

	ABP_Minigame_QTETitle_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadRightFlash
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_PadRightFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadRightFlash");

	ABP_Minigame_QTETitle_C_PadRightFlash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadMiddleFlash
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_PadMiddleFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadMiddleFlash");

	ABP_Minigame_QTETitle_C_PadMiddleFlash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadLeftFlash
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_PadLeftFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadLeftFlash");

	ABP_Minigame_QTETitle_C_PadLeftFlash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Light Flash
// (NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           PlayLumpOffSE                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::Light_Flash(bool PlayLumpOffSE)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Light Flash");

	ABP_Minigame_QTETitle_C_Light_Flash_Params params;
	params.PlayLumpOffSE = PlayLumpOffSE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LifeDownSequence
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_LifeDownSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LifeDownSequence");

	ABP_Minigame_QTETitle_C_LifeDownSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ScoreFlash
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_ScoreFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ScoreFlash");

	ABP_Minigame_QTETitle_C_ScoreFlash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GameClearSequence
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_GameClearSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GameClearSequence");

	ABP_Minigame_QTETitle_C_GameClearSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Play UseCoin
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_Play_UseCoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Play UseCoin");

	ABP_Minigame_QTETitle_C_Play_UseCoin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Initialize
// (Net, NetReliable, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Initialize");

	ABP_Minigame_QTETitle_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.RestartMiniGame
// (Net, NetRequest, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Minigame_QTETitle_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.RestartMiniGame");

	ABP_Minigame_QTETitle_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
// (Net, NetReliable, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature");

	ABP_Minigame_QTETitle_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
// (NetReliable, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature");

	ABP_Minigame_QTETitle_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ResumeMiniGame
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_Minigame_QTETitle_C::STATIC_ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ResumeMiniGame");

	ABP_Minigame_QTETitle_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.OnTalkScriptEvent
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::STATIC_OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.OnTalkScriptEvent");

	ABP_Minigame_QTETitle_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.One Play End
// (NetReliable, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::One_Play_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.One Play End");

	ABP_Minigame_QTETitle_C_One_Play_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PunchFlashStop
// (Net, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::PunchFlashStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PunchFlashStop");

	ABP_Minigame_QTETitle_C_PunchFlashStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.OnEndKihudaFlow
// (Net, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::OnEndKihudaFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.OnEndKihudaFlow");

	ABP_Minigame_QTETitle_C_OnEndKihudaFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.UseCoinFinished
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::UseCoinFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.UseCoinFinished");

	ABP_Minigame_QTETitle_C_UseCoinFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.CancelMiniGame
// (NetReliable, NetRequest, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Minigame_QTETitle_C::CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.CancelMiniGame");

	ABP_Minigame_QTETitle_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.OnFinishedFadeEndGame
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::OnFinishedFadeEndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.OnFinishedFadeEndGame");

	ABP_Minigame_QTETitle_C_OnFinishedFadeEndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.OnIntroFinished
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_OnIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.OnIntroFinished");

	ABP_Minigame_QTETitle_C_OnIntroFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.EventUseCoinUnBind
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_EventUseCoinUnBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.EventUseCoinUnBind");

	ABP_Minigame_QTETitle_C_EventUseCoinUnBind_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LifeDownFinished_Miss
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_LifeDownFinished_Miss()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LifeDownFinished_Miss");

	ABP_Minigame_QTETitle_C_LifeDownFinished_Miss_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GameClearFinished_2
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_GameClearFinished_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GameClearFinished_2");

	ABP_Minigame_QTETitle_C_GameClearFinished_2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.OnFinished_Event_00
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_OnFinished_Event_00()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.OnFinished_Event_00");

	ABP_Minigame_QTETitle_C_OnFinished_Event_00_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadRightStopFlash
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_PadRightStopFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadRightStopFlash");

	ABP_Minigame_QTETitle_C_PadRightStopFlash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadMiddleStopFlash
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_PadMiddleStopFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadMiddleStopFlash");

	ABP_Minigame_QTETitle_C_PadMiddleStopFlash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadLeftStopFlash
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::STATIC_PadLeftStopFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadLeftStopFlash");

	ABP_Minigame_QTETitle_C_PadLeftStopFlash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Event_ExecuteResult
// (NetRequest, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Minigame_QTETitle_C::Event_ExecuteResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Event_ExecuteResult");

	ABP_Minigame_QTETitle_C_Event_ExecuteResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Event_EndMiniGame
// (Net, NetRequest, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Minigame_QTETitle_C::Event_EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Event_EndMiniGame");

	ABP_Minigame_QTETitle_C_Event_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ExecuteUbergraph_BP_Minigame_QTETitle
// (Public, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minigame_QTETitle_C::ExecuteUbergraph_BP_Minigame_QTETitle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ExecuteUbergraph_BP_Minigame_QTETitle");

	ABP_Minigame_QTETitle_C_ExecuteUbergraph_BP_Minigame_QTETitle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
