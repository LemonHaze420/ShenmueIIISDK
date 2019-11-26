#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPF_ItemTable.BPF_ItemTable_C.GetItemTableIndexListByGroup
struct UBPF_ItemTable_C_GetItemTableIndexListByGroup_Params
{
	ES3ItemDataGroup                                   Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BPF_ItemTable.BPF_ItemTable_C.GetItemTableLabelListByGroup
struct UBPF_ItemTable_C_GetItemTableLabelListByGroup_Params
{
	ES3ItemDataGroup                                   Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnList;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_ItemTable.BPF_ItemTable_C.GetItemTableInvalidIndex
struct UBPF_ItemTable_C_GetItemTableInvalidIndex_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_ItemTable.BPF_ItemTable_C.GetItemTableIndexListByEffectTarget
struct UBPF_ItemTable_C_GetItemTableIndexListByEffectTarget_Params
{
	ES3ItemEffectTarget                                ValueTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnList;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_ItemTable.BPF_ItemTable_C.GetItemTableLabelListByEffectTarget
struct UBPF_ItemTable_C_GetItemTableLabelListByEffectTarget_Params
{
	ES3ItemEffectTarget                                ValueTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnList;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_ItemTable.BPF_ItemTable_C.ItemTableIndexToText
struct UBPF_ItemTable_C_ItemTableIndexToText_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function BPF_ItemTable.BPF_ItemTable_C.LabelToItemTableIndex
struct UBPF_ItemTable_C_LabelToItemTableIndex_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_ItemTable.BPF_ItemTable_C.ItemTableIndexToLabel
struct UBPF_ItemTable_C_ItemTableIndexToLabel_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Label;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
