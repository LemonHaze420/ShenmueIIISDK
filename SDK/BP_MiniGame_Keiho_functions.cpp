
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

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.GetClothMeshComponent
// (NetReliable, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_MiniGame_Keiho_C::GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.GetClothMeshComponent");

	ABP_MiniGame_Keiho_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateRotateAngle
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasDefaults, NetClient, Const)

void ABP_MiniGame_Keiho_C::STATIC_UpdateRotateAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateRotateAngle");

	ABP_MiniGame_Keiho_C_UpdateRotateAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InitAsyncLoad
// (Net, Event, NetMulticast, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InitAsyncLoad");

	ABP_MiniGame_Keiho_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateSE
// (Exec, Static, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// bool                           InRange                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::STATIC_UpdateSE(bool InRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateSE");

	ABP_MiniGame_Keiho_C_UpdateSE_Params params;
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateKungFuAccumulation
// (Exec, Native, Event, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// float                          StickRot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::UpdateKungFuAccumulation(float StickRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateKungFuAccumulation");

	ABP_MiniGame_Keiho_C_UpdateKungFuAccumulation_Params params;
	params.StickRot = StickRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.GetPlayLabel
// (Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient)
// Parameters:
// TEnumAsByte<E_MiniGame_MahoPartnerState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   labelName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::STATIC_GetPlayLabel(TEnumAsByte<E_MiniGame_MahoPartnerState> State, struct FName* labelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.GetPlayLabel");

	ABP_MiniGame_Keiho_C_GetPlayLabel_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (labelName != nullptr)
		*labelName = params.labelName;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.SetNPCVisible
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::STATIC_SetNPCVisible(bool InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.SetNPCVisible");

	ABP_MiniGame_Keiho_C_SetNPCVisible_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdatePartnerAnim
// (NetRequest, NetMulticast, Private, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          PowerRate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::UpdatePartnerAnim(float PowerRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdatePartnerAnim");

	ABP_MiniGame_Keiho_C_UpdatePartnerAnim_Params params;
	params.PowerRate = PowerRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.GetDistanceFromCenter
// (Native, NetResponse, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_MiniGame_Keiho_C::GetDistanceFromCenter(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.GetDistanceFromCenter");

	ABP_MiniGame_Keiho_C_GetDistanceFromCenter_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateAddValue
// (Native, Static, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, Const)

void ABP_MiniGame_Keiho_C::STATIC_UpdateAddValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateAddValue");

	ABP_MiniGame_Keiho_C_UpdateAddValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateDrawLine
// (NetReliable, NetRequest, Exec, Event, Public, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::UpdateDrawLine(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateDrawLine");

	ABP_MiniGame_Keiho_C_UpdateDrawLine_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.SpawnInputControlActor
// (Net, Event, NetResponse, MulticastDelegate, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGame_Keiho_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.SpawnInputControlActor");

	ABP_MiniGame_Keiho_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateRyoMove
// (NetReliable, NetRequest, Native, NetResponse, Public, Delegate, HasOutParms, HasDefaults, Const)

void ABP_MiniGame_Keiho_C::UpdateRyoMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateRyoMove");

	ABP_MiniGame_Keiho_C_UpdateRyoMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UserConstructionScript
// (Net, NetReliable, Event, NetMulticast, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Keiho_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UserConstructionScript");

	ABP_MiniGame_Keiho_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Timeline_InitPartnerCollision__FinishedFunc
// (NetReliable, NetRequest, Event, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Keiho_C::Timeline_InitPartnerCollision__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Timeline_InitPartnerCollision__FinishedFunc");

	ABP_MiniGame_Keiho_C_Timeline_InitPartnerCollision__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Timeline_InitPartnerCollision__UpdateFunc
// (NetReliable, NetRequest, Event, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Keiho_C::Timeline_InitPartnerCollision__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Timeline_InitPartnerCollision__UpdateFunc");

	ABP_MiniGame_Keiho_C_Timeline_InitPartnerCollision__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_FootPrintL
// (Net, NetRequest, Event, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Keiho_C::Event_FootPrintL()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_FootPrintL");

	ABP_MiniGame_Keiho_C_Event_FootPrintL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.StartMiniGame
// (Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Keiho_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.StartMiniGame");

	ABP_MiniGame_Keiho_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_FootPrintR
// (Net, NetRequest, Event, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Keiho_C::Event_FootPrintR()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_FootPrintR");

	ABP_MiniGame_Keiho_C_Event_FootPrintR_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_RyoUpdateFade
// (NetRequest, Event, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Keiho_C::Event_RyoUpdateFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_RyoUpdateFade");

	ABP_MiniGame_Keiho_C_Event_RyoUpdateFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ClothesChangedCC
// (NetMulticast, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::ClothesChangedCC(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ClothesChangedCC");

	ABP_MiniGame_Keiho_C_ClothesChangedCC_Params params;
	params.Interface = Interface;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InitPartnerCollision
// (Net, NetReliable, Event, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Keiho_C::InitPartnerCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InitPartnerCollision");

	ABP_MiniGame_Keiho_C_InitPartnerCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Keiho_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ReceiveBeginPlay");

	ABP_MiniGame_Keiho_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ReceiveTick
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ReceiveTick");

	ABP_MiniGame_Keiho_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputRightStickHorizontal
// (Exec, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::STATIC_InputRightStickHorizontal(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputRightStickHorizontal");

	ABP_MiniGame_Keiho_C_InputRightStickHorizontal_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputRightStickVertical
// (Net, NetReliable, NetRequest, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::STATIC_InputRightStickVertical(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputRightStickVertical");

	ABP_MiniGame_Keiho_C_InputRightStickVertical_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.StartGame
// (Net, NetReliable, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Keiho_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.StartGame");

	ABP_MiniGame_Keiho_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputLeftStickVertical
// (Net, NetReliable, NetRequest, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// float                          InputLeftVertical              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::STATIC_InputLeftStickVertical(float InputLeftVertical)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputLeftStickVertical");

	ABP_MiniGame_Keiho_C_InputLeftStickVertical_Params params;
	params.InputLeftVertical = InputLeftVertical;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputLeftStickHorizontal
// (NetReliable, Exec, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// float                          InputLeftHorizontal            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::STATIC_InputLeftStickHorizontal(float InputLeftHorizontal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputLeftStickHorizontal");

	ABP_MiniGame_Keiho_C_InputLeftStickHorizontal_Params params;
	params.InputLeftHorizontal = InputLeftHorizontal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.AfterFadeInEvent
// (Net, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Keiho_C::AfterFadeInEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.AfterFadeInEvent");

	ABP_MiniGame_Keiho_C_AfterFadeInEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_StopRyoMoveForTurn
// (Exec, Event, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Keiho_C::Event_StopRyoMoveForTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_StopRyoMoveForTurn");

	ABP_MiniGame_Keiho_C_Event_StopRyoMoveForTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_OnChangeAnimState
// (Net, Exec, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// TEnumAsByte<E_MiniGame_MahoPartnerState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::STATIC_Event_OnChangeAnimState(TEnumAsByte<E_MiniGame_MahoPartnerState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_OnChangeAnimState");

	ABP_MiniGame_Keiho_C_Event_OnChangeAnimState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.SetKungFuDifficulty
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::STATIC_SetKungFuDifficulty(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.SetKungFuDifficulty");

	ABP_MiniGame_Keiho_C_SetKungFuDifficulty_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.TimeUpEvent
// (NetRequest, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Keiho_C::TimeUpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.TimeUpEvent");

	ABP_MiniGame_Keiho_C_TimeUpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.EndMiniGame
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Keiho_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.EndMiniGame");

	ABP_MiniGame_Keiho_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.OnTimeUp
// (NetRequest, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Keiho_C::OnTimeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.OnTimeUp");

	ABP_MiniGame_Keiho_C_OnTimeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.PlayScriptRabel
// (Net, NetReliable, NetRequest, Event, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Keiho_C::PlayScriptRabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.PlayScriptRabel");

	ABP_MiniGame_Keiho_C_PlayScriptRabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_OpenHelp
// (NetRequest, Exec, Native, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Keiho_C::Event_OpenHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_OpenHelp");

	ABP_MiniGame_Keiho_C_Event_OpenHelp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ExecuteUbergraph_BP_MiniGame_Keiho
// (NetReliable, NetRequest, Event, NetResponse, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::ExecuteUbergraph_BP_MiniGame_Keiho(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ExecuteUbergraph_BP_MiniGame_Keiho");

	ABP_MiniGame_Keiho_C_ExecuteUbergraph_BP_MiniGame_Keiho_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
