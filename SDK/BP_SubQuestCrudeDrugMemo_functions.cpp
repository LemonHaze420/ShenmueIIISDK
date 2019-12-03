
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

// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.CheckItemGetNum
// (Net, NetResponse, Static, NetMulticast, Public, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FString                 ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           PlayAc                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestCrudeDrugMemo_C::STATIC_CheckItemGetNum(const struct FString& ItemId, bool* PlayAc)
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
// (NetReliable, Native, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// bool                           enable_play                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestCrudeDrugMemo_C::STATIC_CheckPlayAc(bool* enable_play)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.CheckPlayAc");

	ABP_SubQuestCrudeDrugMemo_C_CheckPlayAc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (enable_play != nullptr)
		*enable_play = params.enable_play;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.CheckAllGetItem
// (Exec, Event, NetResponse, MulticastDelegate, Protected, DLLImport, BlueprintEvent, BlueprintPure)
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
// (NetRequest, Native, Public, NetServer, BlueprintPure, NetValidate)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestCrudeDrugMemo_C::GetItemNum(int ID, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.GetItemNum");

	ABP_SubQuestCrudeDrugMemo_C_GetItemNum_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.SetCrudeDrugGlobalFlag
// (NetReliable, NetRequest, Exec, Native, Static, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// int                            FlagID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FlagValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           set_is_done                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestCrudeDrugMemo_C::STATIC_SetCrudeDrugGlobalFlag(int FlagID, int FlagValue, bool* set_is_done)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.SetCrudeDrugGlobalFlag");

	ABP_SubQuestCrudeDrugMemo_C_SetCrudeDrugGlobalFlag_Params params;
	params.FlagID = FlagID;
	params.FlagValue = FlagValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (set_is_done != nullptr)
		*set_is_done = params.set_is_done;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.isEnableEvent
// (Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestCrudeDrugMemo_C::STATIC_isEnableEvent(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.isEnableEvent");

	ABP_SubQuestCrudeDrugMemo_C_isEnableEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.UserConstructionScript
// (Net, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, NetValidate)

void ABP_SubQuestCrudeDrugMemo_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.UserConstructionScript");

	ABP_SubQuestCrudeDrugMemo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, NetValidate)

void ABP_SubQuestCrudeDrugMemo_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.ReceiveBeginPlay");

	ABP_SubQuestCrudeDrugMemo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.StartEvent
// (Net, NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestCrudeDrugMemo_C::STATIC_StartEvent(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.StartEvent");

	ABP_SubQuestCrudeDrugMemo_C_StartEvent_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.LoadStartIn
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, NetValidate)

void ABP_SubQuestCrudeDrugMemo_C::STATIC_LoadStartIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.LoadStartIn");

	ABP_SubQuestCrudeDrugMemo_C_LoadStartIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.ItemChange
// (Net, NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestCrudeDrugMemo_C::STATIC_ItemChange(const struct FName& ItemId, int NewNum, int OldItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.ItemChange");

	ABP_SubQuestCrudeDrugMemo_C_ItemChange_Params params;
	params.ItemId = ItemId;
	params.NewNum = NewNum;
	params.OldItem = OldItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.ExecuteUbergraph_BP_SubQuestCrudeDrugMemo
// (NetReliable, Exec, Native, Static, NetMulticast, MulticastDelegate, Delegate, HasDefaults, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestCrudeDrugMemo_C::STATIC_ExecuteUbergraph_BP_SubQuestCrudeDrugMemo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.ExecuteUbergraph_BP_SubQuestCrudeDrugMemo");

	ABP_SubQuestCrudeDrugMemo_C_ExecuteUbergraph_BP_SubQuestCrudeDrugMemo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
