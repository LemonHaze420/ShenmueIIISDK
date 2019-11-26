#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_S3GameInstance.BP_S3GameInstance_C
// 0x0200 (0x05B0 - 0x03B0)
class UBP_S3GameInstance_C : public US3GameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    ForceWeatherChangeDispatcher;                             // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DbgToggleCloudShadowDispatcher;                           // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              DbgCloudDensity;                                          // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    DbgSetCloudDensitytDispatcher;                            // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              DbgMoonPhase;                                             // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    DbgSetMoonPhaseDispatcher;                                // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               S3StreamLoadingFlag;                                      // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    onEndLoadstreamingMacro;                                  // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartCutsceneFromName;                                    // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                DbgEventStep;                                             // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SheLeadFlag;                                              // 0x0434(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SheFollowFlag;                                            // 0x0435(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0436(0x0002) MISSED OFFSET
	int                                                DbgSubFlagPage;                                           // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgSubFlag0;                                              // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDebugHideCutsceneSubtitle;                             // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	int                                                DbgItemFlagPage;                                          // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgItemFlag0;                                             // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgItemFlag1;                                             // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgItemFlag2;                                             // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgItemFlag3;                                             // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgItemFlag4;                                             // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgItemFlag5;                                             // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgItemFlag6;                                             // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgItemFlag7;                                             // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgItemFlag8;                                             // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgItemFlag9;                                             // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoFlagPage;                                          // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoFlag0;                                             // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoFlag1;                                             // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoFlag2;                                             // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoFlag3;                                             // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoFlag4;                                             // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoFlag5;                                             // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoFlag6;                                             // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoFlag7;                                             // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoFlag8;                                             // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoFlag9;                                             // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	struct FString                                     DevelopText;                                              // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               RecollectMoviePlayingFlag;                                // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04B1(0x0003) MISSED OFFSET
	int                                                DbgSubFlag1;                                              // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgSubFlag2;                                              // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgSubFlag3;                                              // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgSubFlag4;                                              // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgSubFlag5;                                              // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgSubFlag6;                                              // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgSubFlag7;                                              // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgSubFlag8;                                              // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgSubFlag9;                                              // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PAST_MEMO_NUM;                                            // 0x04D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDetectIconAnimShort;                                    // 0x04DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04DD(0x0003) MISSED OFFSET
	int                                                DbgMemoIdentifer0;                                        // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoIdentifer1;                                        // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoIdentifer2;                                        // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoIdentifer3;                                        // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoIdentifer4;                                        // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoIdentifer5;                                        // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoIdentifer6;                                        // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoIdentifer7;                                        // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoIdentifer8;                                        // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMemoIdentifer9;                                        // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    onQTEResult;                                              // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    VisibleMinimap;                                           // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotVisibleMinimap;                                        // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeWetRate;                                          // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameShutdown;                                           // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                DbgMiniGameFlag0;                                         // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMiniGameFlag1;                                         // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DbgMiniGameFlag2;                                         // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CreditBackerFlag;                                         // 0x0564(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CreditTitleFlag;                                          // 0x0565(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0566(0x0002) MISSED OFFSET
	class URequestCounter_C*                           MinimapDisableCounter;                                    // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableDevelopmentText;                                  // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0571(0x0007) MISSED OFFSET
	TArray<struct FST_BackerInfo>                      BackerInfoArray;                                          // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<ES3RewardType>                              PasswordRewards;                                          // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<ERewardPurchaseType>                   PurchaseType;                                             // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0599(0x0007) MISSED OFFSET
	TArray<ES3RewardType>                              AddedWheneverItem;                                        // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3GameInstance.BP_S3GameInstance_C");
		return ptr;
	}


	bool InitMemoFlag(int* Length);
	void ResetTitle();
	void DbgVerifyPlayerBehavior(ES3PlayerBehavior Expected);
	void GetPlayerBehaviorAllowsControl(bool* Allow);
	void SetGameWeather(EWeatherType NewWeather, bool Force);
	void SetVisibleMinimap(bool IsVisible, class AActor* Actor);
	void SetIsDetectIconAnimShort(bool IsUse);
	void GetIsDetectIconAnimShort(bool* newParam);
	void IsRecollectMoviePlaying(bool* IsPlaying);
	void GetDevelopText(struct FString* Text);
	void SetDevelopText(const struct FString& Text);
	void toggleDbgHideCutsceneSubtitle();
	void IsDbgHideCutsceneSubtitle(bool* flag);
	void IsSheFollow(bool* flag);
	void IsSheLead(bool* flag);
	void setSheFollowFlag(bool flag);
	void setSheLeadFlag(bool flag);
	void IsDbgMsgDisp(bool* flag);
	void IsSearching(bool* IsSearching);
	void IsLoadStreaming(bool* flag);
	void endLoadstreamingMacro(bool loadFlag);
	void startLoadstreamingMacro();
	void isFreerun(bool* isFreerun);
	void isBattle(bool* isBattle);
	void getPlayerBehaviorId(ES3PlayerBehavior* PlayerBehaviorId);
	void setPlayerBehaviorId(ES3PlayerBehavior PlayerBehaviorId);
	void wrap_gametimeEvent_day_(ES3DayTimeEvent EventType);
	void wrap_gametimeEvent_shop_(ES3ShopTimeEvent EventType);
	void ReceiveInit();
	void delayBeginPlay();
	void ReceiveShutdown();
	void InitReward();
	void ExecuteUbergraph_BP_S3GameInstance(int EntryPoint);
	void OnGameShutdown__DelegateSignature();
	void OnChangeWetRate__DelegateSignature(float Rate);
	void NotVisibleMinimap__DelegateSignature(class AActor* Actor);
	void VisibleMinimap__DelegateSignature(class AActor* Actor);
	void onQTEResult__DelegateSignature(bool Success);
	void StartCutsceneFromName__DelegateSignature(const struct FName& CutsceneName);
	void onEndLoadstreamingMacro__DelegateSignature(bool loadFlag);
	void DbgSetMoonPhaseDispatcher__DelegateSignature();
	void DbgSetCloudDensitytDispatcher__DelegateSignature();
	void DbgToggleCloudShadowDispatcher__DelegateSignature();
	void ForceWeatherChangeDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
