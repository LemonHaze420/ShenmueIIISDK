
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_NPCLeadWaitPointEvent.BP_NPCLeadWaitPointEvent_C.IsStillValidToWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_NPCLeadWaitPointEvent_C::IsStillValidToWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadWaitPointEvent.BP_NPCLeadWaitPointEvent_C.IsStillValidToWait");

	ABP_NPCLeadWaitPointEvent_C_IsStillValidToWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPCLeadWaitPointEvent.BP_NPCLeadWaitPointEvent_C.StartEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadWaitPointEvent_C::StartEvent(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadWaitPointEvent.BP_NPCLeadWaitPointEvent_C.StartEvent");

	ABP_NPCLeadWaitPointEvent_C_StartEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_NPCLeadWaitPointEvent.BP_NPCLeadWaitPointEvent_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_NPCLeadWaitPointEvent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadWaitPointEvent.BP_NPCLeadWaitPointEvent_C.UserConstructionScript");

	ABP_NPCLeadWaitPointEvent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
