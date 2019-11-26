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

// BlueprintGeneratedClass BP_MenuWindowManager.BP_MenuWindowManager_C
// 0x0048 (0x0370 - 0x0328)
class ABP_MenuWindowManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               isActionButtonExec;                                       // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCancelButtonExec;                                       // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDeny;                                                   // 0x033A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMenuButtonExec;                                         // 0x033B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              defineFloat_beginPlayDelayTime_;                          // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsButtonHide;                                             // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartButtonRelease;                                       // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	class ABP_Gimmick_OpenDoor_Template_C*             Door;                                                     // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3ItemListViewerManager_C*               MenuWidget;                                               // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ItemListViewerManagerClass;                               // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMenuClosed;                                             // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuWindowManager.BP_MenuWindowManager_C");
		return ptr;
	}


	void SetItemListViewerManagerClass(class UClass* Class);
	bool CheckBehaviorState();
	void CheckDoorOpen(bool* DoMenu);
	void StartAllActor();
	void StopAllActor();
	void SetDenyFlag(bool Deny, bool* succes);
	void IsDetected(bool* IsDetected);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void doCmd_FirstDetectRetain_Menu_();
	void delayedRegistCheck_detector_();
	void StartMenu();
	void ActionStartButton(bool IsPress);
	void FinishMenu();
	void OpenInventory_EatEvent(int ItemId);
	void Open_ItemWindow();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MenuWindowManager(int EntryPoint);
	void OnMenuClosed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
