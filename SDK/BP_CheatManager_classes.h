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

// BlueprintGeneratedClass BP_CheatManager.BP_CheatManager_C
// 0x0068 (0x00F8 - 0x0090)
class UBP_CheatManager_C : public UBP_CheatManagerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)
	bool                                               TeleportSpectator;                                        // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	class AS3PlayerController*                         OuterPlayerController;                                    // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_DebugCutscenePlayAreaDispManager_C*      CutscenePlayAreaDispManager;                              // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     DebugMenuLastAC;                                          // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DebugMenuTalkCharacter;                                   // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DebugMenuTalkScript;                                      // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ITEM_075_Price;                                           // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ITEM_136_Price;                                           // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SellMagnification;                                        // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DebugMenuPageIndex;                                       // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PriceMargine;                                             // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	int                                                ITEM_BUY_Count;                                           // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CheatManager.BP_CheatManager_C");
		return ptr;
	}


	void SetForceNPCVisible(int Num);
	void Init_DebugItemPrice();
	void DisplayLightCount();
	void ToggleDispDevelopText();
	void ToggleDispCutscenePlayArea();
	void BatchAddPropertyWatch(const struct FText& ObjectDisplayName, class UObject* Object, TArray<struct FBatchPropertyWatchInfo>* Properties);
	void DisplayWorkMap();
	void DisplayLightInfo();
	void DebugAddMoney(bool Add);
	void DisplayNPCNum();
	void dbgCalcAddtime(float Base, float Bias, bool signed, float* Result);
	void UserConstructionScript();
	void ReceiveInitCheatManager();
	void OnInputKey_Cmd_Insert();
	void OnInputKey_CmdShiftPageUp();
	void OnInputKey_CmdShiftPageDown();
	void OnInputKey_CmdPageUp();
	void OnInputKey_CmdPageDown();
	void OnInputKey_CmdAltPageUp();
	void OnInputKey_CmdAltPageDown();
	void OnKeyInput_3();
	void OnKeyInput_2();
	void OnKeyInput_Num_();
	void OnKeyInput_Num_();
	void OnInputKey_Alt_L();
	void OnInputKey_Alt_Shift_L();
	void OnKeyInput_F9Ctrl();
	void OnInput_DpadLeft();
	void OnKeyInput_E();
	void OnKeyInput_T();
	void OnMiniGameWinEvent();
	void OnMiniGameLoseEvent();
	void OnKeyInput_U();
	void InitAdventureDebugMenus(class ABP_S3CharacterBase_C* Character);
	void LevelStreamingDebug();
	void OnKeyInput_L();
	void OnShowLightInfoEvent();
	void OnInputKey_V();
	void OnKeyInput_F();
	void OnKeyInput_CtrlT();
	void OnKeyInput_Z();
	void OnKeyInputSemicolon();
	void ShowLightCount();
	void DecideButton();
	void EnableRecodingMode();
	void OnKeyInput_AltB();
	void LaunchDebugBattle();
	void DisableNPCTriggerOverlaps();
	void EnableNPCTriggerOverlaps();
	void OnKeyInput_SpecialRight();
	void ShowNPCStreamingInfo();
	void ShowItemSpawnerHints();
	void NPCVisible();
	void ExecuteUbergraph_BP_CheatManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
