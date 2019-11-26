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

// BlueprintGeneratedClass BP_CJ_KSmodlue.BP_CJ_KSmodlue_C
// 0x009D (0x03C5 - 0x0328)
class ABP_CJ_KSmodlue_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FST_CJ_KsInfo>                       KStable;                                                  // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    SelectEnd;                                                // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FText>                               Text;                                                     // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       SelectEnable;                                             // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               Key;                                                      // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_S3actionSelect_C*                        Selector;                                                 // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CancelIndex;                                              // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CancelTarget;                                             // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewVar_1;                                                 // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    TimeOverNotification;                                     // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CancelNotification;                                       // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              SetTimeOver;                                              // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForcedCancel;                                            // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CJ_KSmodlue.BP_CJ_KSmodlue_C");
		return ptr;
	}


	TArray<struct FS3DetectActionParam> GetDetectAction();
	int GetPriority();
	void SetForcedCancel();
	void CheckGameTime(bool* TimeOver);
	void DetectEnable_Cancel(bool Enable);
	void MakeCurrentText();
	void UserConstructionScript();
	void InpActEvt_Interruption_K2Node_InputActionEvent_2(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void KsSelEnd(int Index);
	void DecideDetectAction(ES3ActionIconType Type);
	void ForcedCancel();
	void ExecuteUbergraph_BP_CJ_KSmodlue(int EntryPoint);
	void CancelNotification__DelegateSignature();
	void TimeOverNotification__DelegateSignature();
	void SelectEnd__DelegateSignature(const struct FName& Key);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
