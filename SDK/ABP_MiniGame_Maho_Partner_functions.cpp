
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

// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.SetAnimState
// (NetReliable, Exec, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetReliable, NetRequest, Static, NetMulticast, Public, Protected, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Maho_Partner_C::STATIC_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.Initialize");

	UABP_MiniGame_Maho_Partner_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_Partner_AnimGraphNode_BlendListByEnum_8D85DCA8407CB992FD18FB8DDDD876DF
// (Net, NetReliable, NetRequest, Event, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_Maho_Partner_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_Partner_AnimGraphNode_BlendListByEnum_8D85DCA8407CB992FD18FB8DDDD876DF()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_Partner_AnimGraphNode_BlendListByEnum_8D85DCA8407CB992FD18FB8DDDD876DF");

	UABP_MiniGame_Maho_Partner_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_Partner_AnimGraphNode_BlendListByEnum_8D85DCA8407CB992FD18FB8DDDD876DF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.BlueprintUpdateAnimation
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Maho_Partner_C::STATIC_BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.BlueprintUpdateAnimation");

	UABP_MiniGame_Maho_Partner_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.ExecuteUbergraph_ABP_MiniGame_Maho_Partner
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Maho_Partner_C::STATIC_ExecuteUbergraph_ABP_MiniGame_Maho_Partner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.ExecuteUbergraph_ABP_MiniGame_Maho_Partner");

	UABP_MiniGame_Maho_Partner_C_ExecuteUbergraph_ABP_MiniGame_Maho_Partner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.ChangeAnimState__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// TEnumAsByte<E_MiniGame_MahoPartnerState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_Maho_Partner_C::ChangeAnimState__DelegateSignature(TEnumAsByte<E_MiniGame_MahoPartnerState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.ChangeAnimState__DelegateSignature");

	UABP_MiniGame_Maho_Partner_C_ChangeAnimState__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.TransEndFallDownDispacher__DelegateSignature
// (NetReliable, Native, NetResponse, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UABP_MiniGame_Maho_Partner_C::STATIC_TransEndFallDownDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.TransEndFallDownDispacher__DelegateSignature");

	UABP_MiniGame_Maho_Partner_C_TransEndFallDownDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.ReStartPlayingDispacher__DelegateSignature
// (Native, NetResponse, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UABP_MiniGame_Maho_Partner_C::STATIC_ReStartPlayingDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.ReStartPlayingDispacher__DelegateSignature");

	UABP_MiniGame_Maho_Partner_C_ReStartPlayingDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
