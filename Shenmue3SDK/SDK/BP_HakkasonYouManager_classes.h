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

// BlueprintGeneratedClass BP_HakkasonYouManager.BP_HakkasonYouManager_C
// 0x0034 (0x035C - 0x0328)
class ABP_HakkasonYouManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_S3AtomSoundAreaBox_C*                    HanautaActor;                                             // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               isFreerun;                                                // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnYOU;                                                 // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDayTime;                                                // 0x0342(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isNightNPCflag;                                           // 0x0343(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isExspYouOff;                                             // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	int                                                YOU_CS_INDEX;                                             // 0x0348(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableStep;                                               // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TalkingYOU;                                               // 0x034D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x034E(0x0002) MISSED OFFSET
	struct FVector                                     LargeHanautaSize;                                         // 0x0350(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HakkasonYouManager.BP_HakkasonYouManager_C");
		return ptr;
	}


	void CheckHanautaStep();
	void ChengeHanautaCollisionSize();
	void CheckEventFalg(int Index);
	void CheckYouHouseSyoji(bool Open);
	void CheckHanautaCollision();
	void UserConstructionScript();
	void SpawnNPC(const struct FGameplayTag& NPCID);
	void UnspawnNPC(const struct FGameplayTag& NPCID);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void BindNPCManager();
	void ChangeDayTime(ES3DayTimeEvent EventType);
	void ReceiveBeginPlay();
	void CheckNPCflagChange(int ArrayIndex, int SetFlags);
	void CheckStepChange(int SetSteps);
	void ChangeBehavior(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId);
	void StartTalk();
	void EndTalk();
	void ExecuteUbergraph_BP_HakkasonYouManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
