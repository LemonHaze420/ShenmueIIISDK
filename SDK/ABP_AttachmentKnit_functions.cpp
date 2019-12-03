
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

// Function ABP_AttachmentKnit.ABP_AttachmentKnit_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentKnit_AnimGraphNode_SequencePlayer_651AC6884B7D23F2C14EFAA506DB54E0
// (Net, NetReliable, NetRequest, NetResponse, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void UABP_AttachmentKnit_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentKnit_AnimGraphNode_SequencePlayer_651AC6884B7D23F2C14EFAA506DB54E0()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentKnit.ABP_AttachmentKnit_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentKnit_AnimGraphNode_SequencePlayer_651AC6884B7D23F2C14EFAA506DB54E0");

	UABP_AttachmentKnit_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentKnit_AnimGraphNode_SequencePlayer_651AC6884B7D23F2C14EFAA506DB54E0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_AttachmentKnit.ABP_AttachmentKnit_C.ExecuteUbergraph_ABP_AttachmentKnit
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, Private, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_AttachmentKnit_C::STATIC_ExecuteUbergraph_ABP_AttachmentKnit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentKnit.ABP_AttachmentKnit_C.ExecuteUbergraph_ABP_AttachmentKnit");

	UABP_AttachmentKnit_C_ExecuteUbergraph_ABP_AttachmentKnit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
