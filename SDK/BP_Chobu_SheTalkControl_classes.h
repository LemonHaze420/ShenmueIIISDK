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

// BlueprintGeneratedClass BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C
// 0x0074 (0x039C - 0x0328)
class ABP_Chobu_SheTalkControl_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         RyosyaFrontDoor;                                          // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               DoorBit;                                                  // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ThisRenewalCounter;                                       // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0342(0x0002) MISSED OFFSET
	int                                                ModeID;                                                   // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SubModeID;                                                // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	class ATriggerBox*                                 SheCheckTrigger;                                          // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForcedHouseIn;                                            // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	class UPrimitiveComponent*                         VerandaTrigger;                                           // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               VerandaBit;                                               // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	TArray<struct FST_Chobu_SheTalkData>               VerandaTalkTbl;                                           // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                VerandaTalkIndex;                                         // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExspMemoSet1;                                             // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExspMemoSet2;                                             // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChangeNPCPriority;                                        // 0x038C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x038D(0x0003) MISSED OFFSET
	struct FVector                                     RyoPos;                                                   // 0x0390(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C");
		return ptr;
	}


	void SetDoorSystemFlag(bool SetBit);
	void CheckRyosyaIn(bool* in_ryosya);
	void CheckRyosyaDoor(bool* UsePlayer);
	void CheckSHEdistance(float Distance, bool* RangeIn);
	void VarandaTalkEndFlagCheck(const struct FText& FlagParameta, bool* Result);
	void VarandaTalkEndFlagSet(const struct FText& FlagParameta, bool* SetFlag);
	void CheckFlagOn(int Index, bool* FlagOn);
	void GetNowTalkTable(int* CurrentStepTableIndex);
	void CheckStapRange(int Min, int Max, bool* RangeIn);
	void CheckSheInTheLobby(float LimitDistance, bool* result_distance, struct FVector* she_pos);
	void InitSet(class UPrimitiveComponent* Door, class ATriggerBox* SHECheck, class UPrimitiveComponent* Veranda, int SaveMode);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter);
	void TickChangeCheckKill();
	void OnBeginOverlap_Veranda(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnEndOverlap_Veranda(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnCutsceneEnd_VerandaTalk();
	void OnStartCutscenePlayer_VerandaTalk();
	void ExecuteUbergraph_BP_Chobu_SheTalkControl(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
