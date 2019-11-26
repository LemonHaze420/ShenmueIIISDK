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

// BlueprintGeneratedClass BP_SaveLoadInputManager.BP_SaveLoadInputManager_C
// 0x0080 (0x03A8 - 0x0328)
class ABP_SaveLoadInputManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               UpPush;                                                   // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DownPush;                                                 // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x033A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    ED_UpPush;                                                // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ED_DownPush;                                              // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ED_RightButton;                                           // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ED_DownButton;                                            // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ED_WheleMouse;                                            // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Loading;                                                  // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ED_LeftButton;                                            // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SaveLoadInputManager.BP_SaveLoadInputManager_C");
		return ptr;
	}


	void StartLoad();
	void UserConstructionScript();
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_SearchRightButton_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_SearchBottomButton_K2Node_InputActionEvent_7(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33(float AxisValue);
	void ExecuteUbergraph_BP_SaveLoadInputManager(int EntryPoint);
	void ED_LeftButton__DelegateSignature();
	void ED_WheleMouse__DelegateSignature(float Value);
	void ED_DownButton__DelegateSignature();
	void ED_RightButton__DelegateSignature();
	void ED_DownPush__DelegateSignature();
	void ED_UpPush__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
