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

// BlueprintGeneratedClass BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C
// 0x00B1 (0x03D9 - 0x0328)
class ABP_DebugCutscenePlayAreaDispManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsDispFlag;                                               // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	TArray<struct FST_DebugCutscenePlayAreaDispInfo>   DispInfoList;                                             // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsInitializedDispInfoFlag;                                // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInitializingDispInfoFlag;                               // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0352(0x0006) MISSED OFFSET
	TArray<struct FST_DbgCutscenePlayInfo>             DebugPlayInfoList;                                        // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_CutsceneManager_C*                       CutsceneManager;                                          // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CurrentLevelName;                                         // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               LoadedLevelList;                                          // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FST_DbgCutscenePlayInfo                     CurrentDebugPlayInfo;                                     // 0x0388(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsDispCompletedFlag;                                      // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	TArray<class ABP_DebugCutscenePlayAreaDisp_C*>     CurrentDispActorList;                                     // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsRequestedEndDispFlag;                                   // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C");
		return ptr;
	}


	bool IsRequestedEndDisp();
	bool isDisp();
	void RequestEndDisp();
	void EndDisp();
	void DispCutsceneArea();
	bool IsCurrentLevelUnloadable();
	void AddCutsceneDispInfo(const struct FST_DbgCutscenePlayInfo& InInfo);
	void GetLoadLevelName(const struct FST_DbgCutscenePlayInfo& InPlayInfo, struct FName* LevelName);
	bool IsAddedDispInfo(const struct FST_DbgCutscenePlayInfo& InPlayInfo);
	void GetDebugPlayInfoList();
	void StartDisp();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void InitializeDispInfo();
	void ExecuteUbergraph_BP_DebugCutscenePlayAreaDispManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
