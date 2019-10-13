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

// BlueprintGeneratedClass BP_ExQTE_Input.BP_ExQTE_Input_C
// 0x000E (0x0350 - 0x0342)
class ABP_ExQTE_Input_C : public ABP_MiniGameInputBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExQTE_Input.BP_ExQTE_Input_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_MG_Top_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_MG_Bottom_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_MG_Left_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_MG_Right_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_MG_ButtonBottomNoChange_K2Node_InputActionEvent_9(const struct FKey& Key);
	void ExecuteUbergraph_BP_ExQTE_Input(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
