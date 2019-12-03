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

// BlueprintGeneratedClass BP_Clipper.BP_Clipper_C
// 0x0024 (0x03EC - 0x03C8)
class ABP_Clipper_C : public AS3Clipper
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ClipperCalcFlag;                                          // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TalkClipperSetCallFlag;                                   // 0x03D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClipperStopOnceFlag;                                      // 0x03DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugDrawVolume;                                          // 0x03DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClipperPlayRate;                                          // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaSeconds;                                             // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAccurateTime                               LastAccurateTime;                                         // 0x03E4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Clipper.BP_Clipper_C");
		return ptr;
	}


	bool SetCharaName(const struct FName& NewName);
	bool STATIC_SetTalkClipperInternal(const struct FString& TalkClipperString, const struct FName& CharaName, bool bVoice, class AS3SoundPlayer* VoicePlayer);
	void STATIC_UpdateElapsedTime(float DeltaSeconds);
	void DebugLogMultiSample();
	void STATIC_CalcDeltaTime();
	void STATIC_TalkClipperStop();
	void STATIC_Init();
	void STATIC_UserConstructionScript();
	void STATIC_ClearFaceId();
	void SetPlayRate(float NewRate);
	void STATIC_EndPause();
	void ReceiveTick(float DeltaSeconds);
	void STATIC_ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Clipper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
