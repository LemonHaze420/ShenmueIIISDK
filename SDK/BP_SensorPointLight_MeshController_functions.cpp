
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

// Function BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C.GetMainLightIntensity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Intensity                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SensorPointLight_MeshController_C::GetMainLightIntensity(float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C.GetMainLightIntensity");

	ABP_SensorPointLight_MeshController_C_GetMainLightIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Intensity != nullptr)
		*Intensity = params.Intensity;
}


// Function BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SensorPointLight_MeshController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C.UserConstructionScript");

	ABP_SensorPointLight_MeshController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C.OnSetLightEnable
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewLightEnable                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SensorPointLight_MeshController_C::OnSetLightEnable(bool bNewLightEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C.OnSetLightEnable");

	ABP_SensorPointLight_MeshController_C_OnSetLightEnable_Params params;
	params.bNewLightEnable = bNewLightEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C.UpdateIntensityRate
// (BlueprintCallable, BlueprintEvent)

void ABP_SensorPointLight_MeshController_C::UpdateIntensityRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C.UpdateIntensityRate");

	ABP_SensorPointLight_MeshController_C_UpdateIntensityRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C.ExecuteUbergraph_BP_SensorPointLight_MeshController
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SensorPointLight_MeshController_C::ExecuteUbergraph_BP_SensorPointLight_MeshController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C.ExecuteUbergraph_BP_SensorPointLight_MeshController");

	ABP_SensorPointLight_MeshController_C_ExecuteUbergraph_BP_SensorPointLight_MeshController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
