
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

// Function BP_SensorSpotLight.BP_SensorSpotLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SensorSpotLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorSpotLight.BP_SensorSpotLight_C.UserConstructionScript");

	ABP_SensorSpotLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SensorSpotLight.BP_SensorSpotLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SensorSpotLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorSpotLight.BP_SensorSpotLight_C.ReceiveBeginPlay");

	ABP_SensorSpotLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SensorSpotLight.BP_SensorSpotLight_C.ExecuteUbergraph_BP_SensorSpotLight
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SensorSpotLight_C::ExecuteUbergraph_BP_SensorSpotLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorSpotLight.BP_SensorSpotLight_C.ExecuteUbergraph_BP_SensorSpotLight");

	ABP_SensorSpotLight_C_ExecuteUbergraph_BP_SensorSpotLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
