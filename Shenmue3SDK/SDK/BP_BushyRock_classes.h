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

// BlueprintGeneratedClass BP_BushyRock.BP_BushyRock_C
// 0x00E0 (0x0408 - 0x0328)
class ABP_BushyRock_C : public AActor
{
public:
	class UTextRenderComponent*                        TextRender;                                               // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHierarchicalInstancedStaticMeshComponent*   BushMesh;                                                 // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RockMesh;                                                 // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0358(0x0008) MISSED OFFSET
	struct FTransform                                  BushStartLine;                                            // 0x0360(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                BushcountDesired;                                         // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BushcountActual;                                          // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleMin;                                                 // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleMax;                                                 // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocationAdjustment;                                       // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiusAdjustment;                                         // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 BaseMesh;                                                 // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 FoliageMesh;                                              // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DEBUG;                                                    // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET
	struct FRandomStream                               Seed;                                                     // 0x03BC(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OverrideMaterialID;                                       // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                StartCullDistance;                                        // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseStoredTransforms;                                      // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	TArray<struct FSTRUCT_BushTransforms>              StoredTransforms;                                         // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BushyRock.BP_BushyRock_C");
		return ptr;
	}


	struct FVector MakeBushScale(class USceneComponent* self2, struct FRandomStream* Stream);
	struct FRotator MakeBushRotation(struct FRandomStream* Stream);
	void SetTextComponentValue();
	void CalculateTraceStartAndEnd(struct FVector* Start, struct FVector* End, float* AdjustedRadius);
	void SetBushlineStartTransform();
	void SetArrowComponentTransform();
	void SetTextComponentTransform();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
