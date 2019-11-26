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

// BlueprintGeneratedClass BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C
// 0x00A1 (0x03D1 - 0x0330)
class ABP_DLC_TriggerIn_CS_C : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       CutsceneId;                                               // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Check_FlagID;                                             // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Check_FlagValueMin;                                       // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Check_FlagValueMax;                                       // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CsEnd_SetFlagID;                                          // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CsEnd_SetFlagValue;                                       // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFunctionEnabled;                                         // 0x035C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartFade;                                               // 0x035D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEndFade;                                                 // 0x035E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStockTrigger;                                            // 0x035F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     SetMemoGropu;                                             // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              HourMin;                                                  // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HourMax;                                                  // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventStepMin;                                             // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventStepMax;                                             // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStockEnable;                                             // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SetPlayerPos;                                             // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0382(0x0002) MISSED OFFSET
	struct FVector                                     PlayerPos;                                                // 0x0384(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              PlayerDirection;                                          // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	struct FName                                       ExspFlagCheck;                                            // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckNPC;                                                // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	int                                                NPCCount;                                                 // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitNpcAppearance;                                       // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEyeCathFadeSkip;                                         // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x03AA(0x0002) MISSED OFFSET
	int                                                FLAG_EYECATCHFADE;                                        // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     CONTAIN_EXSPID;                                           // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SPLIT_EXSPID;                                             // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               TEST;                                                     // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C");
		return ptr;
	}


	void GetExspMemoPage(int* OpenPage);
	void CheckExspCSID(const struct FName& cutscene_id, bool* exsp_cs, struct FName* exsp_type);
	void CheckNPCSpawn(bool* Enable);
	void CheckCsExspStart(bool* CsStartEnable);
	void SetCsEndPlayerPos();
	void CheckCsEndFlag(bool* Enable);
	bool CheckStep();
	bool CheckTime();
	bool HasGameTimeRestriction();
	void IsStart(bool* Enable);
	void CheckCsStartFlag(bool* CsStartEnable);
	void UserConstructionScript();
	void StartIn_FlagCheck();
	void CsEndSet();
	void ReceiveTick(float DeltaSeconds);
	void StartStockEvent();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void EvtFlagChange(int ArrayIndex, int SetFlags);
	void OnCutsceneEndBase();
	void OnStartCutscenePlayerBase();
	void EvtMemoEnd();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DLC_TriggerIn_CS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
