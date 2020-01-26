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

// BlueprintGeneratedClass BP_AR_Animal_Base.BP_AR_Animal_Base_C
// 0x0144 (0x046C - 0x0328)
class ABP_AR_Animal_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           BodyCollision;                                            // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    CheerEffect;                                              // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            head_collision;                                           // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              current_move_speed;                                       // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              target_move_speed;                                        // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              move_rate;                                                // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_stop;                                                  // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	TArray<struct FDataTableRowHandle>                 data_table_handle;                                        // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                table_offset;                                             // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                support_offset;                                           // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              walk_rate;                                                // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_mot_playing;                                           // 0x0384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	float                                              Time;                                                     // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              wait_time;                                                // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_death;                                                 // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_right_hit;                                             // 0x0391(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_left_hit;                                              // 0x0392(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0393(0x0001) MISSED OFFSET
	float                                              side_rate;                                                // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              walk_speed;                                               // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     distance_debug;                                           // 0x039C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                Index;                                                    // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class USplineComponent*                            MoveSpline;                                               // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              CurrentDistance;                                          // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSpline;                                               // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	class USoundAtomCue*                               RefCryCue;                                                // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrySEVolume;                                              // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	class USoundAtomCue*                               RefWalkCue;                                               // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEnabledFortune;                                         // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	float                                              CurrentTableSpeed;                                        // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCheerBoost;                                             // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	int                                                CheerBoostCount;                                          // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TableIndex;                                               // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEndCheerBoostDispacher;                                 // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<float>                                      CurrentSpeedList;                                         // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              BoostSpeed;                                               // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ControlledResult;                                         // 0x0414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsResultControl;                                          // 0x0415(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0416(0x0002) MISSED OFFSET
	float                                              CurrentWalkTime;                                          // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeginWalkTime;                                            // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEndBoost;                                                // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	float                                              BeginIdleTime;                                            // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentIdleTime;                                          // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFirstDelay;                                              // 0x042C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	float                                              Delay;                                                    // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DurationTime;                                             // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCheerBoostSpeed;                                        // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	class UDataTable*                                  SpecialSpeeddata;                                         // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SumValue;                                                 // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveSpeedAdjustmentRate;                                  // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTestHighAction;                                         // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0451(0x0003) MISSED OFFSET
	int                                                TestActionCount;                                          // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TickEnabledSetCache;                                      // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0459(0x0003) MISSED OFFSET
	float                                              HiWallRate;                                               // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TestFuncIdle;                                             // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnimUpdateEnabledCache;                                   // 0x0461(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_AR_Motion_Type>                      StateTypeOnFree;                                          // 0x0462(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x1];                                       // 0x0463(0x0001) MISSED OFFSET
	float                                              AnimDelayUpdateTimeOnEnd;                                 // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StateDelayTime;                                           // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AR_Animal_Base.BP_AR_Animal_Base_C");
		return ptr;
	}


	void SetAnimInRaceFlag(bool InRace);
	void SetAnimNotRaceStartPos(float Start);
	void SetAnimDelayUpdateTime(float Time);
	void ChangeStateOnFree();
	void Finalize();
	bool TestSumFuncTurtle();
	float GetMoveSpeed();
	bool TestSumFuncToad();
	void IsUsingSpecialData(bool* UseSpecial);
	void CanCancelDelay(float Duration, bool* bComplete);
	void SetResultControl(bool IsWin);
	void GetCourseMaterial(int ShapeType, class UMaterialInterface** Material);
	void PlayerBetAction(bool* dummy);
	void SetWalkRate(float Rate);
	void SetSpeedListFromTableIndex(int Index, bool IsSpecialSpeed);
	void SettingSelectAnimal();
	void Initialize();
	void SetFortuneEnabled(bool bEnabled);
	void CheerAnimalBoost();
	void SetWalkSE(class USoundAtomCue* RefWalkCue);
	void PlayCrySE(float Volume);
	void SetCrySE(class USoundAtomCue* Sound);
	void SetUseSpline(bool bUseSpline);
	void GetMoveSpline(class USplineComponent** MoveSpline);
	void SetMoveSpline(class USplineComponent* MoveSpline);
	void GetSplineLocationAndRotation(float Distance, struct FVector* Location, struct FRotator* Rotation);
	void UpdateRotate();
	void ChangeShape(int Index);
	void InitializeInfo(const struct FST_AR_AnimalInfo& table_offset, int Index);
	void SetMotion(TEnumAsByte<E_AR_Motion_Type> mot_type);
	void GetDeathTime(float* death_time);
	void SetDeath(bool is_death);
	void UpdateWalkRate();
	void SelectMotion(float Speed);
	void SetStop(bool is_stop);
	void Reset();
	void GetRandomSpeedFromTable(float* Speed);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void AnimStop();
	void Right_Hit_Begin(class UObject* A);
	void Left_Hit_Begin(class UObject* A);
	void Right_Hit_End(class UObject* A);
	void Left_Hit_End(class UObject* A);
	void MoveUpdate();
	void Idle_Reset();
	void Set_Tick_Enable(bool bEnabled, float DelayTime);
	void SetCurrentMoveSpeedTimingFromUpdate();
	void Event_PlaySECry();
	void Event_PlaySEWalk();
	void Event_EnabledCheer(bool Condition);
	void ResetDelayTime();
	void ResetIdleTime();
	void SetAnimUpdateEnabled(bool Enabled, float DelayTime);
	void DelayedChangeStateOnFree();
	void DelayedChangeStateToWait();
	void DelayedInitialize(float DelayTime);
	void ExecuteUbergraph_BP_AR_Animal_Base(int EntryPoint);
	void OnEndCheerBoostDispacher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
