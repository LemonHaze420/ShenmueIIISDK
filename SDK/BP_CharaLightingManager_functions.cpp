
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

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetEnableLightCollision
// (NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::SetEnableLightCollision(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetEnableLightCollision");

	ABP_CharaLightingManager_C_SetEnableLightCollision_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetLightingColorParameter
// (Net, NetReliable, NetRequest, Exec, Static, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FS3CharaLightingCurveColorParamater Paramater                      (Parm, OutParm, IsPlainOldData)

void ABP_CharaLightingManager_C::STATIC_GetLightingColorParameter(struct FS3CharaLightingCurveColorParamater* Paramater)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetLightingColorParameter");

	ABP_CharaLightingManager_C_GetLightingColorParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Paramater != nullptr)
		*Paramater = params.Paramater;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.UpdateAllLightupActors
// (NetReliable, NetRequest, Exec, Native, Static, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CharaLightingManager_C::STATIC_UpdateAllLightupActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.UpdateAllLightupActors");

	ABP_CharaLightingManager_C_UpdateAllLightupActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupCalculationMeshAndCameraVariable
// (NetReliable, NetRequest, Native, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CharaLightingManager_C::SetupCalculationMeshAndCameraVariable(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupCalculationMeshAndCameraVariable");

	ABP_CharaLightingManager_C_SetupCalculationMeshAndCameraVariable_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetTalkTargetActorMesh
// (Net, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* ABP_CharaLightingManager_C::STATIC_GetTalkTargetActorMesh(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetTalkTargetActorMesh");

	ABP_CharaLightingManager_C_GetTalkTargetActorMesh_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.IsConditionsCheck
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FS3CharaLightingContainer Container                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3TagCharaComponent*    TagCharaComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CharaLightingManager_C::STATIC_IsConditionsCheck(class AActor* Actor, class US3TagCharaComponent* TagCharaComponent, struct FS3CharaLightingContainer* Container)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.IsConditionsCheck");

	ABP_CharaLightingManager_C_IsConditionsCheck_Params params;
	params.Actor = Actor;
	params.TagCharaComponent = TagCharaComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Container != nullptr)
		*Container = params.Container;

	return params.ReturnValue;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.Evaluation
// (Net, NetReliable, NetRequest, Event, Static, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  TargetLightupActor             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LightGroupId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS3CharaLightingContainer ReturnValue                    (Parm, OutParm, ReturnParm)

struct FS3CharaLightingContainer ABP_CharaLightingManager_C::STATIC_Evaluation(class AActor* TargetLightupActor, const struct FName& LightGroupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.Evaluation");

	ABP_CharaLightingManager_C_Evaluation_Params params;
	params.TargetLightupActor = TargetLightupActor;
	params.LightGroupId = LightGroupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetLightupTargetLocation
// (Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  InTargetActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_CharaLightingManager_C::GetLightupTargetLocation(class AActor* InTargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetLightupTargetLocation");

	ABP_CharaLightingManager_C_GetLightupTargetLocation_Params params;
	params.InTargetActor = InTargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetAllCharaLightingActors
// (Event, Static, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class AS3CharaLightingActor*> Values                         (Parm, OutParm, ZeroConstructor)

void ABP_CharaLightingManager_C::STATIC_GetAllCharaLightingActors(TArray<class AS3CharaLightingActor*>* Values)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetAllCharaLightingActors");

	ABP_CharaLightingManager_C_GetAllCharaLightingActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetAllTargetCharaActors
// (NetReliable, NetRequest, Event, Static, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          CharaActors                    (Parm, OutParm, ZeroConstructor)

void ABP_CharaLightingManager_C::STATIC_GetAllTargetCharaActors(TArray<class AActor*>* CharaActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetAllTargetCharaActors");

	ABP_CharaLightingManager_C_GetAllTargetCharaActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharaActors != nullptr)
		*CharaActors = params.CharaActors;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.ClearLightupActors
// (Net, NetReliable, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CutsceneOnly                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::STATIC_ClearLightupActors(bool CutsceneOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.ClearLightupActors");

	ABP_CharaLightingManager_C_ClearLightupActors_Params params;
	params.CutsceneOnly = CutsceneOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupCutsceneLightingActors
// (Exec, Static, NetMulticast, Public, Private, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AS3CharaLightingSequencerActor* SeqLightingActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::STATIC_SetupCutsceneLightingActors(class AS3CharaLightingSequencerActor* SeqLightingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupCutsceneLightingActors");

	ABP_CharaLightingManager_C_SetupCutsceneLightingActors_Params params;
	params.SeqLightingActor = SeqLightingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.TryGetActorMeshComponent
// (NetReliable, NetRequest, Static, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* ABP_CharaLightingManager_C::STATIC_TryGetActorMeshComponent(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.TryGetActorMeshComponent");

	ABP_CharaLightingManager_C_TryGetActorMeshComponent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.IsUsableLight
// (NetReliable, Exec, NetResponse, Static, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class ALight*                  Light                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUse                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SpotDeviatedConeAngle          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::STATIC_IsUsableLight(class ALight* Light, bool* bUse, float* SpotDeviatedConeAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.IsUsableLight");

	ABP_CharaLightingManager_C_IsUsableLight_Params params;
	params.Light = Light;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUse != nullptr)
		*bUse = params.bUse;
	if (SpotDeviatedConeAngle != nullptr)
		*SpotDeviatedConeAngle = params.SpotDeviatedConeAngle;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetMainSpotLightDesirabilityScore
