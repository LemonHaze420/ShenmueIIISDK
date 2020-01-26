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

// BlueprintGeneratedClass BP_S3Character.BP_S3Character_C
// 0x0038 (0x093C - 0x0904)
class ABP_S3Character_C : public ABP_S3CharacterBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0904(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0908(0x0008) (Transient, DuplicateTransient)
	class ABP_Gimmick_OpenDoor_Template_C*             DoorActor;                                                // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    StartNockDoor;                                            // 0x0918(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               AlwaysCloseEye;                                           // 0x0928(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0929(0x0007) MISSED OFFSET
	class UBPC_TalkReaction_C*                         BPC_TalkReaction;                                         // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              CacheWetness;                                             // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3Character.BP_S3Character_C");
		return ptr;
	}


	void AddTurnAroundComponent(class UBPC_TurnAround_C** Component);
	void RemoveTurnAroundComponent(bool* bSuccess);
	void GetTurnAroundComponent(class UBPC_TurnAround_C** Component);
	void IsInShelter(bool* Sheltered);
	bool IsTalking();
	class AS3GimmickOpenDoor* GetDoorActor();
	void GetNearSideTargetTransform(bool* ValidDoor, struct FTransform* TargetTransform);
	void GetNearSideTargetPos(bool* ValidDoor, struct FVector* pos);
	void GetCharaToDoorPointDiff(struct FVector* pos, float* AngleDeg);
	void ChangePosition();
	void MoveDoorPoint(float DeltaSeconds);
	void NotifyFinishNock();
	void NotifyFinishMove();
	void OpenDoor();
	void CheckCanUseDoor(bool* IsUseDoor);
	void UserConstructionScript();
	void OnTalkStart(class US3TalkComponent* TalkComponent);
	void OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted);
	void Screen_Player();
	void Screen_NPC();
	void ReceiveBeginPlay();
	void StartNock();
	void OnDoorAreaBeginOverlap(class AS3GimmickOpenDoor* Door);
	void OnDoorAreaEndOverlap(class AS3GimmickOpenDoor* Door);
	void OnDoorAreaOutsideBeginOverlap(class AS3GimmickOpenDoor* Door);
	void OnDoorAreaOutsideEndOverlap(class AS3GimmickOpenDoor* Door);
	void ExecuteUbergraph_BP_S3Character(int EntryPoint);
	void StartNockDoor__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
