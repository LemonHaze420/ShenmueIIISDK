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

// BlueprintGeneratedClass BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C
// 0x00DC (0x0404 - 0x0328)
class ABP_MiniGame_KeihoUI_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             DirectionArrow;                                           // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SafeRangeRoot;                                            // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SafeRangeMesh2;                                           // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SafeRangeMesh;                                            // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RangeRoot2;                                               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RangeRoot1;                                               // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RotateSafeLineSubRoot2;                                   // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RotateSafeLineSubRoot1;                                   // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RotateSafeLineRoot;                                       // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SideLine2;                                                // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SideLine1;                                                // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RotateStick;                                              // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RotateRoot;                                               // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_LineVisiblefade_SafeRangeAlpha_6F77C13D440EDCC546EBDE87F3234A0E;// 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_LineVisiblefade_Alpha_6F77C13D440EDCC546EBDE87F3234A0E;// 0x03A4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_LineVisiblefade__Direction_6F77C13D440EDCC546EBDE87F3234A0E;// 0x03A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_LineVisiblefade;                                 // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            RefStickLineMaterialList;                                 // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                LineList;                                                 // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               SafeBarEnabled;                                           // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            RefSideLineMaterialList;                                  // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            RefSafeRangeMaterialList;                                 // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SafeRangeAlpha;                                           // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C");
		return ptr;
	}


	void UpdateGradation(float Value, float SafeRamge);
	void UpdateSafeLineRootRotate(float New_Rotation_X__Roll_);
	void InitializeSafeRange(float Range, float Alpha);
	void UpdateStickRotate(float New_Rotation_X__Roll_);
	void UserConstructionScript();
	void Timeline_LineVisiblefade__FinishedFunc();
	void Timeline_LineVisiblefade__UpdateFunc();
	void ReceiveBeginPlay();
	void SetEnabledLine(bool Enabled);
	void ExecuteUbergraph_BP_MiniGame_KeihoUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
