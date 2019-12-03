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

// BlueprintGeneratedClass BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C
// 0x000E (0x0350 - 0x0342)
class ABP_MiniGame_Keiho_Input_C : public ABP_MiniGameInputBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_InpActEvt_MG_Top_K2Node_InputActionEvent_4(const struct FKey& Key);
	void STATIC_InpActEvt_MG_Bottom_K2Node_InputActionEvent_3(const struct FKey& Key);
	void STATIC_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_21(float AxisValue);
	void STATIC_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_24(float AxisValue);
	void STATIC_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_13(float AxisValue);
	void STATIC_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_14(float AxisValue);
	void ExecuteUbergraph_BP_MiniGame_Keiho_Input(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
