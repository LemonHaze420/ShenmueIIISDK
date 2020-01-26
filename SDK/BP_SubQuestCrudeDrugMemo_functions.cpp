
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.TryGetItemData
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InName                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// struct FST_SUBQCrudeDrugMemo   OutData                        (Parm, OutParm)

bool ABP_SubQuestCrudeDrugMemo_C::TryGetItemData(const struct FName& InName, struct FST_SUBQCrudeDrugMemo* OutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.TryGetItemData");

	ABP_SubQuestCrudeDrugMemo_C_TryGetItemData_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;

	return params.ReturnValue;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.CheckItemGetNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           PlayAc                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestCrudeDrugMemo_C::CheckItemGetNum(const struct FString& ItemId, bool* PlayAc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.CheckItemGetNum");

	ABP_SubQuestCrudeDrugMemo_C_CheckItemGetNum_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayAc != nullptr)
		*PlayAc = params.PlayAc;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.CheckPlayAc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           enable_play                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestCrudeDrugMemo_C::CheckPlayAc(bool* enable_play)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.CheckPlayAc");

	ABP_SubQuestCrudeDrugMemo_C_CheckPlayAc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (enable_play != nullptr)
		*enable_play = params.enable_play;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.CheckAllGetItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllGet                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestCrudeDrugMemo_C::CheckAllGetItem(bool* AllGet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.CheckAllGetItem");

	ABP_SubQuestCrudeDrugMemo_C_CheckAllGetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllGet != nullptr)
		*AllGet = params.AllGet;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.GetItemNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestCrudeDrugMemo_C::GetItemNum(int ID, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.GetItemNum");

	ABP_SubQuestCrudeDrugMemo_C_GetItemNum_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.SetCrudeDrugGlobalFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FlagID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FlagValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           set_is_done                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestCrudeDrugMemo_C::SetCrudeDrugGlobalFlag(int FlagID, int FlagValue, bool* set_is_done)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.SetCrudeDrugGlobalFlag");

	ABP_SubQuestCrudeDrugMemo_C_SetCrudeDrugGlobalFlag_Params params;
	params.FlagID = FlagID;
	params.FlagValue = FlagValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (set_is_done != nullptr)
		*set_is_done = params.set_is_done;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.isEnableEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestCrudeDrugMemo_C::isEnableEvent(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.isEnableEvent");

	ABP_SubQuestCrudeDrugMemo_C_isEnableEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SubQuestCrudeDrugMemo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.UserConstructionScript");

	ABP_SubQuestCrudeDrugMemo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SubQuestCrudeDrugMemo_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.ReceiveBeginPlay");

	ABP_SubQuestCrudeDrugMemo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.StartEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestCrudeDrugMemo_C::StartEvent(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.StartEvent");

	ABP_SubQuestCrudeDrugMemo_C_StartEvent_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.LoadStartIn
// (BlueprintCallable, BlueprintEvent)

void ABP_SubQuestCrudeDrugMemo_C::LoadStartIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.LoadStartIn");

	ABP_SubQuestCrudeDrugMemo_C_LoadStartIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.ItemChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestCrudeDrugMemo_C::ItemChange(const struct FName& ItemId, int NewNum, int OldItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.ItemChange");

	ABP_SubQuestCrudeDrugMemo_C_ItemChange_Params params;
	params.ItemId = ItemId;
	params.NewNum = NewNum;
	params.OldItem = OldItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.ExecuteUbergraph_BP_SubQuestCrudeDrugMemo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestCrudeDrugMemo_C::ExecuteUbergraph_BP_SubQuestCrudeDrugMemo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.ExecuteUbergraph_BP_SubQuestCrudeDrugMemo");

	ABP_SubQuestCrudeDrugMemo_C_ExecuteUbergraph_BP_SubQuestCrudeDrugMemo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
