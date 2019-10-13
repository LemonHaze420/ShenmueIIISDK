
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_CheckHaveItemList
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemListID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FindResult                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_CheckHaveItemList(const struct FString& ItemListID, class UObject* __WorldContext, bool* FindResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_CheckHaveItemList");

	UBP_MainFlowSubFunction_C_MfSubFunc_CheckHaveItemList_Params params;
	params.ItemListID = ItemListID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FindResult != nullptr)
		*FindResult = params.FindResult;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.CheckHaveItemSub
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FindID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Find_Result                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ItemID_Grp                     (Parm, OutParm, ZeroConstructor)

void UBP_MainFlowSubFunction_C::STATIC_CheckHaveItemSub(const struct FString& FindID, class UObject* __WorldContext, bool* Find_Result, struct FString* ItemID_Grp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.CheckHaveItemSub");

	UBP_MainFlowSubFunction_C_CheckHaveItemSub_Params params;
	params.FindID = FindID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Find_Result != nullptr)
		*Find_Result = params.Find_Result;
	if (ItemID_Grp != nullptr)
		*ItemID_Grp = params.ItemID_Grp;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_GetWarnningDay
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MD_Warning                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_GetWarnningDay(class UObject* __WorldContext, int* MD_Warning)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_GetWarnningDay");

	UBP_MainFlowSubFunction_C_MfSubFunc_GetWarnningDay_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MD_Warning != nullptr)
		*MD_Warning = params.MD_Warning;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_GetGameOverDay
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MD_Gameover                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_GetGameOverDay(class UObject* __WorldContext, int* MD_Gameover)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_GetGameOverDay");

	UBP_MainFlowSubFunction_C_MfSubFunc_GetGameOverDay_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MD_Gameover != nullptr)
		*MD_Gameover = params.MD_Gameover;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_TriggerPlayerDistance
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATriggerBox*             CheckTrigger                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Check2D                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_TriggerPlayerDistance(class ATriggerBox* CheckTrigger, bool Check2D, class UObject* __WorldContext, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_TriggerPlayerDistance");

	UBP_MainFlowSubFunction_C_MfSubFunc_TriggerPlayerDistance_Params params;
	params.CheckTrigger = CheckTrigger;
	params.Check2D = Check2D;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_CheckHaveItem
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 item_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           have_item                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_CheckHaveItem(const struct FString& item_id, class UObject* __WorldContext, bool* have_item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_CheckHaveItem");

	UBP_MainFlowSubFunction_C_MfSubFunc_CheckHaveItem_Params params;
	params.item_id = item_id;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (have_item != nullptr)
		*have_item = params.have_item;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeItemGet
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   JumpEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CheckItemID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ControlBit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_MakeItemGet(const struct FName& JumpEventName, const struct FName& CheckItemID, int ControlBit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeItemGet");

	UBP_MainFlowSubFunction_C_MfSubFunc_MakeItemGet_Params params;
	params.JumpEventName = JumpEventName;
	params.CheckItemID = CheckItemID;
	params.ControlBit = ControlBit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_CanEvent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Can_Event                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_CanEvent(class UObject* __WorldContext, bool* Can_Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_CanEvent");

	UBP_MainFlowSubFunction_C_MfSubFunc_CanEvent_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can_Event != nullptr)
		*Can_Event = params.Can_Event;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_CheckEvent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   FindEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Find_Result                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_CheckEvent(const struct FName& FindEventName, class UObject* __WorldContext, bool* Find_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_CheckEvent");

	UBP_MainFlowSubFunction_C_MfSubFunc_CheckEvent_Params params;
	params.FindEventName = FindEventName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Find_Result != nullptr)
		*Find_Result = params.Find_Result;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_ForcedSerchEnd
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NoCheckBehavior                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Exec_Serch_End                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_ForcedSerchEnd(bool NoCheckBehavior, class UObject* __WorldContext, bool* Exec_Serch_End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_ForcedSerchEnd");

	UBP_MainFlowSubFunction_C_MfSubFunc_ForcedSerchEnd_Params params;
	params.NoCheckBehavior = NoCheckBehavior;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Exec_Serch_End != nullptr)
		*Exec_Serch_End = params.Exec_Serch_End;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_DisableReplaceCutScene
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_DisableReplaceCutScene(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_DisableReplaceCutScene");

	UBP_MainFlowSubFunction_C_MfSubFunc_DisableReplaceCutScene_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_ResultQteCutScene
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Qte_Success                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_ResultQteCutScene(class UObject* __WorldContext, bool* Qte_Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_ResultQteCutScene");

	UBP_MainFlowSubFunction_C_MfSubFunc_ResultQteCutScene_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Qte_Success != nullptr)
		*Qte_Success = params.Qte_Success;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgAttention_UnSave
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   JumpEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ControlBit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_MakeTrgAttention_UnSave(const struct FName& JumpEventName, const struct FString& EventId, int ControlBit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgAttention_UnSave");

	UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgAttention_UnSave_Params params;
	params.JumpEventName = JumpEventName;
	params.EventId = EventId;
	params.ControlBit = ControlBit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgBoxEndEvent_UnSave
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATriggerBox*             TrgBoxName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   JumpEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ControlBit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_MakeTrgBoxEndEvent_UnSave(class ATriggerBox* TrgBoxName, const struct FName& JumpEventName, int ControlBit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgBoxEndEvent_UnSave");

	UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgBoxEndEvent_UnSave_Params params;
	params.TrgBoxName = TrgBoxName;
	params.JumpEventName = JumpEventName;
	params.ControlBit = ControlBit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeNopEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   JumpEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_MakeNopEvent(const struct FName& JumpEventName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeNopEvent");

	UBP_MainFlowSubFunction_C_MfSubFunc_MakeNopEvent_Params params;
	params.JumpEventName = JumpEventName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_GetEyeCatchText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EyeCatchID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Main_Title                     (Parm, OutParm)
// struct FText                   Sub_Title                      (Parm, OutParm)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_GetEyeCatchText(const struct FName& EyeCatchID, class UObject* __WorldContext, struct FText* Main_Title, struct FText* Sub_Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_GetEyeCatchText");

	UBP_MainFlowSubFunction_C_MfSubFunc_GetEyeCatchText_Params params;
	params.EyeCatchID = EyeCatchID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Main_Title != nullptr)
		*Main_Title = params.Main_Title;
	if (Sub_Title != nullptr)
		*Sub_Title = params.Sub_Title;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_LoadCheckRewardID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           find_ok                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_LoadCheckRewardID(unsigned char ID, class UObject* __WorldContext, bool* find_ok)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_LoadCheckRewardID");

	UBP_MainFlowSubFunction_C_MfSubFunc_LoadCheckRewardID_Params params;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (find_ok != nullptr)
		*find_ok = params.find_ok;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_RemoveRewardID
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_RemoveRewardID(unsigned char ID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_RemoveRewardID");

	UBP_MainFlowSubFunction_C_MfSubFunc_RemoveRewardID_Params params;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_SaveRewardID
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_SaveRewardID(unsigned char ID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_SaveRewardID");

	UBP_MainFlowSubFunction_C_MfSubFunc_SaveRewardID_Params params;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgBoxEvent_UnSave
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATriggerBox*             TrgBoxName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   JumpEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ControlBit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_MakeTrgBoxEvent_UnSave(class ATriggerBox* TrgBoxName, const struct FName& JumpEventName, int ControlBit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgBoxEvent_UnSave");

	UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgBoxEvent_UnSave_Params params;
	params.TrgBoxName = TrgBoxName;
	params.JumpEventName = JumpEventName;
	params.ControlBit = ControlBit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeFlagChanged
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   JumpEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OnCheckFlagIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ControlBit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_MakeFlagChanged(const struct FName& JumpEventName, int OnCheckFlagIndex, int ControlBit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeFlagChanged");

	UBP_MainFlowSubFunction_C_MfSubFunc_MakeFlagChanged_Params params;
	params.JumpEventName = JumpEventName;
	params.OnCheckFlagIndex = OnCheckFlagIndex;
	params.ControlBit = ControlBit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_FindEvent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   FindEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Find_Result                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_FindEvent(const struct FName& FindEventName, class UObject* __WorldContext, bool* Find_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_FindEvent");

	UBP_MainFlowSubFunction_C_MfSubFunc_FindEvent_Params params;
	params.FindEventName = FindEventName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Find_Result != nullptr)
		*Find_Result = params.Find_Result;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeNewMessage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   JumpEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_MainFlowMsgDestinationID> Destination_ID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ControlBit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_MakeNewMessage(const struct FName& JumpEventName, TEnumAsByte<EN_MainFlowMsgDestinationID> Destination_ID, int ControlBit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeNewMessage");

	UBP_MainFlowSubFunction_C_MfSubFunc_MakeNewMessage_Params params;
	params.JumpEventName = JumpEventName;
	params.Destination_ID = Destination_ID;
	params.ControlBit = ControlBit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_CheckBeginInTrgBox
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATriggerBox*             TrgBoxName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BeginIn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_CheckBeginInTrgBox(class ATriggerBox* TrgBoxName, class UObject* __WorldContext, bool* BeginIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_CheckBeginInTrgBox");

	UBP_MainFlowSubFunction_C_MfSubFunc_CheckBeginInTrgBox_Params params;
	params.TrgBoxName = TrgBoxName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BeginIn != nullptr)
		*BeginIn = params.BeginIn;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_RequestCutScene
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutScene_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_RequestCutScene(const struct FName& CutScene_Name, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_RequestCutScene");

	UBP_MainFlowSubFunction_C_MfSubFunc_RequestCutScene_Params params;
	params.CutScene_Name = CutScene_Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_StartCutScene
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseFade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartEventName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   EndEventName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Entry_Result                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_StartCutScene(const struct FName& CutsceneName, bool UseFade, const struct FName& StartEventName, const struct FName& EndEventName, class UObject* __WorldContext, bool* Entry_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_StartCutScene");

	UBP_MainFlowSubFunction_C_MfSubFunc_StartCutScene_Params params;
	params.CutsceneName = CutsceneName;
	params.UseFade = UseFade;
	params.StartEventName = StartEventName;
	params.EndEventName = EndEventName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Entry_Result != nullptr)
		*Entry_Result = params.Entry_Result;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_BitCheck
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CurFlag                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaskFlag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bit                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_BitCheck(int CurFlag, int MaskFlag, class UObject* __WorldContext, bool* bit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_BitCheck");

	UBP_MainFlowSubFunction_C_MfSubFunc_BitCheck_Params params;
	params.CurFlag = CurFlag;
	params.MaskFlag = MaskFlag;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bit != nullptr)
		*bit = params.bit;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeElapsedTime
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   JumpEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HourLater                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ControlBit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_MakeElapsedTime(const struct FName& JumpEventName, float HourLater, int ControlBit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeElapsedTime");

	UBP_MainFlowSubFunction_C_MfSubFunc_MakeElapsedTime_Params params;
	params.JumpEventName = JumpEventName;
	params.HourLater = HourLater;
	params.ControlBit = ControlBit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgMemoFinish
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   JumpEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ControlBit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_MakeTrgMemoFinish(const struct FName& JumpEventName, int ControlBit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgMemoFinish");

	UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgMemoFinish_Params params;
	params.JumpEventName = JumpEventName;
	params.ControlBit = ControlBit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgAttention
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   JumpEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ControlBit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_MakeTrgAttention(const struct FName& JumpEventName, const struct FString& EventId, int ControlBit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgAttention");

	UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgAttention_Params params;
	params.JumpEventName = JumpEventName;
	params.EventId = EventId;
	params.ControlBit = ControlBit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgSphereEndEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATriggerSphere*          TrgSphereName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   JumpEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ControlBit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_MakeTrgSphereEndEvent(class ATriggerSphere* TrgSphereName, const struct FName& JumpEventName, int ControlBit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgSphereEndEvent");

	UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgSphereEndEvent_Params params;
	params.TrgSphereName = TrgSphereName;
	params.JumpEventName = JumpEventName;
	params.ControlBit = ControlBit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgBoxEndEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATriggerBox*             TrgBoxName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   JumpEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ControlBit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_MakeTrgBoxEndEvent(class ATriggerBox* TrgBoxName, const struct FName& JumpEventName, int ControlBit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgBoxEndEvent");

	UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgBoxEndEvent_Params params;
	params.TrgBoxName = TrgBoxName;
	params.JumpEventName = JumpEventName;
	params.ControlBit = ControlBit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgDoorEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   JumpEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DoorName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ControlBit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_MakeTrgDoorEvent(const struct FName& JumpEventName, const struct FString& DoorName, int ControlBit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgDoorEvent");

	UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgDoorEvent_Params params;
	params.JumpEventName = JumpEventName;
	params.DoorName = DoorName;
	params.ControlBit = ControlBit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_ExecUnbind
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   JumpEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Forced_Unbind                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ResultUnbind                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_ExecUnbind(const struct FName& JumpEventName, bool Forced_Unbind, class UObject* __WorldContext, bool* ResultUnbind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_ExecUnbind");

	UBP_MainFlowSubFunction_C_MfSubFunc_ExecUnbind_Params params;
	params.JumpEventName = JumpEventName;
	params.Forced_Unbind = Forced_Unbind;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultUnbind != nullptr)
		*ResultUnbind = params.ResultUnbind;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgSphereEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATriggerSphere*          TrgSphereName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   JumpEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ControlBit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_MakeTrgSphereEvent(class ATriggerSphere* TrgSphereName, const struct FName& JumpEventName, int ControlBit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgSphereEvent");

	UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgSphereEvent_Params params;
	params.TrgSphereName = TrgSphereName;
	params.JumpEventName = JumpEventName;
	params.ControlBit = ControlBit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgBoxEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATriggerBox*             TrgBoxName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   JumpEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ControlBit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_MakeTrgBoxEvent(class ATriggerBox* TrgBoxName, const struct FName& JumpEventName, int ControlBit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgBoxEvent");

	UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgBoxEvent_Params params;
	params.TrgBoxName = TrgBoxName;
	params.JumpEventName = JumpEventName;
	params.ControlBit = ControlBit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MemoSet
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MemoId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FlagValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_MemoSet(int MemoId, bool FlagValue, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MemoSet");

	UBP_MainFlowSubFunction_C_MfSubFunc_MemoSet_Params params;
	params.MemoId = MemoId;
	params.FlagValue = FlagValue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MemoGroupSet
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MemoID_Group                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           FlagValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowSubFunction_C::STATIC_MfSubFunc_MemoGroupSet(const struct FString& MemoID_Group, bool FlagValue, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MemoGroupSet");

	UBP_MainFlowSubFunction_C_MfSubFunc_MemoGroupSet_Params params;
	params.MemoID_Group = MemoID_Group;
	params.FlagValue = FlagValue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
