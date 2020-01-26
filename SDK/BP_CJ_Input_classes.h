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

// BlueprintGeneratedClass BP_CJ_Input.BP_CJ_Input_C
// 0x0046 (0x0388 - 0x0342)
class ABP_CJ_Input_C : public ABP_MiniGameInputBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<EMiniGameKFTypeEnum>                   InputCommand;                                             // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	TArray<struct FST_CJ_CupMove>                      MovingTbl;                                                // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_MiniGame_ChawanJin_C*                    ParentCast;                                               // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ChangePos;                                                // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FST_CJ_CupMove                              Debug_1;                                                  // 0x0380(0x0002) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EN_CJ_CupPos>                          Debug_2;                                                  // 0x0382(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0383(0x0001) MISSED OFFSET
	int                                                PrecedeInputID;                                           // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CJ_Input.BP_CJ_Input_C");
		return ptr;
	}


	void ExecPrecedeInput(bool* exec);
	void InitSet(class ABP_MiniGame_ChawanJin_C* Parent);
	void UserConstructionScript();
	void InpActEvt_MG_Bottom_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_MG_Left_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_MG_Right_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_MG_Top_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_5(float AxisValue);
	void InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_6(float AxisValue);
	void InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_2(float AxisValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_CJ_Input(int EntryPoint);
	void ChangePos__DelegateSignature(const struct FName& Type);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
