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

// BlueprintGeneratedClass BP_AreaJumpTrigger.BP_AreaJumpTrigger_C
// 0x015E (0x048E - 0x0330)
class ABP_AreaJumpTrigger_C : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_Gimmick_warpPortalComp_C*                warpPortalComp_3;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_Gimmick_warpPortalComp_C*                warpPortalComp_2;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               isActionButtonExec;                                       // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	TArray<struct FText>                               selectTexts;                                              // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     TempArrowNormal;                                          // 0x0368(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	TArray<bool>                                       itemEnables;                                              // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_S3actionSelect_C*                        Selector;                                                 // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ED_Warp;                                                  // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               isBindEyecatchEvent_cust__in_;                            // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isBindEyecatchEvent_cust__out_;                           // 0x03A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReactWarpTrigger;                                       // 0x03A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFinishLoadSL;                                           // 0x03A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayTime;                                                // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Eyechatch_Main_Text;                                      // 0x03A8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Eyechatch_Sub_Text;                                       // 0x03C0(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Eyechatch_Yesterday_Main_Text;                            // 0x03D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Eyechatch_Yesterday_Sub_Text;                             // 0x03F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              FadeTime;                                                 // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ObjectScale;                                              // 0x040C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     ObjectRelativeLocation;                                   // 0x0418(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    ObjectRelativeRotation;                                   // 0x0424(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              HitResult;                                                // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	TArray<class AActor*>                              TargetActors;                                             // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class ABP_JumpProcessActor_C*                      JumpProcess;                                              // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               TargetName;                                               // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               TargetEyeCatch;                                           // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FST_JumpTimeOptions                         GameTimeOptions;                                          // 0x0470(0x0008) (Edit, BlueprintVisible)
	TArray<int>                                        ExspSet;                                                  // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SelectedIndex;                                            // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ES3PlayerBehavior                                  PlayerBehaviorToSet;                                      // 0x048C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEventRunning;                                           // 0x048D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AreaJumpTrigger.BP_AreaJumpTrigger_C");
		return ptr;
	}


	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void TeleportToTargetActor(int Index);
	void TeleportPlayerWithFollower(const struct FVector& DestLocation, const struct FRotator& DestRotation, bool AddCapsule);
	void PlayerCancelAction(float* TimeEstimate);
	void CheckKsExspFlag(int Index, bool* exsp_flag);
	void ExspFlagSet(int Index);
	void LavelIDtoText(const struct FName& LavelID, struct FText* GetText);
	void AddKsSelect(int Index, int FlagSet);
	void WarpShenfa();
	void ClucSpawnLocationSHE(float bask_offsetaram, float Side_Offset, float hight_ofset, struct FVector* SHE_vector, struct FRotator* SHE_rot);
	void CheckLoadLevel(int Selection, bool* IsLoad);
	void SetupPosAndRot(int Index);
	void CheckDispYesterdayPrace();
	void PlayerRemoveInHouse();
	void SetEyechatchData(int SelectID);
	void WarpEvent(int Index);
	void UserConstructionScript();
	void EndProcess();
	void StartEndingWarp();
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void FinishLoadLevel(const struct FName& ID);
	void catch_onSelected(int Index);
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void catch_eyecatchFadeFinish_in_();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void EndJump(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void DecideDetectAction(ES3ActionIconType Type);
	void catch_eyecatchFadeFinish_out_();
	void EndJumpEvent();
	void ExecuteUbergraph_BP_AreaJumpTrigger(int EntryPoint);
	void ED_Warp__DelegateSignature(int Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
