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

// WidgetBlueprintGeneratedClass BPW_ScreenFade.BPW_ScreenFade_C
// 0x0008 (0x0210 - 0x0208)
class UBPW_ScreenFade_C : public UUserWidget
{
public:
	class UImage*                                      ColorImage;                                               // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ScreenFade.BPW_ScreenFade_C");
		return ptr;
	}


	void STATIC_GetFadeColor(bool bIgnoreOpacity, struct FLinearColor* ColorAndOpacity);
	void STATIC_SetFadeColor(const struct FLinearColor& FadeColor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
