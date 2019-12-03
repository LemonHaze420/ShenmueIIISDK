
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

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.SetBlockAction
// (Net, NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bBlockAction                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_SupportNPC_C::STATIC_SetBlockAction(bool bBlockAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.SetBlockAction");

	UABP_MiniGame_SupportNPC_C_SetBlockAction_Params params;
	params.bBlockAction = bBlockAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.IsBlockAction
// (Net, Exec, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// bool                           IsAction                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_SupportNPC_C::STATIC_IsBlockAction(bool* IsAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.IsBlockAction");

	UABP_MiniGame_SupportNPC_C_IsBlockAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAction != nullptr)
		*IsAction = params.IsAction;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.ChangeAnim
// (NetReliable, Exec, Native, Event, NetResponse, Static, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class UAnimSequenceBase*       Anim                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UABP_MiniGame_SupportNPC_C::STATIC_ChangeAnim(class UAnimSequenceBase* Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.ChangeAnim");

	UABP_MiniGame_SupportNPC_C_ChangeAnim_Params params;
	params.Anim = Anim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.SetLookAtLocation
// (NetRequest, Exec, Native, MulticastDelegate, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// struct FVector                 LookAtLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UABP_MiniGame_SupportNPC_C::SetLookAtLocation(const struct FVector& LookAtLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.SetLookAtLocation");

	UABP_MiniGame_SupportNPC_C_SetLookAtLocation_Params params;
	params.LookAtLocation = LookAtLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.Finalize
// (NetReliable, Exec, Native, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_SupportNPC_C::STATIC_Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.Finalize");

	UABP_MiniGame_SupportNPC_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.Initialize
// (NetRequest, Exec, Event, NetResponse, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimSequenceBase*       AnimIdle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_SupportNPC_C::Initialize(class UAnimSequenceBase* AnimIdle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.Initialize");

	UABP_MiniGame_SupportNPC_C_Initialize_Params params;
	params.AnimIdle = AnimIdle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_494534884C266C388A80F3B7BFCE5829
// (NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_SupportNPC_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_494534884C266C388A80F3B7BFCE5829()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_494534884C266C388A80F3B7BFCE5829");

	UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_494534884C266C388A80F3B7BFCE5829_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_BlendListByInt_BA32322944E76EDA95F923A3E0FEA094
// (NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_SupportNPC_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_BlendListByInt_BA32322944E76EDA95F923A3E0FEA094()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_BlendListByInt_BA32322944E76EDA95F923A3E0FEA094");

	UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_BlendListByInt_BA32322944E76EDA95F923A3E0FEA094_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_99AEF4FC4870A13BA2259F9BE265EC01
// (Net, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_SupportNPC_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_99AEF4FC4870A13BA2259F9BE265EC01()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_99AEF4FC4870A13BA2259F9BE265EC01");

	UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_99AEF4FC4870A13BA2259F9BE265EC01_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_6396293C4212A647DB5E98BE4BDF7D90
// (NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_SupportNPC_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_6396293C4212A647DB5E98BE4BDF7D90()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_6396293C4212A647DB5E98BE4BDF7D90");

	UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_6396293C4212A647DB5E98BE4BDF7D90_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_FE78588F42E05D1601917A85D5EF0E00
// (Net, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_SupportNPC_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_FE78588F42E05D1601917A85D5EF0E00()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_FE78588F42E05D1601917A85D5EF0E00");

	UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_FE78588F42E05D1601917A85D5EF0E00_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_TransitionResult_0C943C0E467DD3B6B51E038DBCFD50DC
// (Net, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_SupportNPC_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_TransitionResult_0C943C0E467DD3B6B51E038DBCFD50DC()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_TransitionResult_0C943C0E467DD3B6B51E038DBCFD50DC");

	UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_TransitionResult_0C943C0E467DD3B6B51E038DBCFD50DC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_LookAt_F9516E7D4BA35AECDBAA789D688B23AF
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_SupportNPC_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_LookAt_F9516E7D4BA35AECDBAA789D688B23AF()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_LookAt_F9516E7D4BA35AECDBAA789D688B23AF");

	UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_LookAt_F9516E7D4BA35AECDBAA789D688B23AF_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_LookAt_35C3E4AB45E86A307EDA428B25391388
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_SupportNPC_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_LookAt_35C3E4AB45E86A307EDA428B25391388()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_LookAt_35C3E4AB45E86A307EDA428B25391388");

	UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_LookAt_35C3E4AB45E86A307EDA428B25391388_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_TransitionResult_3FC9E51644D08B3E760BD281AB3E13F5
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_SupportNPC_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_TransitionResult_3FC9E51644D08B3E760BD281AB3E13F5()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_TransitionResult_3FC9E51644D08B3E760BD281AB3E13F5");

	UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_TransitionResult_3FC9E51644D08B3E760BD281AB3E13F5_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.BlueprintUpdateAnimation
// (NetReliable, NetRequest, Exec, Native, NetResponse, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_SupportNPC_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.BlueprintUpdateAnimation");

	UABP_MiniGame_SupportNPC_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.AnimNotify_StartTransitionIdlle
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_SupportNPC_C::STATIC_AnimNotify_StartTransitionIdlle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.AnimNotify_StartTransitionIdlle");

	UABP_MiniGame_SupportNPC_C_AnimNotify_StartTransitionIdlle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.AnimNotify_EndTransitionIdle
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_SupportNPC_C::STATIC_AnimNotify_EndTransitionIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.AnimNotify_EndTransitionIdle");

	UABP_MiniGame_SupportNPC_C_AnimNotify_EndTransitionIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.AnimNotify_StartTransitionActionToIdle
// (Net, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_MiniGame_SupportNPC_C::STATIC_AnimNotify_StartTransitionActionToIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.AnimNotify_StartTransitionActionToIdle");

	UABP_MiniGame_SupportNPC_C_AnimNotify_StartTransitionActionToIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.ExecuteUbergraph_ABP_MiniGame_SupportNPC
// (NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGame_SupportNPC_C::ExecuteUbergraph_ABP_MiniGame_SupportNPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.ExecuteUbergraph_ABP_MiniGame_SupportNPC");

	UABP_MiniGame_SupportNPC_C_ExecuteUbergraph_ABP_MiniGame_SupportNPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
