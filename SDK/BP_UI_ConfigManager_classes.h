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

// BlueprintGeneratedClass BP_UI_ConfigManager.BP_UI_ConfigManager_C
// 0x0013 (0x03A8 - 0x0395)
class ABP_UI_ConfigManager_C : public ABP_UI_ConfigManagerBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (Transient, DuplicateTransient)
	class UBPW_UI_DressMode_C*                         DressWidget;                                              // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_ConfigManager.BP_UI_ConfigManager_C");
		return ptr;
	}


	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void CanDecideInput(bool* CAN);
	void CancelPasswordWidget(bool* Success);
	bool CheckFocusConfig();
	void CanInput(bool* CAN);
	void UserConstructionScript();
	void DecideDetectAction(ES3ActionIconType Type);
	void CreateDressModeWidget();
	void CreatePasswordWidget();
	void FinishDressMode(bool Apply);
	void CancelDressWidget();
	void PushRight();
	void PushLeft();
	void FinishFadeIn();
	void PushUp();
	void PushDown();
	void PushDressDecide();
	void PushCancelButton();
	void LeanRightStick(float AxisValue);
	void PushRightStick();
	void ExecuteUbergraph_BP_UI_ConfigManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
