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

// BlueprintGeneratedClass BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C
// 0x006D (0x0395 - 0x0328)
class ABP_UI_ConfigManagerBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPW_UI_Config_C*                            ConfigWidget;                                             // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                Focus_ButtonIndex;                                        // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ButtonIndex_Max;                                          // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                page;                                                     // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Page_Max;                                                 // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ActionIcon;                                               // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Fade;                                                     // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0352(0x0006) MISSED OFFSET
	class UBPW_PasswordConsoleBase_C*                  PasswordWidget;                                           // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      PasswordWidgetClass;                                      // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Parent;                                                   // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UBPW_UI_KeyConfig_NewVer_C*                  KeyConfigWidget_New;                                      // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               DressMode;                                                // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	TArray<struct FString>                             ChoiceList;                                               // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	ES3Locale                                          FirstLocale;                                              // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ApplyCloth;                                               // 0x0391(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanPush;                                                  // 0x0392(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_ConfigParam>                        Param;                                                    // 0x0393(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ES3DemoType                                        DemoType;                                                 // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C");
		return ptr;
	}


	void SetRowTrialSetting(class UBPW_UI_Config_Row_C* Row, TEnumAsByte<EN_ConfigParam> Type);
	void ChangeLanguage();
	void SetCanUseLocal(TEnumAsByte<EN_ConfigParam> ConfigParam);
	void PushRightStick();
	void LeanRightStick(float AxisValue);
	void IsSaveLoadWidgetVisible(bool* newParam);
	void CanDecideInput(bool* CAN);
	void IsPlaySound(bool* Play);
	void SetActionIconVisibility();
	bool CheckFocusConfig();
	void CanInput(bool* CAN);
	void PushCancelButton();
	void PushDressDecide();
	void InputConfigUpDown();
	void PushDown();
	void PushUp();
	void PushRight();
	void PushLeft();
	void FinishDressMode(bool Apply);
	void CreateDressModeWidget();
	void CreatePasswordWidget();
	void CancelKeyConfigWidget();
	void CancelPasswordWidget(bool* Success);
	void CancelDressWidget();
	void DestroyConfigManager(bool* IsDestroy);
	void SetConfigName();
	void UserConstructionScript();
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_MenuPageLeft_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_MenuPageRight_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_SearchRightButton_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_SearchBottomButton_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_ResetCamera_K2Node_InputActionEvent_10(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ChnageCloth(bool Apply);
	void FinishFadeOut();
	void CloseDialog(class AActor* Actor);
	void InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33(float AxisValue);
	void InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9(float AxisValue);
	void ExecuteUbergraph_BP_UI_ConfigManagerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
