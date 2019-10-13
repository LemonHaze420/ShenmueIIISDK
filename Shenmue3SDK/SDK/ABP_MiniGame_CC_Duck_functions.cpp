
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

// Function ABP_MiniGame_CC_Duck.ABP_MiniGame_CC_Duck_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Duck_AnimGraphNode_BlendListByEnum_3F97BCD44582ACD8DB7DA8BC89A37FCD
// (BlueprintEvent)

void UABP_MiniGame_CC_Duck_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Duck_AnimGraphNode_BlendListByEnum_3F97BCD44582ACD8DB7DA8BC89A37FCD()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Duck.ABP_MiniGame_CC_Duck_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Duck_AnimGraphNode_BlendListByEnum_3F97BCD44582ACD8DB7DA8BC89A37FCD");

	UABP_MiniGame_CC_Duck_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Duck_AnimGraphNode_BlendListByEnum_3F97BCD44582ACD8DB7DA8BC89A37FCD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Duck.ABP_MiniGame_CC_Duck_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Duck_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Duck.ABP_MiniGame_CC_Duck_C.BlueprintUpdateAnimation");

	UABP_MiniGame_CC_Duck_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Duck.ABP_MiniGame_CC_Duck_C.ExecuteUbergraph_ABP_MiniGame_CC_Duck
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Duck_C::ExecuteUbergraph_ABP_MiniGame_CC_Duck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Duck.ABP_MiniGame_CC_Duck_C.ExecuteUbergraph_ABP_MiniGame_CC_Duck");

	UABP_MiniGame_CC_Duck_C_ExecuteUbergraph_ABP_MiniGame_CC_Duck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
