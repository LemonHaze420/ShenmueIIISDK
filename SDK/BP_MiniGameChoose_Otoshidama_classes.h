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

// BlueprintGeneratedClass BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C
// 0x003C (0x040C - 0x03D0)
class ABP_MiniGameChoose_Otoshidama_C : public ABP_MiniGameChoose_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	int                                                SelectIndex;                                              // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_bet_zoom;                                              // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_push_up;                                               // 0x03DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_push_down;                                             // 0x03DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x03DF(0x0001) MISSED OFFSET
	float                                              camera_offset;                                            // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_push_trigger;                                          // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	TScriptInterface<class UBPI_Otoshidama_C>          CurrentOtoshidama;                                        // 0x03E8(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UBPI_Otoshidama_C>          CurrentOtoshidamaActor;                                   // 0x03F8(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ForceEndFromScriptFlagIndex;                              // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C");
		return ptr;
	}


	struct FRotator MoveCamera(class USceneComponent* Target, class USceneComponent* Current, struct FVector* Location);
	void UserConstructionScript();
	void InpActEvt_MG_Right_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_MG_Left_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_MG_Top_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_MG_Top_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_MG_Bottom_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_MG_Bottom_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_11(const struct FKey& Key);
	void Input_Update();
	void InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_2(float AxisValue);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void DecideDetectAction(ES3ActionIconType Type);
	void InitializeMoneyInfo();
	void EndFadeOut();
	void ExecuteUbergraph_BP_MiniGameChoose_Otoshidama(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
