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

// BlueprintGeneratedClass BPF_ItemTable.BPF_ItemTable_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_ItemTable_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_ItemTable.BPF_ItemTable_C");
		return ptr;
	}


	TArray<int> GetItemTableIndexListByGroup(ES3ItemDataGroup Group, class UObject* __WorldContext);
	void GetItemTableLabelListByGroup(ES3ItemDataGroup Group, class UObject* __WorldContext, TArray<struct FName>* ReturnList);
	void GetItemTableInvalidIndex(class UObject* __WorldContext, int* Index);
	void STATIC_GetItemTableIndexListByEffectTarget(ES3ItemEffectTarget ValueTarget, class UObject* __WorldContext, TArray<int>* ReturnList);
	void GetItemTableLabelListByEffectTarget(ES3ItemEffectTarget ValueTarget, class UObject* __WorldContext, TArray<struct FName>* ReturnList);
	void ItemTableIndexToText(int Index, class UObject* __WorldContext, struct FText* Result);
	void LabelToItemTableIndex(const struct FName& Label, class UObject* __WorldContext, int* Index);
	void ItemTableIndexToLabel(int Index, class UObject* __WorldContext, struct FName* Label);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
