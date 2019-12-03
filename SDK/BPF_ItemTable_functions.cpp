
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPF_ItemTable.BPF_ItemTable_C.GetItemTableIndexListByGroup
// (Native, NetMulticast, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ItemDataGroup               Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UBPF_ItemTable_C::GetItemTableIndexListByGroup(ES3ItemDataGroup Group, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ItemTable.BPF_ItemTable_C.GetItemTableIndexListByGroup");

	UBPF_ItemTable_C_GetItemTableIndexListByGroup_Params params;
	params.Group = Group;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_ItemTable.BPF_ItemTable_C.GetItemTableLabelListByGroup
// (Net, Exec, Native, NetResponse, Protected, NetServer, BlueprintCallable)
// Parameters:
// ES3ItemDataGroup               Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnList                     (Parm, OutParm, ZeroConstructor)

void UBPF_ItemTable_C::GetItemTableLabelListByGroup(ES3ItemDataGroup Group, class UObject* __WorldContext, TArray<struct FName>* ReturnList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ItemTable.BPF_ItemTable_C.GetItemTableLabelListByGroup");

	UBPF_ItemTable_C_GetItemTableLabelListByGroup_Params params;
	params.Group = Group;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnList != nullptr)
		*ReturnList = params.ReturnList;
}


// Function BPF_ItemTable.BPF_ItemTable_C.GetItemTableInvalidIndex
// (NetReliable, NetMulticast, Private, Protected, NetServer, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ItemTable_C::GetItemTableInvalidIndex(class UObject* __WorldContext, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ItemTable.BPF_ItemTable_C.GetItemTableInvalidIndex");

	UBPF_ItemTable_C_GetItemTableInvalidIndex_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BPF_ItemTable.BPF_ItemTable_C.GetItemTableIndexListByEffectTarget
// (NetReliable, Exec, Event, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// ES3ItemEffectTarget            ValueTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnList                     (Parm, OutParm, ZeroConstructor)

void UBPF_ItemTable_C::STATIC_GetItemTableIndexListByEffectTarget(ES3ItemEffectTarget ValueTarget, class UObject* __WorldContext, TArray<int>* ReturnList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ItemTable.BPF_ItemTable_C.GetItemTableIndexListByEffectTarget");

	UBPF_ItemTable_C_GetItemTableIndexListByEffectTarget_Params params;
	params.ValueTarget = ValueTarget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnList != nullptr)
		*ReturnList = params.ReturnList;
}


// Function BPF_ItemTable.BPF_ItemTable_C.GetItemTableLabelListByEffectTarget
// (NetRequest, Exec, Protected, NetServer, BlueprintCallable)
// Parameters:
// ES3ItemEffectTarget            ValueTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnList                     (Parm, OutParm, ZeroConstructor)

void UBPF_ItemTable_C::GetItemTableLabelListByEffectTarget(ES3ItemEffectTarget ValueTarget, class UObject* __WorldContext, TArray<struct FName>* ReturnList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ItemTable.BPF_ItemTable_C.GetItemTableLabelListByEffectTarget");

	UBPF_ItemTable_C_GetItemTableLabelListByEffectTarget_Params params;
	params.ValueTarget = ValueTarget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnList != nullptr)
		*ReturnList = params.ReturnList;
}


// Function BPF_ItemTable.BPF_ItemTable_C.ItemTableIndexToText
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Result                         (Parm, OutParm)

void UBPF_ItemTable_C::ItemTableIndexToText(int Index, class UObject* __WorldContext, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ItemTable.BPF_ItemTable_C.ItemTableIndexToText");

	UBPF_ItemTable_C_ItemTableIndexToText_Params params;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPF_ItemTable.BPF_ItemTable_C.LabelToItemTableIndex
// (Net, NetRequest, Exec, Native, MulticastDelegate, Public, Protected, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ItemTable_C::LabelToItemTableIndex(const struct FName& Label, class UObject* __WorldContext, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ItemTable.BPF_ItemTable_C.LabelToItemTableIndex");

	UBPF_ItemTable_C_LabelToItemTableIndex_Params params;
	params.Label = Label;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BPF_ItemTable.BPF_ItemTable_C.ItemTableIndexToLabel
// (Net, NetReliable, NetResponse, Private, Protected, NetServer, BlueprintCallable)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Label                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ItemTable_C::ItemTableIndexToLabel(int Index, class UObject* __WorldContext, struct FName* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ItemTable.BPF_ItemTable_C.ItemTableIndexToLabel");

	UBPF_ItemTable_C_ItemTableIndexToLabel_Params params;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
