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

// WidgetBlueprintGeneratedClass UMG_Subtitles.UMG_Subtitles_C
// 0x00B0 (0x02D0 - 0x0220)
class UUMG_Subtitles_C : public US3UserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class UUMG_SubTitleTextBottom_C*                   SubTitleText_Bottom;                                      // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUMG_SubTitleText_C*                         SubTitleText_BottomChaina;                                // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUMG_SubTitleText_C*                         SubTitleText_Top;                                         // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUMG_SubTitleText_C*                         SubTitleText_Top_iLineOnly;                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    onFinishWaitDestructor;                                   // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FText                                       SubtitleText;                                             // 0x0258(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                SubtitleColor;                                            // 0x0270(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FST_RubyInfo                                Empty;                                                    // 0x0280(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_SubtitleWidgetInfo>              SubtitleInfo;                                             // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SubtitleIndex;                                            // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUpdateSubtitleFeeding;                                   // 0x02A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02A5(0x0003) MISSED OFFSET
	float                                              SubtitleFeedingTime;                                      // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    onPlayTalkSE;                                             // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FLinearColor                                OutlineColor;                                             // 0x02C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Subtitles.UMG_Subtitles_C");
		return ptr;
	}


	void isLocalizeChina(bool* China);
	void ForceAllDisp();
	void SetPlayRate(float NewRate);
	void SetIsVoice(bool IsVoice);
	void CreateSubtitleWidgetInfo(float TotalTime, int TotalStringNum, TArray<struct FString>* TextArray, TArray<struct FST_RubyInfo>* RubyInfoArray);
	void UpdateDisplay(const struct FString& Body0, const struct FString& Body1, const struct FST_RubyInfo& RubyInfo0, const struct FST_RubyInfo& RubyInfo1, const struct FLinearColor& SubtitleColor, const struct FLinearColor& OutlineColor);
	void STATIC_GetClipperElapsedTimeAlpha(float* Time);
	void STATIC_GetClipperTime(float* Time);
	void STATIC_Construct();
	void STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void DrawSubtitles(TEnumAsByte<EN_TalkCharacterType> Type, TArray<struct FString> TextArray, TArray<struct FST_RubyInfo> RubyInfoArray, const struct FString& Text);
	void STATIC_Clear();
	void STATIC_UpdateSubtitleFeedingDisplay();
	void STATIC_SoundPlay();
	void ExecuteUbergraph_UMG_Subtitles(int EntryPoint);
	void STATIC_onPlayTalkSE__DelegateSignature();
	void STATIC_onFinishWaitDestructor__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
