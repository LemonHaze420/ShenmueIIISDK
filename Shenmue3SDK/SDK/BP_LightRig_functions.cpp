
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_LightRig.BP_LightRig_C.GetMainLightIntensity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Intensity                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LightRig_C::GetMainLightIntensity(float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.GetMainLightIntensity");

	ABP_LightRig_C_GetMainLightIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Intensity != nullptr)
		*Intensity = params.Intensity;
}


// Function BP_LightRig.BP_LightRig_C.ClampShadowBias
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_LightRig_C::ClampShadowBias()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.ClampShadowBias");

	ABP_LightRig_C_ClampShadowBias_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.CreateDMI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     StaticMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ElementIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightRig_C::CreateDMI(class UPrimitiveComponent* StaticMesh, int ElementIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.CreateDMI");

	ABP_LightRig_C_CreateDMI_Params params;
	params.StaticMesh = StaticMesh;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.PreviewLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPreviewLightsInEditor         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightRig_C::PreviewLights(bool bPreviewLightsInEditor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.PreviewLights");

	ABP_LightRig_C_PreviewLights_Params params;
	params.bPreviewLightsInEditor = bPreviewLightsInEditor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.MakeEdgeLightArrays
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LightRig_C::MakeEdgeLightArrays()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.MakeEdgeLightArrays");

	ABP_LightRig_C_MakeEdgeLightArrays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.IsEdgeLightInUse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Location2                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_LightRig_C::PrintEdgeDebugInfo(const struct FVector& Location, const struct FVector& Location2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.PrintEdgeDebugInfo");

	ABP_LightRig_C_PrintEdgeDebugInfo_Params params;
	params.Location = Location;
	params.Location2 = Location2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.MakeArrayStartPointLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LightRig_C::CreateEdgeLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.CreateEdgeLights");

	ABP_LightRig_C_CreateEdgeLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.SetNewEdgeLightZHeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              InputTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              OutputTransform                (Parm, OutParm, IsPlainOldData)

void ABP_LightRig_C::SetNewEdgeLightZHeight(const struct FTransform& InputTransform, struct FTransform* OutputTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.SetNewEdgeLightZHeight");

	ABP_LightRig_C_SetNewEdgeLightZHeight_Params params;
	params.InputTransform = InputTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputTransform != nullptr)
		*OutputTransform = params.OutputTransform;
}


// Function BP_LightRig.BP_LightRig_C.UseCeilingHeightForEdgeLightTransforms
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LightRig_C::UseCeilingHeightForEdgeLightTransforms()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.UseCeilingHeightForEdgeLightTransforms");

	ABP_LightRig_C_UseCeilingHeightForEdgeLightTransforms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.AddMidFillLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LightRig_C::AddMidFillLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.AddMidFillLights");

	ABP_LightRig_C_AddMidFillLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.AddCentreMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LightRig_C::AddCentreMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.AddCentreMesh");

	ABP_LightRig_C_AddCentreMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LightRig_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.UserConstructionScript");

	ABP_LightRig_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LightRig_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.ReceiveBeginPlay");

	ABP_LightRig_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightRig_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.ReceiveTick");

	ABP_LightRig_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.OnSetLightEnable
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bNewLightEnable                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightRig_C::OnSetLightEnable(bool* bNewLightEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.OnSetLightEnable");

	ABP_LightRig_C_OnSetLightEnable_Params params;
	params.bNewLightEnable = bNewLightEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.UpdateIntensityRate
// (BlueprintCallable, BlueprintEvent)

void ABP_LightRig_C::UpdateIntensityRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.UpdateIntensityRate");

	ABP_LightRig_C_UpdateIntensityRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.InitialDisable
// (Event, Public, BlueprintEvent)

void ABP_LightRig_C::InitialDisable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightRig.BP_LightRig_C.InitialDisable");

	ABP_LightRig_C_InitialDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightRig.BP_LightRig_C.ExecuteUbergraph_BP_LightRig
// ()
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
