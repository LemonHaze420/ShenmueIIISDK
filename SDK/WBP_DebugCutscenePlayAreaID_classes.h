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

// WidgetBlueprintGeneratedClass WBP_DebugCutscenePlayAreaID.WBP_DebugCutscenePlayAreaID_C
// 0x0010 (0x0230 - 0x0220)
class UWBP_DebugCutscenePlayAreaID_C : public US3UserWidget
{
public:
	class UTextBlock*                                  TextBlock_ID;                                             // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       CutsceneId;                                               // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DebugCutscenePlayAreaID.WBP_DebugCutscenePlayAreaID_C");
		return ptr;
	}


	void UpdateText();
	void SetCutsceneID(const struct FName& InCutsceneID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
