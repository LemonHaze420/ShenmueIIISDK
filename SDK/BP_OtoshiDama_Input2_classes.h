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

// BlueprintGeneratedClass BP_OtoshiDama_Input2.BP_OtoshiDama_Input2_C
// 0x000E (0x0350 - 0x0342)
class ABP_OtoshiDama_Input2_C : public ABP_MiniGameInputBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OtoshiDama_Input2.BP_OtoshiDama_Input2_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_MG_Right_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_MG_Right_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_MG_Left_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_MG_Left_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_MG_Top_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_MG_Top_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_MG_Bottom_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_MG_Bottom_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_3(float AxisValue);
	void ExecuteUbergraph_BP_OtoshiDama_Input2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
