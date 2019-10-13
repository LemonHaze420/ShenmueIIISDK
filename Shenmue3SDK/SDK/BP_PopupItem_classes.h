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

// BlueprintGeneratedClass BP_PopupItem.BP_PopupItem_C
// 0x0094 (0x03BC - 0x0328)
class ABP_PopupItem_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAllFinishedPopupDispatcher;                             // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              Delta;                                                    // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_HaveMoneyManager_C*                      HaveMoneyManager;                                         // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UWBP_ItemNameDisp_C*                         ItemNameDisp;                                             // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                PopupUniqueId;                                            // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	TArray<struct FST_PopupItemInfo>                   PopupInfoList;                                            // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<E_PopupStep>                           Step;                                                     // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishedUI;                                              // 0x0379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x037A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFinishedPopupDispatcher;                                // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FTimerHandle                                OnFinishedUI_Handle;                                      // 0x0390(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        RequestHidePopupIds;                                      // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       ItemNew;                                                  // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ItemOld;                                                  // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemCount;                                                // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PopupItem.BP_PopupItem_C");
		return ptr;
	}


	void IsNextStock(const struct FName& CheckId, bool* bAvailable);
	void GetPopupInfoByID(int PopupId, bool* bSuccess, struct FST_PopupItemInfo* Info, int* ArrayIndex);
	void CanPopupUI(bool* bCan);
	void IsCheckBet(const struct FName& CheckId, bool* bAvailable);
	void IsCheckMoney(const struct FName& CheckId, bool* bAvailable);
	void ForceHidePopup();
	void ShowPopupItem(const struct FName& ItemId, float WaitTime, bool bDisableAutoHide, bool bApplyData, int* PopupId);
	void HidePopup(int PopupId);
	void FinishUI();
	void StartPopup();
	void StepWaitForEndEvent();
	void StepShowUI();
	void StepWaitTimeCheck();
	void StepStackCheck();
	void IsCheckItemId(const struct FName& CheckId, bool* bAvailable);
	void IncrementPopupId(int* PopupId);
	void ShowPopupMoney(int IncreaseOrDecreaseMoney, float WaitTime, bool bDisableAutoHide, TEnumAsByte<EN_ValueType> ValueType, int* PopupId);
	void UserConstructionScript();
	void SetupItemUI(const struct FName& ItemId, bool bAutoClose, int Quantity, bool bApplyData);
	void SetupMoneyUI(int HaveMoney, int IncreaseOrDecreaseMoney, bool bAutoClose, TEnumAsByte<EN_ValueType> ValueType);
	void OnClosedItemNameDisp();
	void OnFinishedUI();
	void ClearHandle_OnFinishedUI();
	void Evt_StartAnmEnd();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_PopupItem(int EntryPoint);
	void OnFinishedPopupDispatcher__DelegateSignature(int PopupId);
	void OnAllFinishedPopupDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
