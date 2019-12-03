
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

// Function ABP_NPCLead.ABP_NPCLead_C.IsReadyTalk
// (Net, NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UABP_NPCLead_C::STATIC_IsReadyTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.IsReadyTalk");

	UABP_NPCLead_C_IsReadyTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ABP_NPCLead.ABP_NPCLead_C.UpdateRootMotionMode
// (NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, Const)

void UABP_NPCLead_C::STATIC_UpdateRootMotionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.UpdateRootMotionMode");

	UABP_NPCLead_C_UpdateRootMotionMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.GetEyeRotateEmotionRate
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          EyeRotateEmotionRate           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UABP_NPCLead_C::STATIC_GetEyeRotateEmotionRate(float* EyeRotateEmotionRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.GetEyeRotateEmotionRate");

	UABP_NPCLead_C_GetEyeRotateEmotionRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EyeRotateEmotionRate != nullptr)
		*EyeRotateEmotionRate = params.EyeRotateEmotionRate;
}


// Function ABP_NPCLead.ABP_NPCLead_C.InitEyeRotateEmotion
// (Exec, Native, NetResponse, Static, Public, Delegate, NetServer, NetClient, BlueprintPure)

void UABP_NPCLead_C::STATIC_InitEyeRotateEmotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.InitEyeRotateEmotion");

	UABP_NPCLead_C_InitEyeRotateEmotion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_BlendListByBool_FA5B5D0F4E7C2829541316858C329F85
// (Exec, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_BlendListByBool_FA5B5D0F4E7C2829541316858C329F85()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_BlendListByBool_FA5B5D0F4E7C2829541316858C329F85");

	UABP_NPCLead_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_BlendListByBool_FA5B5D0F4E7C2829541316858C329F85_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_3AF8C8374B4EB99F7C57749BF5AEF8DC
// (NetRequest, Exec, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_3AF8C8374B4EB99F7C57749BF5AEF8DC()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_3AF8C8374B4EB99F7C57749BF5AEF8DC");

	UABP_NPCLead_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_3AF8C8374B4EB99F7C57749BF5AEF8DC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_BlendSpacePlayer_2AA3CAD44CEF9FD792FDEA9A24E82213
// (Net, NetReliable, Exec, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_BlendSpacePlayer_2AA3CAD44CEF9FD792FDEA9A24E82213()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_BlendSpacePlayer_2AA3CAD44CEF9FD792FDEA9A24E82213");

	UABP_NPCLead_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_BlendSpacePlayer_2AA3CAD44CEF9FD792FDEA9A24E82213_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_S3SpeedWarping_E51AB6FA453F77DC87EAC084C52FB8E7
// (Net, NetReliable, Exec, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_S3SpeedWarping_E51AB6FA453F77DC87EAC084C52FB8E7()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_S3SpeedWarping_E51AB6FA453F77DC87EAC084C52FB8E7");

	UABP_NPCLead_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_S3SpeedWarping_E51AB6FA453F77DC87EAC084C52FB8E7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_73054C4A4E7F2DA569FD679263F8A1C2
// (NetReliable, Exec, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_73054C4A4E7F2DA569FD679263F8A1C2()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_73054C4A4E7F2DA569FD679263F8A1C2");

	UABP_NPCLead_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_73054C4A4E7F2DA569FD679263F8A1C2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_S3TwoBoneIK_8E1E821842B8E73ED279E58A2706232D
// (NetReliable, Exec, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_S3TwoBoneIK_8E1E821842B8E73ED279E58A2706232D()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_S3TwoBoneIK_8E1E821842B8E73ED279E58A2706232D");

	UABP_NPCLead_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_S3TwoBoneIK_8E1E821842B8E73ED279E58A2706232D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TwoWayBlend_C22B52BC477C62526DC76BB0CCE767F5
// (Net, Exec, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TwoWayBlend_C22B52BC477C62526DC76BB0CCE767F5()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TwoWayBlend_C22B52BC477C62526DC76BB0CCE767F5");

	UABP_NPCLead_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TwoWayBlend_C22B52BC477C62526DC76BB0CCE767F5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_F7E6BCC947E20D68DA3085B4B6F7FC89
// (Net, NetRequest, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_F7E6BCC947E20D68DA3085B4B6F7FC89()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_F7E6BCC947E20D68DA3085B4B6F7FC89");

	UABP_NPCLead_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_F7E6BCC947E20D68DA3085B4B6F7FC89_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_7C421866423F2E27F085E59865D34829
