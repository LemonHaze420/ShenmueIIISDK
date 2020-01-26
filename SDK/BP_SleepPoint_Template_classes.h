#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SleepPoint_Template.BP_SleepPoint_Template_C
// 0x00B5 (0x03DD - 0x0328)
class ABP_SleepPoint_Template_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DetectArea;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SleepPointObject;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SceneRoot;                                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FText>                               selectTexts;                                              // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       itemEnables;                                              // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_S3actionSelect_C*                        Selector;                                                 // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsActionButtonExec;                                       // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ButtonHide;                                               // 0x0379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x037A(0x0002) MISSED OFFSET
	float                                              DetectAreaRadius;                                         // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DetectAreaOffset;                                         // 0x0380(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FST_DispTime                                DispSleep;                                                // 0x038C(0x0008) (Edit, BlueprintVisible)
	struct FST_DispTime                                DispCancel;                                               // 0x0394(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ED_DoSleep;                                               // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FST_DispTime                                BS_Valid_Time;                                            // 0x03B0(0x0008) (Edit, BlueprintVisible)
	float                                              FadeTime;                                                 // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StopTime;                                                 // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTimeStop;                                               // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HideActionButton_ForcedSleep;                             // 0x03C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableBS;                                                // 0x03C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBeginStartBS;                                            // 0x03C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	TArray<struct FText>                               defoltSelectTexts;                                        // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bWaitingSearchEnd;                                        // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBsCooldown;                                            // 0x03D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAreaIn;                                                  // 0x03DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CheckDirection;                                           // 0x03DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsActionButtonExec2;                                      // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SleepPoint_Template.BP_SleepPoint_Template_C");
		return ptr;
	}


	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void CheckRay(bool* Enable);
	void ChangeSelectText();
	void LavelIDtoText(const struct FName& LavelID, struct FText* GetText);
	void CheckBeginTriggerIn(bool* BeginIn);
	void ChangeBSEnable(bool BsEnable);
	void CheckItemValid(bool* Valid);
	void BSAction(class UActorComponent* Component);
	void SetItemEnable();
	void RegisterDetect(class UActorComponent* Component, bool Register);
	void UserConstructionScript();
	void Catch_OnSelect(int Index);
	void Select_Cancel(bool IsDeny);
	void SaveLoadWidgetFinish();
	void OpenSyetemMenuSelect();
	void ReceiveTick(float DeltaSeconds);
	void DecideDetectAction(ES3ActionIconType Type);
	void BeginBsIn();
	void BndEvt__DetectArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__DetectArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CancelBsIn();
	void ReceiveBeginPlay();
	void CheckLoadEnd();
	void CheckFadein();
	void ExecuteUbergraph_BP_SleepPoint_Template(int EntryPoint);
	void ED_DoSleep__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
