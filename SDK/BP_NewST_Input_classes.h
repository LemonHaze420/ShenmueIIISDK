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

// BlueprintGeneratedClass BP_NewST_Input.BP_NewST_Input_C
// 0x0016 (0x0358 - 0x0342)
class ABP_NewST_Input_C : public ABP_MiniGameInputBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)
	float                                              Turn;                                                     // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              moveSpeed;                                                // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NewST_Input.BP_NewST_Input_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2(const struct FKey& Key);
	void STATIC_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_15(float AxisValue);
	void STATIC_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_17(float AxisValue);
	void STATIC_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_21(float AxisValue);
	void STATIC_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_24(float AxisValue);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_ExecuteUbergraph_BP_NewST_Input(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
