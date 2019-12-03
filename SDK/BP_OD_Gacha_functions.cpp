
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

// Function BP_OD_Gacha.BP_OD_Gacha_C.GetBottomPocketMaterial
// (NetRequest, Native, Static, MulticastDelegate, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstance*       return_value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_OD_Gacha_C::STATIC_GetBottomPocketMaterial(int Index, class UMaterialInstance** return_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.GetBottomPocketMaterial");

	ABP_OD_Gacha_C_GetBottomPocketMaterial_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (return_value != nullptr)
		*return_value = params.return_value;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.GetBottomPocketCount
// (Net, Event, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// int                            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_OD_Gacha_C::GetBottomPocketCount(int* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.GetBottomPocketCount");

	ABP_OD_Gacha_C_GetBottomPocketCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.GetBottomPocket
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Dimension_1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_OD_Gacha_C::GetBottomPocket(int Dimension_1, int* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.GetBottomPocket");

	ABP_OD_Gacha_C_GetBottomPocket_Params params;
	params.Dimension_1 = Dimension_1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.GetItemID
// (Net, NetReliable, NetRequest, Event, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_OD_Gacha_C::STATIC_GetItemID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.GetItemID");

	ABP_OD_Gacha_C_GetItemID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.SpawnInputControlActor
// (Net, Exec, Static, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_OD_Gacha_C::STATIC_SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.SpawnInputControlActor");

	ABP_OD_Gacha_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.UserConstructionScript
// (Net, NetRequest, Event, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_OD_Gacha_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.UserConstructionScript");

	ABP_OD_Gacha_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.ReceiveBeginPlay
// (NetRequest, Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_OD_Gacha_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.ReceiveBeginPlay");

	ABP_OD_Gacha_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.ReceiveTick
// (Native, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_Gacha_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.ReceiveTick");

	ABP_OD_Gacha_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_OD_Gacha_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature");

	ABP_OD_Gacha_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_OD_Gacha_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature");

	ABP_OD_Gacha_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.ResumeMiniGame
// (Net, NetReliable, Exec, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_OD_Gacha_C::ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.ResumeMiniGame");

	ABP_OD_Gacha_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.OnTalkScriptEvent
// (NetRequest, Exec, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_Gacha_C::OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.OnTalkScriptEvent");

	ABP_OD_Gacha_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.RestartMiniGame
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_OD_Gacha_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.RestartMiniGame");

	ABP_OD_Gacha_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.HitCheck
// (Net, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_OD_Gacha_C::HitCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.HitCheck");

	ABP_OD_Gacha_C_HitCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.EndMiniGame
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_OD_Gacha_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.EndMiniGame");

	ABP_OD_Gacha_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.Finalize_Check
// (Net, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_OD_Gacha_C::Finalize_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.Finalize_Check");

	ABP_OD_Gacha_C_Finalize_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.StartMiniGame
// (Net, NetRequest, Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_OD_Gacha_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.StartMiniGame");

	ABP_OD_Gacha_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.EnabledPlayerOnDecide
// (Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_OD_Gacha_C::EnabledPlayerOnDecide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.EnabledPlayerOnDecide");

	ABP_OD_Gacha_C_EnabledPlayerOnDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.ExecuteUbergraph_BP_OD_Gacha
// (Native, NetResponse, Static, Public, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_Gacha_C::STATIC_ExecuteUbergraph_BP_OD_Gacha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.ExecuteUbergraph_BP_OD_Gacha");

	ABP_OD_Gacha_C_ExecuteUbergraph_BP_OD_Gacha_Params params;
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
