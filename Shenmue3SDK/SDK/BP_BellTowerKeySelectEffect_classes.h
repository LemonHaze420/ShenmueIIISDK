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

// BlueprintGeneratedClass BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C
// 0x0028 (0x0360 - 0x0338)
class ABP_BellTowerKeySelectEffect_C : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	struct FLinearColor                                EffectColor;                                              // 0x0340(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              EffectExpandedLength;                                     // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    EffectDynamicMaterial;                                    // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C");
		return ptr;
	}


	void SetEffectMesh(class UStaticMesh* NewMesh);
	void UpdateEffect();
	void SetupEffectMaterial();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BellTowerKeySelectEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
