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

// BlueprintGeneratedClass BP_MiniGameChoose.BP_MiniGameChoose_C
// 0x00A8 (0x03D0 - 0x0328)
class ABP_MiniGameChoose_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBPC_MiniGameInputWaitTimer_C*               BPC_MiniGameInputWaitTimer;                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              MiniGameActors;                                           // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class AActor*                                      ChooseMiniGame;                                           // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnChooseMiniGameDispatcher;                               // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancelMiniGameDispatcher;                               // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bChangeChooseCamera;                                      // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	float                                              CameraBlendTime;                                          // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              CameraBlendFunc;                                          // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	float                                              CameraBlendExp;                                           // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabledInput;                                            // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoDestroyActor;                                        // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x038A(0x0006) MISSED OFFSET
	class ABP_MiniGameChooseSelectTriangle_C*          RefSelectTriangle;                                        // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBindingChooseEvents;                                     // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	struct FVector                                     TriangleOffsetPos;                                        // 0x039C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UBPW_PlayPrice_C*                            RefOnePriceInfo;                                          // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_HaveMoneyManager_C*                      MoneyManager;                                             // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SelectUIScale;                                            // 0x03B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	class ABP_ActorVisibleControl_C*                   VisibleControlActor;                                      // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGameChoose.BP_MiniGameChoose_C");
		return ptr;
	}


	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void FinalizeMoneyInfo();
	void InitializeMoneyInfo();
	void UpdateOnePriceInfo();
	void UserConstructionScript();
	void DecideDetectAction(ES3ActionIconType Type);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_MiniGameChoose(int EntryPoint);
	void OnCancelMiniGameDispatcher__DelegateSignature();
	void OnChooseMiniGameDispatcher__DelegateSignature(class AActor* ChooseActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
