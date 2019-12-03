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

// BlueprintGeneratedClass BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C
// 0x0030 (0x0370 - 0x0340)
class ABP_SkillDisplayScene_Base_C : public AS3SkillDisplaySceneActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (Transient, DuplicateTransient)
	class UTextureRenderTarget2D*                      RenderTexture;                                            // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               EnableDrawing;                                            // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	class UBTL_RuntimeAttackDB*                        LoadedMotionDB;                                           // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBTL_CommandLibraryBase*                     CommandLibrary;                                           // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C");
		return ptr;
	}


	bool IsLoading();
	bool STATIC_GetWidgetVisible(class UWidget* self2);
	void CaptureSingleFrame(const struct FName& Item, bool* Success);
	void SetRenderTexture(class UTextureRenderTarget2D* TextureRenderTarget2D);
	void EnableDrawToTexture(bool bRender);
	void StopMotion(bool* bSuccess);
	void PlayMotionForItem(const struct FName& Skill, bool* bSuccess);
	void UserConstructionScript();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void STATIC_ExecuteUbergraph_BP_SkillDisplayScene_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
