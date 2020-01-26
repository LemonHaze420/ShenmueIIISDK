
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

// Function BP_SensorPointLight.BP_SensorPointLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SensorPointLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorPointLight.BP_SensorPointLight_C.UserConstructionScript");

	ABP_SensorPointLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SensorPointLight.BP_SensorPointLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SensorPointLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorPointLight.BP_SensorPointLight_C.ReceiveBeginPlay");

	ABP_SensorPointLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
