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

// WidgetBlueprintGeneratedClass wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C
// 0x0119 (0x0321 - 0x0208)
class Uwgt_BTL_MontagePlayer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_RenderTarget;                                       // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       TextureParam;                                             // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_SkillDisplayScene_Base_C*                RenderObjectInstance;                                     // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0228(0x0028) UNKNOWN PROPERTY: SoftClassProperty wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.RenderObjectClassSoft
	unsigned char                                      UnknownData01[0x28];                                      // 0x0250(0x0028) UNKNOWN PROPERTY: SoftObjectProperty wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.RenderTargetTexture
	struct FName                                       QueuedMotionItem;                                         // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               QueuedMotionIsSingleFrame;                                // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0281(0x0003) MISSED OFFSET
	struct FGeometry                                   MyGeometry;                                               // 0x0284(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
	struct FTransform                                  RenderObjectTransform;                                    // 0x02C0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bRenderObjectDestroyed;                                   // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CreateRenderTarget;                                       // 0x02F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x02F2(0x0002) MISSED OFFSET
	int                                                Width;                                                    // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureRenderTargetFormat>            Format;                                                   // 0x02FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x02FD(0x0003) MISSED OFFSET
	class UTextureRenderTarget2D*                      SpawnedTexture;                                           // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTexture;                                            // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPostProcessedLoad;                                       // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0311(0x0007) MISSED OFFSET
	class UBTL_CommandLibraryBase*                     CommandLibrary;                                           // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRespawn;                                                 // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C");
		return ptr;
	}


	void SetSkillLibrary(class UBTL_CommandLibraryBase* CommandLibrary);
	bool IsLoadingFinished();
	bool IsRenderObjectReady();
	struct FTransform CalculateRenderObjectTransform();
	void DestroyRenderObject();
	void PlaySingleFrame(const struct FName& InputPin, bool* bSuccess);
	void StopMotion(bool* bSuccess);
	void PlayMotionForItem(const struct FName& InputPin, bool* bSuccess);
	void SpawnRenderObject(class UClass* InputPin, bool* newParam);
	void SetRenderTex(class UTextureRenderTarget2D* Value);
	void OnLoaded_887C3B4A44C26F627DEC4EAAECA73E5C(class UObject* Loaded);
	void OnLoaded_6B67131F435381D27123BE8560D7EF88(class UClass* Loaded);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Destruct();
	void RespawnRenderObject();
	void Construct();
	void ExecuteUbergraph_wgt_BTL_MontagePlayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
