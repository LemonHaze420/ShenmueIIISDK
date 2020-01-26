
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

// Function BP_OD_Gacha.BP_OD_Gacha_C.GetBottomPocketMaterial
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstance*       return_value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_OD_Gacha_C::GetBottomPocketMaterial(int Index, class UMaterialInstance** return_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.GetBottomPocketMaterial");

	ABP_OD_Gacha_C_GetBottomPocketMaterial_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (return_value != nullptr)
		*return_value = params.return_value;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.GetBottomPocketCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_OD_Gacha_C::GetItemID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.GetItemID");

	ABP_OD_Gacha_C_GetItemID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.SpawnInputControlActor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_OD_Gacha_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.SpawnInputControlActor");

	ABP_OD_Gacha_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OD_Gacha_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.UserConstructionScript");

	ABP_OD_Gacha_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_OD_Gacha_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.ReceiveBeginPlay");

	ABP_OD_Gacha_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_Gacha_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.ReceiveTick");

	ABP_OD_Gacha_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_OD_Gacha_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature");

	ABP_OD_Gacha_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_OD_Gacha_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature");

	ABP_OD_Gacha_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.ResumeMiniGame
// (BlueprintCallable, BlueprintEvent)
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
// (BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OD_Gacha_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.RestartMiniGame");

	ABP_OD_Gacha_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.HitCheck
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OD_Gacha_C::HitCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.HitCheck");

	ABP_OD_Gacha_C_HitCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OD_Gacha_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.EndMiniGame");

	ABP_OD_Gacha_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.Finalize_Check
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OD_Gacha_C::Finalize_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.Finalize_Check");

	ABP_OD_Gacha_C_Finalize_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OD_Gacha_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.StartMiniGame");

	ABP_OD_Gacha_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.EnabledPlayerOnDecide
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OD_Gacha_C::EnabledPlayerOnDecide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.EnabledPlayerOnDecide");

	ABP_OD_Gacha_C_EnabledPlayerOnDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_Gacha.BP_OD_Gacha_C.ExecuteUbergraph_BP_OD_Gacha
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_Gacha_C::ExecuteUbergraph_BP_OD_Gacha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_Gacha.BP_OD_Gacha_C.ExecuteUbergraph_BP_OD_Gacha");

	ABP_OD_Gacha_C_ExecuteUbergraph_BP_OD_Gacha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
