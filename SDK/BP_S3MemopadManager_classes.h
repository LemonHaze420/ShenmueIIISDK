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

// BlueprintGeneratedClass BP_S3MemopadManager.BP_S3MemopadManager_C
// 0x0088 (0x03B0 - 0x0328)
class ABP_S3MemopadManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerController*                           owningPlayerController;                                   // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDeny;                                                  // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	struct FString                                     result_debug_;                                            // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsActionButtonExec;                                       // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	float                                              defineFloat_beginPlayDelayTime_;                          // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isViewing;                                                // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	class ABP_S3Memopad_book_C*                        MemopadBook;                                              // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isEnable_cancelButton_;                                   // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isBlink;                                                  // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0372(0x0002) MISSED OFFSET
	int                                                LatestIndex;                                              // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3MemoFlagManager*                          MemoFlagManager;                                          // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OpenPageIndex;                                            // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEnable_MoveNewPage_;                                    // 0x0384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    ED_MemoFinish;                                            // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<ECameraZoomState>                      ZoomState;                                                // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEnable_Start_;                                          // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEnable_End_;                                            // 0x039A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x039B(0x0005) MISSED OFFSET
	struct FString                                     HelpName;                                                 // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3MemopadManager.BP_S3MemopadManager_C");
		return ptr;
	}


	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void STATIC_CheckOpenMainEventPage(bool* IsOpenMainEventPage);
	void GetIsUnreadMainEvent(bool* IsUnreadMainEvent);
	void STATIC_GetIsNowSubEventPage(bool* IsNowSubEventPage);
	void STATIC_GetIsSubEventOngoing(bool* IsSubEventOngoing);
	void CursoFade(bool FadeIn);
	void STATIC_InitMemoPage();
	void CheckCanUSeMemopad(bool* CanUse);
	void STATIC_SetBlink();
	void STATIC_IsDetected(bool* IsDetected);
	void _dbg_print_memoFlags_(bool Already);
	void _dbg_check_memoFlags_(bool Already, TArray<struct FString>* Flags);
	void checkEvent(bool* nowDisableMemopadEvent);
	void SetDenyFlag(bool Deny, bool* succes);
	void firstAttach(bool* Success);
	void STATIC__dbgPrint_location_();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void STATIC_ReceiveBeginPlay();
	void STATIC_delayedFirstAttach();
	void STATIC_doCmd_FirstDetectRetain_memopadManager_();
	void STATIC_delayedRegistCheck_detector_();
	void STATIC_catch_onEndScreenIn();
	void STATIC_Finalize();
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_15(float AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_19(float AxisValue);
	void STATIC_ForceDestroy();
	void InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_3(float AxisValue);
	void StartMemopad(int OpenPageIndex);
	void SetEnable_CancelButton(bool bUse);
	void SetEnable_NewPageButton(bool Use);
	void InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5(float AxisValue);
	void SetEnable_StartEndButton(bool Active_StartPage, bool Active_EndPage);
	void DecideDetectAction(ES3ActionIconType Type);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_S3MemopadManager(int EntryPoint);
	void STATIC_ED_MemoFinish__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
