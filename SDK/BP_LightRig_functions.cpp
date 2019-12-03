
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

// Function BP_LightRig.BP_LightRig_C.GetMainLightIntensity
// (NetReliable, NetRequest, Native, Event, Protected, Delegate, HasOutParms, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// float                          Intensity                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LightRig_C::GetMainLightIntensity(float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.GetMainLightIntensity");

	ABP_LightRig_C_GetMainLightIntensity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Intensity != nullptr)
		*Intensity = params.Intensity;
}


// Function BP_LightRig.BP_LightRig_C.ClampShadowBias
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_LightRig_C::STATIC_ClampShadowBias()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.ClampShadowBias");

	ABP_LightRig_C_ClampShadowBias_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.CreateDMI
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, NetServer, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// class UPrimitiveComponent*     StaticMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ElementIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightRig_C::STATIC_CreateDMI(class UPrimitiveComponent* StaticMesh, int ElementIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.CreateDMI");

	ABP_LightRig_C_CreateDMI_Params params;
	params.StaticMesh = StaticMesh;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.PreviewLights
// (NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// bool                           bPreviewLightsInEditor         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightRig_C::STATIC_PreviewLights(bool bPreviewLightsInEditor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.PreviewLights");

	ABP_LightRig_C_PreviewLights_Params params;
	params.bPreviewLightsInEditor = bPreviewLightsInEditor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.MakeEdgeLightArrays
// (Net, NetRequest, Event, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_LightRig_C::MakeEdgeLightArrays()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.MakeEdgeLightArrays");

	ABP_LightRig_C_MakeEdgeLightArrays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.IsEdgeLightInUse
// (Net, NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Use                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LightRig_C::IsEdgeLightInUse(int Count, bool Use)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.IsEdgeLightInUse");

	ABP_LightRig_C_IsEdgeLightInUse_Params params;
	params.Count = Count;
	params.Use = Use;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LightRig.BP_LightRig_C.PrintEdgeDebugInfo
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Location2                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_LightRig_C::STATIC_PrintEdgeDebugInfo(const struct FVector& Location, const struct FVector& Location2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.PrintEdgeDebugInfo");

	ABP_LightRig_C_PrintEdgeDebugInfo_Params params;
	params.Location = Location;
	params.Location2 = Location2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.MakeArrayStartPointLocation
// (Net, NetReliable, NetRequest, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// float                          Spacing                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            LightCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_LightRig_C::MakeArrayStartPointLocation(float Spacing, int LightCount, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.MakeArrayStartPointLocation");

	ABP_LightRig_C_MakeArrayStartPointLocation_Params params;
	params.Spacing = Spacing;
	params.LightCount = LightCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;

	return params.ReturnValue;
}


// Function BP_LightRig.BP_LightRig_C.CreateEdgeLights
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Protected, HasDefaults, BlueprintEvent)

void ABP_LightRig_C::CreateEdgeLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.CreateEdgeLights");

	ABP_LightRig_C_CreateEdgeLights_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.SetNewEdgeLightZHeight
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// struct FTransform              InputTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              OutputTransform                (Parm, OutParm, IsPlainOldData)

void ABP_LightRig_C::STATIC_SetNewEdgeLightZHeight(const struct FTransform& InputTransform, struct FTransform* OutputTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.SetNewEdgeLightZHeight");

	ABP_LightRig_C_SetNewEdgeLightZHeight_Params params;
	params.InputTransform = InputTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputTransform != nullptr)
		*OutputTransform = params.OutputTransform;
}


// Function BP_LightRig.BP_LightRig_C.UseCeilingHeightForEdgeLightTransforms
// (NetRequest, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_LightRig_C::UseCeilingHeightForEdgeLightTransforms()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.UseCeilingHeightForEdgeLightTransforms");

	ABP_LightRig_C_UseCeilingHeightForEdgeLightTransforms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.AddMidFillLights
// (Net, NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintPure, NetValidate)

void ABP_LightRig_C::AddMidFillLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.AddMidFillLights");

	ABP_LightRig_C_AddMidFillLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.AddCentreMesh
// (NetReliable, Event, NetResponse, NetMulticast, Private, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)

void ABP_LightRig_C::AddCentreMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.AddCentreMesh");

	ABP_LightRig_C_AddCentreMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.UserConstructionScript
// (Exec, NetResponse, NetMulticast, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_LightRig_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.UserConstructionScript");

	ABP_LightRig_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.ReceiveBeginPlay
// (NetRequest, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_LightRig_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.ReceiveBeginPlay");

	ABP_LightRig_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.ReceiveTick
// (Net, Exec, NetResponse, NetMulticast, Protected, Delegate, BlueprintPure, NetValidate)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightRig_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.ReceiveTick");

	ABP_LightRig_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.OnSetLightEnable
// (Net, Exec, NetResponse, NetMulticast, Protected, Delegate, BlueprintPure, NetValidate)
// Parameters:
// bool                           bNewLightEnable                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightRig_C::OnSetLightEnable(bool bNewLightEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.OnSetLightEnable");

	ABP_LightRig_C_OnSetLightEnable_Params params;
	params.bNewLightEnable = bNewLightEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.UpdateIntensityRate
// (Net, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_LightRig_C::STATIC_UpdateIntensityRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.UpdateIntensityRate");

	ABP_LightRig_C_UpdateIntensityRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.InitialDisable
// (Net, NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_LightRig_C::STATIC_InitialDisable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.InitialDisable");

	ABP_LightRig_C_InitialDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.ExecuteUbergraph_BP_LightRig
// (Net, NetMulticast, Private, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightRig_C::ExecuteUbergraph_BP_LightRig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.ExecuteUbergraph_BP_LightRig");

	ABP_LightRig_C_ExecuteUbergraph_BP_LightRig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
