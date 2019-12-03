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

// WidgetBlueprintGeneratedClass BW_DebugMiniGame.BW_DebugMiniGame_C
// 0x00D0 (0x02D8 - 0x0208)
class UBW_DebugMiniGame_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UGridPanel*                                  GridPanel_3;                                              // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBW_DebugMiniGameListStat_C*                 KachoFortuneRate;                                         // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBW_DebugMiniGameListStat_C*                 KachoRate;                                                // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBW_DebugBattleListStat_C*                   KeihoLevel;                                               // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  KihudaAccumulationText;                                   // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBW_DebugBattleListStat_C*                   MahoLevel;                                                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class US3Button*                                   OpenForkliftContainerButton;                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBW_DebugMiniGameListStat_C*                 RateName;                                                 // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBW_DebugBattleListStat_C*                   SunkenLevel;                                              // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBW_DebugBattleListStat_C*                   TotalLevel;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBW_DebugMiniGameListStat_C*                 UedeRate;                                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               DebFlagName;                                              // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        EventFlagIndex;                                           // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<E_MiniGame_KungFuType>, class UBW_IntegerProperty_C*> Widgets;                                                  // 0x0288(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BW_DebugMiniGame.BW_DebugMiniGame_C");
		return ptr;
	}


	void OpenAllForkliftJobs();
	void AddVitalityLevel(int B);
	void STATIC_ResetFocus();
	void DisplayCategoryLevel(TEnumAsByte<E_MiniGame_KungFuType> Category, class UBW_DebugBattleListStat_C* Widget);
	void STATIC_AddKunFuLevel(TEnumAsByte<E_MiniGame_KungFuType> Category, int AddNum);
	void STATIC_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_2_OnMax__DelegateSignature();
	void STATIC_BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_3_OnPlus__DelegateSignature();
	void STATIC_BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_4_OnMinus__DelegateSignature();
	void STATIC_BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_5_OnMax__DelegateSignature();
	void STATIC_BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_6_OnPlus__DelegateSignature();
	void STATIC_BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_7_OnMinus__DelegateSignature();
	void STATIC_BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_8_OnMax__DelegateSignature();
	void STATIC_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void STATIC_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature();
	void STATIC_BndEvt__TotalLevel_K2Node_ComponentBoundEvent_9_OnPlus__DelegateSignature();
	void STATIC_BndEvt__TotalLevel_K2Node_ComponentBoundEvent_10_OnMinus__DelegateSignature();
	void STATIC_BndEvt__TotalLevel_K2Node_ComponentBoundEvent_11_OnMax__DelegateSignature();
	void STATIC_BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_792_OnPlusMin__DelegateSignature();
	void STATIC_BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_814_OnMinusMin__DelegateSignature();
	void STATIC_BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_834_OnPlusMax__DelegateSignature();
	void STATIC_BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_852_OnMinusMax__DelegateSignature();
	void STATIC_BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_868_OnPlusMin__DelegateSignature();
	void STATIC_BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_894_OnMinusMin__DelegateSignature();
	void STATIC_BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_918_OnPlusMax__DelegateSignature();
	void STATIC_BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_940_OnMinusMax__DelegateSignature();
	void STATIC_BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_960_OnPlusMin__DelegateSignature();
	void STATIC_BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_990_OnMinusMin__DelegateSignature();
	void STATIC_BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_1018_OnPlusMax__DelegateSignature();
	void STATIC_BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_1044_OnMinusMax__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void STATIC_BndEvt__AllOpenForkliftContainerButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_BW_DebugMiniGame(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
