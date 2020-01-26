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

// BlueprintGeneratedClass BP_S3SaveLoadManager.BP_S3SaveLoadManager_C
// 0x0030 (0x0340 - 0x0310)
class UBP_S3SaveLoadManager_C : public US3SaveLoadManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (Transient, DuplicateTransient)
	class UBPW_SaveLoadWindow_C*                       SaveLoadWidget;                                           // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_S3SaveLoadSelectWidget_C*                SaveLoadSelectWidget;                                     // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	ES3Where                                           LoadingLocationId;                                        // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	int                                                LoadingEventStep;                                         // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_S3SaveLoadTestWidget_C*                  TestWidget;                                               // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AActor*                                      DialogExecutor;                                           // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3SaveLoadManager.BP_S3SaveLoadManager_C");
		return ptr;
	}


	void JudgeLoadingType(int EventStep, ES3LoadingType* Type);
	void ExecRetrySave();
	void ExecLoadRetrySaveData(bool* Success, class US3SaveGame** SaveData);
	void OpenIgnoreDialog(const struct FName& Label);
	void OpenSaveLoadTestWidget(const struct FName& Type);
	bool ResetSaveData();
	bool OpenLevel(ES3Where LocationId, int EventStep);
	void ExecLoadAutoSaveData(bool* Success, class US3SaveGame** SaveData);
	bool OpenLoadWidget();
	bool OpenSaveWidget();
	void UserConstructionScript();
	void CustomEvent_1();
	void CustomEvent_2();
	void CustomEvent_3();
	void OpenLoadWidgetImpl();
	void OpenSaveWidgetImpl();
	void CustomEvent_4();
	void BeginLoadData(class US3SaveGame* SaveGame, bool bRetryData);
	void CloseIgnoreDialog(class AActor* Actor);
	void ConfirmClearData();
	void SelectLevel(class AActor* Actor);
	void SelectChobu(class AActor* Actor);
	void SelectHakkason(class AActor* Actor);
	void StartClearData();
	void WidgetClosed();
	void OpenSaveLoadWidget();
	void ShowNotInstallDLCDialog();
	void CloseNotInstallDLC(class AActor* Actor);
	void ExecuteUbergraph_BP_S3SaveLoadManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
