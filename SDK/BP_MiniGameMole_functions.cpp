
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

// Function BP_MiniGameMole.BP_MiniGameMole_C.SetAppearWaitTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameMole_C::SetAppearWaitTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.SetAppearWaitTime");

	ABP_MiniGameMole_C_SetAppearWaitTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameMole_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.Initialize");

	ABP_MiniGameMole_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.UpdateAppearWait
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameMole_C::UpdateAppearWait(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.UpdateAppearWait");

	ABP_MiniGameMole_C_UpdateAppearWait_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.CheckWhack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hit                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameMole_C::CheckWhack(bool* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.CheckWhack");

	ABP_MiniGameMole_C_CheckWhack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.ChangeToNextState
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameMole_C::ChangeToNextState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.ChangeToNextState");

	ABP_MiniGameMole_C_ChangeToNextState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.ClearValue
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameMole_C::ClearValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.ClearValue");

	ABP_MiniGameMole_C_ClearValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.UpdateWhacked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameMole_C::UpdateWhacked(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.UpdateWhacked");

	ABP_MiniGameMole_C_UpdateWhacked_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.UpdateReverse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameMole_C::UpdateReverse(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.UpdateReverse");

	ABP_MiniGameMole_C_UpdateReverse_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.UpdateAppear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameMole_C::UpdateAppear(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.UpdateAppear");

	ABP_MiniGameMole_C_UpdateAppear_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.UpDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          moveSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DownLimit                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reached                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameMole_C::UpDown(float DeltaSeconds, float moveSpeed, float DownLimit, bool* Reached)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.UpDown");

	ABP_MiniGameMole_C_UpDown_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.moveSpeed = moveSpeed;
	params.DownLimit = DownLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reached != nullptr)
		*Reached = params.Reached;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameMole_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.UserConstructionScript");

	ABP_MiniGameMole_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGameMole_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.ReceiveBeginPlay");

	ABP_MiniGameMole_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameMole_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.ReceiveTick");

	ABP_MiniGameMole_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.Appear
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameMole_C::Appear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.Appear");

	ABP_MiniGameMole_C_Appear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.OnEndLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LoadId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 LoadedObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameMole_C::OnEndLoad(const struct FString& LoadId, class UObject* LoadedObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.OnEndLoad");

	ABP_MiniGameMole_C_OnEndLoad_Params params;
	params.LoadId = LoadId;
	params.LoadedObject = LoadedObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.ExecuteUbergraph_BP_MiniGameMole
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameMole_C::ExecuteUbergraph_BP_MiniGameMole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.ExecuteUbergraph_BP_MiniGameMole");

	ABP_MiniGameMole_C_ExecuteUbergraph_BP_MiniGameMole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.MissDispacher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameMole_C::MissDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.MissDispacher__DelegateSignature");

	ABP_MiniGameMole_C_MissDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
