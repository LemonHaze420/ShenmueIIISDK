
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

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.SetCNWidgetTexture
// (Net, NetRequest, Exec, Event, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_UE_de_Yattari_C::SetCNWidgetTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.SetCNWidgetTexture");

	ABP_MiniGame_UE_de_Yattari_C_SetCNWidgetTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.InitAsyncLoad
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.InitAsyncLoad");

	ABP_MiniGame_UE_de_Yattari_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.GetDiceTwoNum
// (Net, NetRequest, Native, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            SumNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num1                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Num2                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UE_de_Yattari_C::GetDiceTwoNum(int SumNum, int* Num1, int* Num2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.GetDiceTwoNum");

	ABP_MiniGame_UE_de_Yattari_C_GetDiceTwoNum_Params params;
	params.SumNum = SumNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num1 != nullptr)
		*Num1 = params.Num1;
	if (Num2 != nullptr)
		*Num2 = params.Num2;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.GetDetectAction
// (Net, Native, NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_MiniGame_UE_de_Yattari_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.GetDetectAction");

	ABP_MiniGame_UE_de_Yattari_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.GetClothMeshComponent
// (Net, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_MiniGame_UE_de_Yattari_C::STATIC_GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.GetClothMeshComponent");

	ABP_MiniGame_UE_de_Yattari_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.DecideDiceNum
// (NetReliable, Event, Protected, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           RyoWin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UE_de_Yattari_C::DecideDiceNum(bool RyoWin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.DecideDiceNum");

	ABP_MiniGame_UE_de_Yattari_C_DecideDiceNum_Params params;
	params.RyoWin = RyoWin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.SetBoardInfo
// (Event, NetResponse, Static, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_SetBoardInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.SetBoardInfo");

	ABP_MiniGame_UE_de_Yattari_C_SetBoardInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.SetEnableAroundCollision
// (Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_SetEnableAroundCollision(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.SetEnableAroundCollision");

	ABP_MiniGame_UE_de_Yattari_C_SetEnableAroundCollision_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.GetDiceNumRandom
// (Net, NetReliable, Event, NetResponse, MulticastDelegate, Private, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DiceNum                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UE_de_Yattari_C::GetDiceNumRandom(int Min, int Max, int* DiceNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.GetDiceNumRandom");

	ABP_MiniGame_UE_de_Yattari_C_GetDiceNumRandom_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DiceNum != nullptr)
		*DiceNum = params.DiceNum;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.SpawnInputControlActor
// (Net, NetReliable, Exec, Event, NetResponse, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGame_UE_de_Yattari_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.SpawnInputControlActor");

	ABP_MiniGame_UE_de_Yattari_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ThrowDiceFromTotalNum
// (NetRequest, MulticastDelegate, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TotalNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UE_de_Yattari_C::ThrowDiceFromTotalNum(int TotalNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ThrowDiceFromTotalNum");

	ABP_MiniGame_UE_de_Yattari_C_ThrowDiceFromTotalNum_Params params;
	params.TotalNum = TotalNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ResetCamera
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_MiniGame_UE_de_Yattari_C::ResetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ResetCamera");

	ABP_MiniGame_UE_de_Yattari_C_ResetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.CameraUpdate
// (Net, NetReliable, NetRequest, Native, Event, MulticastDelegate, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UE_de_Yattari_C::CameraUpdate(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.CameraUpdate");

	ABP_MiniGame_UE_de_Yattari_C_CameraUpdate_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.GetDiceNum
// (Exec, Event, NetResponse, Static, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            DiceNum                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_GetDiceNum(int* DiceNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.GetDiceNum");

	ABP_MiniGame_UE_de_Yattari_C_GetDiceNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DiceNum != nullptr)
		*DiceNum = params.DiceNum;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.DestroyDice
// (NetReliable, Exec, Native, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_UE_de_Yattari_C::DestroyDice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.DestroyDice");

	ABP_MiniGame_UE_de_Yattari_C_DestroyDice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.IsStopDice
// (Net, Exec, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient)
// Parameters:
// bool                           Stop                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_IsStopDice(bool* Stop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.IsStopDice");

	ABP_MiniGame_UE_de_Yattari_C_IsStopDice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stop != nullptr)
		*Stop = params.Stop;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.UserConstructionScript
// (Net, NetRequest, Exec, Event, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.UserConstructionScript");

	ABP_MiniGame_UE_de_Yattari_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.WinMiniGame
// (Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_UE_de_Yattari_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.WinMiniGame");

	ABP_MiniGame_UE_de_Yattari_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.LoseMiniGame
// (Net, NetReliable, NetRequest, Exec, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_UE_de_Yattari_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.LoseMiniGame");

	ABP_MiniGame_UE_de_Yattari_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.DrawMiniGame
