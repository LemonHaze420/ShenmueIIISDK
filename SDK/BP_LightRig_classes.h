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

// BlueprintGeneratedClass BP_LightRig.BP_LightRig_C
// 0x02E8 (0x0710 - 0x0428)
class ABP_LightRig_C : public ABP_SensorPointLight_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bUseEdgeLights;                                           // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCeilingHeight;                                        // 0x0439(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePointlights;                                          // 0x043A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCentreLightColourForEdgeLights;                       // 0x043B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTransformRotation;                                    // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	float                                              EdgeLightIntensity;                                       // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeLightRadius;                                          // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeLightTemperature;                                     // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeLightFalloffExponent;                                 // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeSpotConeInnerAngle;                                   // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeSpotConeOuterAngle;                                   // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                EdgeLightColour;                                          // 0x0458(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0468(0x0008) MISSED OFFSET
	struct FTransform                                  Left;                                                     // 0x0470(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  Right;                                                    // 0x04A0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  Front;                                                    // 0x04D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  Back;                                                     // 0x0500(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               UseCentreLight;                                           // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	float                                              CentreLightIntensity;                                     // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CentreLightRadius;                                        // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CentreLightTemperature;                                   // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CentreLightFalloffExponent;                               // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CentreLightColour;                                        // 0x0544(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                CentreMeshID;                                             // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CentremeshScale;                                          // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CentreMeshZ_Offset;                                       // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSTRUCT_EdgeSpotlight                       FrontEdge;                                                // 0x0560(0x0014) (Edit, BlueprintVisible)
	struct FSTRUCT_EdgeSpotlight                       BackEdge;                                                 // 0x0574(0x0014) (Edit, BlueprintVisible)
	struct FSTRUCT_EdgeSpotlight                       LeftEdge;                                                 // 0x0588(0x0014) (Edit, BlueprintVisible)
	struct FSTRUCT_EdgeSpotlight                       RightEdge;                                                // 0x059C(0x0014) (Edit, BlueprintVisible)
	bool                                               UseMidLights;                                             // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x05B1(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        CentreMesh;                                               // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTransform                                  CeilingHeight;                                            // 0x05C0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<struct FTransform>                          EdgeLightsTransforms;                                     // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSTRUCT_EdgeSpotlight>               EdgeLightStructs;                                         // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                EdgeMeshID;                                               // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EdgeMeshScale;                                            // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebug;                                                   // 0x0618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0619(0x0007) MISSED OFFSET
	TArray<class ULightComponent*>                     Lights;                                                   // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTransform>                          MidLightTransforms;                                       // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSTRUCT_MidPointlight>               MidLights;                                                // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                MidLightColour;                                           // 0x0650(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bPreviewLightsInEditor;                                   // 0x0660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCentreLightColourForMidLights;                        // 0x0661(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0662(0x0006) MISSED OFFSET
	TArray<struct FSTRUCT_LightMeshInfo>               Meshes;                                                   // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            DMIs;                                                     // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              VolumetricScatteringIntensity;                            // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCurveVolumetricScatteringIntensity;                   // 0x068C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x068D(0x0003) MISSED OFFSET
	class UCurveFloat*                                 VolumetricScatteringIntensityCurve;                       // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureLightProfile*                        IES_Texture;                                              // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ULightComponent*>                     MidLightArray;                                            // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ULightComponent*>                     EdgeLightArray;                                           // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class ULightComponent*, float>                MidIntensityMap;                                          // 0x06C0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LightRig.BP_LightRig_C");
		return ptr;
	}


	void GetMainLightIntensity(float* Intensity);
	void STATIC_ClampShadowBias();
	void STATIC_CreateDMI(class UPrimitiveComponent* StaticMesh, int ElementIndex);
	void STATIC_PreviewLights(bool bPreviewLightsInEditor);
	void MakeEdgeLightArrays();
	bool IsEdgeLightInUse(int Count, bool Use);
	void STATIC_PrintEdgeDebugInfo(const struct FVector& Location, const struct FVector& Location2);
	struct FVector MakeArrayStartPointLocation(float Spacing, int LightCount, struct FTransform* Transform);
	void CreateEdgeLights();
	void STATIC_SetNewEdgeLightZHeight(const struct FTransform& InputTransform, struct FTransform* OutputTransform);
	void UseCeilingHeightForEdgeLightTransforms();
	void AddMidFillLights();
	void AddCentreMesh();
	void UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnSetLightEnable(bool bNewLightEnable);
	void STATIC_UpdateIntensityRate();
	void STATIC_InitialDisable();
	void ExecuteUbergraph_BP_LightRig(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
