
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

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckHanautaStep
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HakkasonYouManager_C::CheckHanautaStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckHanautaStep");

	ABP_HakkasonYouManager_C_CheckHanautaStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ChengeHanautaCollisionSize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HakkasonYouManager_C::ChengeHanautaCollisionSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ChengeHanautaCollisionSize");

	ABP_HakkasonYouManager_C_ChengeHanautaCollisionSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckEventFalg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HakkasonYouManager_C::CheckEventFalg(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckEventFalg");

	ABP_HakkasonYouManager_C_CheckEventFalg_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckYouHouseSyoji
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HakkasonYouManager_C::CheckYouHouseSyoji(bool Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckYouHouseSyoji");

	ABP_HakkasonYouManager_C_CheckYouHouseSyoji_Params params;
	params.Open = Open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckHanautaCollision
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HakkasonYouManager_C::CheckHanautaCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckHanautaCollision");

	ABP_HakkasonYouManager_C_CheckHanautaCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HakkasonYouManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.UserConstructionScript");

	ABP_HakkasonYouManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.SpawnNPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_HakkasonYouManager_C::SpawnNPC(const struct FGameplayTag& NPCID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.SpawnNPC");

	ABP_HakkasonYouManager_C_SpawnNPC_Params params;
	params.NPCID = NPCID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.UnspawnNPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_HakkasonYouManager_C::UnspawnNPC(const struct FGameplayTag& NPCID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.UnspawnNPC");

	ABP_HakkasonYouManager_C_UnspawnNPC_Params params;
	params.NPCID = NPCID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HakkasonYouManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ReceiveEndPlay");

	ABP_HakkasonYouManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.BindNPCManager
// (BlueprintCallable, BlueprintEvent)

void ABP_HakkasonYouManager_C::BindNPCManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.BindNPCManager");

	ABP_HakkasonYouManager_C_BindNPCManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ChangeDayTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HakkasonYouManager_C::ChangeDayTime(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ChangeDayTime");

	ABP_HakkasonYouManager_C_ChangeDayTime_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HakkasonYouManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ReceiveBeginPlay");

	ABP_HakkasonYouManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckNPCflagChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HakkasonYouManager_C::CheckNPCflagChange(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckNPCflagChange");

	ABP_HakkasonYouManager_C_CheckNPCflagChange_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckStepChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HakkasonYouManager_C::CheckStepChange(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckStepChange");

	ABP_HakkasonYouManager_C_CheckStepChange_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ChangeBehavior
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3PlayerBehavior              NewId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3PlayerBehavior              OldId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HakkasonYouManager_C::ChangeBehavior(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ChangeBehavior");

	ABP_HakkasonYouManager_C_ChangeBehavior_Params params;
	params.NewId = NewId;
	params.OldId = OldId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.StartTalk
// (BlueprintCallable, BlueprintEvent)

void ABP_HakkasonYouManager_C::StartTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.StartTalk");

	ABP_HakkasonYouManager_C_StartTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.EndTalk
// (BlueprintCallable, BlueprintEvent)

void ABP_HakkasonYouManager_C::EndTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.EndTalk");

	ABP_HakkasonYouManager_C_EndTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ExecuteUbergraph_BP_HakkasonYouManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HakkasonYouManager_C::ExecuteUbergraph_BP_HakkasonYouManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ExecuteUbergraph_BP_HakkasonYouManager");

	ABP_HakkasonYouManager_C_ExecuteUbergraph_BP_HakkasonYouManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