// (NetRequest, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_7C421866423F2E27F085E59865D34829()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_7C421866423F2E27F085E59865D34829");

	UABP_NPCLead_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_7C421866423F2E27F085E59865D34829_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_BlendSpacePlayer_5DE1DD0449B521A37D670B8A02222F41
// (NetRequest, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_BlendSpacePlayer_5DE1DD0449B521A37D670B8A02222F41()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_BlendSpacePlayer_5DE1DD0449B521A37D670B8A02222F41");

	UABP_NPCLead_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_BlendSpacePlayer_5DE1DD0449B521A37D670B8A02222F41_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_GroundingFootL
// (Net, NetReliable, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::AnimNotify_GroundingFootL()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_GroundingFootL");

	UABP_NPCLead_C_AnimNotify_GroundingFootL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_GroundingFootR
// (Net, NetReliable, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::AnimNotify_GroundingFootR()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_GroundingFootR");

	UABP_NPCLead_C_AnimNotify_GroundingFootR_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.NotifyFootprint
// (Native, Event, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// TEnumAsByte<ENEFootType>       Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_NPCLead_C::NotifyFootprint(TEnumAsByte<ENEFootType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.NotifyFootprint");

	UABP_NPCLead_C_NotifyFootprint_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_StopStartLeft
// (Net, NetReliable, NetRequest, Exec, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::AnimNotify_StopStartLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_StopStartLeft");

	UABP_NPCLead_C_AnimNotify_StopStartLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_StopStartRight
// (NetReliable, NetRequest, Exec, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::AnimNotify_StopStartRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_StopStartRight");

	UABP_NPCLead_C_AnimNotify_StopStartRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_StateTurnAroundLeave
// (NetReliable, NetRequest, Exec, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::AnimNotify_StateTurnAroundLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_StateTurnAroundLeave");

	UABP_NPCLead_C_AnimNotify_StateTurnAroundLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_StateTurnAroundEnter
// (Net, NetRequest, Exec, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::AnimNotify_StateTurnAroundEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_StateTurnAroundEnter");

	UABP_NPCLead_C_AnimNotify_StateTurnAroundEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.BlueprintUpdateAnimation
// (Net, Native, Event, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_NPCLead_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.BlueprintUpdateAnimation");

	UABP_NPCLead_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.BlueprintInitializeAnimation
// (NetRequest, Exec, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.BlueprintInitializeAnimation");

	UABP_NPCLead_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_7015382946DC31526C0D56A3F4CB7B5B
// (Exec, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_7015382946DC31526C0D56A3F4CB7B5B()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_7015382946DC31526C0D56A3F4CB7B5B");

	UABP_NPCLead_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_7015382946DC31526C0D56A3F4CB7B5B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_B914D2154EC38D886265E9B3F485B0C2
// (Net, NetReliable, NetRequest, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_B914D2154EC38D886265E9B3F485B0C2()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_B914D2154EC38D886265E9B3F485B0C2");

	UABP_NPCLead_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_B914D2154EC38D886265E9B3F485B0C2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.BlueprintPostEvaluateAnimation
// (Net, NetReliable, NetRequest, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::BlueprintPostEvaluateAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.BlueprintPostEvaluateAnimation");

	UABP_NPCLead_C_BlueprintPostEvaluateAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_StatIdleFullyBlended
// (NetReliable, NetRequest, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::AnimNotify_StatIdleFullyBlended()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_StatIdleFullyBlended");

	UABP_NPCLead_C_AnimNotify_StatIdleFullyBlended_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_StateIdleEnd
// (NetReliable, NetRequest, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::AnimNotify_StateIdleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_StateIdleEnd");

	UABP_NPCLead_C_AnimNotify_StateIdleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_StateIdleStart
// (Net, NetRequest, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UABP_NPCLead_C::AnimNotify_StateIdleStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.AnimNotify_StateIdleStart");

	UABP_NPCLead_C_AnimNotify_StateIdleStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_NPCLead.ABP_NPCLead_C.ExecuteUbergraph_ABP_NPCLead
// (Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_NPCLead_C::STATIC_ExecuteUbergraph_ABP_NPCLead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_NPCLead.ABP_NPCLead_C.ExecuteUbergraph_ABP_NPCLead");

	UABP_NPCLead_C_ExecuteUbergraph_ABP_NPCLead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
