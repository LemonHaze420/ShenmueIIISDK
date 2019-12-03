
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

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.IsPlayCatchAnim
// (NetReliable, MulticastDelegate, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           isPlay                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::IsPlayCatchAnim(bool* isPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.IsPlayCatchAnim");

	UABP_MiniGame_CC_Player_re_C_IsPlayCatchAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isPlay != nullptr)
		*isPlay = params.isPlay;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.PlayCatchAnim
// (NetReliable, Event, NetResponse, NetMulticast, Private, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UABP_MiniGame_CC_Player_re_C::PlayCatchAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.PlayCatchAnim");

	UABP_MiniGame_CC_Player_re_C_PlayCatchAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.UpdatePA
// (Net, Native, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_CC_Player_re_C::STATIC_UpdatePA()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.UpdatePA");

	UABP_MiniGame_CC_Player_re_C_UpdatePA_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.RInterpToQ
// (Exec, Native, NetResponse, Static, NetMulticast, Protected, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                Current                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                RetRot                         (Parm, OutParm, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::STATIC_RInterpToQ(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, struct FRotator* RetRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.RInterpToQ");

	UABP_MiniGame_CC_Player_re_C_RInterpToQ_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetRot != nullptr)
		*RetRot = params.RetRot;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.InitFunc
// (Exec, Native, NetResponse, NetMulticast, Public, Delegate, BlueprintCallable)

void UABP_MiniGame_CC_Player_re_C::InitFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.InitFunc");

	UABP_MiniGame_CC_Player_re_C_InitFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.MakeTargetRotation
// (NetReliable, NetRequest, Exec, Static, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                ReturnRot                      (Parm, OutParm, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::STATIC_MakeTargetRotation(struct FRotator* ReturnRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.MakeTargetRotation");

	UABP_MiniGame_CC_Player_re_C_MakeTargetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnRot != nullptr)
		*ReturnRot = params.ReturnRot;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.GOMA8_OtherFunc
// (NetRequest, Exec, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::STATIC_GOMA8_OtherFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.GOMA8_OtherFunc");

	UABP_MiniGame_CC_Player_re_C_GOMA8_OtherFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.StopMontageWrapper
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UABP_MiniGame_CC_Player_re_C::STATIC_StopMontageWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.StopMontageWrapper");

	UABP_MiniGame_CC_Player_re_C_StopMontageWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.TurnInPlaceCheck
// (Exec, Native, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// float                          TurnThreshold                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TurnAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                TargetRotation                 (Parm, OutParm, IsPlainOldData)
// bool                           ShouldRotate                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           TurnRight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::TurnInPlaceCheck(float TurnThreshold, float TurnAngle, struct FRotator* TargetRotation, bool* ShouldRotate, bool* TurnRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.TurnInPlaceCheck");

	UABP_MiniGame_CC_Player_re_C_TurnInPlaceCheck_Params params;
	params.TurnThreshold = TurnThreshold;
	params.TurnAngle = TurnAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetRotation != nullptr)
		*TargetRotation = params.TargetRotation;
	if (ShouldRotate != nullptr)
		*ShouldRotate = params.ShouldRotate;
	if (TurnRight != nullptr)
		*TurnRight = params.TurnRight;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.SetCharacterRotation
// (Net, Native, Event, NetResponse, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          RotationRate                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::STATIC_SetCharacterRotation(const struct FRotator& TargetRotation, float RotationRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.SetCharacterRotation");

	UABP_MiniGame_CC_Player_re_C_SetCharacterRotation_Params params;
	params.TargetRotation = TargetRotation;
	params.RotationRate = RotationRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_1072A9C2421FEC08965D54A159409CA0
// (Net, NetRequest, Exec, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_CC_Player_re_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_1072A9C2421FEC08965D54A159409CA0()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_1072A9C2421FEC08965D54A159409CA0");

	UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_1072A9C2421FEC08965D54A159409CA0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_6F4D1FD141704E98769B6AA1B6AE6186
// (Net, NetRequest, Exec, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_CC_Player_re_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_6F4D1FD141704E98769B6AA1B6AE6186()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_6F4D1FD141704E98769B6AA1B6AE6186");

	UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_6F4D1FD141704E98769B6AA1B6AE6186_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_45F2B9AB47E730ED2E576EA6B34048D2
// (NetRequest, Exec, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_CC_Player_re_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_45F2B9AB47E730ED2E576EA6B34048D2()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_45F2B9AB47E730ED2E576EA6B34048D2");

	UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_45F2B9AB47E730ED2E576EA6B34048D2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_8C5FDAF346797F8B3BB06A871FB2EBC8
