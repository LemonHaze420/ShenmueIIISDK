#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SB_SquareLight.BP_SB_SquareLight_C
// 0x0060 (0x0388 - 0x0328)
class ABP_SB_SquareLight_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_Flash__Direction_A6EA84C0439E090B88521A98D5B037F2;// 0x0340(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Flash;                                           // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                MeshList;                                                 // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            MaterialList;                                             // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                LightColor;                                               // 0x0370(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Length;                                                   // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LightNum;                                                 // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SB_SquareLight.BP_SB_SquareLight_C");
		return ptr;
	}


	void UpdateLight();
	void SetColor(const struct FLinearColor& Color, float Intensity);
	void UserConstructionScript();
	void Timeline_Flash__FinishedFunc();
	void Timeline_Flash__UpdateFunc();
	void Timeline_Flash__LightOff__EventFunc();
	void Timeline_Flash__LightOn__EventFunc();
	void ReceiveBeginPlay();
	void Flash();
	void AllLightOn();
	void AllLightOff();
	void TargetLightOff(int Index);
	void ExecuteUbergraph_BP_SB_SquareLight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
