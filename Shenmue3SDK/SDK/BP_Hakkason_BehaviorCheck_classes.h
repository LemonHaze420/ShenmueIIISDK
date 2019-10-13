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

// BlueprintGeneratedClass BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C
// 0x001C (0x0344 - 0x0328)
class ABP_Hakkason_BehaviorCheck_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      ThisRenewalCounter;                                       // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	int                                                ModeID;                                                   // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ES3PlayerBehavior                                  Check_Behavior;                                           // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Need_ChangePlayable;                                      // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ExecStatusChange;                                         // 0x0342(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Need_StepLock;                                            // 0x0343(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C");
		return ptr;
	}


	void InitSet(ES3PlayerBehavior Check_Behavior, bool Change_Playable, bool StepLock);
	void UserConstructionScript();
	void RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter);
	void ReceiveTick(float* DeltaSeconds);
	void TickChangeCheckKill();
	void ExecuteUbergraph_BP_Hakkason_BehaviorCheck(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
