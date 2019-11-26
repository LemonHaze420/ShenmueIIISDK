
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

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetEnableLightCollision
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS3CharaLightingCurveColorParamater Paramater                      (Parm, OutParm, IsPlainOldData)

void ABP_CharaLightingManager_C::GetLightingColorParameter(struct FS3CharaLightingCurveColorParamater* Paramater)
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
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CharaLightingManager_C::UpdateAllLightupActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.UpdateAllLightupActors");

	ABP_CharaLightingManager_C_UpdateAllLightupActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupCalculationMeshAndCameraVariable
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CharaLightingManager_C::SetupCalculationMeshAndCameraVariable(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupCalculationMeshAndCameraVariable");

	ABP_CharaLightingManager_C_SetupCalculationMeshAndCameraVariable_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetTalkTargetActorMesh
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* ABP_CharaLightingManager_C::GetTalkTargetActorMesh(class AActor** Actor)
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
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS3CharaLightingContainer Container                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3TagCharaComponent**   TagCharaComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CharaLightingManager_C::IsConditionsCheck(class AActor** Actor, class US3TagCharaComponent** TagCharaComponent, struct FS3CharaLightingContainer* Container)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.IsConditionsCheck");

	ABP_CharaLightingManager_C_IsConditionsCheck_Params params;
	params.Actor = Actor;
	params.TagCharaComponent = TagCharaComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Container != nullptr)
		*Container = params.Container;

	return params.ReturnValue;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.Evaluation
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 TargetLightupActor             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  LightGroupId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS3CharaLightingContainer ReturnValue                    (Parm, OutParm, ReturnParm)

