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

// BlueprintGeneratedClass BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C
// 0x0085 (0x03AD - 0x0328)
class ABP_UI_GeneralWindowManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPW_UI_GeneralWindow_C*                     GeneralWindow;                                            // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FST_GeneralWindowParam                      Param;                                                    // 0x0340(0x0060) (Edit, BlueprintVisible)
	bool                                               Flag_Button_A;                                            // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Flag_Button_B;                                            // 0x03A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Flag_Button_X;                                            // 0x03A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Flag_Button_Y;                                            // 0x03A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_GeneralWindow_Button>               DecideButton;                                             // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_GeneralWindow_Button>               CancelButton;                                             // 0x03A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03A6(0x0002) MISSED OFFSET
	int                                                ZOrder;                                                   // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInputHidden;                                             // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C");
		return ptr;
	}


	struct FST_GeneralWindow_Button STATIC_MakeHiddenParam(const struct FST_GeneralWindow_Button& InParam);
	void STATIC_HideInput(bool bHide);
	void STATIC_JudgeButton(TEnumAsByte<EN_GeneralWindow_Button> Button);
	void STATIC_CloseWindow(class AActor* Actor, bool* Success);
	void STATIC_SetButtonFlag(bool* Result);
	void UserConstructionScript();
	void InpActEvt_SearchTopButton_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_SearchRightButton_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5(const struct FKey& Key);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveDestroyed();
	void STATIC_ExecuteUbergraph_BP_UI_GeneralWindowManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
