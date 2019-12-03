
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

// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.CheckYouHouseSyoji
// (Exec, Native, Event, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// bool                           Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_ENV_Area7_C::CheckYouHouseSyoji(bool Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.CheckYouHouseSyoji");

	ASL_Hakkason_ENV_Area7_C_CheckYouHouseSyoji_Params params;
	params.Open = Open;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.CheckHanautaCollision
// (NetReliable, NetRequest, Protected, NetClient, BlueprintEvent, NetValidate)

void ASL_Hakkason_ENV_Area7_C::CheckHanautaCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.CheckHanautaCollision");

	ASL_Hakkason_ENV_Area7_C_CheckHanautaCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.ReceiveEndPlay
// (Net, Native, Event, NetResponse, Public, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_ENV_Area7_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.ReceiveEndPlay");

	ASL_Hakkason_ENV_Area7_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.UnspawnNPC
// (Native, Event, NetResponse, Public, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ASL_Hakkason_ENV_Area7_C::UnspawnNPC(const struct FGameplayTag& NPCID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.UnspawnNPC");

	ASL_Hakkason_ENV_Area7_C_UnspawnNPC_Params params;
	params.NPCID = NPCID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.StartCutscene
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, NetClient, DLLImport, BlueprintEvent, NetValidate)

void ASL_Hakkason_ENV_Area7_C::STATIC_StartCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.StartCutscene");

	ASL_Hakkason_ENV_Area7_C_StartCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.EndCutscene
// (Net, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, NetClient, DLLImport, BlueprintEvent, NetValidate)

void ASL_Hakkason_ENV_Area7_C::STATIC_EndCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.EndCutscene");

	ASL_Hakkason_ENV_Area7_C_EndCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.SpawnNPC
// (Native, Event, NetResponse, Public, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ASL_Hakkason_ENV_Area7_C::SpawnNPC(const struct FGameplayTag& NPCID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.SpawnNPC");

	ASL_Hakkason_ENV_Area7_C_SpawnNPC_Params params;
	params.NPCID = NPCID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.BindNPCManager
// (NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, NetClient, DLLImport, BlueprintEvent, NetValidate)

void ASL_Hakkason_ENV_Area7_C::STATIC_BindNPCManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.BindNPCManager");

	ASL_Hakkason_ENV_Area7_C_BindNPCManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.ChangeDayTime
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Public, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
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
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void ASL_Hakkason_ENV_Area7_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.ReceiveBeginPlay");

	ASL_Hakkason_ENV_Area7_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.CheckNPCflagChange
// (NetReliable, NetRequest, Event, Public, Private, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetReliable, Exec, Event, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, NetValidate)
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
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_ENV_Area7_C::ExecuteUbergraph_SL_Hakkason_ENV_Area7(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.ExecuteUbergraph_SL_Hakkason_ENV_Area7");

	ASL_Hakkason_ENV_Area7_C_ExecuteUbergraph_SL_Hakkason_ENV_Area7_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
