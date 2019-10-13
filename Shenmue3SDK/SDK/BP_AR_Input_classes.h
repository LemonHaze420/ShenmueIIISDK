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

// BlueprintGeneratedClass BP_AR_Input.BP_AR_Input_C
// 0x001A (0x035C - 0x0342)
class ABP_AR_Input_C : public ABP_MiniGameInputBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)
	float                                              InputTimer;                                               // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InputCount;                                               // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxInputCount;                                            // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AR_Input.BP_AR_Input_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_24(const struct FKey& Key);
	void InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_23(const struct FKey& Key);
	void InpActEvt_MG_Right_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_MG_Left_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_MG_Top_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_MG_Bottom_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_18(struct FKey* Key);
	void InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_MG_ButtonBottomNoChange_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_13(const struct FKey& Key);
	void Push_Support(TEnumAsByte<EN_padSwitch> ButtonType);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_AR_Input(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