// (NetRequest, Exec, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_CC_Player_re_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_8C5FDAF346797F8B3BB06A871FB2EBC8()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_8C5FDAF346797F8B3BB06A871FB2EBC8");

	UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_8C5FDAF346797F8B3BB06A871FB2EBC8_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_BlendSpacePlayer_81360C884437633463479E95ADE5F452
// (Net, NetReliable, Exec, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_CC_Player_re_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_BlendSpacePlayer_81360C884437633463479E95ADE5F452()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_BlendSpacePlayer_81360C884437633463479E95ADE5F452");

	UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_BlendSpacePlayer_81360C884437633463479E95ADE5F452_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_RotateRootBone_E738FA8E4DAE1C5595DA2FAE77DAD20E
// (Net, NetReliable, Exec, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_CC_Player_re_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_RotateRootBone_E738FA8E4DAE1C5595DA2FAE77DAD20E()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_RotateRootBone_E738FA8E4DAE1C5595DA2FAE77DAD20E");

	UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_RotateRootBone_E738FA8E4DAE1C5595DA2FAE77DAD20E_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_FinishWait
// (NetReliable, Exec, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_CC_Player_re_C::AnimNotify_QTE_FinishWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_FinishWait");

	UABP_MiniGame_CC_Player_re_C_AnimNotify_QTE_FinishWait_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_InputStart
// (NetReliable, Exec, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_CC_Player_re_C::AnimNotify_QTE_InputStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_InputStart");

	UABP_MiniGame_CC_Player_re_C_AnimNotify_QTE_InputStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_InputEnd
// (Net, NetReliable, NetResponse, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_CC_Player_re_C::AnimNotify_QTE_InputEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_InputEnd");

	UABP_MiniGame_CC_Player_re_C_AnimNotify_QTE_InputEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_End
// (NetReliable, NetResponse, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_CC_Player_re_C::AnimNotify_QTE_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_End");

	UABP_MiniGame_CC_Player_re_C_AnimNotify_QTE_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.BlueprintUpdateAnimation
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::STATIC_BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.BlueprintUpdateAnimation");

	UABP_MiniGame_CC_Player_re_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_CanRotate
// (Net, NetResponse, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_CC_Player_re_C::AnimNotify_CanRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_CanRotate");

	UABP_MiniGame_CC_Player_re_C_AnimNotify_CanRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.OnJump
// (Net, NetResponse, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_CC_Player_re_C::OnJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.OnJump");

	UABP_MiniGame_CC_Player_re_C_OnJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.PauseMotion
// (NetResponse, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_CC_Player_re_C::PauseMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.PauseMotion");

	UABP_MiniGame_CC_Player_re_C_PauseMotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.SetPlayRate
// (Net, NetRequest, Native, Event, NetMulticast, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::SetPlayRate(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.SetPlayRate");

	UABP_MiniGame_CC_Player_re_C_SetPlayRate_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.BlueprintInitializeAnimation
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_CC_Player_re_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.BlueprintInitializeAnimation");

	UABP_MiniGame_CC_Player_re_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.SetForceIdle
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// bool                           bForceIdle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::SetForceIdle(bool bForceIdle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.SetForceIdle");

	UABP_MiniGame_CC_Player_re_C_SetForceIdle_Params params;
	params.bForceIdle = bForceIdle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_GroundingFootL
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_CC_Player_re_C::AnimNotify_GroundingFootL()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_GroundingFootL");

	UABP_MiniGame_CC_Player_re_C_AnimNotify_GroundingFootL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_GroundingFootR
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_CC_Player_re_C::AnimNotify_GroundingFootR()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_GroundingFootR");

	UABP_MiniGame_CC_Player_re_C_AnimNotify_GroundingFootR_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.ExecuteUbergraph_ABP_MiniGame_CC_Player_re
// (NetReliable, Exec, Event, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::STATIC_ExecuteUbergraph_ABP_MiniGame_CC_Player_re(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.ExecuteUbergraph_ABP_MiniGame_CC_Player_re");

	UABP_MiniGame_CC_Player_re_C_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.QTE_End__DelegateSignature
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UABP_MiniGame_CC_Player_re_C::STATIC_QTE_End__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.QTE_End__DelegateSignature");

	UABP_MiniGame_CC_Player_re_C_QTE_End__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.QTE_Input__DelegateSignature
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           StartFlag                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::STATIC_QTE_Input__DelegateSignature(bool StartFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.QTE_Input__DelegateSignature");

	UABP_MiniGame_CC_Player_re_C_QTE_Input__DelegateSignature_Params params;
	params.StartFlag = StartFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
