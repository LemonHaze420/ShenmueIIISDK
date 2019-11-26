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

// BlueprintGeneratedClass BP_DLCDialogManager.BP_DLCDialogManager_C
// 0x00D8 (0x0400 - 0x0328)
class ABP_DLCDialogManager_C : public AS3DLCDialogManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class US3_BRallyAwardSystem*                       S3_BRallyAwardSystem;                                     // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3DownloadableContentManager*               Manager;                                                  // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UBP_S3GameInstance_C*                        GameInstance;                                             // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, struct FName>                   DLCDialogMap;                                             // 0x0350(0x0050) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TMap<int, TEnumAsByte<E_BattleRallyItem>>          BattleRallyItemMap;                                       // 0x03A0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               BattleRallyItemLabels;                                    // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DLCDialogManager.BP_DLCDialogManager_C");
		return ptr;
	}


	void AddItem(int ItemId);
	void CheckBattleRallyItem();
	void CheckDLCDialog();
	void UserConstructionScript();
	void CheckFreerun();
	void DecideDialog(class AActor* Actor);
	void ChangePlayerBehavior(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId);
	void ExecCheck();
	void ShowDLCDialog();
	void FinishedDLC();
	void ExecuteUbergraph_BP_DLCDialogManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