struct FS3CharaLightingContainer ABP_CharaLightingManager_C::Evaluation(class AActor** TargetLightupActor, struct FName* LightGroupId)
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
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  InTargetActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_CharaLightingManager_C::GetLightupTargetLocation(class AActor* InTargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetLightupTargetLocation");

	ABP_CharaLightingManager_C_GetLightupTargetLocation_Params params;
	params.InTargetActor = InTargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetAllCharaLightingActors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AS3CharaLightingActor*> Values                         (Parm, OutParm, ZeroConstructor)

void ABP_CharaLightingManager_C::GetAllCharaLightingActors(TArray<class AS3CharaLightingActor*>* Values)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          CharaActors                    (Parm, OutParm, ZeroConstructor)

void ABP_CharaLightingManager_C::GetAllTargetCharaActors(TArray<class AActor*>* CharaActors)
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
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CutsceneOnly                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::ClearLightupActors(bool CutsceneOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.ClearLightupActors");

	ABP_CharaLightingManager_C_ClearLightupActors_Params params;
	params.CutsceneOnly = CutsceneOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupCutsceneLightingActors
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3CharaLightingSequencerActor* SeqLightingActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::SetupCutsceneLightingActors(class AS3CharaLightingSequencerActor* SeqLightingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupCutsceneLightingActors");

	ABP_CharaLightingManager_C_SetupCutsceneLightingActors_Params params;
	params.SeqLightingActor = SeqLightingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.TryGetActorMeshComponent
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* ABP_CharaLightingManager_C::TryGetActorMeshComponent(class AActor* Actor)
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
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALight*                  Light                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUse                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SpotDeviatedConeAngle          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::IsUsableLight(class ALight* Light, bool* bUse, float* SpotDeviatedConeAngle)
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
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeviatedConeAngle              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzySystemComponent*   SpotFuzzySystem                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          DesirabilityScore              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::GetMainSpotLightDesirabilityScore(float Distance, float Intensity, float DeviatedConeAngle, class UFuzzySystemComponent* SpotFuzzySystem, float* DesirabilityScore)
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
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::SetupEnvironmentLightParamater(class AActor** TargetActor, bool* bDummy)
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
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzySystemComponent*   PointFuzzySystem               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          DesirabilityScore              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::GetMainPointLightDesirabilityScore(float Distance, float Intensity, class UFuzzySystemComponent* PointFuzzySystem, float* DesirabilityScore)
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
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CharaLightingManager_C::InitializeFuzzySystems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.InitializeFuzzySystems");

	ABP_CharaLightingManager_C_InitializeFuzzySystems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.UpdateAllCutsceneLightingActors
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CharaLightingManager_C::UpdateAllCutsceneLightingActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.UpdateAllCutsceneLightingActors");

	ABP_CharaLightingManager_C_UpdateAllCutsceneLightingActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.ResetValues
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromCutscene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::ResetValues(bool FromCutscene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.ResetValues");

	ABP_CharaLightingManager_C_ResetValues_Params params;
	params.FromCutscene = FromCutscene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.SpawnCharaLightingActor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::SpawnCharaLightingActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.SpawnCharaLightingActor");

	ABP_CharaLightingManager_C_SpawnCharaLightingActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CharaLightingManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.UserConstructionScript");

	ABP_CharaLightingManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.ReceiveTick");

	ABP_CharaLightingManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.DebugDrawLightLineToggle
// (BlueprintCallable, BlueprintEvent)

void ABP_CharaLightingManager_C::DebugDrawLightLineToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.DebugDrawLightLineToggle");

	ABP_CharaLightingManager_C_DebugDrawLightLineToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.DebugCharaLightOnOffToggle
// (BlueprintCallable, BlueprintEvent)

void ABP_CharaLightingManager_C::DebugCharaLightOnOffToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.DebugCharaLightOnOffToggle");

	ABP_CharaLightingManager_C_DebugCharaLightOnOffToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.Editor_UpdateAllCutsceneLightingActors
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACameraActor**           Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                LevelSequence                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::Editor_UpdateAllCutsceneLightingActors(class ACameraActor** Camera, class UObject** LevelSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.Editor_UpdateAllCutsceneLightingActors");

	ABP_CharaLightingManager_C_Editor_UpdateAllCutsceneLightingActors_Params params;
	params.Camera = Camera;
	params.LevelSequence = LevelSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.Editor_ResetVariable
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CharaLightingManager_C::Editor_ResetVariable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.Editor_ResetVariable");

	ABP_CharaLightingManager_C_Editor_ResetVariable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupTestLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3CharaLightingActor*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::SetupTestLevel(class AS3CharaLightingActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupTestLevel");

	ABP_CharaLightingManager_C_SetupTestLevel_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.BindManagerEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_CharaLightingManager_C::BindManagerEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.BindManagerEvents");

	ABP_CharaLightingManager_C_BindManagerEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnBeginTalk
// (BlueprintCallable, BlueprintEvent)

void ABP_CharaLightingManager_C::OnBeginTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnBeginTalk");

	ABP_CharaLightingManager_C_OnBeginTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnEndTalk
// (BlueprintCallable, BlueprintEvent)

void ABP_CharaLightingManager_C::OnEndTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnEndTalk");

	ABP_CharaLightingManager_C_OnEndTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnCameraChanged
// (BlueprintCallable, BlueprintEvent)

void ABP_CharaLightingManager_C::OnCameraChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnCameraChanged");

	ABP_CharaLightingManager_C_OnCameraChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.onCutsceneStart
// (BlueprintCallable, BlueprintEvent)

void ABP_CharaLightingManager_C::onCutsceneStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.onCutsceneStart");

	ABP_CharaLightingManager_C_onCutsceneStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.onCutsceneEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_CharaLightingManager_C::onCutsceneEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.onCutsceneEnd");

	ABP_CharaLightingManager_C_onCutsceneEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnCameraChangedSequencer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 CameraObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::OnCameraChangedSequencer(class UObject* CameraObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnCameraChangedSequencer");

	ABP_CharaLightingManager_C_OnCameraChangedSequencer_Params params;
	params.CameraObject = CameraObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.UnbindCutscene
// (BlueprintCallable, BlueprintEvent)

void ABP_CharaLightingManager_C::UnbindCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.UnbindCutscene");

	ABP_CharaLightingManager_C_UnbindCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnChangedJoinActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EJoinActorChangeEvent          ChangeEvent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::OnChangedJoinActor(EJoinActorChangeEvent ChangeEvent, class AActor* Actor)
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
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelSequenceActor*     PlaySequenceActor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::OnStartAcCameraSequence(class ALevelSequenceActor* PlaySequenceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnStartAcCameraSequence");

	ABP_CharaLightingManager_C_OnStartAcCameraSequence_Params params;
	params.PlaySequenceActor = PlaySequenceActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnFinishedAcCameraSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*    LevelSequencePlayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharaLightingManager_C::OnFinishedAcCameraSequence(class ULevelSequencePlayer* LevelSequencePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnFinishedAcCameraSequence");

	ABP_CharaLightingManager_C_OnFinishedAcCameraSequence_Params params;
	params.LevelSequencePlayer = LevelSequencePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnStopAcCameraSequence
// (BlueprintCallable, BlueprintEvent)

void ABP_CharaLightingManager_C::OnStopAcCameraSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnStopAcCameraSequence");

	ABP_CharaLightingManager_C_OnStopAcCameraSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.UnbindAcCameraSequence
// (BlueprintCallable, BlueprintEvent)

void ABP_CharaLightingManager_C::UnbindAcCameraSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.UnbindAcCameraSequence");

	ABP_CharaLightingManager_C_UnbindAcCameraSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnChangedACCameraCut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        CameraComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_CharaLightingManager_C::OnChangedACCameraCut(class UCameraComponent* CameraComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnChangedACCameraCut");

	ABP_CharaLightingManager_C_OnChangedACCameraCut_Params params;
	params.CameraComponent = CameraComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CharaLightingManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharaLightingManager.BP_CharaLightingManager_C.ReceiveBeginPlay");

	ABP_CharaLightingManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharaLightingManager.BP_CharaLightingManager_C.ExecuteUbergraph_BP_CharaLightingManager
// (HasDefaults)
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
