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

// BlueprintGeneratedClass SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C
// 0x0030 (0x0360 - 0x0330)
class ASL_Hakkason_AreaJump_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	int                                                ExspFlagNo;                                               // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NPCWaitFlag;                                              // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x033D(0x0003) MISSED OFFSET
	struct FVector                                     ExspPlayerPOS;                                            // 0x0340(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bChangeRot;                                               // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	class ABP_AreaJumpTrigger_C*                       BP_AreaJumpTrigger_ShenfaHouse_ExecuteUbergraph_SL_Hakkason_AreaJump_RefProperty;// 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 AreaJump_Makiwari_ExecuteUbergraph_SL_Hakkason_AreaJump_RefProperty;// 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C");
		return ptr;
	}


	void CheckNpcDistance(const struct FVector& CheckPoint, float Threshold, bool* in_Threshold);
	void TalkEnable(bool enableFlag);
	void ReceiveBeginPlay();
	void RotSetNPC();
	void NPCWait(const struct FGameplayTag& NPCID);
	void Event_EndOverLap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void Event_OverLap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExspEvent_OnFlagChanged(int ArrayIndex, int SetFlags);
	void ExecuteUbergraph_SL_Hakkason_AreaJump(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
