
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

// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.SetAnimState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGame_MahoPartnerState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Maho_Partner_C::SetAnimState(TEnumAsByte<E_MiniGame_MahoPartnerState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.SetAnimState");

	UABP_MiniGame_Maho_Partner_C_SetAnimState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_Maho_Partner_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.Initialize");

	UABP_MiniGame_Maho_Partner_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_Partner_AnimGraphNode_BlendListByEnum_8D85DCA8407CB992FD18FB8DDDD876DF
// (BlueprintEvent)

void UABP_MiniGame_Maho_Partner_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_Partner_AnimGraphNode_BlendListByEnum_8D85DCA8407CB992FD18FB8DDDD876DF()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_Partner_AnimGraphNode_BlendListByEnum_8D85DCA8407CB992FD18FB8DDDD876DF");

	UABP_MiniGame_Maho_Partner_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_Partner_AnimGraphNode_BlendListByEnum_8D85DCA8407CB992FD18FB8DDDD876DF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Maho_Partner_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.BlueprintUpdateAnimation");

	UABP_MiniGame_Maho_Partner_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.ExecuteUbergraph_ABP_MiniGame_Maho_Partner
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Maho_Partner_C::ExecuteUbergraph_ABP_MiniGame_Maho_Partner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.ExecuteUbergraph_ABP_MiniGame_Maho_Partner");

	UABP_MiniGame_Maho_Partner_C_ExecuteUbergraph_ABP_MiniGame_Maho_Partner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.ChangeAnimState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGame_MahoPartnerState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Maho_Partner_C::ChangeAnimState__DelegateSignature(TEnumAsByte<E_MiniGame_MahoPartnerState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.ChangeAnimState__DelegateSignature");

	UABP_MiniGame_Maho_Partner_C_ChangeAnimState__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.TransEndFallDownDispacher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_Maho_Partner_C::TransEndFallDownDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.TransEndFallDownDispacher__DelegateSignature");

	UABP_MiniGame_Maho_Partner_C_TransEndFallDownDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.ReStartPlayingDispacher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UABP_MiniGame_Maho_Partner_C::ReStartPlayingDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.ReStartPlayingDispacher__DelegateSignature");

	UABP_MiniGame_Maho_Partner_C_ReStartPlayingDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
