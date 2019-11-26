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

// BlueprintGeneratedClass BP_UI_Manager.BP_UI_Manager_C
// 0x003C (0x0364 - 0x0328)
class ABP_UI_Manager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ActionButton;                                             // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CancelButton;                                             // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AddButton;                                                // 0x033A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SubButton;                                                // 0x033B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PayButton;                                                // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x033D(0x0003) MISSED OFFSET
	TArray<struct FST_ItemList>                        ItemList;                                                 // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                FocusItemNo;                                              // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemListPage;                                             // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsL2;                                                     // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsR2;                                                     // 0x0359(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x035A(0x0002) MISSED OFFSET
	int                                                ItemListCol;                                              // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemListRow;                                              // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_Manager.BP_UI_Manager_C");
		return ptr;
	}


	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void PlaySE(TEnumAsByte<EN_ShopSE_List> SE);
	void GetText(const struct FName& Label, ES3TextPathType Type, struct FText* OutString);
	void PushUp_ItemList(class UBPW_UI_BaseWindow_C* UI_Widget);
	void PushDown_ItemList(class UBPW_UI_BaseWindow_C* UI_Widget);
	void PushLeft_ItemList(class UBPW_UI_BaseWindow_C* UI_Widget);
	void PushRight_ItemList(class UBPW_UI_BaseWindow_C* UI_Widget);
	void MakeItemList(TArray<int>* ItemIDList, TArray<struct FST_ItemList>* ItemList);
	void IsRegistDetectAction(bool Regist);
	void UserConstructionScript();
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_SearchRightSelect_K2Node_InputActionEvent_5(const struct FKey& Key);
	void PushButton(TEnumAsByte<EN_UI_Button> newParam);
	void InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2(float AxisValue);
	void InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_4(float AxisValue);
	void InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_7(float AxisValue);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void DecideDetectAction(ES3ActionIconType Type);
	void ExecuteUbergraph_BP_UI_Manager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
