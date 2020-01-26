
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

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.IsPlayCatchAnim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::PlayCatchAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.PlayCatchAnim");

	UABP_MiniGame_CC_Player_re_C_PlayCatchAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.UpdatePA
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::UpdatePA()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.UpdatePA");

	UABP_MiniGame_CC_Player_re_C_UpdatePA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.RInterpToQ
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Current                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                RetRot                         (Parm, OutParm, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::RInterpToQ(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, struct FRotator* RetRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.RInterpToQ");

	UABP_MiniGame_CC_Player_re_C_RInterpToQ_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetRot != nullptr)
		*RetRot = params.RetRot;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.InitFunc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::InitFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.InitFunc");

	UABP_MiniGame_CC_Player_re_C_InitFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.MakeTargetRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                ReturnRot                      (Parm, OutParm, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::MakeTargetRotation(struct FRotator* ReturnRot)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::GOMA8_OtherFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.GOMA8_OtherFunc");

	UABP_MiniGame_CC_Player_re_C_GOMA8_OtherFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.StopMontageWrapper
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::StopMontageWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.StopMontageWrapper");

	UABP_MiniGame_CC_Player_re_C_StopMontageWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.TurnInPlaceCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          RotationRate                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::SetCharacterRotation(const struct FRotator& TargetRotation, float RotationRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.SetCharacterRotation");

	UABP_MiniGame_CC_Player_re_C_SetCharacterRotation_Params params;
	params.TargetRotation = TargetRotation;
	params.RotationRate = RotationRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_1072A9C2421FEC08965D54A159409CA0
// (BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_1072A9C2421FEC08965D54A159409CA0()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_1072A9C2421FEC08965D54A159409CA0");

	UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_1072A9C2421FEC08965D54A159409CA0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_6F4D1FD141704E98769B6AA1B6AE6186
// (BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_6F4D1FD141704E98769B6AA1B6AE6186()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_6F4D1FD141704E98769B6AA1B6AE6186");

	UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_6F4D1FD141704E98769B6AA1B6AE6186_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_45F2B9AB47E730ED2E576EA6B34048D2
// (BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_45F2B9AB47E730ED2E576EA6B34048D2()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_45F2B9AB47E730ED2E576EA6B34048D2");

	UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_45F2B9AB47E730ED2E576EA6B34048D2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_8C5FDAF346797F8B3BB06A871FB2EBC8
// (BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_8C5FDAF346797F8B3BB06A871FB2EBC8()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_8C5FDAF346797F8B3BB06A871FB2EBC8");

	UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_8C5FDAF346797F8B3BB06A871FB2EBC8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_BlendSpacePlayer_81360C884437633463479E95ADE5F452
// (BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_BlendSpacePlayer_81360C884437633463479E95ADE5F452()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_BlendSpacePlayer_81360C884437633463479E95ADE5F452");

	UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_BlendSpacePlayer_81360C884437633463479E95ADE5F452_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_RotateRootBone_E738FA8E4DAE1C5595DA2FAE77DAD20E
// (BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_RotateRootBone_E738FA8E4DAE1C5595DA2FAE77DAD20E()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_RotateRootBone_E738FA8E4DAE1C5595DA2FAE77DAD20E");

	UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_RotateRootBone_E738FA8E4DAE1C5595DA2FAE77DAD20E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_FinishWait
// (BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::AnimNotify_QTE_FinishWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_FinishWait");

	UABP_MiniGame_CC_Player_re_C_AnimNotify_QTE_FinishWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_InputStart
// (BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::AnimNotify_QTE_InputStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_InputStart");

	UABP_MiniGame_CC_Player_re_C_AnimNotify_QTE_InputStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_InputEnd
// (BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::AnimNotify_QTE_InputEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_InputEnd");

	UABP_MiniGame_CC_Player_re_C_AnimNotify_QTE_InputEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_End
// (BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::AnimNotify_QTE_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_End");

	UABP_MiniGame_CC_Player_re_C_AnimNotify_QTE_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.BlueprintUpdateAnimation");

	UABP_MiniGame_CC_Player_re_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_CanRotate
// (BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::AnimNotify_CanRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_CanRotate");

	UABP_MiniGame_CC_Player_re_C_AnimNotify_CanRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.OnJump
// (BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::OnJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.OnJump");

	UABP_MiniGame_CC_Player_re_C_OnJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.PauseMotion
// (BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::PauseMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.PauseMotion");

	UABP_MiniGame_CC_Player_re_C_PauseMotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.SetPlayRate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::SetPlayRate(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.SetPlayRate");

	UABP_MiniGame_CC_Player_re_C_SetPlayRate_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.BlueprintInitializeAnimation");

	UABP_MiniGame_CC_Player_re_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.SetForceIdle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForceIdle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::SetForceIdle(bool bForceIdle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.SetForceIdle");

	UABP_MiniGame_CC_Player_re_C_SetForceIdle_Params params;
	params.bForceIdle = bForceIdle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_GroundingFootL
// (BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::AnimNotify_GroundingFootL()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_GroundingFootL");

	UABP_MiniGame_CC_Player_re_C_AnimNotify_GroundingFootL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_GroundingFootR
// (BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::AnimNotify_GroundingFootR()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_GroundingFootR");

	UABP_MiniGame_CC_Player_re_C_AnimNotify_GroundingFootR_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.ExecuteUbergraph_ABP_MiniGame_CC_Player_re
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::ExecuteUbergraph_ABP_MiniGame_CC_Player_re(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.ExecuteUbergraph_ABP_MiniGame_CC_Player_re");

	UABP_MiniGame_CC_Player_re_C_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.QTE_End__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_CC_Player_re_C::QTE_End__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.QTE_End__DelegateSignature");

	UABP_MiniGame_CC_Player_re_C_QTE_End__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.QTE_Input__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StartFlag                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Player_re_C::QTE_Input__DelegateSignature(bool StartFlag)
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
