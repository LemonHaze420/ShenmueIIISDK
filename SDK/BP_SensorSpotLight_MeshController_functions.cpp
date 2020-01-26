
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

// Function BP_SensorSpotLight_MeshController.BP_SensorSpotLight_MeshController_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SensorSpotLight_MeshController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorSpotLight_MeshController.BP_SensorSpotLight_MeshController_C.UserConstructionScript");

	ABP_SensorSpotLight_MeshController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SensorSpotLight_MeshController.BP_SensorSpotLight_MeshController_C.OnSetLightEnable
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewLightEnable                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SensorSpotLight_MeshController_C::OnSetLightEnable(bool bNewLightEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorSpotLight_MeshController.BP_SensorSpotLight_MeshController_C.OnSetLightEnable");

	ABP_SensorSpotLight_MeshController_C_OnSetLightEnable_Params params;
	params.bNewLightEnable = bNewLightEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
