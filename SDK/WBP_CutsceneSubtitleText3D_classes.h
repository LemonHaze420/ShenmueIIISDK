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

// WidgetBlueprintGeneratedClass WBP_CutsceneSubtitleText3D.WBP_CutsceneSubtitleText3D_C
// 0x0008 (0x0228 - 0x0220)
class UWBP_CutsceneSubtitleText3D_C : public US3UserWidget
{
public:
	class UTextBlock*                                  SubtitleText;                                             // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CutsceneSubtitleText3D.WBP_CutsceneSubtitleText3D_C");
		return ptr;
	}


	void TestUpdateTextFromReplaceString(TArray<struct FName>* Labels);
	void UpdateText(TArray<struct FName>* Labels);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