// (Net, NetReliable, NetRequest, Exec, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_UE_de_Yattari_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.DrawMiniGame");

	ABP_MiniGame_UE_de_Yattari_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.StartMiniGame
// (NetReliable, NetRequest, Exec, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_UE_de_Yattari_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.StartMiniGame");

	ABP_MiniGame_UE_de_Yattari_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.EndMiniGame
// (NetReliable, NetRequest, Exec, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_UE_de_Yattari_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.EndMiniGame");

	ABP_MiniGame_UE_de_Yattari_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.FinalizeTalk
// (Net, Exec, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_UE_de_Yattari_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.FinalizeTalk");

	ABP_MiniGame_UE_de_Yattari_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.OnFinishedFade
// (Net, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_OnFinishedFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.OnFinishedFade");

	ABP_MiniGame_UE_de_Yattari_C_OnFinishedFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_UE_de_Yattari_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ReceiveBeginPlay");

	ABP_MiniGame_UE_de_Yattari_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ReceiveTick
// (Native, Event, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UE_de_Yattari_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ReceiveTick");

	ABP_MiniGame_UE_de_Yattari_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature");

	ABP_MiniGame_UE_de_Yattari_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature");

	ABP_MiniGame_UE_de_Yattari_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ResetFlowDoOnce
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_ResetFlowDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ResetFlowDoOnce");

	ABP_MiniGame_UE_de_Yattari_C_ResetFlowDoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.NPCDiceThrow
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_NPCDiceThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.NPCDiceThrow");

	ABP_MiniGame_UE_de_Yattari_C_NPCDiceThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.PlayerDiceThrow
// (Net, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_PlayerDiceThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.PlayerDiceThrow");

	ABP_MiniGame_UE_de_Yattari_C_PlayerDiceThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.InputButtonRight
// (Net, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_InputButtonRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.InputButtonRight");

	ABP_MiniGame_UE_de_Yattari_C_InputButtonRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.InitThrowIdle
// (NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_InitThrowIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.InitThrowIdle");

	ABP_MiniGame_UE_de_Yattari_C_InitThrowIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.BndEvt__Bowl_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, DLLImport, Const)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_UE_de_Yattari_C::BndEvt__Bowl_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.BndEvt__Bowl_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature");

	ABP_MiniGame_UE_de_Yattari_C_BndEvt__Bowl_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.EnableForwardAndBackCollision
// (NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_EnableForwardAndBackCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.EnableForwardAndBackCollision");

	ABP_MiniGame_UE_de_Yattari_C_EnableForwardAndBackCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.StartForceMoveDice
// (Net, NetReliable, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_StartForceMoveDice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.StartForceMoveDice");

	ABP_MiniGame_UE_de_Yattari_C_StartForceMoveDice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.Event_EndMiniGame
// (Net, NetRequest, Exec, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_UE_de_Yattari_C::Event_EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.Event_EndMiniGame");

	ABP_MiniGame_UE_de_Yattari_C_Event_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.OnTalkScriptEvent
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.OnTalkScriptEvent");

	ABP_MiniGame_UE_de_Yattari_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ResumeMiniGame
// (Net, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ResumeMiniGame");

	ABP_MiniGame_UE_de_Yattari_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.CancelMiniGame
// (NetRequest, Exec, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_UE_de_Yattari_C::CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.CancelMiniGame");

	ABP_MiniGame_UE_de_Yattari_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ResetCancelDoOnce
// (Net, NetReliable, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_ResetCancelDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ResetCancelDoOnce");

	ABP_MiniGame_UE_de_Yattari_C_ResetCancelDoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.DelayedInitialize
// (NetReliable, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_DelayedInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.DelayedInitialize");

	ABP_MiniGame_UE_de_Yattari_C_DelayedInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.OpponentResult
// (NetReliable, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_OpponentResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.OpponentResult");

	ABP_MiniGame_UE_de_Yattari_C_OpponentResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.RyoResult
// (Net, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_UE_de_Yattari_C::STATIC_RyoResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.RyoResult");

	ABP_MiniGame_UE_de_Yattari_C_RyoResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ExecuteUbergraph_BP_MiniGame_UE_de_Yattari
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, Private, Protected, Delegate, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UE_de_Yattari_C::ExecuteUbergraph_BP_MiniGame_UE_de_Yattari(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ExecuteUbergraph_BP_MiniGame_UE_de_Yattari");

	ABP_MiniGame_UE_de_Yattari_C_ExecuteUbergraph_BP_MiniGame_UE_de_Yattari_Params params;
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
