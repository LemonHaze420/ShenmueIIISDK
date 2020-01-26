
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

// Function BP_TimeEventManager.BP_TimeEventManager_C.IsTimeHasComeFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           flag                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TimeEventManager_C::IsTimeHasComeFlag(bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeEventManager.BP_TimeEventManager_C.IsTimeHasComeFlag");

	ABP_TimeEventManager_C_IsTimeHasComeFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag != nullptr)
		*flag = params.flag;
}


// Function BP_TimeEventManager.BP_TimeEventManager_C.MiniGameTimeInit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TimeEventManager_C::MiniGameTimeInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeEventManager.BP_TimeEventManager_C.MiniGameTimeInit");

	ABP_TimeEventManager_C_MiniGameTimeInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeEventManager.BP_TimeEventManager_C.MiniGameTimeCalcFlagOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeMax                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeEventManager_C::MiniGameTimeCalcFlagOn(float TimeMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeEventManager.BP_TimeEventManager_C.MiniGameTimeCalcFlagOn");

	ABP_TimeEventManager_C_MiniGameTimeCalcFlagOn_Params params;
	params.TimeMax = TimeMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeEventManager.BP_TimeEventManager_C.MiniGameTimeCalc
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TimeEventManager_C::MiniGameTimeCalc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeEventManager.BP_TimeEventManager_C.MiniGameTimeCalc");

	ABP_TimeEventManager_C_MiniGameTimeCalc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeEventManager.BP_TimeEventManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TimeEventManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeEventManager.BP_TimeEventManager_C.UserConstructionScript");

	ABP_TimeEventManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
