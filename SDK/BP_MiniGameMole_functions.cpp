
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

// Function BP_MiniGameMole.BP_MiniGameMole_C.SetAppearWaitTime
// (Net, Exec, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)
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
// (Event, NetResponse, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_MiniGameMole_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.Initialize");

	ABP_MiniGameMole_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.UpdateAppearWait
// (NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
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
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           Hit                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameMole_C::CheckWhack(bool* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.CheckWhack");

	ABP_MiniGameMole_C_CheckWhack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.ChangeToNextState
// (Native, NetResponse, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_MiniGameMole_C::STATIC_ChangeToNextState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.ChangeToNextState");

	ABP_MiniGameMole_C_ChangeToNextState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.ClearValue
// (Net, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, HasOutParms)

void ABP_MiniGameMole_C::STATIC_ClearValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.ClearValue");

	ABP_MiniGameMole_C_ClearValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.UpdateWhacked
// (Net, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
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
// (NetRequest, Native, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameMole_C::UpdateReverse(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.UpdateReverse");

	ABP_MiniGameMole_C_UpdateReverse_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.UpdateAppear
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameMole_C::STATIC_UpdateAppear(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.UpdateAppear");

	ABP_MiniGameMole_C_UpdateAppear_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.UpDown
// (Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          moveSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DownLimit                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reached                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameMole_C::STATIC_UpDown(float DeltaSeconds, float moveSpeed, float DownLimit, bool* Reached)
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
// (NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_MiniGameMole_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.UserConstructionScript");

	ABP_MiniGameMole_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_MiniGameMole_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.ReceiveBeginPlay");

	ABP_MiniGameMole_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.ReceiveTick
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameMole_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.ReceiveTick");

	ABP_MiniGameMole_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.Appear
// (NetReliable, Exec, Native, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_MiniGameMole_C::Appear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.Appear");

	ABP_MiniGameMole_C_Appear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.OnEndLoad
// (Net, NetReliable, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, BlueprintCallable)
// Parameters:
// struct FString                 LoadId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 LoadedObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameMole_C::STATIC_OnEndLoad(const struct FString& LoadId, class UObject* LoadedObject)
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
// (Net, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameMole_C::STATIC_ExecuteUbergraph_BP_MiniGameMole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.ExecuteUbergraph_BP_MiniGameMole");

	ABP_MiniGameMole_C_ExecuteUbergraph_BP_MiniGameMole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameMole.BP_MiniGameMole_C.MissDispacher__DelegateSignature
// (NetReliable, Native, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameMole_C::MissDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameMole.BP_MiniGameMole_C.MissDispacher__DelegateSignature");

	ABP_MiniGameMole_C_MissDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
