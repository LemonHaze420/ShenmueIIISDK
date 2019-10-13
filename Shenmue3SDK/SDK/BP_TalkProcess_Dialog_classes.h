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

// BlueprintGeneratedClass BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C
// 0x00C1 (0x00F9 - 0x0038)
class UBP_TalkProcess_Dialog_C : public UBP_TalkProcess_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (Transient, DuplicateTransient)
	class UDialogTask*                                 DialogTask;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3HUD_Base_C*                            HUD;                                                      // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FST_GeneralWindowParam                      DialogParam;                                              // 0x0050(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_GeneralWindow_Button                    LeftParam;                                                // 0x00B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_TalkDialogInfo                          DialogInfo;                                               // 0x00C8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAccurateTime                               TimeOpened;                                               // 0x00F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bInputDelayed;                                            // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C");
		return ptr;
	}


	void MakeDialogParameter(struct FST_GeneralWindowParam* DialogParam);
	void OnWindowCancel(class AActor* Actor);
	void OnWindowClose(class AActor* Actor);
	void BindDialogInput();
	void UnbindDialogEvents();
	void BindDialogClose();
	void OnWindowDecide(class AActor* Actor);
	void Update(float* DeltaTime);
	void Activate();
	void ExecuteUbergraph_BP_TalkProcess_Dialog(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
