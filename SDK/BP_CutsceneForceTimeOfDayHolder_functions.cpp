
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

// Function BP_CutsceneForceTimeOfDayHolder.BP_CutsceneForceTimeOfDayHolder_C.IsEnabledForceTimeOfDay
// (Net, NetRequest, Exec, NetMulticast, Public, Protected, NetServer)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneForceTimeOfDayHolder_C::IsEnabledForceTimeOfDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneForceTimeOfDayHolder.BP_CutsceneForceTimeOfDayHolder_C.IsEnabledForceTimeOfDay");

	ABP_CutsceneForceTimeOfDayHolder_C_IsEnabledForceTimeOfDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneForceTimeOfDayHolder.BP_CutsceneForceTimeOfDayHolder_C.GetForceTimeOfDayValue
// (Net, NetReliable, NetRequest, NetResponse, Static, Delegate, NetServer)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneForceTimeOfDayHolder_C::STATIC_GetForceTimeOfDayValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneForceTimeOfDayHolder.BP_CutsceneForceTimeOfDayHolder_C.GetForceTimeOfDayValue");

	ABP_CutsceneForceTimeOfDayHolder_C_GetForceTimeOfDayValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneForceTimeOfDayHolder.BP_CutsceneForceTimeOfDayHolder_C.UserConstructionScript
// (NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutsceneForceTimeOfDayHolder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneForceTimeOfDayHolder.BP_CutsceneForceTimeOfDayHolder_C.UserConstructionScript");

	ABP_CutsceneForceTimeOfDayHolder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
