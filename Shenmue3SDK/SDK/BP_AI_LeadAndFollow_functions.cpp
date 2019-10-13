
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

// Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.GetS3PathFollowingComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class US3PathFollowingComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class US3PathFollowingComponent* ABP_AI_LeadAndFollow_C::GetS3PathFollowingComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.GetS3PathFollowingComponent");

	ABP_AI_LeadAndFollow_C_GetS3PathFollowingComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AI_LeadAndFollow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.UserConstructionScript");

	ABP_AI_LeadAndFollow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.StartLead
// (BlueprintCallable, BlueprintEvent)

void ABP_AI_LeadAndFollow_C::StartLead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.StartLead");

	ABP_AI_LeadAndFollow_C_StartLead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.StartFollow
// (BlueprintCallable, BlueprintEvent)

void ABP_AI_LeadAndFollow_C::StartFollow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.StartFollow");

	ABP_AI_LeadAndFollow_C_StartFollow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.ExecuteUbergraph_BP_AI_LeadAndFollow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AI_LeadAndFollow_C::ExecuteUbergraph_BP_AI_LeadAndFollow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.ExecuteUbergraph_BP_AI_LeadAndFollow");

	ABP_AI_LeadAndFollow_C_ExecuteUbergraph_BP_AI_LeadAndFollow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
