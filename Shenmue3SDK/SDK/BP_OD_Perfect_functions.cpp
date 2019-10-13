
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

// Function BP_OD_Perfect.BP_OD_Perfect_C.SpawnInputControlActor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_OD_Perfect_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Perfect.BP_OD_Perfect_C.SpawnInputControlActor");

	ABP_OD_Perfect_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_OD_Perfect.BP_OD_Perfect_C.GetRewardMoney
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_OD_Perfect_C::GetRewardMoney()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Perfect.BP_OD_Perfect_C.GetRewardMoney");

	ABP_OD_Perfect_C_GetRewardMoney_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_OD_Perfect.BP_OD_Perfect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OD_Perfect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Perfect.BP_OD_Perfect_C.UserConstructionScript");

	ABP_OD_Perfect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Perfect.BP_OD_Perfect_C.HitCheck
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OD_Perfect_C::HitCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Perfect.BP_OD_Perfect_C.HitCheck");

	ABP_OD_Perfect_C_HitCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Perfect.BP_OD_Perfect_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_Perfect_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Perfect.BP_OD_Perfect_C.ReceiveTick");

	ABP_OD_Perfect_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Perfect.BP_OD_Perfect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_OD_Perfect_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Perfect.BP_OD_Perfect_C.ReceiveBeginPlay");

	ABP_OD_Perfect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Perfect.BP_OD_Perfect_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OD_Perfect_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Perfect.BP_OD_Perfect_C.RestartMiniGame");

	ABP_OD_Perfect_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Perfect.BP_OD_Perfect_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_OD_Perfect_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Perfect.BP_OD_Perfect_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature");

	ABP_OD_Perfect_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Perfect.BP_OD_Perfect_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_OD_Perfect_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Perfect.BP_OD_Perfect_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature");

	ABP_OD_Perfect_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Perfect.BP_OD_Perfect_C.ResumeMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_OD_Perfect_C::ResumeMiniGame(struct FString* ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Perfect.BP_OD_Perfect_C.ResumeMiniGame");

	ABP_OD_Perfect_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Perfect.BP_OD_Perfect_C.OnTalkScriptEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_Perfect_C::OnTalkScriptEvent(int* EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Perfect.BP_OD_Perfect_C.OnTalkScriptEvent");

	ABP_OD_Perfect_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Perfect.BP_OD_Perfect_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OD_Perfect_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Perfect.BP_OD_Perfect_C.EndMiniGame");

	ABP_OD_Perfect_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Perfect.BP_OD_Perfect_C.Finalize_Check
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OD_Perfect_C::Finalize_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Perfect.BP_OD_Perfect_C.Finalize_Check");

	ABP_OD_Perfect_C_Finalize_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Perfect.BP_OD_Perfect_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OD_Perfect_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Perfect.BP_OD_Perfect_C.StartMiniGame");

	ABP_OD_Perfect_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Perfect.BP_OD_Perfect_C.Otoshidama End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          is_success                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_Perfect_C::Otoshidama_End(bool* is_success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Perfect.BP_OD_Perfect_C.Otoshidama End");

	ABP_OD_Perfect_C_Otoshidama_End_Params params;
	params.is_success = is_success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Perfect.BP_OD_Perfect_C.ExecuteUbergraph_BP_OD_Perfect
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_Perfect_C::ExecuteUbergraph_BP_OD_Perfect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Perfect.BP_OD_Perfect_C.ExecuteUbergraph_BP_OD_Perfect");

	ABP_OD_Perfect_C_ExecuteUbergraph_BP_OD_Perfect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
