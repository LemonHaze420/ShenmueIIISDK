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

// BlueprintGeneratedClass BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C
// 0x0040 (0x0368 - 0x0328)
class ABP_SkillDisplayScene_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTexture;                                            // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               EnableDrawing;                                            // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class UBTL_RuntimeAttackDB*                        LoadedMotionDB;                                           // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBTL_CommandLibraryBase*                     CommandLibrary;                                           // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C");
		return ptr;
	}


	bool IsLoading();
	bool GetWidgetVisible(class UWidget* self2);
	void CaptureSingleFrame(const struct FName& Item, bool* Success);
	void SetRenderTexture(class UTextureRenderTarget2D* TextureRenderTarget2D);
	void EnableDrawToTexture(bool bRender);
	void StopMotion(bool* bSuccess);
	void PlayMotionForItem(const struct FName& Skill, bool* bSuccess);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_SkillDisplayScene_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
