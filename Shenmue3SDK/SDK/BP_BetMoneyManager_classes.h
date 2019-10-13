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

// BlueprintGeneratedClass BP_BetMoneyManager.BP_BetMoneyManager_C
// 0x00B8 (0x03E0 - 0x0328)
class ABP_BetMoneyManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                maxbet;                                                   // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OneBet;                                                   // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    ED_DecideBetUp;                                           // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ED_DecideBetDown;                                         // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ED_DecideMaxBet;                                          // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ED_DecideCancel;                                          // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ED_PostDecideBet;                                         // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               isActionButtonExec;                                       // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ED_PostDecideReturn;                                      // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ED_PreDecideBet;                                          // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ED_PreDecideReturn;                                       // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               NeutralX;                                                 // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NeutralY;                                                 // 0x03D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_ValueType>                          ValueType;                                                // 0x03D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03D3(0x0001) MISSED OFFSET
	int                                                FluctuationParam;                                         // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AXIS_BORDER;                                              // 0x03DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BetMoneyManager.BP_BetMoneyManager_C");
		return ptr;
	}


	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void GetPlayCount(int* PlayCount);
	void GetBetMoney(int* BetMoney);
	void UserConstructionScript();
	void InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_5(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue);
	void DecideDetectAction(ES3ActionIconType Type);
	void EndBet();
	void ExecuteUbergraph_BP_BetMoneyManager(int EntryPoint);
	void ED_PreDecideReturn__DelegateSignature();
	void ED_PreDecideBet__DelegateSignature();
	void ED_PostDecideReturn__DelegateSignature();
	void ED_PostDecideBet__DelegateSignature();
	void ED_DecideCancel__DelegateSignature();
	void ED_DecideMaxBet__DelegateSignature();
	void ED_DecideBetDown__DelegateSignature();
	void ED_DecideBetUp__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
