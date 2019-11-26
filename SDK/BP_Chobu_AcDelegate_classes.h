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

// BlueprintGeneratedClass BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C
// 0x00A8 (0x03D0 - 0x0328)
class ABP_Chobu_AcDelegate_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      ThisRenewalCounter;                                       // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	class AActor*                                      ThisActor;                                                // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                MinStep;                                                  // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxStep;                                                  // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTalkScript*                                 ExecTalkScript;                                           // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TriggerBit;                                               // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	int                                                ModeID;                                                   // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, struct FST_Chobu_AcDelegateTbl> DelegateInfo_Tbl;                                         // 0x0360(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              StartTime;                                                // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         SaveTrigger;                                              // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               EyeCatchFlag;                                             // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AcEndFlag;                                                // 0x03C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AcStartFlag;                                              // 0x03C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NoCheckTrigger;                                           // 0x03C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	struct FName                                       FlagSetType;                                              // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C");
		return ptr;
	}


	void CheckSheInRyosya1F(bool* She_On);
	void AcAfterFlagSet();
	void PreExecDelegate();
	void CheckBeginOverRap_Local(class UPrimitiveComponent* Trigger, bool* Begin_In);
	void ExecDelegate(class AActor* Current_Actor, bool* Skip);
	void InitSet(class UPrimitiveComponent* Ryosya_Trigger, const struct FName& EventId);
	void UserConstructionScript();
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void RenewalActorCount(TEnumAsByte<SDK::EN_MainFlowActorID> ActorId, unsigned char RenewalCounter);
	void ReceiveTick(float DeltaSeconds);
	void CounterChangeKill();
	void StepChanged(int SetSteps);
	void ExecuteUbergraph_BP_Chobu_AcDelegate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
