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

// BlueprintGeneratedClass BP_KF_Input.BP_KF_Input_C
// 0x000F (0x0351 - 0x0342)
class ABP_KF_Input_C : public ABP_MiniGameInputBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<EMiniGameKFTypeEnum>                   InputCommand;                                             // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_KF_Input.BP_KF_Input_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_MG_Bottom_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_MG_Left_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_MG_Right_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_MG_Top_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_5(float AxisValue);
	void InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_6(float AxisValue);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_KF_Input(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
