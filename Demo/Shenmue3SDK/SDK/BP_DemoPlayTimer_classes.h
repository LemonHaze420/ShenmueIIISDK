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

// BlueprintGeneratedClass BP_DemoPlayTimer.BP_DemoPlayTimer_C
// 0x008A (0x03B2 - 0x0328)
class ABP_DemoPlayTimer_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RemainingTime;                                            // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x033C(0x0050) UNKNOWN PROPERTY: MapProperty BP_DemoPlayTimer.BP_DemoPlayTimer_C.Textures
	class US3GameInstance*                             GameInstance;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpecialRight;                                             // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpecialLeft;                                              // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x039A(0x0006) MISSED OFFSET
	class UWBP_DemoPlayTimer_C*                        Widget;                                                   // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AS3GameTimeManager*                          GameTimeManager;                                          // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Initialized;                                              // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ES3DemoType                                        DemoType;                                                 // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DemoPlayTimer.BP_DemoPlayTimer_C");
		return ptr;
	}


	void IsNeedTimer(bool* Need);
	void CanShowDialog(bool Start, bool* CAN);
	void MakeDialogParam(const struct FName& ID, struct FST_GeneralWindowParam* Param);
	void UserConstructionScript();
	void InpActEvt_BackSpace_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void CloseDialog(class AActor* Actor);
	void ResultDemoPlay(bool Success);
	void WaitStartDialog();
	void StartDialog(class AActor* Actor);
	void WaitEndDialog();
	void DialogDecede(class AActor* Actor);
	void DialogCancel(class AActor* Actor);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ChangePlayer(class APlayerController* PlayerController);
	void ChangeStep(int SetSteps);
	void ExecuteUbergraph_BP_DemoPlayTimer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
