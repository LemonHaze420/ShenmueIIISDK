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

// BlueprintGeneratedClass BP_S3BgmPlayer.BP_S3BgmPlayer_C
// 0x0028 (0x0370 - 0x0348)
class ABP_S3BgmPlayer_C : public AS3BgmPlayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)
	bool                                               IsPaused;                                                 // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsStopped;                                                // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0352(0x0002) MISSED OFFSET
	float                                              StartTime;                                                // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayGameTime;                                             // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RestartTime;                                              // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OriginalVolume;                                           // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SystemVolume;                                             // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadePastTime;                                             // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FADE_TIME;                                                // 0x036C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3BgmPlayer.BP_S3BgmPlayer_C");
		return ptr;
	}


	void GetVolume(float* Volume);
	void SetSystemVolume(float Volume);
	void SetStartTime(float NewTime);
	void Restart();
	void GetSound(class USoundAtomCue** AtomCue);
	void GetCueName(struct FString* Name);
	void STATIC_SetPitch(float Pitch);
	void StopOnly(bool Reset);
	void STATIC_Pause();
	void STATIC_Stop(bool Reset, bool* Destroy);
	void STATIC_PlayFromStart();
	void Destroy();
	void IsValidCue(bool* Valid);
	void IsPlaying(bool* Playing);
	void Play();
	void SetVolume(float Volume);
	void STATIC_SetSound(class USoundAtomCue* Sound, bool* succes);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_ExecuteUbergraph_BP_S3BgmPlayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
