
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

// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.IsInitializeVariables
// (NetReliable, NetRequest, Native, Event, NetMulticast, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameThrowArmAnimation_C::IsInitializeVariables(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.IsInitializeVariables");

	UBPC_MiniGameThrowArmAnimation_C_IsInitializeVariables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.AllStopAnimation
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameThrowArmAnimation_C::STATIC_AllStopAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.AllStopAnimation");

	UBPC_MiniGameThrowArmAnimation_C_AllStopAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.UpdateArmRotation
// (NetReliable, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Add                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_MiniGameThrowArmAnimation_C::STATIC_UpdateArmRotation(const struct FRotator& Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.UpdateArmRotation");

	UBPC_MiniGameThrowArmAnimation_C_UpdateArmRotation_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.IsAligned
// (Net, NetRequest, Event, MulticastDelegate, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAligned                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameThrowArmAnimation_C::IsAligned(bool* bAligned)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.IsAligned");

	UBPC_MiniGameThrowArmAnimation_C_IsAligned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAligned != nullptr)
		*bAligned = params.bAligned;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.PlayTakeOutAnimation
// (Net, Native, Event, NetMulticast, Protected, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_MiniGameThrowArmAnimation_C::PlayTakeOutAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.PlayTakeOutAnimation");

	UBPC_MiniGameThrowArmAnimation_C_PlayTakeOutAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.StopTakeOutAnimation
// (Net, Native, Event, NetMulticast, Protected, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_MiniGameThrowArmAnimation_C::StopTakeOutAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.StopTakeOutAnimation");

	UBPC_MiniGameThrowArmAnimation_C_StopTakeOutAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.PlayThrowAnimation
// (NetRequest, Exec, Native, Event, NetResponse, Protected, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_MiniGameThrowArmAnimation_C::PlayThrowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.PlayThrowAnimation");

	UBPC_MiniGameThrowArmAnimation_C_PlayThrowAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.StopThrowAnimation
// (Net, NetReliable, NetRequest, Exec, Static, Protected, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_MiniGameThrowArmAnimation_C::STATIC_StopThrowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.StopThrowAnimation");

	UBPC_MiniGameThrowArmAnimation_C_StopThrowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.PlayThrowEndAnimation
// (Net, Native, Static, Protected, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_MiniGameThrowArmAnimation_C::STATIC_PlayThrowEndAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.PlayThrowEndAnimation");

	UBPC_MiniGameThrowArmAnimation_C_PlayThrowEndAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.StopThrowEndAnimation
// (NetReliable, NetRequest, Exec, Static, Protected, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_MiniGameThrowArmAnimation_C::STATIC_StopThrowEndAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.StopThrowEndAnimation");

	UBPC_MiniGameThrowArmAnimation_C_StopThrowEndAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.ReceiveTick
// (Exec, NetResponse, Static, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameThrowArmAnimation_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.ReceiveTick");

	UBPC_MiniGameThrowArmAnimation_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.InitializeVariables
// (NetReliable, Native, NetResponse, Protected, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_MiniGameThrowArmAnimation_C::InitializeVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.InitializeVariables");

	UBPC_MiniGameThrowArmAnimation_C_InitializeVariables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.ResetVariables
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintPure)

void UBPC_MiniGameThrowArmAnimation_C::STATIC_ResetVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.ResetVariables");

	UBPC_MiniGameThrowArmAnimation_C_ResetVariables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.ExecuteUbergraph_BPC_MiniGameThrowArmAnimation
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameThrowArmAnimation_C::ExecuteUbergraph_BPC_MiniGameThrowArmAnimation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.ExecuteUbergraph_BPC_MiniGameThrowArmAnimation");

	UBPC_MiniGameThrowArmAnimation_C_ExecuteUbergraph_BPC_MiniGameThrowArmAnimation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.OnFinishedTakeOutDispatcher__DelegateSignature
// (Event, NetResponse, Static, MulticastDelegate, Public, NetServer, BlueprintCallable)

void UBPC_MiniGameThrowArmAnimation_C::STATIC_OnFinishedTakeOutDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.OnFinishedTakeOutDispatcher__DelegateSignature");

	UBPC_MiniGameThrowArmAnimation_C_OnFinishedTakeOutDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
