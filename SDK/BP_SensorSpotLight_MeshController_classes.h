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

// BlueprintGeneratedClass BP_SensorSpotLight_MeshController.BP_SensorSpotLight_MeshController_C
// 0x0079 (0x0469 - 0x03F0)
class ABP_SensorSpotLight_MeshController_C : public ABP_SensorSpotLight_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        S_EV_SimpleLightBeam_03;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DMI;                                                      // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                LightColor;                                               // 0x0410(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Intensity;                                                // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FalloffExponent;                                          // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Temperature;                                              // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 MainMesh;                                                 // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MainMeshEmissiveID;                                       // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	TArray<struct FSTRUCT_MeshController>              AdditionalMeshes;                                         // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            DMIs;                                                     // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    DMI_Cone;                                                 // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableGlow;                                              // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SensorSpotLight_MeshController.BP_SensorSpotLight_MeshController_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnSetLightEnable(bool bNewLightEnable);
	void ExecuteUbergraph_BP_SensorSpotLight_MeshController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
