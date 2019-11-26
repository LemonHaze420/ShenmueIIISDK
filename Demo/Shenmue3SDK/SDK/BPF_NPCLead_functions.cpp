
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

// Function BPF_NPCLead.BPF_NPCLead_C.GetNPCLeadCharacter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_NPC_Lead_C*          newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_NPCLead_C::STATIC_GetNPCLeadCharacter(class UObject* __WorldContext, class ABP_NPC_Lead_C** newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_NPCLead.BPF_NPCLead_C.GetNPCLeadCharacter");

	UBPF_NPCLead_C_GetNPCLeadCharacter_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BPF_NPCLead.BPF_NPCLead_C.DestroyNPCLeadActor
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_NPCLead_C::STATIC_DestroyNPCLeadActor(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_NPCLead.BPF_NPCLead_C.DestroyNPCLeadActor");

	UBPF_NPCLead_C_DestroyNPCLeadActor_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_NPCLead.BPF_NPCLead_C.SpawnNPCLeadActor
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SpawnPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          SpawnRot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ANPC_SplineMoveActor_C*  SplineActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_NPCLead_C::STATIC_SpawnNPCLeadActor(const struct FVector& SpawnPos, float SpawnRot, class ANPC_SplineMoveActor_C* SplineActor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_NPCLead.BPF_NPCLead_C.SpawnNPCLeadActor");

	UBPF_NPCLead_C_SpawnNPCLeadActor_Params params;
	params.SpawnPos = SpawnPos;
	params.SpawnRot = SpawnRot;
	params.SplineActor = SplineActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_NPCLead.BPF_NPCLead_C.GetNPCLeadManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_NPCLeadManager_C*    newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_NPCLead_C::STATIC_GetNPCLeadManager(class UObject* __WorldContext, class ABP_NPCLeadManager_C** newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_NPCLead.BPF_NPCLead_C.GetNPCLeadManager");

	UBPF_NPCLead_C_GetNPCLeadManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
