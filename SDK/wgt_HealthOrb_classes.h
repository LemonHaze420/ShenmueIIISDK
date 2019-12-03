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

// WidgetBlueprintGeneratedClass wgt_HealthOrb.wgt_HealthOrb_C
// 0x0028 (0x0250 - 0x0228)
class Uwgt_HealthOrb_C : public Uwgt_FloatMeter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      OrbImage;                                                 // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               Use;                                                      // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Material;                                                 // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  FullTexture;                                              // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass wgt_HealthOrb.wgt_HealthOrb_C");
		return ptr;
	}


	void SetFullTex(class UTexture2D* FullTexture);
	void SetFillRatio(float FillRatio, bool* Changed);
	void STATIC_SetScaleRatio(float ScaleRatio, bool* Changed);
	void SetUse(bool Use);
	void STATIC_UpdateIcon();
	void Construct();
	void STATIC_ExecuteUbergraph_wgt_HealthOrb(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
