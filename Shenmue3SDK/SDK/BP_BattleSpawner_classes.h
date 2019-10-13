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

// BlueprintGeneratedClass BP_BattleSpawner.BP_BattleSpawner_C
// 0x0050 (0x0378 - 0x0328)
class ABP_BattleSpawner_C : public ABTL_BattleSpawner
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ABP_BattleMediatorBase_C*>            Mediators;                                                // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0348(0x0028) UNKNOWN PROPERTY: SoftClassProperty BP_BattleSpawner.BP_BattleSpawner_C.DebugMediatorClass
	class ABP_BattleTaskBase_C*                        Task;                                                     // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleSpawner.BP_BattleSpawner_C");
		return ptr;
	}


	void EndBattle(TEnumAsByte<EBattleWinLoseResult> Result);
	void StartBattleTask_FromData(const struct FDataTableRowHandle& BattleId, const struct FName& WinEventID, const struct FName& LoseEventID, bool FadeBetweenModes, const struct FLinearColor& FadeColor, class ABP_BattleTaskBase_C** Task);
	void RegisterMediator(class ABP_BattleMediatorBase_C* Mediator, bool Add);
	void OnBattleEndEvent(TEnumAsByte<EBattleWinLoseResult> Result);
	void StartBattleTask(const struct FName& BattleId, const struct FName& LevelID, const struct FName& WinEventID, const struct FName& LoseEventID, bool FadeBetweenModes, class ABP_BattleMediatorBase_C* MediatorBase, const struct FLinearColor& FadeColor, class ABP_BattleTaskBase_C** Task);
	void LaunchDebugBattleImpl();
	void CheckBattleExist(bool* Exist);
	void UserConstructionScript();
	void LaunchDebugBattle();
	void ExecuteUbergraph_BP_BattleSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
