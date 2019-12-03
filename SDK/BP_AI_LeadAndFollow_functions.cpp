
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

// Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.GetS3PathFollowingComponent
// (NetReliable, NetRequest, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
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
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_AI_LeadAndFollow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.UserConstructionScript");

	ABP_AI_LeadAndFollow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.StartLead
// (NetReliable, Exec, Native, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_AI_LeadAndFollow_C::STATIC_StartLead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.StartLead");

	ABP_AI_LeadAndFollow_C_StartLead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.StartFollow
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_AI_LeadAndFollow_C::StartFollow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.StartFollow");

	ABP_AI_LeadAndFollow_C_StartFollow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.ExecuteUbergraph_BP_AI_LeadAndFollow
// (NetResponse, MulticastDelegate, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
