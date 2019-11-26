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

// BlueprintGeneratedClass BP_KungFu_Result.BP_KungFu_Result_C
// 0x0079 (0x03A1 - 0x0328)
class ABP_KungFu_Result_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBPC_ResultScreenInputDelayer_C*             BPC_ResultScreenInputDelayer;                             // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<E_MiniGame_KungFuType>                 KungFuType;                                               // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	class UWBP_KungFu_Result_C*                        RefResultWidget;                                          // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTransform                                  CameraTransform;                                          // 0x0350(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	class ABP_MiniGameSceneCapture_C*                  RefSceneCaptureActor;                                     // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnClose;                                                  // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UBP_TrainingLevelUpRecorder_C*               LevelUpRecord;                                            // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowHPHint;                                              // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_KungFu_Result.BP_KungFu_Result_C");
		return ptr;
	}


	void ConstructWidget();
	void UserConstructionScript();
	void InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2(const struct FKey& Key);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnWidgetAnimationFinished();
	void StartClose();
	void ReceiveBeginPlay();
	void StartInputWait();
	void ExecuteUbergraph_BP_KungFu_Result(int EntryPoint);
	void OnClose__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
