#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FootprintComponent.FootprintComponent_C
// 0x009C (0x018C - 0x00F0)
class UFootprintComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class UFootprintTypeBase_C*                        ActiveFootprintType;                                      // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFootprintTypeBase_C*                        PreviousFootprintType;                                    // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UFootprintTypeBase_C*>                FootprintTypes;                                           // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              FootprintTypeClasses;                                     // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  ActiveFootprint;                                          // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleAdjust;                                              // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	class UParticleSystem*                             WaterStepParticle;                                        // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ES3CharacterGender>                    Gender;                                                   // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	class ABP_S3Character_C*                           S3Character;                                              // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isPlayer;                                                 // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0151(0x0007) MISSED OFFSET
	struct FName                                       CharaName;                                                // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_S3_TagChara_C*                           TagCharaComponent;                                        // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FString                                     LastLabel;                                                // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DebugPrintTime;                                           // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableDebug;                                              // 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseDistanceCulling;                                       // 0x017D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x017E(0x0002) MISSED OFFSET
	struct FVector                                     ActorLocationLastFootFall;                                // 0x0180(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FootprintComponent.FootprintComponent_C");
		return ptr;
	}


	class UFootprintTypeBase_C* GetLastFootprintType();
	void CanCheck(bool* CAN);
	bool BoxTraceGround(const struct FVector& Start, const struct FVector& End, const struct FRotator& Orientation, struct FHitResult* OutHit);
	void ChooseCue(class USoundAtomCue** Cue);
	bool TraceGround(const struct FVector& Location, struct FHitResult* OutHit);
	void IsRainy(bool* Rainy, float* Rate);
	void PlayFootprintAtomCue(const struct FVector& Location, const struct FString& SelectorLabel, bool ApplyRain, const struct FString& OverlapRainLabel);
	void SpawnParticles(const struct FVector& Location, const struct FRotator& Rotation, class UParticleSystem* ParticleSystem);
	void SpawnDecal(const struct FVector& Location, float Rotation, const struct FVector& Size, class UMaterialInterface* Material, float LifeSpan, float OriginalOpacity);
	void OnFootprintTypeChange(class UFootprintTypeBase_C* OldType, class UFootprintTypeBase_C* NewType);
	void GetFootprintTypeFromPhysicalMaterial(class UPhysicalMaterial* PhysicalMaterial, class UFootprintTypeBase_C** FootprintType);
	void OnFootFall(const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<ENEFootType> FootType);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_FootprintComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
