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

// BlueprintGeneratedClass BP_S3DetectAction.BP_S3DetectAction_C
// 0x0048 (0x03E8 - 0x03A0)
class ABP_S3DetectAction_C : public AS3DetectAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class Uwgt_S3DetectAction_C*                       Widget;                                                   // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                DecideIndex;                                              // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class UBP_S3GameInstance_C*                        GameInstance;                                             // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3AdventureHUD_C*                        HUD;                                                      // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledActionInput;                                      // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	float                                              InputlimitTime;                                           // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                KeepPriority;                                             // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class UBPC_S3DetectDebug_C*                        DebugComponent;                                           // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3DetectAction.BP_S3DetectAction_C");
		return ptr;
	}


	void NewInfoEffect(ES3ActionIconType ButtonImageType);
	bool IsActionGlobalForbidden();
	void IsHelpIconBlink(bool* isBlink);
	void BlinkHelpIcon(bool End);
	void RestoreInputPriority();
	void ChangeInputPriority(int NewPriority);
	void GetSelectedButtonActionProcess(int InIndex, struct FS3DetectActionParam* OutProcess, bool* IsValid);
	void GetButtonActionProcesses(int InIndex, TArray<struct FS3DetectActionParam>* OutProcesses);
	void InputButton(int InIndex, bool* bActionSuccess);
	bool IsDetectedActor(class AActor* Actor);
	void SetWidgetVisible(bool Visible);
	void AttachPlayer(bool* succes);
	void AddDetectActor(class AActor* OtherActor, bool Unregister);
	void PlayDetectSound(ES3ActionIconType Type);
	void InitWidget();
	void UserConstructionScript();
	void InpActEvt_SearchBottomButton_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_SearchRightButton_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_SearchLeftButton_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_SearchTopButton_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Menu_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Ctrl_Alt_NumPadNine_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void ReceiveBeginPlay();
	void delayedFirstAttach();
	void UpdateButton();
	void OnStartBS(class AS3Character* TalkableActor);
	void OnEndTalk(class AActor* Actor);
	void StartInputCooldown();
	void ExecuteUbergraph_BP_S3DetectAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
