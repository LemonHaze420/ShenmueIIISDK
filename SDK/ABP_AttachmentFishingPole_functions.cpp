
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

// Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.PlayAnimation
// (Exec, Native, Event, Static, Delegate, DLLImport, NetValidate)
// Parameters:
// struct FName                   AnimationName                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UABP_AttachmentFishingPole_C::STATIC_PlayAnimation(struct FName* AnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.PlayAnimation");

	UABP_AttachmentFishingPole_C_PlayAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationName != nullptr)
		*AnimationName = params.AnimationName;
}


// Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_BF0FB2974B37D4E89DE380B602C22602
// (Net, NetReliable, NetRequest, Native, Static, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void UABP_AttachmentFishingPole_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_BF0FB2974B37D4E89DE380B602C22602()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_BF0FB2974B37D4E89DE380B602C22602");

	UABP_AttachmentFishingPole_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_BF0FB2974B37D4E89DE380B602C22602_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_7BF8DB6F47F63D53BBC469A74C907226
// (Net, Exec, NetResponse, Static, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void UABP_AttachmentFishingPole_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_7BF8DB6F47F63D53BBC469A74C907226()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_7BF8DB6F47F63D53BBC469A74C907226");

	UABP_AttachmentFishingPole_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_7BF8DB6F47F63D53BBC469A74C907226_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_9EE3B18E4A4D6BA7C2E1C185D547E121
// (Exec, NetResponse, Static, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void UABP_AttachmentFishingPole_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_9EE3B18E4A4D6BA7C2E1C185D547E121()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_9EE3B18E4A4D6BA7C2E1C185D547E121");

	UABP_AttachmentFishingPole_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_9EE3B18E4A4D6BA7C2E1C185D547E121_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_83B6ECAD43EB1EA0E2CF509525893A7A
// (Exec, NetResponse, Static, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void UABP_AttachmentFishingPole_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_83B6ECAD43EB1EA0E2CF509525893A7A()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_83B6ECAD43EB1EA0E2CF509525893A7A");

	UABP_AttachmentFishingPole_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_83B6ECAD43EB1EA0E2CF509525893A7A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_C6A816BB4D74E758734856A3183E07BD
// (Net, Exec, NetResponse, Static, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void UABP_AttachmentFishingPole_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_C6A816BB4D74E758734856A3183E07BD()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_C6A816BB4D74E758734856A3183E07BD");

	UABP_AttachmentFishingPole_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_C6A816BB4D74E758734856A3183E07BD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.AnimNotify_IdleToBendPageEnd
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void UABP_AttachmentFishingPole_C::STATIC_AnimNotify_IdleToBendPageEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.AnimNotify_IdleToBendPageEnd");

	UABP_AttachmentFishingPole_C_AnimNotify_IdleToBendPageEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.RequestAnimationName
// (Native, NetResponse, Static, NetMulticast, Public, Delegate, HasOutParms, NetClient, NetValidate)
// Parameters:
// struct FName                   AnimationName                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_AttachmentFishingPole_C::STATIC_RequestAnimationName(const struct FName& AnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.RequestAnimationName");

	UABP_AttachmentFishingPole_C_RequestAnimationName_Params params;
	params.AnimationName = AnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_68385A154BC4ED72BDEDCFB4A7F29FCC
// (NetRequest, NetResponse, Static, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void UABP_AttachmentFishingPole_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_68385A154BC4ED72BDEDCFB4A7F29FCC()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_68385A154BC4ED72BDEDCFB4A7F29FCC");

	UABP_AttachmentFishingPole_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_68385A154BC4ED72BDEDCFB4A7F29FCC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.ExecuteUbergraph_ABP_AttachmentFishingPole
// (NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_AttachmentFishingPole_C::ExecuteUbergraph_ABP_AttachmentFishingPole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C.ExecuteUbergraph_ABP_AttachmentFishingPole");

	UABP_AttachmentFishingPole_C_ExecuteUbergraph_ABP_AttachmentFishingPole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
