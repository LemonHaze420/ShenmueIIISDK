
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneForceTimeOfDayHolder_C::GetForceTimeOfDayValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneForceTimeOfDayHolder.BP_CutsceneForceTimeOfDayHolder_C.GetForceTimeOfDayValue");

	ABP_CutsceneForceTimeOfDayHolder_C_GetForceTimeOfDayValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneForceTimeOfDayHolder.BP_CutsceneForceTimeOfDayHolder_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

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
