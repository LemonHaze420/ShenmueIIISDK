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

// BlueprintGeneratedClass BP_SkipController.BP_SkipController_C
// 0x0040 (0x0368 - 0x0328)
class ABP_SkipController_C : public AS3SkipController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWBP_SkipSceneIcon_C*                        SkipSceneIcon;                                            // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              PushTimer;                                                // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkipEnabledPushTime;                                      // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReady;                                                  // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseDispatcher;                                            // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x034A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSkip;                                                   // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                ZOrder;                                                   // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SaveRate;                                                 // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkipController.BP_SkipController_C");
		return ptr;
	}


	void GetCurentRate(float* Rate);
	void SetGenericCall(int z_order);
	void CheckVisible(ES3PlayerBehavior ID);
	void DisableSkipScene();
	void EnableSkipScene();
	void UserConstructionScript();
	void InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_3(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ChangePlayerBehavior(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_SkipController(int EntryPoint);
	void OnSkip__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
