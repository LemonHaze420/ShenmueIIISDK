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

// BlueprintGeneratedClass SL_Hakkason_SheLead.SL_Hakkason_SheLead_C
// 0x0040 (0x0370 - 0x0330)
class ASL_Hakkason_SheLead_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class ABP_NPCLeadManager_C*                        NPCLeadActorRef;                                          // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanTalk;                                                  // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	class ABP_NPC_Lead_C*                              LeadCharacter;                                            // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableTalk;                                               // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class ANPC_SplineMoveActor_C*                      NPC_SplineMoveActor_s0002_ExecuteUbergraph_SL_Hakkason_SheLead_RefProperty;// 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	class ANPC_SplineMoveActor_C*                      NPC_SplineMoveActor_Hanabashi_ExecuteUbergraph_SL_Hakkason_SheLead_RefProperty;// 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)
	class ANPC_SplineMoveActor_C*                      NPC_SplineMoveActor_SheHouse_ExecuteUbergraph_SL_Hakkason_SheLead_RefProperty;// 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SL_Hakkason_SheLead.SL_Hakkason_SheLead_C");
		return ptr;
	}


	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void SpawnShenfa_Pos(class ANPC_SplineMoveActor_C* SplineActor, const struct FVector& she_pos, float she_dir);
	void SpawnShenfa(const struct FName& LevelName, const struct FName& FindTag, class ANPC_SplineMoveActor_C* SplineActor);
	void isPlayer(class AActor* Actor, bool* isPlayer);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void StartLead();
	void StartHanabashiShenfa();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void BndEvt__TriggerBox_MiharashiTalkOff_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void WaitLeadStop();
	void DecideDetectAction(ES3ActionIconType Type);
	void StartLeadSheHouse();
	void StartLeadSheHousePos();
	void StartHanabashiShenfaPos();
	void StartleadPos();
	void ExecuteUbergraph_SL_Hakkason_SheLead(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
