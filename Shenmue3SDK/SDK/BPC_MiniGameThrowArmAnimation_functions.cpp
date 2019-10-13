
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

// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.IsInitializeVariables
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameThrowArmAnimation_C::IsInitializeVariables(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.IsInitializeVariables");

	UBPC_MiniGameThrowArmAnimation_C_IsInitializeVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.AllStopAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameThrowArmAnimation_C::AllStopAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.AllStopAnimation");

	UBPC_MiniGameThrowArmAnimation_C_AllStopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.UpdateArmRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Add                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_MiniGameThrowArmAnimation_C::UpdateArmRotation(const struct FRotator& Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.UpdateArmRotation");

	UBPC_MiniGameThrowArmAnimation_C_UpdateArmRotation_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.IsAligned
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameThrowArmAnimation_C::PlayTakeOutAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.PlayTakeOutAnimation");

	UBPC_MiniGameThrowArmAnimation_C_PlayTakeOutAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.StopTakeOutAnimation
// (BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameThrowArmAnimation_C::StopTakeOutAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.StopTakeOutAnimation");

	UBPC_MiniGameThrowArmAnimation_C_StopTakeOutAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.PlayThrowAnimation
// (BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameThrowArmAnimation_C::PlayThrowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.PlayThrowAnimation");

	UBPC_MiniGameThrowArmAnimation_C_PlayThrowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.StopThrowAnimation
// (BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameThrowArmAnimation_C::StopThrowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.StopThrowAnimation");

	UBPC_MiniGameThrowArmAnimation_C_StopThrowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.PlayThrowEndAnimation
// (BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameThrowArmAnimation_C::PlayThrowEndAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.PlayThrowEndAnimation");

	UBPC_MiniGameThrowArmAnimation_C_PlayThrowEndAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.StopThrowEndAnimation
// (BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameThrowArmAnimation_C::StopThrowEndAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.StopThrowEndAnimation");

	UBPC_MiniGameThrowArmAnimation_C_StopThrowEndAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameThrowArmAnimation_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.ReceiveTick");

	UBPC_MiniGameThrowArmAnimation_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.InitializeVariables
// (BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameThrowArmAnimation_C::InitializeVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.InitializeVariables");

	UBPC_MiniGameThrowArmAnimation_C_InitializeVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.ResetVariables
// (BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameThrowArmAnimation_C::ResetVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.ResetVariables");

	UBPC_MiniGameThrowArmAnimation_C_ResetVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.ExecuteUbergraph_BPC_MiniGameThrowArmAnimation
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameThrowArmAnimation_C::ExecuteUbergraph_BPC_MiniGameThrowArmAnimation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.ExecuteUbergraph_BPC_MiniGameThrowArmAnimation");

	UBPC_MiniGameThrowArmAnimation_C_ExecuteUbergraph_BPC_MiniGameThrowArmAnimation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.OnFinishedTakeOutDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameThrowArmAnimation_C::OnFinishedTakeOutDispatcher__DelegateSignature()
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
