
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

// Function ABP_BTL_SkillDisplayCharacter.ABP_BTL_SkillDisplayCharacter_C.LoopMontage
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, DLLImport, NetValidate)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_BTL_SkillDisplayCharacter_C::LoopMontage(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BTL_SkillDisplayCharacter.ABP_BTL_SkillDisplayCharacter_C.LoopMontage");

	UABP_BTL_SkillDisplayCharacter_C_LoopMontage_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_BTL_SkillDisplayCharacter.ABP_BTL_SkillDisplayCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BTL_SkillDisplayCharacter_AnimGraphNode_BlendListByBool_B7B38FBA43E8359F93B96FAB93B7FAE3
// (NetReliable, Exec, Static, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)

void UABP_BTL_SkillDisplayCharacter_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BTL_SkillDisplayCharacter_AnimGraphNode_BlendListByBool_B7B38FBA43E8359F93B96FAB93B7FAE3()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BTL_SkillDisplayCharacter.ABP_BTL_SkillDisplayCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BTL_SkillDisplayCharacter_AnimGraphNode_BlendListByBool_B7B38FBA43E8359F93B96FAB93B7FAE3");

	UABP_BTL_SkillDisplayCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BTL_SkillDisplayCharacter_AnimGraphNode_BlendListByBool_B7B38FBA43E8359F93B96FAB93B7FAE3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_BTL_SkillDisplayCharacter.ABP_BTL_SkillDisplayCharacter_C.BlueprintUpdateAnimation
// (NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_BTL_SkillDisplayCharacter_C::STATIC_BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BTL_SkillDisplayCharacter.ABP_BTL_SkillDisplayCharacter_C.BlueprintUpdateAnimation");

	UABP_BTL_SkillDisplayCharacter_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_BTL_SkillDisplayCharacter.ABP_BTL_SkillDisplayCharacter_C.ExecuteUbergraph_ABP_BTL_SkillDisplayCharacter
// (NetReliable, Exec, Event, MulticastDelegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_BTL_SkillDisplayCharacter_C::ExecuteUbergraph_ABP_BTL_SkillDisplayCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BTL_SkillDisplayCharacter.ABP_BTL_SkillDisplayCharacter_C.ExecuteUbergraph_ABP_BTL_SkillDisplayCharacter");

	UABP_BTL_SkillDisplayCharacter_C_ExecuteUbergraph_ABP_BTL_SkillDisplayCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
