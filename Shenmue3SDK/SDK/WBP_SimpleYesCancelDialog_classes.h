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

// WidgetBlueprintGeneratedClass WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C
// 0x0038 (0x0258 - 0x0220)
class UWBP_SimpleYesCancelDialog_C : public US3UserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class Uwgt_dialog_window_yescancel_C*              YesCancelWidget;                                          // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               IsInitializedFlag;                                        // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFinishedClose;                                          // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsYesSelectedFlag;                                        // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOpenedFlag;                                             // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsClosingFlag;                                            // 0x024A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSelectedFlag;                                           // 0x024B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	struct FTimerHandle                                CloseTimerHandle;                                         // 0x0250(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SimpleYesCancelDialog.WBP_SimpleYesCancelDialog_C");
		return ptr;
	}


	void ClearCloseTimerHandle();
	void RequestSelectRight();
	void RequestSelectLeft();
	void RequestSelect(bool InIsLeft);
	void IsSelectable(bool* newParam);
	void IsClosable(bool* newParam);
	void IsOpenable(bool* newParam);
	void OnFinishedCloseAnimation();
	void Close();
	void Open();
	bool IsYesSelected();
	void Finalize();
	void Initialize();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_SimpleYesCancelDialog(int EntryPoint);
	void OnFinishedClose__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
