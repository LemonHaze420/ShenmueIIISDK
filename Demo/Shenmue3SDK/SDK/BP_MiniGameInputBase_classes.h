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

// BlueprintGeneratedClass BP_MiniGameInputBase.BP_MiniGameInputBase_C
// 0x001A (0x0342 - 0x0328)
class ABP_MiniGameInputBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_MiniGameBase_C*                          RefMiniGame;                                              // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledInput;                                            // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEnabledCancel;                                          // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGameInputBase.BP_MiniGameInputBase_C");
		return ptr;
	}


	void GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type);
	void UserConstructionScript();
	void InpActEvt_MG_Bottom_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_MG_Left_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_MG_Right_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_MG_Top_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_MG_RightShoulder_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_Interruption_K2Node_InputActionEvent_11(const struct FKey& Key);
	void EndMiniGame();
	void WinMiniGame();
	void LoseMiniGame();
	void DrawMiniGame();
	void EnterMiniGame(float EnterTime);
	void RestartMiniGame();
	void FinalizeTalk();
	void StartMiniGame();
	void InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_17(float AxisValue);
	void InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_18(float AxisValue);
	void InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_27(float AxisValue);
	void InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_37(float AxisValue);
	void InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_47(float AxisValue);
	void InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_58(float AxisValue);
	void EnabledMiniGameInput();
	void DisabledMiniGameInput();
	void ExecuteUbergraph_BP_MiniGameInputBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
