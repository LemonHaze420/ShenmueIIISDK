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

// BlueprintGeneratedClass BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C
// 0x00CC (0x03F4 - 0x0328)
class ABP_Hakkason_JumpInTalk_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Wood_chair_02;                                            // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         SHE_HouseDoor1;                                           // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         SHE_HouseDoor2;                                           // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      ThisRenewalCounter;                                       // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	int                                                ModeID;                                                   // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SubModeID;                                                // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      This_RenewalCounter;                                      // 0x035C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoorBit;                                                  // 0x035D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x035E(0x0002) MISSED OFFSET
	TMap<int, unsigned char>                           StepTalk_PosType;                                         // 0x0360(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SelectDoor;                                               // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SHESpawnWait;                                             // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_HakkasonFood_C*                          Save_Food_Actor;                                          // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForcedMode;                                               // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HouseInTalk;                                              // 0x03C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoorBitFront;                                             // 0x03C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitClothChange;                                          // 0x03C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForcedHouseInSet;                                         // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	TArray<class AStaticMeshActor*>                    NewVar_1;                                                 // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                NewVar_2;                                                 // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	TArray<class AS3GimmickEmitter*>                   NewVar_3;                                                 // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               PrivateEndFlag_35;                                        // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PrivateEndFlag_36;                                        // 0x03F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PrivateEndFlag_37;                                        // 0x03F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPushSet;                                                 // 0x03F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C");
		return ptr;
	}


	void ChangeNPCSHEposchange(int* SetPos);
	void BeginHitCheck(class UPrimitiveComponent* TrgBox, bool* BeginIn);
	void ForcedHouseIn(bool* rc);
	void CheckHouseInAndNeedTalk(bool* HouseInTalk);
	void ForcedSet();
	void CheckTalkEnd(bool* talk_end);
	void ChangePlayerCamera(float PlayerDistance, const struct FRotator& AddRotation);
	void TurnSHEdirection(float DefYaw, float* Direction);
	void CheckTalkPostion(unsigned char* Postype);
	void CheckTalkEnable(bool* TalkEnable);
	void CheckSHEDoor(bool* UsePlayer, int* DoorType);
	void InitSet(class UPrimitiveComponent* Door1, class UPrimitiveComponent* Door2);
	void UserConstructionScript();
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveTick(float* DeltaSeconds);
	void RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter);
	void TickChangeCheckKill();
	void OnBeginOverlapBack(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnEndOverlapBack(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExspHouseIn();
	void LocalEvt_ClothChange(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName);
	void ExecuteUbergraph_BP_Hakkason_JumpInTalk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
