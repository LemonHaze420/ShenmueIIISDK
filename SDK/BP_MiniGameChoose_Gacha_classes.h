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

// BlueprintGeneratedClass BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C
// 0x0011 (0x03E1 - 0x03D0)
class ABP_MiniGameChoose_Gacha_C : public ABP_MiniGameChoose_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	class ABP_LinkGacha_C*                             LinkGacha;                                                // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAction;                                                  // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C");
		return ptr;
	}


	void OverrideGachaPrice();
	void UserConstructionScript();
	void InpActEvt_MG_Right_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_MG_Left_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_5(const struct FKey& Key);
	void ReceiveBeginPlay();
	void DecideDetectAction(ES3ActionIconType Type);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_MiniGameChoose_Gacha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
