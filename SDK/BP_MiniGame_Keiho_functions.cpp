
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
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Keiho_C::UpdateRotateAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateRotateAngle");

	ABP_MiniGame_Keiho_C_UpdateRotateAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InitAsyncLoad
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRange                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::UpdateSE(bool InRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateSE");

	ABP_MiniGame_Keiho_C_UpdateSE_Params params;
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateKungFuAccumulation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StickRot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::UpdateKungFuAccumulation(float StickRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateKungFuAccumulation");

	ABP_MiniGame_Keiho_C_UpdateKungFuAccumulation_Params params;
	params.StickRot = StickRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.GetPlayLabel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_MahoPartnerState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   labelName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::GetPlayLabel(TEnumAsByte<E_MiniGame_MahoPartnerState> State, struct FName* labelName)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::SetNPCVisible(bool InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.SetNPCVisible");

	ABP_MiniGame_Keiho_C_SetNPCVisible_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdatePartnerAnim
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_MiniGame_Keiho_C::GetDistanceFromCenter(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.GetDistanceFromCenter");

	ABP_MiniGame_Keiho_C_GetDistanceFromCenter_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateAddValue
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Keiho_C::UpdateAddValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateAddValue");

	ABP_MiniGame_Keiho_C_UpdateAddValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateDrawLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Keiho_C::UpdateRyoMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateRyoMove");

	ABP_MiniGame_Keiho_C_UpdateRyoMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Keiho_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UserConstructionScript");

	ABP_MiniGame_Keiho_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Timeline_InitPartnerCollision__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_Keiho_C::Timeline_InitPartnerCollision__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Timeline_InitPartnerCollision__FinishedFunc");

	ABP_MiniGame_Keiho_C_Timeline_InitPartnerCollision__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Timeline_InitPartnerCollision__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_Keiho_C::Timeline_InitPartnerCollision__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Timeline_InitPartnerCollision__UpdateFunc");

	ABP_MiniGame_Keiho_C_Timeline_InitPartnerCollision__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_FootPrintL
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Keiho_C::Event_FootPrintL()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_FootPrintL");

	ABP_MiniGame_Keiho_C_Event_FootPrintL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Keiho_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.StartMiniGame");

	ABP_MiniGame_Keiho_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_FootPrintR
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Keiho_C::Event_FootPrintR()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_FootPrintR");

	ABP_MiniGame_Keiho_C_Event_FootPrintR_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_RyoUpdateFade
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Keiho_C::Event_RyoUpdateFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_RyoUpdateFade");

	ABP_MiniGame_Keiho_C_Event_RyoUpdateFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ClothesChangedCC
// (BlueprintCallable, BlueprintEvent)
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
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Keiho_C::InitPartnerCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InitPartnerCollision");

	ABP_MiniGame_Keiho_C_InitPartnerCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_Keiho_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ReceiveBeginPlay");

	ABP_MiniGame_Keiho_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ReceiveTick");

	ABP_MiniGame_Keiho_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputRightStickHorizontal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::InputRightStickHorizontal(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputRightStickHorizontal");

	ABP_MiniGame_Keiho_C_InputRightStickHorizontal_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputRightStickVertical
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::InputRightStickVertical(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputRightStickVertical");

	ABP_MiniGame_Keiho_C_InputRightStickVertical_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.StartGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Keiho_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.StartGame");

	ABP_MiniGame_Keiho_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputLeftStickVertical
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputLeftVertical              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::InputLeftStickVertical(float InputLeftVertical)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputLeftStickVertical");

	ABP_MiniGame_Keiho_C_InputLeftStickVertical_Params params;
	params.InputLeftVertical = InputLeftVertical;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputLeftStickHorizontal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputLeftHorizontal            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::InputLeftStickHorizontal(float InputLeftHorizontal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputLeftStickHorizontal");

	ABP_MiniGame_Keiho_C_InputLeftStickHorizontal_Params params;
	params.InputLeftHorizontal = InputLeftHorizontal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.AfterFadeInEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Keiho_C::AfterFadeInEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.AfterFadeInEvent");

	ABP_MiniGame_Keiho_C_AfterFadeInEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_StopRyoMoveForTurn
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Keiho_C::Event_StopRyoMoveForTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_StopRyoMoveForTurn");

	ABP_MiniGame_Keiho_C_Event_StopRyoMoveForTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_OnChangeAnimState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGame_MahoPartnerState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::Event_OnChangeAnimState(TEnumAsByte<E_MiniGame_MahoPartnerState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_OnChangeAnimState");

	ABP_MiniGame_Keiho_C_Event_OnChangeAnimState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.SetKungFuDifficulty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_C::SetKungFuDifficulty(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.SetKungFuDifficulty");

	ABP_MiniGame_Keiho_C_SetKungFuDifficulty_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.TimeUpEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Keiho_C::TimeUpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.TimeUpEvent");

	ABP_MiniGame_Keiho_C_TimeUpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Keiho_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.EndMiniGame");

	ABP_MiniGame_Keiho_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.OnTimeUp
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Keiho_C::OnTimeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.OnTimeUp");

	ABP_MiniGame_Keiho_C_OnTimeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.PlayScriptRabel
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Keiho_C::PlayScriptRabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.PlayScriptRabel");

	ABP_MiniGame_Keiho_C_PlayScriptRabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_OpenHelp
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Keiho_C::Event_OpenHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_OpenHelp");

	ABP_MiniGame_Keiho_C_Event_OpenHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ExecuteUbergraph_BP_MiniGame_Keiho
// (HasDefaults)
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
