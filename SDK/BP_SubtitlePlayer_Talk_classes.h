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

// BlueprintGeneratedClass BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C
// 0x002A (0x03DA - 0x03B0)
class ABP_SubtitlePlayer_Talk_C : public ABP_SubtitlePlayer_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	class UTalkTask*                                   CurrentTalkTask;                                          // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_TalkEventManager_C*                      TalkEventManager;                                         // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              LipSyncDelayTime;                                         // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	struct FTimerHandle                                Timer;                                                    // 0x03D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bSkip;                                                    // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForcePlayVoice;                                          // 0x03D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C");
		return ptr;
	}


	void GetVoiceDuration(bool* Result, float* Duration);
	void Play_HintTalk(bool IsAutoStop, struct FName* Label, struct FName* CharaName);
	void UserConstructionScript();
	void PlayVoice(class UObject* VoiceData);
	void OnPlaySound();
	void Stop();
	void ClearSubtitle();
	void Skip(class UTalkTask* SkippedTask);
	void ExecuteUbergraph_BP_SubtitlePlayer_Talk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
