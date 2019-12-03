
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

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.SetIdleSequencePlayRate
// (NetRequest, Native, NetResponse, Static, Public, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Sunken_C::STATIC_SetIdleSequencePlayRate(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.SetIdleSequencePlayRate");

	UABP_MiniGame_Sunken_C_SetIdleSequencePlayRate_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.SetEyeCloseBlend
// (NetRequest, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Sunken_C::SetEyeCloseBlend(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.SetEyeCloseBlend");

	UABP_MiniGame_Sunken_C_SetEyeCloseBlend_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.IsIdle
// (Net, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UABP_MiniGame_Sunken_C::IsIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.IsIdle");

	UABP_MiniGame_Sunken_C_IsIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.GetCurrentIdleRatio
// (NetReliable, Exec, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          CurrentIdleRatio               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Sunken_C::GetCurrentIdleRatio(float* CurrentIdleRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.GetCurrentIdleRatio");

	UABP_MiniGame_Sunken_C_GetCurrentIdleRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentIdleRatio != nullptr)
		*CurrentIdleRatio = params.CurrentIdleRatio;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.UpdateElapsedTime
// (Net, NetRequest, Event, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Sunken_C::UpdateElapsedTime(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.UpdateElapsedTime");

	UABP_MiniGame_Sunken_C_UpdateElapsedTime_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.Initialize
// (NetReliable, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UABP_MiniGame_Sunken_C::STATIC_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.Initialize");

	UABP_MiniGame_Sunken_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.SetAnimData
// (NetReliable, Exec, Native, Event, NetResponse, Static, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimSequenceBase*       AnimPunchImpact                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase*       AnimPunchIdle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase*       AnimReturn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          IdleSequencePlayRate           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PunchPlayRate                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Sunken_C::STATIC_SetAnimData(class UAnimSequenceBase* AnimPunchImpact, class UAnimSequenceBase* AnimPunchIdle, class UAnimSequenceBase* AnimReturn, float IdleSequencePlayRate, float PunchPlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.SetAnimData");

	UABP_MiniGame_Sunken_C_SetAnimData_Params params;
	params.AnimPunchImpact = AnimPunchImpact;
	params.AnimPunchIdle = AnimPunchIdle;
	params.AnimReturn = AnimReturn;
	params.IdleSequencePlayRate = IdleSequencePlayRate;
	params.PunchPlayRate = PunchPlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.IsPunch
// (Net, Exec, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bPunch                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Sunken_C::IsPunch(bool* bPunch)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.IsPunch");

	UABP_MiniGame_Sunken_C_IsPunch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPunch != nullptr)
		*bPunch = params.bPunch;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_C74B94404D472843971E329619833DA1
// (Exec, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Sunken_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_C74B94404D472843971E329619833DA1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_C74B94404D472843971E329619833DA1");

	UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_C74B94404D472843971E329619833DA1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_F487C94E413F6AEE1C8F98B2B2343752
// (Exec, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Sunken_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_F487C94E413F6AEE1C8F98B2B2343752()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_F487C94E413F6AEE1C8F98B2B2343752");

	UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_F487C94E413F6AEE1C8F98B2B2343752_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_83A14FA34535B32BDFD0E69BC583103F
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Sunken_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_83A14FA34535B32BDFD0E69BC583103F()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_83A14FA34535B32BDFD0E69BC583103F");

	UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_83A14FA34535B32BDFD0E69BC583103F_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_AA63A610487D44116E232984D6B37451
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Sunken_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_AA63A610487D44116E232984D6B37451()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_AA63A610487D44116E232984D6B37451");

	UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_AA63A610487D44116E232984D6B37451_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LookAt_D4BB17B449090BA3453372AC6F1CB26E
// (NetReliable, NetRequest, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Sunken_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LookAt_D4BB17B449090BA3453372AC6F1CB26E()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LookAt_D4BB17B449090BA3453372AC6F1CB26E");

	UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LookAt_D4BB17B449090BA3453372AC6F1CB26E_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LookAt_94B969D2441BBD9C67075390884344E5
// (NetReliable, NetRequest, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Sunken_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LookAt_94B969D2441BBD9C67075390884344E5()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LookAt_94B969D2441BBD9C67075390884344E5");

	UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LookAt_94B969D2441BBD9C67075390884344E5_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LayeredBoneBlend_701B519046BD4CA6C06B13AD286B66A5
// (Net, NetRequest, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Sunken_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LayeredBoneBlend_701B519046BD4CA6C06B13AD286B66A5()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LayeredBoneBlend_701B519046BD4CA6C06B13AD286B66A5");

	UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LayeredBoneBlend_701B519046BD4CA6C06B13AD286B66A5_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_5DA748424A14038F907AAAA229D1F70E
// (Net, NetReliable, Exec, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Sunken_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_5DA748424A14038F907AAAA229D1F70E()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_5DA748424A14038F907AAAA229D1F70E");

	UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_5DA748424A14038F907AAAA229D1F70E_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_1A0318E6466B55B60ED7AE9F6C1502D2
// (Net, NetReliable, NetRequest, Exec, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Sunken_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_1A0318E6466B55B60ED7AE9F6C1502D2()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_1A0318E6466B55B60ED7AE9F6C1502D2");

	UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_1A0318E6466B55B60ED7AE9F6C1502D2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.BlueprintUpdateAnimation
// (Net, NetRequest, Exec, Native, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Sunken_C::STATIC_BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.BlueprintUpdateAnimation");

	UABP_MiniGame_Sunken_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.BlueprintBeginPlay
// (NetReliable, NetRequest, Exec, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Sunken_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.BlueprintBeginPlay");

	UABP_MiniGame_Sunken_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.AnimNotify_TransEndReturnFromPunch
// (Net, NetRequest, Exec, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Sunken_C::AnimNotify_TransEndReturnFromPunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.AnimNotify_TransEndReturnFromPunch");

	UABP_MiniGame_Sunken_C_AnimNotify_TransEndReturnFromPunch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.AnimNotify_TransEndIdleFromReturn
// (Net, NetRequest, Exec, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Sunken_C::AnimNotify_TransEndIdleFromReturn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.AnimNotify_TransEndIdleFromReturn");

	UABP_MiniGame_Sunken_C_AnimNotify_TransEndIdleFromReturn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.AnimNotify_TransStartIdleFromReturn
// (NetRequest, Exec, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Sunken_C::AnimNotify_TransStartIdleFromReturn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.AnimNotify_TransStartIdleFromReturn");

	UABP_MiniGame_Sunken_C_AnimNotify_TransStartIdleFromReturn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.AnimNotify_MoveStart
// (NetRequest, Exec, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Sunken_C::AnimNotify_MoveStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.AnimNotify_MoveStart");

	UABP_MiniGame_Sunken_C_AnimNotify_MoveStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.ExecuteUbergraph_ABP_MiniGame_Sunken
// (NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Sunken_C::STATIC_ExecuteUbergraph_ABP_MiniGame_Sunken(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.ExecuteUbergraph_ABP_MiniGame_Sunken");

	UABP_MiniGame_Sunken_C_ExecuteUbergraph_ABP_MiniGame_Sunken_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.Dispatcher_PunchEnd__DelegateSignature
// (Net, NetReliable, Event, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UABP_MiniGame_Sunken_C::Dispatcher_PunchEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.Dispatcher_PunchEnd__DelegateSignature");

	UABP_MiniGame_Sunken_C_Dispatcher_PunchEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
