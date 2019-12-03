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

// WidgetBlueprintGeneratedClass wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C
// 0x002D (0x0235 - 0x0208)
class Uwgt_SkillEditor_ItemGrid_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UUniformGridPanel*                           ugp_skillList;                                            // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UBPW_UI_ItemIcon_C*>                  WidgetList;                                               // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Columns;                                                  // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Rows;                                                     // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SelectionIndex;                                           // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Focused;                                                  // 0x0234(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C");
		return ptr;
	}


	void STATIC_SetSkillLibrary(class UBTL_CommandLibrary_C* SkillLibrary);
	void STATIC_GetSelectionItemLabel(struct FName* Label);
	void STATIC_UpdateWidgetFocusing(int* ItemIndex);
	void STATIC_SetFocus(bool Condition);
	void SelectItem_WidgetIndex_(int Index, int* ItemIndex);
	void SelectItem_ItemIntID_(int ID);
	void STATIC_ClearSelection();
	void STATIC_SetItems(int StartIndex, TArray<int> AllItems);
	void STATIC_GetSelectionItemID(int* ItemIntID);
	void GridLocationToWidgetIndex(int X, int Y, int* Index);
	void STATIC_MoveSelection(TEnumAsByte<Een_skill_key_type> Direction, int* ItemIndex);
	void WidgetIndexToGridLocation(int Index, int* Column, int* Row);
	void GetGridItemCount(int* Count);
	void Construct();
	void STATIC_ExecuteUbergraph_wgt_SkillEditor_ItemGrid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
