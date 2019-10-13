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

// BlueprintGeneratedClass BP_MiniMap2DManager.BP_MiniMap2DManager_C
// 0x0110 (0x0438 - 0x0328)
class ABP_MiniMap2DManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BackAlpha;                                                // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    BackDynamicmaterial;                                      // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MapAlpha;                                                 // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsValidMinimap;                                           // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	class UWBP_MiniMap2D_C*                            Widget;                                                   // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0358(0x0050) UNKNOWN PROPERTY: MapProperty BP_MiniMap2DManager.BP_MiniMap2DManager_C.TextureMap
	unsigned char                                      UnknownData03[0x50];                                      // 0x03A8(0x0050) UNKNOWN PROPERTY: MapProperty BP_MiniMap2DManager.BP_MiniMap2DManager_C.MaskMap
	unsigned char                                      UnknownData04[0x28];                                      // 0x03F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_MiniMap2DManager.BP_MiniMap2DManager_C.TextureAsset
	int                                                MiniMapMaskStep;                                          // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ES3Where                                           Level;                                                    // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDetermineValid;                                         // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniMap2DManager.BP_MiniMap2DManager_C");
		return ptr;
	}


	void SetValidMinimap(bool bEnable);
	void Update(bool bForce);
	void SetBackAlpha(float Value);
	void SetBrushAlpha(float Alpha);
	bool IsInValidMapRegion();
	void UserConstructionScript();
	void OnLoaded_596D289D4B92DE0545173793E979D552(class UObject* Loaded);
	void OnLoaded_596D289D4B92DE0545173793A0671C6E(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void MessageInvalidMap();
	void ExecuteUbergraph_BP_MiniMap2DManager(int EntryPoint);
	void OnDetermineValid__DelegateSignature(bool bIsValid);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