// (Net, Static, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeviatedConeAngle              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzySystemComponent*   SpotFuzzySystem                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          DesirabilityScore              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::STATIC_GetMainSpotLightDesirabilityScore(float Distance, float Intensity, float DeviatedConeAngle, class UFuzzySystemComponent* SpotFuzzySystem, float* DesirabilityScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetMainSpotLightDesirabilityScore");

	ABP_CharaLightingManager_C_GetMainSpotLightDesirabilityScore_Params params;
	params.Distance = Distance;
	params.Intensity = Intensity;
	params.DeviatedConeAngle = DeviatedConeAngle;
	params.SpotFuzzySystem = SpotFuzzySystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesirabilityScore != nullptr)
		*DesirabilityScore = params.DesirabilityScore;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupEnvironmentLightParamater
// (NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::SetupEnvironmentLightParamater(class AActor* TargetActor, bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupEnvironmentLightParamater");

	ABP_CharaLightingManager_C_SetupEnvironmentLightParamater_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetMainPointLightDesirabilityScore
// (NetRequest, NetResponse, Static, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzySystemComponent*   PointFuzzySystem               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          DesirabilityScore              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::STATIC_GetMainPointLightDesirabilityScore(float Distance, float Intensity, class UFuzzySystemComponent* PointFuzzySystem, float* DesirabilityScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetMainPointLightDesirabilityScore");

	ABP_CharaLightingManager_C_GetMainPointLightDesirabilityScore_Params params;
	params.Distance = Distance;
	params.Intensity = Intensity;
	params.PointFuzzySystem = PointFuzzySystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesirabilityScore != nullptr)
		*DesirabilityScore = params.DesirabilityScore;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.InitializeFuzzySystems
// (Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_CharaLightingManager_C::InitializeFuzzySystems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.InitializeFuzzySystems");

	ABP_CharaLightingManager_C_InitializeFuzzySystems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.UpdateAllCutsceneLightingActors
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_CharaLightingManager_C::STATIC_UpdateAllCutsceneLightingActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.UpdateAllCutsceneLightingActors");

	ABP_CharaLightingManager_C_UpdateAllCutsceneLightingActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.ResetValues
// (Native, Static, NetMulticast, Public, Private, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           FromCutscene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::STATIC_ResetValues(bool FromCutscene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.ResetValues");

	ABP_CharaLightingManager_C_ResetValues_Params params;
	params.FromCutscene = FromCutscene;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.SpawnCharaLightingActor
// (Net, NetReliable, NetRequest, Native, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::STATIC_SpawnCharaLightingActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.SpawnCharaLightingActor");

	ABP_CharaLightingManager_C_SpawnCharaLightingActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Event, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CharaLightingManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.UserConstructionScript");

	ABP_CharaLightingManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.ReceiveTick
// (NetRequest, Exec, Event, NetResponse, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.ReceiveTick");

	ABP_CharaLightingManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.DebugDrawLightLineToggle
// (NetReliable, Native, NetResponse, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_CharaLightingManager_C::STATIC_DebugDrawLightLineToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.DebugDrawLightLineToggle");

	ABP_CharaLightingManager_C_DebugDrawLightLineToggle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.DebugCharaLightOnOffToggle
// (Net, Native, NetResponse, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_CharaLightingManager_C::STATIC_DebugCharaLightOnOffToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.DebugCharaLightOnOffToggle");

	ABP_CharaLightingManager_C_DebugCharaLightOnOffToggle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.Editor_UpdateAllCutsceneLightingActors
// (Net, Native, Static, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ACameraActor*            Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 LevelSequence                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::STATIC_Editor_UpdateAllCutsceneLightingActors(class ACameraActor* Camera, class UObject* LevelSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.Editor_UpdateAllCutsceneLightingActors");

	ABP_CharaLightingManager_C_Editor_UpdateAllCutsceneLightingActors_Params params;
	params.Camera = Camera;
	params.LevelSequence = LevelSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.Editor_ResetVariable
