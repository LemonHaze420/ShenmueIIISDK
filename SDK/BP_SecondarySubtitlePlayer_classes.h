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

// BlueprintGeneratedClass BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C
// 0x0018 (0x0340 - 0x0328)
class ABP_SecondarySubtitlePlayer_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWBP_SecondarySubtitles_C*                   SubtitlesWidget;                                          // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C");
		return ptr;
	}


	TArray<struct FString> ConvertDisplayTextArray(const struct FName& CharaName, TArray<struct FString>* BaseTextArray);
	struct FString GetSubtitleCharaNameString(const struct FName& InCharaName);
	void STATIC_Stop();
	void STATIC_Play(const struct FName& Label, ES3TextPathType Type, const struct FName& CharaName);
	void SetSubtitlesWidgetVisible(bool IsVisible);
	void FinalizeSubtitlesWidget();
	void STATIC_CreateSubtitlesWidget();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_SecondarySubtitlePlayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
