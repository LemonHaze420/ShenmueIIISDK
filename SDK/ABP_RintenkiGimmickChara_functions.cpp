
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

// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.SetIdleWeight
// (Net, NetReliable, Event, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InWeight                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_RintenkiGimmickChara_C::SetIdleWeight(float InWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.SetIdleWeight");

	UABP_RintenkiGimmickChara_C_SetIdleWeight_Params params;
	params.InWeight = InWeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.SetIdleState
// (Exec, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_RintenkiGimmickChara_C::STATIC_SetIdleState(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.SetIdleState");

	UABP_RintenkiGimmickChara_C_SetIdleState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.SetIdleAnimSequence
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class UAnimSequence*           NewAnimSequence                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_RintenkiGimmickChara_C::STATIC_SetIdleAnimSequence(class UAnimSequence* NewAnimSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.SetIdleAnimSequence");

	UABP_RintenkiGimmickChara_C_SetIdleAnimSequence_Params params;
	params.NewAnimSequence = NewAnimSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.UpdateIdleWeight
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, Private, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_RintenkiGimmickChara_C::UpdateIdleWeight(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.UpdateIdleWeight");

	UABP_RintenkiGimmickChara_C_UpdateIdleWeight_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.UpdateRotateAnimMontage
// (Exec, Native, NetResponse, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          PositionRate                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_RintenkiGimmickChara_C::UpdateRotateAnimMontage(float PositionRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.UpdateRotateAnimMontage");

	UABP_RintenkiGimmickChara_C_UpdateRotateAnimMontage_Params params;
	params.PositionRate = PositionRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.PlayRotateAnimMontage
// (NetRequest, Exec, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            NewMontage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_RintenkiGimmickChara_C::PlayRotateAnimMontage(class UAnimMontage* NewMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.PlayRotateAnimMontage");

	UABP_RintenkiGimmickChara_C_PlayRotateAnimMontage_Params params;
	params.NewMontage = NewMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RintenkiGimmickChara_AnimGraphNode_SequencePlayer_A1BB06EF4FB8475EDDEC558A133C8C62
// (NetReliable, Exec, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UABP_RintenkiGimmickChara_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RintenkiGimmickChara_AnimGraphNode_SequencePlayer_A1BB06EF4FB8475EDDEC558A133C8C62()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RintenkiGimmickChara_AnimGraphNode_SequencePlayer_A1BB06EF4FB8475EDDEC558A133C8C62");

	UABP_RintenkiGimmickChara_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RintenkiGimmickChara_AnimGraphNode_SequencePlayer_A1BB06EF4FB8475EDDEC558A133C8C62_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RintenkiGimmickChara_AnimGraphNode_TwoWayBlend_5478427E46EAF6BF9051E7B275380609
// (NetReliable, Exec, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UABP_RintenkiGimmickChara_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RintenkiGimmickChara_AnimGraphNode_TwoWayBlend_5478427E46EAF6BF9051E7B275380609()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RintenkiGimmickChara_AnimGraphNode_TwoWayBlend_5478427E46EAF6BF9051E7B275380609");

	UABP_RintenkiGimmickChara_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RintenkiGimmickChara_AnimGraphNode_TwoWayBlend_5478427E46EAF6BF9051E7B275380609_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.BlueprintUpdateAnimation
// (NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_RintenkiGimmickChara_C::STATIC_BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.BlueprintUpdateAnimation");

	UABP_RintenkiGimmickChara_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.ExecuteUbergraph_ABP_RintenkiGimmickChara
// (Net, NetRequest, Event, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_RintenkiGimmickChara_C::ExecuteUbergraph_ABP_RintenkiGimmickChara(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.ExecuteUbergraph_ABP_RintenkiGimmickChara");

	UABP_RintenkiGimmickChara_C_ExecuteUbergraph_ABP_RintenkiGimmickChara_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
