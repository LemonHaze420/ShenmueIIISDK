
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

// Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.CalcTeleportLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_NPCLeadManager_C*    LeaderAI                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DestLocation                   (Parm, OutParm, IsPlainOldData)
// struct FRotator                DestRotation                   (Parm, OutParm, IsPlainOldData)

void UBTT_PlayerFollow_SkipToNextEvent_C::CalcTeleportLocation(class AActor* Character, class ABP_NPCLeadManager_C* LeaderAI, struct FVector* DestLocation, struct FRotator* DestRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.CalcTeleportLocation");

	UBTT_PlayerFollow_SkipToNextEvent_C_CalcTeleportLocation_Params params;
	params.Character = Character;
	params.LeaderAI = LeaderAI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DestLocation != nullptr)
		*DestLocation = params.DestLocation;
	if (DestRotation != nullptr)
		*DestRotation = params.DestRotation;
}


// Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.CalcNextMoveLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_NPCLeadManager_C*    LeaderAI                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DestLocation                   (Parm, OutParm, IsPlainOldData)
// struct FRotator                DestRotation                   (Parm, OutParm, IsPlainOldData)
// bool                           IsEnd                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_SkipToNextEvent_C::CalcNextMoveLocation(class AActor* Character, class ABP_NPCLeadManager_C* LeaderAI, float DeltaSeconds, float Speed, struct FVector* DestLocation, struct FRotator* DestRotation, bool* IsEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.CalcNextMoveLocation");

	UBTT_PlayerFollow_SkipToNextEvent_C_CalcNextMoveLocation_Params params;
	params.Character = Character;
	params.LeaderAI = LeaderAI;
	params.DeltaSeconds = DeltaSeconds;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DestLocation != nullptr)
		*DestLocation = params.DestLocation;
	if (DestRotation != nullptr)
		*DestRotation = params.DestRotation;
	if (IsEnd != nullptr)
		*IsEnd = params.IsEnd;
}


// Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_SkipToNextEvent_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.ReceiveExecuteAI");

	UBTT_PlayerFollow_SkipToNextEvent_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.EndFailure
// (BlueprintCallable, BlueprintEvent)

void UBTT_PlayerFollow_SkipToNextEvent_C::EndFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.EndFailure");

	UBTT_PlayerFollow_SkipToNextEvent_C_EndFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.StartPanicTeleport
// (BlueprintCallable, BlueprintEvent)

void UBTT_PlayerFollow_SkipToNextEvent_C::StartPanicTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.StartPanicTeleport");

	UBTT_PlayerFollow_SkipToNextEvent_C_StartPanicTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_SkipToNextEvent_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.ReceiveAbortAI");

	UBTT_PlayerFollow_SkipToNextEvent_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.ExecuteUbergraph_BTT_PlayerFollow_SkipToNextEvent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_SkipToNextEvent_C::ExecuteUbergraph_BTT_PlayerFollow_SkipToNextEvent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.ExecuteUbergraph_BTT_PlayerFollow_SkipToNextEvent");

	UBTT_PlayerFollow_SkipToNextEvent_C_ExecuteUbergraph_BTT_PlayerFollow_SkipToNextEvent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
