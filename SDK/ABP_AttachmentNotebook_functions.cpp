
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

// Function ABP_AttachmentNotebook.ABP_AttachmentNotebook_C.PlayAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AnimationName                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UABP_AttachmentNotebook_C::PlayAnimation(struct FName* AnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentNotebook.ABP_AttachmentNotebook_C.PlayAnimation");

	UABP_AttachmentNotebook_C_PlayAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationName != nullptr)
		*AnimationName = params.AnimationName;
}


// Function ABP_AttachmentNotebook.ABP_AttachmentNotebook_C.AnimNotify_IdleToTurnPageEnd
// (BlueprintCallable, BlueprintEvent)

void UABP_AttachmentNotebook_C::AnimNotify_IdleToTurnPageEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentNotebook.ABP_AttachmentNotebook_C.AnimNotify_IdleToTurnPageEnd");

	UABP_AttachmentNotebook_C_AnimNotify_IdleToTurnPageEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_AttachmentNotebook.ABP_AttachmentNotebook_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_AttachmentNotebook_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentNotebook.ABP_AttachmentNotebook_C.BlueprintInitializeAnimation");

	UABP_AttachmentNotebook_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_AttachmentNotebook.ABP_AttachmentNotebook_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentNotebook_AnimGraphNode_TransitionResult_6E78405C4EB432D0578C34874CB96C1F
// (BlueprintEvent)

void UABP_AttachmentNotebook_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentNotebook_AnimGraphNode_TransitionResult_6E78405C4EB432D0578C34874CB96C1F()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentNotebook.ABP_AttachmentNotebook_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentNotebook_AnimGraphNode_TransitionResult_6E78405C4EB432D0578C34874CB96C1F");

	UABP_AttachmentNotebook_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentNotebook_AnimGraphNode_TransitionResult_6E78405C4EB432D0578C34874CB96C1F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_AttachmentNotebook.ABP_AttachmentNotebook_C.RequestAnimationName
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AnimationName                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_AttachmentNotebook_C::RequestAnimationName(const struct FName& AnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentNotebook.ABP_AttachmentNotebook_C.RequestAnimationName");

	UABP_AttachmentNotebook_C_RequestAnimationName_Params params;
	params.AnimationName = AnimationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_AttachmentNotebook.ABP_AttachmentNotebook_C.ExecuteUbergraph_ABP_AttachmentNotebook
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_AttachmentNotebook_C::ExecuteUbergraph_ABP_AttachmentNotebook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentNotebook.ABP_AttachmentNotebook_C.ExecuteUbergraph_ABP_AttachmentNotebook");

	UABP_AttachmentNotebook_C_ExecuteUbergraph_ABP_AttachmentNotebook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
