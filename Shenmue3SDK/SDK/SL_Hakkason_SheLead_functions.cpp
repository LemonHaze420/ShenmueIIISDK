
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

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ASL_Hakkason_SheLead_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.GetPriority");

	ASL_Hakkason_SheLead_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ASL_Hakkason_SheLead_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.GetDetectAction");

	ASL_Hakkason_SheLead_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.SpawnShenfa_Pos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANPC_SplineMoveActor_C*  SplineActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 she_pos                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          she_dir                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_SheLead_C::SpawnShenfa_Pos(class ANPC_SplineMoveActor_C* SplineActor, const struct FVector& she_pos, float she_dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.SpawnShenfa_Pos");

	ASL_Hakkason_SheLead_C_SpawnShenfa_Pos_Params params;
	params.SplineActor = SplineActor;
	params.she_pos = she_pos;
	params.she_dir = she_dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.SpawnShenfa
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FindTag                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ANPC_SplineMoveActor_C*  SplineActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_SheLead_C::SpawnShenfa(const struct FName& LevelName, const struct FName& FindTag, class ANPC_SplineMoveActor_C* SplineActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.SpawnShenfa");

	ASL_Hakkason_SheLead_C_SpawnShenfa_Params params;
	params.LevelName = LevelName;
	params.FindTag = FindTag;
	params.SplineActor = SplineActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.isPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isPlayer                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_SheLead_C::isPlayer(class AActor* Actor, bool* isPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.isPlayer");

	ASL_Hakkason_SheLead_C_isPlayer_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isPlayer != nullptr)
		*isPlayer = params.isPlayer;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_SheLead_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.ReceiveTick");

	ASL_Hakkason_SheLead_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASL_Hakkason_SheLead_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.ReceiveBeginPlay");

	ASL_Hakkason_SheLead_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartLead
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_SheLead_C::StartLead()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartLead");

	ASL_Hakkason_SheLead_C_StartLead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartHanabashiShenfa
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_SheLead_C::StartHanabashiShenfa()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartHanabashiShenfa");

	ASL_Hakkason_SheLead_C_StartHanabashiShenfa_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_SheLead_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.ReceiveEndPlay");

	ASL_Hakkason_SheLead_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.BndEvt__TriggerBox_MiharashiTalkOff_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_SheLead_C::BndEvt__TriggerBox_MiharashiTalkOff_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.BndEvt__TriggerBox_MiharashiTalkOff_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature");

	ASL_Hakkason_SheLead_C_BndEvt__TriggerBox_MiharashiTalkOff_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.WaitLeadStop
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_SheLead_C::WaitLeadStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.WaitLeadStop");

	ASL_Hakkason_SheLead_C_WaitLeadStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_SheLead_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.DecideDetectAction");

	ASL_Hakkason_SheLead_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartLeadSheHouse
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_SheLead_C::StartLeadSheHouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartLeadSheHouse");

	ASL_Hakkason_SheLead_C_StartLeadSheHouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartLeadSheHousePos
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_SheLead_C::StartLeadSheHousePos()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartLeadSheHousePos");

	ASL_Hakkason_SheLead_C_StartLeadSheHousePos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartHanabashiShenfaPos
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_SheLead_C::StartHanabashiShenfaPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartHanabashiShenfaPos");

	ASL_Hakkason_SheLead_C_StartHanabashiShenfaPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartleadPos
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_SheLead_C::StartleadPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartleadPos");

	ASL_Hakkason_SheLead_C_StartleadPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.ExecuteUbergraph_SL_Hakkason_SheLead
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_SheLead_C::ExecuteUbergraph_SL_Hakkason_SheLead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.ExecuteUbergraph_SL_Hakkason_SheLead");

	ASL_Hakkason_SheLead_C_ExecuteUbergraph_SL_Hakkason_SheLead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
