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

// BlueprintGeneratedClass BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C
// 0x00AD (0x0225 - 0x0178)
class UBPC_S3PlayerStairClimber_C : public UBPC_S3StairClimber_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0178(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<EN_PC_Stair>                           State;                                                    // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0181(0x0007) MISSED OFFSET
	class UBP_PlayerStairMotionDataAsset_C*            MotionDatabase;                                           // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Running;                                                  // 0x0190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	int                                                StepsPerCycle;                                            // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InputRun;                                                 // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0199(0x0003) MISSED OFFSET
	struct FVector                                     InputDirectionWS;                                         // 0x019C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               InputMove;                                                // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01A9(0x0007) MISSED OFFSET
	class UAnimMontage*                                CurrentMontage;                                           // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MostRecentLoop;                                           // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoopBlendThreshold;                                       // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MoveInterpStartLocation;                                  // 0x01C4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MoveInterpStopLocation;                                   // 0x01D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LoopCycle;                                                // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ClimbLocation;                                            // 0x01E0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TurnTargetDirection;                                      // 0x01EC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UBP_S3AnimNotifyComponent_C*                 NotifyComponent;                                          // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              StateTime;                                                // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoopStartTime;                                            // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EM_LeftOrRight>                        NextMotionFoot;                                           // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0209(0x0003) MISSED OFFSET
	struct FRotator                                    TurnAroundTargetRot;                                      // 0x020C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     IdleLocation;                                             // 0x0218(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnAroundStartedForward;                                 // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C");
		return ptr;
	}


	bool IsInteracting();
	bool IsAbleToMove();
	void IsHeightFixEnabled(bool* bEnabled);
	void BottomToCenterLocationWithOffset(const struct FVector& Bottom, struct FVector* Center);
	bool ShouldStartInteracting();
	bool CheckLeaving(float FudgeDist, float FudgeAngle);
	bool ShouldKeepInteracting();
	void AlignToStairInstant();
	float CalcStopMontageTime();
	struct FVector GetStairAlignmentForward();
	void PlayMontageFrom(class UAnimMontage* Montage, float Position);
	void CalcWalkCycleFromMontageRatio(float A, bool DirUp, float* Cycle);
	void PlayMontage(class UAnimMontage* Montage);
	void ConsumeOutput(bool* Turning, struct FVector* TurnDirection);
	void SetState(TEnumAsByte<EN_PC_Stair> State);
	void rotate(const struct FVector& TargetDirection);
	void MoveToLocation(const struct FVector& Location);
	void GetRegularWalkCycle(float* Cycle);
	void EnterFSMState(TEnumAsByte<EN_PC_Stair> State);
	class UAnimInstance* GetABP();
	void GetStairWalkCycle(class UAnimMontage* WalkLoopMontage, float* Cycle);
	void TickFSMTransitions();
	void TickFSMBehavior(float DeltaSeconds);
	void DeactivateFSM();
	void ActivateFSM(TEnumAsByte<EN_PC_Stair> State);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_S3PlayerStairClimber(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
