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

// WidgetBlueprintGeneratedClass UMG_SubTitleTextBase.UMG_SubTitleTextBase_C
// 0x0040 (0x0290 - 0x0250)
class UUMG_SubTitleTextBase_C : public US3SubtitleWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (Transient, DuplicateTransient)
	float                                              BodyCharacterSize;                                        // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RubyCharacterSize;                                        // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class Uwgt_S3Subtitles_textRubyParts_C*>    RubyParts;                                                // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    onPlayTalkSE;                                             // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FST_RubyInfo                                RubyInfo;                                                 // 0x0280(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SubTitleTextBase.UMG_SubTitleTextBase_C");
		return ptr;
	}


	void STATIC_UpdateText();
	void HideText();
	void STATIC_GetGlowTextBorder(class UBorder** GlowTextBorder);
	void ForceAllDisp();
	void STATIC_IsAll(bool* IsAll);
	void STATIC_SetText(const struct FString& Body, const struct FST_RubyInfo& InRubyInfo, const struct FLinearColor& InSubtitleColor, const struct FLinearColor& InOutlineColor);
	void STATIC_GetGlowTextBlock(class US3GlowTextBlock** GlowTextBlock);
	void STATIC_GetNowText(class UTextBlock** NowText);
	void STATIC_GetAllSizeText(class UTextBlock** AllSize);
	void TickText(float Delta);
	void GetRubySize(float* X, float* Y);
	void STATIC_CenteringTextAndRuby(class UCanvasPanelSlot* DrawTextPanel, int DisplayTextSize);
	void SetupRubyText(const struct FLinearColor& InShadowColorAndOpacity, TArray<struct FST_RubyPair>* RubyData);
	void GenerateMissingParts(TArray<struct FST_RubyPair>* TargetArray);
	void STATIC_GetDummyTextRubyBody(class UTextBlock** Body);
	void STATIC_GetDummyTextBody(class UTextBlock** Body);
	void STATIC_GetRubyRootCanvas(class UCanvasPanel** Canvas);
	void STATIC_Construct();
	void ExecuteUbergraph_UMG_SubTitleTextBase(int EntryPoint);
	void STATIC_onPlayTalkSE__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
