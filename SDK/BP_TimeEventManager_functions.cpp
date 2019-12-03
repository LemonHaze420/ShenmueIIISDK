
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

// Function BP_TimeEventManager.BP_TimeEventManager_C.IsTimeHasComeFlag
// (NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           flag                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TimeEventManager_C::IsTimeHasComeFlag(bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeEventManager.BP_TimeEventManager_C.IsTimeHasComeFlag");

	ABP_TimeEventManager_C_IsTimeHasComeFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag != nullptr)
		*flag = params.flag;
}


// Function BP_TimeEventManager.BP_TimeEventManager_C.MiniGameTimeInit
// (Net, Exec, Native, Event, Static, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)

void ABP_TimeEventManager_C::STATIC_MiniGameTimeInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeEventManager.BP_TimeEventManager_C.MiniGameTimeInit");

	ABP_TimeEventManager_C_MiniGameTimeInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeEventManager.BP_TimeEventManager_C.MiniGameTimeCalcFlagOn
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          TimeMax                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeEventManager_C::STATIC_MiniGameTimeCalcFlagOn(float TimeMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeEventManager.BP_TimeEventManager_C.MiniGameTimeCalcFlagOn");

	ABP_TimeEventManager_C_MiniGameTimeCalcFlagOn_Params params;
	params.TimeMax = TimeMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeEventManager.BP_TimeEventManager_C.MiniGameTimeCalc
// (Exec, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, Const)

void ABP_TimeEventManager_C::STATIC_MiniGameTimeCalc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeEventManager.BP_TimeEventManager_C.MiniGameTimeCalc");

	ABP_TimeEventManager_C_MiniGameTimeCalc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeEventManager.BP_TimeEventManager_C.UserConstructionScript
// (Net, Event, NetMulticast, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

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
