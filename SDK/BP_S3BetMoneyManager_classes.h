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

// BlueprintGeneratedClass BP_S3BetMoneyManager.BP_S3BetMoneyManager_C
// 0x009A (0x03C2 - 0x0328)
class ABP_S3BetMoneyManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<bool>                                       TmpFlag;                                                  // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                kakehuda;                                                 // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	class Uwgt_S3BetMoneyChange_C*                     wgtKihuda;                                                // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<int>                                        add_list;                                                 // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_S3actionSelect_C*                        value_selecter;                                           // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_SubtitlePlayer_C*                        subtitle_player;                                          // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               message_list;                                             // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    noBuyEnd;                                                 // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    buyEnd;                                                   // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                EndTime;                                                  // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DownPush;                                                 // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UpPush;                                                   // 0x03AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightPush;                                                // 0x03AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftPush;                                                 // 0x03AF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               animFlag;                                                 // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	int                                                AnimCount;                                                // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimSpeed;                                                // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CancelButtonEnable;                                       // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ActionButtonEnable;                                       // 0x03BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsValid_Dialog;                                           // 0x03BE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBuy;                                                    // 0x03BF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isPlaySE;                                                 // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledDialogInput;                                      // 0x03C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3BetMoneyManager.BP_S3BetMoneyManager_C");
		return ptr;
	}


	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void CalcPrice(int Price);
	void STATIC_PressButton();
	void UpdCurrentNum();
	void STATIC_AllDestroy();
	void STATIC_ReturnStatus();
	void ChangeStatus();
	void STATIC_UserConstructionScript();
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_SearchRightSelect_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_SearchRightSelect_K2Node_InputActionEvent_9(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DecideDetectAction(ES3ActionIconType Type);
	void PushAnimFinish();
	void Dialog_Cancel();
	void Dialog_Decide();
	void o(int Index);
	void ExecuteUbergraph_BP_S3BetMoneyManager(int EntryPoint);
	void buyEnd__DelegateSignature();
	void noBuyEnd__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
