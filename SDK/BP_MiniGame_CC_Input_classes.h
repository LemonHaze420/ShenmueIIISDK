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

// BlueprintGeneratedClass BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C
// 0x0026 (0x0368 - 0x0342)
class ABP_MiniGame_CC_Input_C : public ABP_MiniGameInputBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)
	struct FKey                                        InputtedKey;                                              // 0x0350(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_MG_ButtonBottomNoChange_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_20(float AxisValue);
	void InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_21(float AxisValue);
	void InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_34(float AxisValue);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_MiniGame_CC_Input(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
