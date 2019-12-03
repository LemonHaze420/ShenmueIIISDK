
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

// Function ABP_MiniGame_CC_Duck.ABP_MiniGame_CC_Duck_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Duck_AnimGraphNode_BlendListByEnum_3F97BCD44582ACD8DB7DA8BC89A37FCD
// (NetReliable, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, NetClient)

void UABP_MiniGame_CC_Duck_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Duck_AnimGraphNode_BlendListByEnum_3F97BCD44582ACD8DB7DA8BC89A37FCD()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Duck.ABP_MiniGame_CC_Duck_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Duck_AnimGraphNode_BlendListByEnum_3F97BCD44582ACD8DB7DA8BC89A37FCD");

	UABP_MiniGame_CC_Duck_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Duck_AnimGraphNode_BlendListByEnum_3F97BCD44582ACD8DB7DA8BC89A37FCD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Duck.ABP_MiniGame_CC_Duck_C.BlueprintUpdateAnimation
// (Net, NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Duck_C::STATIC_BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_CC_Duck.ABP_MiniGame_CC_Duck_C.BlueprintUpdateAnimation");

	UABP_MiniGame_CC_Duck_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_CC_Duck.ABP_MiniGame_CC_Duck_C.ExecuteUbergraph_ABP_MiniGame_CC_Duck
// (NetRequest, Exec, Event, NetResponse, Static, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_CC_Duck_C::STATIC_ExecuteUbergraph_ABP_MiniGame_CC_Duck(int EntryPoint)
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
