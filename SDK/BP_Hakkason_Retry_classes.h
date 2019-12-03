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

// BlueprintGeneratedClass BP_Hakkason_Retry.BP_Hakkason_Retry_C
// 0x00E0 (0x0408 - 0x0328)
class ABP_Hakkason_Retry_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SubModeID;                                                // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ThisRenewalCounter;                                       // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ExecEndFade;                                              // 0x033D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x033E(0x0002) MISSED OFFSET
	class UWBP_BtlRetry_C*                             TempWBP2;                                                 // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                HintTypeID;                                               // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CheckEnergy;                                              // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BattleLocation_UI;                                        // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, struct FName>                   BattleIDtoUI;                                             // 0x0358(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       BattleHint_UI;                                            // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<TEnumAsByte<EBattleAdvice>, struct FName>     AdviceIDtoMsgID;                                          // 0x03B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ChargeTimer;                                              // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TempDelta;                                                // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hakkason_Retry.BP_Hakkason_Retry_C");
		return ptr;
	}


	void StopSetGameTime();
	void InitSet(bool Need_EndFade, bool Qte_Retry, float Battle_Start_Energy, const struct FName& Battle_ID_Name, const struct FName& FilterID);
	void STATIC_UserConstructionScript();
	void STATIC_InpActEvt_SearchTopButton_K2Node_InputActionEvent_8(const struct FKey& Key);
	void STATIC_InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7(const struct FKey& Key);
	void STATIC_InpActEvt_SearchRightButton_K2Node_InputActionEvent_6(const struct FKey& Key);
	void STATIC_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5(const struct FKey& Key);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter);
	void TickChangeCheckKill();
	void STATIC_ExecuteUbergraph_BP_Hakkason_Retry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
