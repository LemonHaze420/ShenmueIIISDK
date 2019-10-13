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

// BlueprintGeneratedClass BP_S3GamemodeBase.BP_S3GamemodeBase_C
// 0x0058 (0x0760 - 0x0708)
class ABP_S3GamemodeBase_C : public AS3GameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0708(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APawn*                                       DefaultPawn;                                              // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       SpectatorPawn;                                            // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CachedControlRotation;                                    // 0x0728(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledNPCDebugTrace;                                    // 0x0734(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDestroyNPC;                                              // 0x0735(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0736(0x0002) MISSED OFFSET
	float                                              DistanceDestroyNPC;                                       // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bResetNPC;                                                // 0x073C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowNPCNamePlate;                                         // 0x073D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugTraceNPCAnim;                                       // 0x073E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugTraceNPCScript;                                     // 0x073F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSkipTalk;                                             // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0741(0x0007) MISSED OFFSET
	struct FString                                     DebugLastSelectedDebugMenuCutsceneID;                     // 0x0748(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UDataTable*                                  DebugACDataTable;                                         // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3GamemodeBase.BP_S3GamemodeBase_C");
		return ptr;
	}


	void CheckSkip(bool* dummy);
	class APawn* SpawnDefaultPawnFor(class AController** NewPlayer, class AActor** StartSpot);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_S3GamemodeBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
