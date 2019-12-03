
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

// Function BP_OD_Take2.BP_OD_Take2_C.SpawnInputControlActor
// (NetReliable, NetRequest, Exec, Native, NetMulticast, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_OD_Take2_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Take2.BP_OD_Take2_C.SpawnInputControlActor");

	ABP_OD_Take2_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_OD_Take2.BP_OD_Take2_C.GetRewardMoney
// (NetReliable, Native, Static, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_OD_Take2_C::STATIC_GetRewardMoney()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Take2.BP_OD_Take2_C.GetRewardMoney");

	ABP_OD_Take2_C_GetRewardMoney_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_OD_Take2.BP_OD_Take2_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Native, Event, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_OD_Take2_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Take2.BP_OD_Take2_C.UserConstructionScript");

	ABP_OD_Take2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Take2.BP_OD_Take2_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_OD_Take2_C::STATIC_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Take2.BP_OD_Take2_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature");

	ABP_OD_Take2_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Take2.BP_OD_Take2_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_OD_Take2_C::STATIC_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Take2.BP_OD_Take2_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature");

	ABP_OD_Take2_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Take2.BP_OD_Take2_C.ResumeMiniGame
// (Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_OD_Take2_C::STATIC_ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Take2.BP_OD_Take2_C.ResumeMiniGame");

	ABP_OD_Take2_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Take2.BP_OD_Take2_C.OnTalkScriptEvent
// (Net, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_Take2_C::STATIC_OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Take2.BP_OD_Take2_C.OnTalkScriptEvent");

	ABP_OD_Take2_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Take2.BP_OD_Take2_C.ReceiveTick
// (Net, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_Take2_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Take2.BP_OD_Take2_C.ReceiveTick");

	ABP_OD_Take2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Take2.BP_OD_Take2_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_OD_Take2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Take2.BP_OD_Take2_C.ReceiveBeginPlay");

	ABP_OD_Take2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Take2.BP_OD_Take2_C.RestartMiniGame
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_OD_Take2_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Take2.BP_OD_Take2_C.RestartMiniGame");

	ABP_OD_Take2_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Take2.BP_OD_Take2_C.EndMiniGame
// (Net, Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_OD_Take2_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Take2.BP_OD_Take2_C.EndMiniGame");

	ABP_OD_Take2_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Take2.BP_OD_Take2_C.HitCheck
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_OD_Take2_C::STATIC_HitCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Take2.BP_OD_Take2_C.HitCheck");

	ABP_OD_Take2_C_HitCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Take2.BP_OD_Take2_C.Otoshidama End
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           is_success                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_Take2_C::Otoshidama_End(bool is_success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Take2.BP_OD_Take2_C.Otoshidama End");

	ABP_OD_Take2_C_Otoshidama_End_Params params;
	params.is_success = is_success;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Take2.BP_OD_Take2_C.Finalize_Check
// (Net, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_OD_Take2_C::STATIC_Finalize_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Take2.BP_OD_Take2_C.Finalize_Check");

	ABP_OD_Take2_C_Finalize_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Take2.BP_OD_Take2_C.StartMiniGame
// (Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_OD_Take2_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Take2.BP_OD_Take2_C.StartMiniGame");

	ABP_OD_Take2_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Take2.BP_OD_Take2_C.ExecuteUbergraph_BP_OD_Take2
// (Static, NetMulticast, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_Take2_C::STATIC_ExecuteUbergraph_BP_OD_Take2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Take2.BP_OD_Take2_C.ExecuteUbergraph_BP_OD_Take2");

	ABP_OD_Take2_C_ExecuteUbergraph_BP_OD_Take2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
