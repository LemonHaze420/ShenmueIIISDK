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

// BlueprintGeneratedClass BP_S3HelpManager.BP_S3HelpManager_C
// 0x0108 (0x0430 - 0x0328)
class ABP_S3HelpManager_C : public AS3HelpManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               isDisp;                                                   // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	class Uwgt_S3HelpWindow_C*                         helpWindow;                                               // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBW_MenuTimer_C*                             MenuTimer;                                                // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               helpNameList;                                             // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               isBusy;                                                   // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	int                                                CurrentIndex;                                             // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   startCurPos;                                              // 0x0368(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  category_table;                                           // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       current_help_page;                                        // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               startBlinkHelpIcon;                                       // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               englishMode;                                              // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0382(0x0006) MISSED OFFSET
	TArray<struct FST_HelpRegisterInfo>                HelpRegisterInfoArray;                                    // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ScrollValue;                                              // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VisibleValue;                                             // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESlateVisibility                                   EndButton;                                                // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	class ABP_S3DetectAction_C*                        DetectAction;                                             // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                BeforeCurrentIndex;                                       // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HelpButtonEnable;                                         // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HelpCancelButtonEnable;                                   // 0x03B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DownPress;                                                // 0x03B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x03B7(0x0001) MISSED OFFSET
	float                                              DelayTime_Down;                                           // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultDelayTime_Down;                                    // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DelayCount_Down;                                          // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UpPress;                                                  // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	float                                              DelayTime_Up;                                             // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultDelayTime_Up;                                      // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DelayCount_Up;                                            // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ED_HelpEnd;                                               // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               HelpForceDisable;                                         // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET
	TArray<class AActor*>                              DisableActors;                                            // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	unsigned char                                      UnknownData08[0x10];                                      // 0x0400(0x0010) UNKNOWN PROPERTY: ArrayProperty BP_S3HelpManager.BP_S3HelpManager_C.PageTextureList
	bool                                               RightButtonEnable;                                        // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	int                                                PageIndex;                                                // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftButtonEnable;                                         // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOnlyView;                                               // 0x0419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstHelpCheck;                                           // 0x041A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x041B(0x0001) MISSED OFFSET
	float                                              DispTime;                                                 // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x10];                                      // 0x0420(0x0010) UNKNOWN PROPERTY: ArrayProperty BP_S3HelpManager.BP_S3HelpManager_C.Texture_Inventory_CHO

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3HelpManager.BP_S3HelpManager_C");
		return ptr;
	}


	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void SelectHelpInventoryTexture();
	void SelectTexture();
	bool CheckValidRegistHelp();
	void GetHelpPriority(class AActor* Actor, ES3HelpPriority* Priority);
	void SetPageButtonVisibility();
	void ChangePage(bool IsNext);
	void SetForceDisable(class AActor* Executor, bool Disable);
	void StartHelp(const struct FName& HelpId);
	void GetHelpName(struct FST_HelpRegisterInfo* Info, struct FName* Name);
	void PressDownOrUp(float DeltaSeconds);
	void CheckBlinkIcon();
	void IsActivateHelp(class AActor* Actor, bool* Activate);
	void CanOpen(bool* CAN);
	void EndButtonVisibility(ESlateVisibility InVisibility);
	void RemoveHelpItemByActor(class AActor* Actor);
	void RemoveHelpItem(const struct FString& HelpName);
	void AddHelpItem(class AActor* Actor, const struct FString& HelpName);
	void EndMiniGame();
	void makeWidget();
	void AddCategory();
	void makeCategoryList();
	void AutoChangeCurrentOpenIndex();
	void UpdNowPosCursor();
	bool IsNoScrollRange();
	void ChangeCursorPos(int Index);
	void ChangeHelpImage(int Index);
	void ChangeStatus();
	void ReturnStatus();
	void UserConstructionScript();
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_SearchRightSelect_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_SearchRightButton_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_SearchLeftButton_K2Node_InputActionEvent_10(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnHelpWindowOpen();
	void EndHelpActor(class AActor* Actor, unsigned char Value);
	void DecideDetectAction(ES3ActionIconType Type);
	void DownSelect();
	void UpSelect();
	void QuickHelp();
	void InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_3(float AxisValue);
	void ExecuteUbergraph_BP_S3HelpManager(int EntryPoint);
	void ED_HelpEnd__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
