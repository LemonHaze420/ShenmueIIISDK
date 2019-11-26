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

// WidgetBlueprintGeneratedClass wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C
// 0x0098 (0x02A0 - 0x0208)
class Uwgt_S3actionSelect_timer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            a_fadeOut;                                                // 0x0210(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            a_1stIn;                                                  // 0x0218(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      ImageTimer;                                               // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              Timer;                                                    // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    onEndFadeIn;                                              // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    onEndFadeOut;                                             // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    onTimeover;                                               // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               isDebugMessage;                                           // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isFinish;                                                 // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlaying;                                                // 0x0262(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReady;                                                  // 0x0263(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	struct FTimerHandle                                handle;                                                   // 0x0268(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDateTime                                   time_start_;                                              // 0x0270(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDateTime                                   time_pause_;                                              // 0x0278(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       paramName_matValue_;                                      // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isDeactive;                                               // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	class Uwgt_S3actionSelect_C*                       parent_widget_;                                           // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                handle_animation_;                                        // 0x0298(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C");
		return ptr;
	}


	void _dbgPrint();
	void registTimerEvent();
	void doCmd_startTimer();
	void updateProgress();
	void doCmd_resetTimer(float Time);
	void doCmd_pauseTimer(bool Enable);
	void getProgress_percent_(float* Progress);
	void getProgress_second_(float* Second);
	void doCmd_cancel();
	void doCmd_fadeOut();
	void doCmd_fadeIn();
	void updateOpacity_imageTimer_(float Opacity);
	void Construct();
	void OnAnimationFinished(class UWidgetAnimation** Animation);
	void PauseTimer();
	void UnpauseTimer();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void endFadeIn_hiddenParent_();
	void endFadeOut_hiddenParent_();
	void ExecuteUbergraph_wgt_S3actionSelect_timer(int EntryPoint);
	void onTimeover__DelegateSignature();
	void onEndFadeOut__DelegateSignature();
	void onEndFadeIn__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
