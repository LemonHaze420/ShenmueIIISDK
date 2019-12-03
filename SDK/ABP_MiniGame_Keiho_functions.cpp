
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

// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.IsTurning
// (Net, NetReliable, Exec, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bTurning                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Keiho_C::IsTurning(bool* bTurning)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.IsTurning");

	UABP_MiniGame_Keiho_C_IsTurning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bTurning != nullptr)
		*bTurning = params.bTurning;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.IsCounterClock
// (Net, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UABP_MiniGame_Keiho_C::STATIC_IsCounterClock()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.IsCounterClock");

	UABP_MiniGame_Keiho_C_IsCounterClock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.IsClockWise
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UABP_MiniGame_Keiho_C::STATIC_IsClockWise()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.IsClockWise");

	UABP_MiniGame_Keiho_C_IsClockWise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.SetResetAnim
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bResetAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Keiho_C::STATIC_SetResetAnim(bool bResetAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.SetResetAnim");

	UABP_MiniGame_Keiho_C_SetResetAnim_Params params;
	params.bResetAnim = bResetAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.SetTurn
// (Exec, Static, NetMulticast, Public, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bClockWiseWalk                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Keiho_C::STATIC_SetTurn(bool bClockWiseWalk)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.SetTurn");

	UABP_MiniGame_Keiho_C_SetTurn_Params params;
	params.bClockWiseWalk = bClockWiseWalk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.GetWalkOffsetRate
// (Net, NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Rate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Keiho_C::GetWalkOffsetRate(float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.GetWalkOffsetRate");

	UABP_MiniGame_Keiho_C_GetWalkOffsetRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rate != nullptr)
		*Rate = params.Rate;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.SetWalkRate
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          WalkRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Keiho_C::SetWalkRate(float WalkRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.SetWalkRate");

	UABP_MiniGame_Keiho_C_SetWalkRate_Params params;
	params.WalkRate = WalkRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.SetFailed
// (Net, NetRequest, Exec, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsFailed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Keiho_C::SetFailed(bool IsFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.SetFailed");

	UABP_MiniGame_Keiho_C_SetFailed_Params params;
	params.IsFailed = IsFailed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.UpdateWalk
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          WalkRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Keiho_C::STATIC_UpdateWalk(float WalkRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.UpdateWalk");

	UABP_MiniGame_Keiho_C_UpdateWalk_Params params;
	params.WalkRate = WalkRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.UnBindDispacher
// (NetRequest, Exec, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::UnBindDispacher()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.UnBindDispacher");

	UABP_MiniGame_Keiho_C_UnBindDispacher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_5DD33975461884065AAEEEBEFE8BCF3C
// (Net, NetReliable, Exec, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_5DD33975461884065AAEEEBEFE8BCF3C()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_5DD33975461884065AAEEEBEFE8BCF3C");

	UABP_MiniGame_Keiho_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_5DD33975461884065AAEEEBEFE8BCF3C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_A7BA5F0345FC6A6A4847DF9E965B2986
// (Net, Exec, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_A7BA5F0345FC6A6A4847DF9E965B2986()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_A7BA5F0345FC6A6A4847DF9E965B2986");

	UABP_MiniGame_Keiho_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_A7BA5F0345FC6A6A4847DF9E965B2986_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_250155304228EE743413178CB3EBA14B
// (Net, Exec, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_250155304228EE743413178CB3EBA14B()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_250155304228EE743413178CB3EBA14B");

	UABP_MiniGame_Keiho_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_250155304228EE743413178CB3EBA14B_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_6C2FEF504C2F47FB8BA462A0AEA6834E
// (Exec, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_6C2FEF504C2F47FB8BA462A0AEA6834E()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_6C2FEF504C2F47FB8BA462A0AEA6834E");

	UABP_MiniGame_Keiho_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_6C2FEF504C2F47FB8BA462A0AEA6834E_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_C82D658A44D9F4818D0DA0B4D75AD3D2
// (Exec, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_C82D658A44D9F4818D0DA0B4D75AD3D2()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_C82D658A44D9F4818D0DA0B4D75AD3D2");

	UABP_MiniGame_Keiho_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_C82D658A44D9F4818D0DA0B4D75AD3D2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.BlueprintUpdateAnimation
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Keiho_C::STATIC_BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.BlueprintUpdateAnimation");

	UABP_MiniGame_Keiho_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_MG_Keiho_LeftFoot
// (Net, NetReliable, NetRequest, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::AnimNotify_MG_Keiho_LeftFoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_MG_Keiho_LeftFoot");

	UABP_MiniGame_Keiho_C_AnimNotify_MG_Keiho_LeftFoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_MG_Keiho_RightFoot
// (NetReliable, NetRequest, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::AnimNotify_MG_Keiho_RightFoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_MG_Keiho_RightFoot");

	UABP_MiniGame_Keiho_C_AnimNotify_MG_Keiho_RightFoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_7B8DA4A84FF4C3556D26419D09F3E377
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_7B8DA4A84FF4C3556D26419D09F3E377()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_7B8DA4A84FF4C3556D26419D09F3E377");

	UABP_MiniGame_Keiho_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_7B8DA4A84FF4C3556D26419D09F3E377_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_TransStartWalkFromFailed1
// (NetRequest, Exec, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::AnimNotify_TransStartWalkFromFailed1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_TransStartWalkFromFailed1");

	UABP_MiniGame_Keiho_C_AnimNotify_TransStartWalkFromFailed1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_TransEndWalkFromFailed1
// (NetRequest, Exec, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::AnimNotify_TransEndWalkFromFailed1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_TransEndWalkFromFailed1");

	UABP_MiniGame_Keiho_C_AnimNotify_TransEndWalkFromFailed1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_1E519ABA4F1A0133D31411BFF2EF1D81
// (Net, NetReliable, Exec, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_1E519ABA4F1A0133D31411BFF2EF1D81()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_1E519ABA4F1A0133D31411BFF2EF1D81");

	UABP_MiniGame_Keiho_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_1E519ABA4F1A0133D31411BFF2EF1D81_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_MG_Keiho_LeftFootStart
// (Net, NetReliable, Exec, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::AnimNotify_MG_Keiho_LeftFootStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_MG_Keiho_LeftFootStart");

	UABP_MiniGame_Keiho_C_AnimNotify_MG_Keiho_LeftFootStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_MG_Keiho_RightFootStart
// (NetReliable, Exec, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::AnimNotify_MG_Keiho_RightFootStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_MG_Keiho_RightFootStart");

	UABP_MiniGame_Keiho_C_AnimNotify_MG_Keiho_RightFootStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_MG_Keiho_LeftFootInput
// (NetReliable, Exec, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::AnimNotify_MG_Keiho_LeftFootInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_MG_Keiho_LeftFootInput");

	UABP_MiniGame_Keiho_C_AnimNotify_MG_Keiho_LeftFootInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_MG_Keiho_RightFootInput
// (NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::AnimNotify_MG_Keiho_RightFootInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_MG_Keiho_RightFootInput");

	UABP_MiniGame_Keiho_C_AnimNotify_MG_Keiho_RightFootInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_B75768E040DDF530660724A1E3981977
// (NetReliable, NetRequest, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_B75768E040DDF530660724A1E3981977()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_B75768E040DDF530660724A1E3981977");

	UABP_MiniGame_Keiho_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_B75768E040DDF530660724A1E3981977_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_TransitionEndToTurnClockWise
// (Net, NetRequest, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::AnimNotify_TransitionEndToTurnClockWise()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_TransitionEndToTurnClockWise");

	UABP_MiniGame_Keiho_C_AnimNotify_TransitionEndToTurnClockWise_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_TransitionEndToTurnCounter
// (Net, NetRequest, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::AnimNotify_TransitionEndToTurnCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_TransitionEndToTurnCounter");

	UABP_MiniGame_Keiho_C_AnimNotify_TransitionEndToTurnCounter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_TransitionStartToStart
// (NetRequest, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::AnimNotify_TransitionStartToStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_TransitionStartToStart");

	UABP_MiniGame_Keiho_C_AnimNotify_TransitionStartToStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.BlueprintInitializeAnimation
// (NetRequest, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.BlueprintInitializeAnimation");

	UABP_MiniGame_Keiho_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_GroundingFootL
// (Net, NetReliable, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::AnimNotify_GroundingFootL()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_GroundingFootL");

	UABP_MiniGame_Keiho_C_AnimNotify_GroundingFootL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_GroundingFootR
// (Net, NetReliable, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::AnimNotify_GroundingFootR()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_GroundingFootR");

	UABP_MiniGame_Keiho_C_AnimNotify_GroundingFootR_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_TransitionEndToClockWise
// (NetReliable, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::AnimNotify_TransitionEndToClockWise()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_TransitionEndToClockWise");

	UABP_MiniGame_Keiho_C_AnimNotify_TransitionEndToClockWise_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_TransitionEndToCounterClock
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::AnimNotify_TransitionEndToCounterClock()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.AnimNotify_TransitionEndToCounterClock");

	UABP_MiniGame_Keiho_C_AnimNotify_TransitionEndToCounterClock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.ExecuteUbergraph_ABP_MiniGame_Keiho
// (Exec, MulticastDelegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Keiho_C::ExecuteUbergraph_ABP_MiniGame_Keiho(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.ExecuteUbergraph_ABP_MiniGame_Keiho");

	UABP_MiniGame_Keiho_C_ExecuteUbergraph_ABP_MiniGame_Keiho_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EventRyoUpdateFade__DelegateSignature
// (NetReliable, Exec, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::STATIC_EventRyoUpdateFade__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EventRyoUpdateFade__DelegateSignature");

	UABP_MiniGame_Keiho_C_EventRyoUpdateFade__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EventFootPrintR__DelegateSignature
// (Net, NetReliable, Exec, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::STATIC_EventFootPrintR__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EventFootPrintR__DelegateSignature");

	UABP_MiniGame_Keiho_C_EventFootPrintR__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EventFootPrintL__DelegateSignature
// (Net, NetReliable, Exec, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::STATIC_EventFootPrintL__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.EventFootPrintL__DelegateSignature");

	UABP_MiniGame_Keiho_C_EventFootPrintL__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.LeftFootInputStartDispacher__DelegateSignature
// (Net, NetReliable, Exec, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::STATIC_LeftFootInputStartDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.LeftFootInputStartDispacher__DelegateSignature");

	UABP_MiniGame_Keiho_C_LeftFootInputStartDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.RightFootInputStartDispacher__DelegateSignature
// (Net, NetReliable, Exec, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::STATIC_RightFootInputStartDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.RightFootInputStartDispacher__DelegateSignature");

	UABP_MiniGame_Keiho_C_RightFootInputStartDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.LeftFootStartDispacher__DelegateSignature
// (NetReliable, Exec, Event, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::STATIC_LeftFootStartDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.LeftFootStartDispacher__DelegateSignature");

	UABP_MiniGame_Keiho_C_LeftFootStartDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.RightFootStartDispacher__DelegateSignature
// (NetRequest, Exec, Native, Event, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Keiho_C::STATIC_RightFootStartDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.RightFootStartDispacher__DelegateSignature");

	UABP_MiniGame_Keiho_C_RightFootStartDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.FailedEndDispacher__DelegateSignature
// (Net, Exec, Native, Event, NetResponse, Static, Private, Delegate, HasDefaults, NetClient, Const)

void UABP_MiniGame_Keiho_C::STATIC_FailedEndDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.FailedEndDispacher__DelegateSignature");

	UABP_MiniGame_Keiho_C_FailedEndDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.LeftFootLandedDispacher__DelegateSignature
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_Keiho_C::STATIC_LeftFootLandedDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.LeftFootLandedDispacher__DelegateSignature");

	UABP_MiniGame_Keiho_C_LeftFootLandedDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.RightFootLandedDipatcher__DelegateSignature
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_Keiho_C::STATIC_RightFootLandedDipatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C.RightFootLandedDipatcher__DelegateSignature");

	UABP_MiniGame_Keiho_C_RightFootLandedDipatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
