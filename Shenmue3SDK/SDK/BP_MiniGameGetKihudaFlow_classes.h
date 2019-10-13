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

// BlueprintGeneratedClass BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C
// 0x0101 (0x0429 - 0x0328)
class ABP_MiniGameGetKihudaFlow_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEndActorFlow;                                           // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class US3LevelSequencePlayer*                      RefLevelSequencePlayer;                                   // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ULevelSequence*                              LookKifudaSequence;                                       // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              GetKifudaSequence;                                        // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_MiniGameBigWheelType>                BigWheelType;                                             // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	class AStaticMeshActor*                            ReplaceTicketMeshActor;                                   // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_SpawnableSequenceActor_C*                SpawnableSequencePlayer;                                  // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     TicketMeshActorName;                                      // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<E_MiniGameBigWheelType>, class UMaterial*> MaterialMap;                                              // 0x0388(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<E_MiniGameBigWheelType>, struct FName> ItemIDMap;                                                // 0x03D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsGetMoreTicket;                                          // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C");
		return ptr;
	}


	void AddTicketItem();
	void GetTicketItemID(TEnumAsByte<E_MiniGameBigWheelType> Type, struct FName* Name);
	void GetMaterial(TEnumAsByte<E_MiniGameBigWheelType> Type, class UMaterial** Value);
	void UpdateTicketFlag();
	void SpawnSecuencePlayer(class ULevelSequence* InSequence, class AActor* AttachActor, class ABP_SpawnableSequenceActor_C** SpawnObj);
	void UserConstructionScript();
	void StartGetKihudaFlow(const struct FTransform& OffsetRelativeTrans);
	void OnFinishedGetKihuda(class ULevelSequencePlayer* LevelSequencePlayer);
	void OnStoppedPlayer();
	void ExecuteUbergraph_BP_MiniGameGetKihudaFlow(int EntryPoint);
	void OnEndActorFlow__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
