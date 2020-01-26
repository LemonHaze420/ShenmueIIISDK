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

// WidgetBlueprintGeneratedClass wgt_MemoPageBase.wgt_MemoPageBase_C
// 0x0030 (0x0240 - 0x0210)
class Uwgt_MemoPageBase_C : public US3MemopadPageWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	TArray<class UNamedSlot*>                          ImageSlots;                                               // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   ImageSize;                                                // 0x0228(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ED_LoadFinish;                                            // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass wgt_MemoPageBase.wgt_MemoPageBase_C");
		return ptr;
	}


	void SetFontSize(class UTextBlock* Text, class UTextBlock** PlaceNameText);
	void SetPageIndex(int PageIndex);
	void Construct();
	void SetSlotContent(int Index, class US3MemopadTextWidget* Widget);
	void SetSlotHiddenFlag(int Index, bool flag);
	void ExecuteUbergraph_wgt_MemoPageBase(int EntryPoint);
	void ED_LoadFinish__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
