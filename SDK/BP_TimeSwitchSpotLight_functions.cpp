
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

// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.isLightOnTimezone
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Light                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchSpotLight_C::isLightOnTimezone(bool* Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.isLightOnTimezone");

	ABP_TimeSwitchSpotLight_C_isLightOnTimezone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Light != nullptr)
		*Light = params.Light;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TimeSwitchSpotLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.UserConstructionScript");

	ABP_TimeSwitchSpotLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_TimeSwitchSpotLight_C::Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.Timeline__FinishedFunc");

	ABP_TimeSwitchSpotLight_C_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_TimeSwitchSpotLight_C::Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.Timeline__UpdateFunc");

	ABP_TimeSwitchSpotLight_C_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TimeSwitchSpotLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ReceiveBeginPlay");

	ABP_TimeSwitchSpotLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
