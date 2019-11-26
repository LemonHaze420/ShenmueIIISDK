
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ABP_Attachment_Sausage8.ABP_Attachment_Sausage8_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Attachment_Sausage8_AnimGraphNode_SequencePlayer_0DBFD8644696856D2FD246B8AA2661CC
// (BlueprintEvent)

void UABP_Attachment_Sausage8_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Attachment_Sausage8_AnimGraphNode_SequencePlayer_0DBFD8644696856D2FD246B8AA2661CC()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Attachment_Sausage8.ABP_Attachment_Sausage8_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Attachment_Sausage8_AnimGraphNode_SequencePlayer_0DBFD8644696856D2FD246B8AA2661CC");

	UABP_Attachment_Sausage8_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Attachment_Sausage8_AnimGraphNode_SequencePlayer_0DBFD8644696856D2FD246B8AA2661CC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Attachment_Sausage8.ABP_Attachment_Sausage8_C.ExecuteUbergraph_ABP_Attachment_Sausage8
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Attachment_Sausage8_C::ExecuteUbergraph_ABP_Attachment_Sausage8(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Attachment_Sausage8.ABP_Attachment_Sausage8_C.ExecuteUbergraph_ABP_Attachment_Sausage8");

	UABP_Attachment_Sausage8_C_ExecuteUbergraph_ABP_Attachment_Sausage8_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
