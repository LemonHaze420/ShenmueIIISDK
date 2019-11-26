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

// BlueprintGeneratedClass BP_eyecatch.BP_eyecatch_C
// 0x00A8 (0x03D0 - 0x0328)
class ABP_eyecatch_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class Uwgt_eyecatch_C*                             Widget;                                                   // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              wait;                                                     // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	struct FTimerHandle                                Timer;                                                    // 0x0348(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               Main;                                                     // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               sub;                                                      // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UTexture*>                            tex;                                                      // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Fade;                                                     // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    onFadeFinish_in_;                                         // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    onFadeFinish_out_;                                        // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               isEasy;                                                   // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    onFadeStart_in_;                                          // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    onFadeStart_out_;                                         // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_eyecatch.BP_eyecatch_C");
		return ptr;
	}


	void UpdateDateTime();
	void HideWidget();
	void IsVisible(bool* Visible);
	void SetVisibility(bool Visible);
	void setTitle(const struct FText& main1, const struct FText& sub1);
	void setWaitTime(float Value);
	void UpdateWidget();
	void ShowEyecatch(const struct FText& main1, const struct FText& sub1, bool Fade);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void catchFadeInFinished();
	void waitEasy();
	void catchEndWaitEasy();
	void endEasy();
	void catchFadeOutFinished();
	void finishEasy();
	void BindFinishFadeIn();
	void branch_easy_in_();
	void BindFinishFadeOut();
	void branch_easy_out_();
	void startEasy();
	void ExecuteUbergraph_BP_eyecatch(int EntryPoint);
	void onFadeStart_out___DelegateSignature();
	void onFadeStart_in___DelegateSignature();
	void onFadeFinish_out___DelegateSignature();
	void onFadeFinish_in___DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
