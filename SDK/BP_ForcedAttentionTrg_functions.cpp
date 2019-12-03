
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

// Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.CheckFlag
// (NetRequest, Exec, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            FlagID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EnavleMin                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EnableMax                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ForcedAttentionTrg_C::CheckFlag(int FlagID, int EnavleMin, int EnableMax, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.CheckFlag");

	ABP_ForcedAttentionTrg_C_CheckFlag_Params params;
	params.FlagID = FlagID;
	params.EnavleMin = EnavleMin;
	params.EnableMax = EnableMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.CheckStep
// (NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetClient, BlueprintCallable)
// Parameters:
// int                            MinStep                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxStep                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ForcedAttentionTrg_C::CheckStep(int MinStep, int MaxStep, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.CheckStep");

	ABP_ForcedAttentionTrg_C_CheckStep_Params params;
	params.MinStep = MinStep;
	params.MaxStep = MaxStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.GetDirection
// (Net, Exec, NetResponse, Static, Private, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Positive_direction             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Impact_dot_Arrow               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ForcedAttentionTrg_C::STATIC_GetDirection(bool* Positive_direction, float* Impact_dot_Arrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.GetDirection");

	ABP_ForcedAttentionTrg_C_GetDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Positive_direction != nullptr)
		*Positive_direction = params.Positive_direction;
	if (Impact_dot_Arrow != nullptr)
		*Impact_dot_Arrow = params.Impact_dot_Arrow;
}


// Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.UserConstructionScript
// (Exec, Native, NetResponse, Static, NetMulticast, Public, Protected, Delegate, NetClient, BlueprintCallable)

void ABP_ForcedAttentionTrg_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.UserConstructionScript");

	ABP_ForcedAttentionTrg_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, Native, Static, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_ForcedAttentionTrg_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.ReceiveBeginPlay");

	ABP_ForcedAttentionTrg_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (Net, NetReliable, NetRequest, NetResponse, Static, Private, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ForcedAttentionTrg_C::STATIC_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ForcedAttentionTrg_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.ExecuteUbergraph_BP_ForcedAttentionTrg
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ForcedAttentionTrg_C::STATIC_ExecuteUbergraph_BP_ForcedAttentionTrg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.ExecuteUbergraph_BP_ForcedAttentionTrg");

	ABP_ForcedAttentionTrg_C_ExecuteUbergraph_BP_ForcedAttentionTrg_Params params;
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
