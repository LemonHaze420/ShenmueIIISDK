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

// WidgetBlueprintGeneratedClass BPW_UI_GeneralWindow_Image.BPW_UI_GeneralWindow_Image_C
// 0x0008 (0x0210 - 0x0208)
class UBPW_UI_GeneralWindow_Image_C : public UUserWidget
{
public:
	class UImage*                                      Image_2;                                                  // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_UI_GeneralWindow_Image.BPW_UI_GeneralWindow_Image_C");
		return ptr;
	}


	void SetData(const struct FVector2D& Size);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
