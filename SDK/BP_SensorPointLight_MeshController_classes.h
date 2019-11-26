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

// BlueprintGeneratedClass BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C
// 0x0069 (0x0491 - 0x0428)
class ABP_SensorPointLight_MeshController_C : public ABP_SensorPointLight_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DMI;                                                      // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                LightColor;                                               // 0x0440(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Intensity;                                                // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FalloffExponent;                                          // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Temperature;                                              // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 MainMesh;                                                 // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MainMeshEmissiveID;                                       // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	TArray<struct FSTRUCT_MeshController>              AdditionalMeshes;                                         // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            DMIs;                                                     // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DisableGlow;                                              // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C");
		return ptr;
	}


	void GetMainLightIntensity(float* Intensity);
	void UserConstructionScript();
	void OnSetLightEnable(bool bNewLightEnable);
	void UpdateIntensityRate();
	void ExecuteUbergraph_BP_SensorPointLight_MeshController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
