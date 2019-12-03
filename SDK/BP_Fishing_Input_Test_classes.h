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

// BlueprintGeneratedClass BP_Fishing_Input_Test.BP_Fishing_Input_Test_C
// 0x0016 (0x0358 - 0x0342)
class ABP_Fishing_Input_Test_C : public ABP_MiniGameInputBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)
	bool                                               is_stick_push_X;                                          // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_stick_push_Y;                                          // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0352(0x0002) MISSED OFFSET
	float                                              StickDirInputValue;                                       // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Fishing_Input_Test.BP_Fishing_Input_Test_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_4(const struct FKey& Key);
	void STATIC_InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_3(const struct FKey& Key);
	void STATIC_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1(float AxisValue);
	void STATIC_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_3(float AxisValue);
	void STATIC_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_7(float AxisValue);
	void STATIC_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_13(float AxisValue);
	void ExecuteUbergraph_BP_Fishing_Input_Test(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
