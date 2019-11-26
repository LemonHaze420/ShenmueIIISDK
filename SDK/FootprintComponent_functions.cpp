
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

// Function FootprintComponent.FootprintComponent_C.GetLastFootprintType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFootprintTypeBase_C*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFootprintTypeBase_C* UFootprintComponent_C::GetLastFootprintType()
{
	static auto fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.GetLastFootprintType");

	UFootprintComponent_C_GetLastFootprintType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FootprintComponent.FootprintComponent_C.CanCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFootprintComponent_C::CanCheck(bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.CanCheck");

	UFootprintComponent_C_CanCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function FootprintComponent.FootprintComponent_C.BoxTraceGround
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Start                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Orientation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFootprintComponent_C::BoxTraceGround(const struct FVector& Start, const struct FVector& End, const struct FRotator& Orientation, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.BoxTraceGround");

	UFootprintComponent_C_BoxTraceGround_Params params;
	params.Start = Start;
	params.End = End;
	params.Orientation = Orientation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function FootprintComponent.FootprintComponent_C.ChooseCue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USoundAtomCue*           Cue                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFootprintComponent_C::ChooseCue(class USoundAtomCue** Cue)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.ChooseCue");

	UFootprintComponent_C_ChooseCue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function FootprintComponent.FootprintComponent_C.TraceGround
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFootprintComponent_C::TraceGround(const struct FVector& Location, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.TraceGround");

	UFootprintComponent_C_TraceGround_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function FootprintComponent.FootprintComponent_C.IsRainy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Rainy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFootprintComponent_C::IsRainy(bool* Rainy, float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.IsRainy");

	UFootprintComponent_C_IsRainy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rainy != nullptr)
		*Rainy = params.Rainy;
	if (Rate != nullptr)
		*Rate = params.Rate;
}


// Function FootprintComponent.FootprintComponent_C.PlayFootprintAtomCue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FString                 SelectorLabel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ApplyRain                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OverlapRainLabel               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UFootprintComponent_C::PlayFootprintAtomCue(const struct FVector& Location, const struct FString& SelectorLabel, bool ApplyRain, const struct FString& OverlapRainLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.PlayFootprintAtomCue");

	UFootprintComponent_C_PlayFootprintAtomCue_Params params;
	params.Location = Location;
	params.SelectorLabel = SelectorLabel;
	params.ApplyRain = ApplyRain;
	params.OverlapRainLabel = OverlapRainLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FootprintComponent.FootprintComponent_C.SpawnParticles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UParticleSystem*         ParticleSystem                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFootprintComponent_C::SpawnParticles(const struct FVector& Location, const struct FRotator& Rotation, class UParticleSystem* ParticleSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.SpawnParticles");

	UFootprintComponent_C_SpawnParticles_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.ParticleSystem = ParticleSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FootprintComponent.FootprintComponent_C.SpawnDecal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Size                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UMaterialInterface*      Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeSpan                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OriginalOpacity                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFootprintComponent_C::SpawnDecal(const struct FVector& Location, float Rotation, const struct FVector& Size, class UMaterialInterface* Material, float LifeSpan, float OriginalOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.SpawnDecal");

	UFootprintComponent_C_SpawnDecal_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Size = Size;
	params.Material = Material;
	params.LifeSpan = LifeSpan;
	params.OriginalOpacity = OriginalOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FootprintComponent.FootprintComponent_C.OnFootprintTypeChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFootprintTypeBase_C*    OldType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFootprintTypeBase_C*    NewType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFootprintComponent_C::OnFootprintTypeChange(class UFootprintTypeBase_C* OldType, class UFootprintTypeBase_C* NewType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.OnFootprintTypeChange");

	UFootprintComponent_C_OnFootprintTypeChange_Params params;
	params.OldType = OldType;
	params.NewType = NewType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FootprintComponent.FootprintComponent_C.GetFootprintTypeFromPhysicalMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPhysicalMaterial*       PhysicalMaterial               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFootprintTypeBase_C*    FootprintType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFootprintComponent_C::GetFootprintTypeFromPhysicalMaterial(class UPhysicalMaterial* PhysicalMaterial, class UFootprintTypeBase_C** FootprintType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.GetFootprintTypeFromPhysicalMaterial");

	UFootprintComponent_C_GetFootprintTypeFromPhysicalMaterial_Params params;
	params.PhysicalMaterial = PhysicalMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FootprintType != nullptr)
		*FootprintType = params.FootprintType;
}


// Function FootprintComponent.FootprintComponent_C.OnFootFall
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TEnumAsByte<ENEFootType>       FootType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFootprintComponent_C::OnFootFall(const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<ENEFootType> FootType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.OnFootFall");

	UFootprintComponent_C_OnFootFall_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.FootType = FootType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FootprintComponent.FootprintComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UFootprintComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.ReceiveBeginPlay");

	UFootprintComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FootprintComponent.FootprintComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFootprintComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.ReceiveTick");

	UFootprintComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FootprintComponent.FootprintComponent_C.ExecuteUbergraph_FootprintComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFootprintComponent_C::ExecuteUbergraph_FootprintComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.ExecuteUbergraph_FootprintComponent");

	UFootprintComponent_C_ExecuteUbergraph_FootprintComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