// (Native, NetResponse, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_CharaLightingManager_C::STATIC_Editor_ResetVariable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.Editor_ResetVariable");

	ABP_CharaLightingManager_C_Editor_ResetVariable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupTestLevel
// (Net, NetReliable, Exec, Event, NetResponse, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AS3CharaLightingActor*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::STATIC_SetupTestLevel(class AS3CharaLightingActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupTestLevel");

	ABP_CharaLightingManager_C_SetupTestLevel_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.BindManagerEvents
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_CharaLightingManager_C::STATIC_BindManagerEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.BindManagerEvents");

	ABP_CharaLightingManager_C_BindManagerEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnBeginTalk
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_CharaLightingManager_C::STATIC_OnBeginTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnBeginTalk");

	ABP_CharaLightingManager_C_OnBeginTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnEndTalk
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_CharaLightingManager_C::STATIC_OnEndTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnEndTalk");

	ABP_CharaLightingManager_C_OnEndTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnCameraChanged
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_CharaLightingManager_C::STATIC_OnCameraChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnCameraChanged");

	ABP_CharaLightingManager_C_OnCameraChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.onCutsceneStart
// (Net, Exec, Native, NetResponse, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_CharaLightingManager_C::STATIC_onCutsceneStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.onCutsceneStart");

	ABP_CharaLightingManager_C_onCutsceneStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.onCutsceneEnd
// (Net, Exec, Native, NetResponse, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_CharaLightingManager_C::STATIC_onCutsceneEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.onCutsceneEnd");

	ABP_CharaLightingManager_C_onCutsceneEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnCameraChangedSequencer
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 CameraObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::STATIC_OnCameraChangedSequencer(class UObject* CameraObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnCameraChangedSequencer");

	ABP_CharaLightingManager_C_OnCameraChangedSequencer_Params params;
	params.CameraObject = CameraObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.UnbindCutscene
// (Exec, Native, NetResponse, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_CharaLightingManager_C::STATIC_UnbindCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.UnbindCutscene");

	ABP_CharaLightingManager_C_UnbindCutscene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnChangedJoinActor
// (Net, NetReliable, NetRequest, Exec, Static, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EJoinActorChangeEvent          ChangeEvent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::STATIC_OnChangedJoinActor(EJoinActorChangeEvent ChangeEvent, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnChangedJoinActor");

	ABP_CharaLightingManager_C_OnChangedJoinActor_Params params;
	params.ChangeEvent = ChangeEvent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnStartAcCameraSequence
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ALevelSequenceActor*     PlaySequenceActor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::STATIC_OnStartAcCameraSequence(class ALevelSequenceActor* PlaySequenceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnStartAcCameraSequence");

	ABP_CharaLightingManager_C_OnStartAcCameraSequence_Params params;
	params.PlaySequenceActor = PlaySequenceActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnFinishedAcCameraSequence
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequencePlayer*    LevelSequencePlayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::STATIC_OnFinishedAcCameraSequence(class ULevelSequencePlayer* LevelSequencePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnFinishedAcCameraSequence");

	ABP_CharaLightingManager_C_OnFinishedAcCameraSequence_Params params;
	params.LevelSequencePlayer = LevelSequencePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnStopAcCameraSequence
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_CharaLightingManager_C::STATIC_OnStopAcCameraSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnStopAcCameraSequence");

	ABP_CharaLightingManager_C_OnStopAcCameraSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.UnbindAcCameraSequence
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_CharaLightingManager_C::STATIC_UnbindAcCameraSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.UnbindAcCameraSequence");

	ABP_CharaLightingManager_C_UnbindAcCameraSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnChangedACCameraCut
// (Net, NetRequest, Exec, Event, NetResponse, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*        CameraComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_CharaLightingManager_C::STATIC_OnChangedACCameraCut(class UCameraComponent* CameraComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnChangedACCameraCut");

	ABP_CharaLightingManager_C_OnChangedACCameraCut_Params params;
	params.CameraComponent = CameraComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.ReceiveBeginPlay
// (NetRequest, Native, NetResponse, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_CharaLightingManager_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.ReceiveBeginPlay");

	ABP_CharaLightingManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.ExecuteUbergraph_BP_CharaLightingManager
// (Private, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::ExecuteUbergraph_BP_CharaLightingManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.ExecuteUbergraph_BP_CharaLightingManager");

	ABP_CharaLightingManager_C_ExecuteUbergraph_BP_CharaLightingManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
