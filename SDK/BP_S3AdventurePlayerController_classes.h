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

// BlueprintGeneratedClass BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C
// 0x0028 (0x0768 - 0x0740)
class ABP_S3AdventurePlayerController_C : public ABP_S3AdventurePlayerControllerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0740(0x0008) (Transient, DuplicateTransient)
	class UUserWidget*                                 LevelStreamingDebugWidget;                                // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_S3AttentionController_C*                 AttentionController;                                      // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3HelpManager_C*                         helpManager;                                              // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBPW_Pause_C*                                PauseWidget;                                              // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C");
		return ptr;
	}


	void ForceStartAttentionLoadLevel_Location(const struct FVector& ForcedLocation);
	void StartAttention_Location(const struct FVector& ForcedLocation);
	void ExitAttention();
	void StartAttention();
	void ResetZoom();
	void IsLookActor(class AActor* OwnerActor, const struct FVector& TraceStart, bool* Look);
	void Init();
	void CheckAttention();
	void IsZoom(bool* Value);
	void UserConstructionScript();
	void InpActEvt_SystemPause_K2Node_InputActionEvent_2(const struct FKey& Key);
	void ReceiveBeginPlay();
	void StreamingDebug();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OpenHelp();
	void ExecuteUbergraph_BP_S3AdventurePlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
