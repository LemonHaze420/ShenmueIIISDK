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

// BlueprintGeneratedClass BP_S3actionSelect.BP_S3actionSelect_C
// 0x00A9 (0x03D1 - 0x0328)
class ABP_S3actionSelect_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<bool>                                       itemEnables;                                              // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FText>                               selectTexts;                                              // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ES3ActionIconType                                  Icon;                                                     // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_S3ActionSelect_frameType>           frameType;                                                // 0x0359(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x035A(0x0002) MISSED OFFSET
	float                                              limitTime;                                                // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isStealth_UI_;                                            // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isStealth_timer_;                                         // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0362(0x0002) MISSED OFFSET
	int                                                DecideIndex;                                              // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Uwgt_S3actionSelect_C*                       Widget;                                                   // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    onSelected;                                               // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    onEndStartSelection;                                      // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    command_startSelection;                                   // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    onTimerover;                                              // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               isDeactive;                                               // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_padSwitch>                          input_enum_;                                              // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x03B2(0x0006) MISSED OFFSET
	TArray<bool>                                       itemHitTestInvisible;                                     // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bSizeSetEnd;                                              // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAnmEnd;                                                  // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x03CA(0x0002) MISSED OFFSET
	float                                              AXIS_BORDER;                                              // 0x03CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableStickIn;                                          // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3actionSelect.BP_S3actionSelect_C");
		return ptr;
	}


	void Disable_StickIn();
	void doCmd_TimeOver();
	void degreeToPadinput(float degree, TEnumAsByte<EN_padSwitch>* Input, bool* isInput);
	void doCmd_cancelTimer();
	void catch_onTimeover();
	void doCmd_pauseTimer(bool Pause);
	void doCmd_startTimer(float Time);
	void doCmd_sendInput(TEnumAsByte<EN_padSwitch> Button, bool press);
	void doCmd_setText(int Index, const struct FText& Text);
	void doCmd_changeText(int Index, const struct FText& Text);
	void doCmd_addItem(int Index, const struct FText& Text);
	void doCmd_cancelSelection();
	void doCmd_startSelection();
	void catch_onEndFinishSelection();
	void catch_onEndStartSelection();
	void catch_onSelected(int Index);
	void UserConstructionScript();
	void InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue);
	void ReceiveBeginPlay();
	void OnPressedUp();
	void OnPressedLeft();
	void OnPressedRight();
	void OnPressedDown();
	void OnAnimationFinished();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveTick(float* DeltaSeconds);
	void EvtSizeSetEnd();
	void ExecuteUbergraph_BP_S3actionSelect(int EntryPoint);
	void onTimerover__DelegateSignature();
	void command_startSelection__DelegateSignature();
	void onEndStartSelection__DelegateSignature();
	void onSelected__DelegateSignature(int Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
