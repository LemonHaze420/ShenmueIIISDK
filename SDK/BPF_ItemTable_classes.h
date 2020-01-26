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


	TArray<int> STATIC_GetItemTableIndexListByGroup(ES3ItemDataGroup Group, class UObject* __WorldContext);
	void STATIC_GetItemTableLabelListByGroup(ES3ItemDataGroup Group, class UObject* __WorldContext, TArray<struct FName>* ReturnList);
	void STATIC_GetItemTableInvalidIndex(class UObject* __WorldContext, int* Index);
	void STATIC_GetItemTableIndexListByEffectTarget(ES3ItemEffectTarget ValueTarget, class UObject* __WorldContext, TArray<int>* ReturnList);
	void STATIC_GetItemTableLabelListByEffectTarget(ES3ItemEffectTarget ValueTarget, class UObject* __WorldContext, TArray<struct FName>* ReturnList);
	void STATIC_ItemTableIndexToText(int Index, class UObject* __WorldContext, struct FText* Result);
	void STATIC_LabelToItemTableIndex(const struct FName& Label, class UObject* __WorldContext, int* Index);
	void STATIC_ItemTableIndexToLabel(int Index, class UObject* __WorldContext, struct FName* Label);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
