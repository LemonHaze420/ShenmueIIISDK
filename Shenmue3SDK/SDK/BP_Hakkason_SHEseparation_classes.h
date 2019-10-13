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

// BlueprintGeneratedClass BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C
// 0x0070 (0x0398 - 0x0328)
class ABP_Hakkason_SHEseparation_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         SheHouse_AreaCheck;                                       // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         SheEnableJoin;                                            // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               JoinEnable;                                               // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               inArea;                                                   // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x034A(0x0002) MISSED OFFSET
	int                                                Mode;                                                     // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SubMode;                                                  // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      This_RenewalCounter;                                      // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	class UPrimitiveComponent*                         SHE_HouseDoor1;                                           // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         SHE_HouseDoor2;                                           // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                FlagNo_CSseparation;                                      // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FlagNo_CSjoin;                                            // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CSEndFlag;                                                // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	int                                                wait;                                                     // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TypeFollow;                                               // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InJoinArea;                                               // 0x0379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x037A(0x0006) MISSED OFFSET
	class UPrimitiveComponent*                         SheHouse_JoinAreaCheck;                                   // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FDataTableRowHandle                         LeadSHE_Step030_000_00;                                   // 0x0388(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C");
		return ptr;
	}


	void MakeLead_New();
	void MakeFlwOrNpc_New(bool Set_ExspPos, bool Set_ExspPos_B);
	void CheckSHEhouseIn(bool* house_in);
	void CheckWaitCondtion(bool* Wait_On);
	void MakeFlwOrNpc(bool Set_ExspPos, bool Set_ExspPos_B);
	void InitSet(class UPrimitiveComponent* HouseAreaIn, class UPrimitiveComponent* JoinEnableCollision, class UPrimitiveComponent* Door1, class UPrimitiveComponent* Door2, int Forced, bool TypeFollow, class UPrimitiveComponent* HouseOutJoinArea);
	void UserConstructionScript();
	void Test_MsgEvent(TEnumAsByte<EN_MainFlowMsgDestinationID> Current_Destination_ID);
	void KillSHEseparation();
	void OnBeginOverlap_JoinArea(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnEndOverlap_JoinArea(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnCutsceneEnd_M03_S0089();
	void OnStartCutscenePlayer_M03_S0089();
	void ReceiveTick(float* DeltaSeconds);
	void BeginOvarLap_JionEnable(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter);
	void OnCutsceneEnd_M03_S0090();
	void OnStartCutscenePlayer_M03_S0090();
	void ExecuteUbergraph_BP_Hakkason_SHEseparation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
