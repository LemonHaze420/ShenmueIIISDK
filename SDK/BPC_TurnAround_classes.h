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

// BlueprintGeneratedClass BPC_TurnAround.BPC_TurnAround_C
// 0x0065 (0x015D - 0x00F8)
class UBPC_TurnAround_C : public US3TurnAroundComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	float                                              CanTurnAroundAngle;                                       // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSetTurnAroundTarget;                                     // 0x0104(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	float                                              TurnAroundElapsedTime;                                    // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnAroundDelayTime;                                      // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnAroundRotationTime;                                   // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TurnAroundTarget;                                         // 0x0114(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      TurnAroundTargetActor;                                    // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PreviousTurnAround;                                       // 0x0128(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFinishTurnAroundDispatcher;                             // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FRotator                                    TurnAroundPreTalkRotation;                                // 0x0148(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDestroyed;                                               // 0x0154(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0155(0x0003) MISSED OFFSET
	float                                              CharacterRotationTime;                                    // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTurnAroundDelay;                                       // 0x015C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_TurnAround.BPC_TurnAround_C");
		return ptr;
	}


	bool CheckMinigameRotation(struct FRotator* Rotation);
	class US3TalkComponent* GetTalkingMinigame();
	bool TryPreTalkJump();
	bool ShouldLookAtTalkCenter();
	struct FRotator CalcLookAtRotation(const struct FVector& Target);
	void TryPostTeleportTurnaround(bool bTeleported);
	bool CalcTurnAroundWithin();
	void SetTurnAroundTarget(const struct FRotator& Rotator);
	void TurnAroundTickFinish();
	struct FRotator GetLookAtCenterRotation();
	void ForceFinishTurnAroundAuto();
	void RemoveTurnAroundComponent();
	void SetAdjustTurnAroundAngle();
	void ForceFinishTurnAround(bool bUpdateRotation, const struct FRotator& NewRotation);
	void IsMultipleTalking(bool* IsTalking);
	void ReturnPreTalkRotationActor();
	void CachedPreTalkRotationActor();
	void UpdateTurnAround(float Delta, bool* bFinish);
	void IsTurnedAroundState(bool* bTurned);
	void CanTurnAround(bool* bCan);
	void ResetTurnAroundParamater();
	void ReceiveTick(float DeltaSeconds);
	void StartTurnAroundByRotation(float MotionDelayTime, const struct FRotator& TargetRotation, bool bAdjustTurnAroundAngle);
	void StartTurnAroundByActor(float MotionDelayTime, class AActor* TargetActor, bool bAdjustTurnAroundAngle);
	void InternalStartRotation(float Delay, const struct FRotator& TargetRotation, bool bAdjust);
	void ExecuteUbergraph_BPC_TurnAround(int EntryPoint);
	void OnFinishTurnAroundDispatcher__DelegateSignature(class UBPC_TurnAround_C* SelfTurnAroundComponent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
