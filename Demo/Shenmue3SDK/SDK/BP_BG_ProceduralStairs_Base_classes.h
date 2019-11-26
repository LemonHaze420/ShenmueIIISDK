#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C
// 0x0151 (0x0479 - 0x0328)
class ABP_BG_ProceduralStairs_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               NavModifireBox_Low;                                       // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavModifierBox;                                           // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                StepHorizontalCount;                                      // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StepVerticalCount;                                        // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StepDimensions;                                           // 0x0350(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	TArray<struct FST_StairsNavLink>                   NavLinks;                                                 // 0x0360(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class ABP_S3StaircaseBase_C*                       Staircase;                                                // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                StepMeshComponents;                                       // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                AdditionalMeshComponents;                                 // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      AdditionalMeshActor;                                      // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  VirtualBaseRelativeTransform;                             // 0x03A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   WalkableWidth;                                            // 0x03D0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bHighCostArea;                                            // 0x03D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	TMap<class UStaticMesh*, class UInstancedStaticMeshComponent*> StaticMeshComponents;                                     // 0x03E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                VirtualStepVerticalCount;                                 // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WalkableStartStep;                                        // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0438(0x0008) MISSED OFFSET
	struct FTransform                                  OriginalBaseRelativeTransform;                            // 0x0440(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      StepMeshActor;                                            // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnvironmentOnly;                                         // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C");
		return ptr;
	}


	void DebugPrintMobility();
	void EnsureMeshActor(bool IsStep, class AActor** Parent);
	void GetGimmickInitInfo(struct FTransform* ActorTransform, struct FTransform* RelativeTransform, struct FVector* StepDimensions, int* StepCount);
	class UInstancedStaticMeshComponent* EnsureStaticMeshComponent(class UStaticMesh* Mesh, class UMaterialInterface* Material, bool IsFloor);
	void SpawnMesh(class UStaticMesh* NewMesh, class UMaterialInterface* Material, bool bIsStep, const struct FTransform& RelativeTransform, class UInstancedStaticMeshComponent** Component, int* Index);
	void CalcChildScaleFix(bool* bNeedFix, struct FVector* FixScale);
	void PostConstruction();
	void CreateGimmick();
	void SetModifierBox();
	void CreateLink(struct FST_StairsNavLink* StairsNavLink, bool* Result);
	void InitializeFromLegacyChild(float StepDepth, float StepWidth, float StepHeight, int NumSteps__1_, int NumbWidths__1_);
	void CalculateBaseRelativeTransform(struct FTransform* OutTransform);
	void UserConstructionScript();
	void ExecuteUbergraph_BP_BG_ProceduralStairs_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
