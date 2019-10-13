
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

// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.CheckYouHouseSyoji
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_ENV_Area7_C::CheckYouHouseSyoji(bool Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.CheckYouHouseSyoji");

	ASL_Hakkason_ENV_Area7_C_CheckYouHouseSyoji_Params params;
	params.Open = Open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.CheckHanautaCollision
// (Public, BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_ENV_Area7_C::CheckHanautaCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.CheckHanautaCollision");

	ASL_Hakkason_ENV_Area7_C_CheckHanautaCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_ENV_Area7_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.ReceiveEndPlay");

	ASL_Hakkason_ENV_Area7_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.UnspawnNPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ASL_Hakkason_ENV_Area7_C::UnspawnNPC(const struct FGameplayTag& NPCID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.UnspawnNPC");

	ASL_Hakkason_ENV_Area7_C_UnspawnNPC_Params params;
	params.NPCID = NPCID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.StartCutscene
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_ENV_Area7_C::StartCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.StartCutscene");

	ASL_Hakkason_ENV_Area7_C_StartCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.EndCutscene
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_ENV_Area7_C::EndCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.EndCutscene");

	ASL_Hakkason_ENV_Area7_C_EndCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.SpawnNPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ASL_Hakkason_ENV_Area7_C::SpawnNPC(const struct FGameplayTag& NPCID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.SpawnNPC");

	ASL_Hakkason_ENV_Area7_C_SpawnNPC_Params params;
	params.NPCID = NPCID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.BindNPCManager
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_ENV_Area7_C::BindNPCManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.BindNPCManager");

	ASL_Hakkason_ENV_Area7_C_BindNPCManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.ChangeDayTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_ENV_Area7_C::ChangeDayTime(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.ChangeDayTime");

	ASL_Hakkason_ENV_Area7_C_ChangeDayTime_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASL_Hakkason_ENV_Area7_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.ReceiveBeginPlay");

	ASL_Hakkason_ENV_Area7_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.CheckNPCflagChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_ENV_Area7_C::CheckNPCflagChange(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.CheckNPCflagChange");

	ASL_Hakkason_ENV_Area7_C_CheckNPCflagChange_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.CheckStepChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_ENV_Area7_C::CheckStepChange(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.CheckStepChange");

	ASL_Hakkason_ENV_Area7_C_CheckStepChange_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.ExecuteUbergraph_SL_Hakkason_ENV_Area7
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_ENV_Area7_C::ExecuteUbergraph_SL_Hakkason_ENV_Area7(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.ExecuteUbergraph_SL_Hakkason_ENV_Area7");

	ASL_Hakkason_ENV_Area7_C_ExecuteUbergraph_SL_Hakkason_ENV_Area7_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
