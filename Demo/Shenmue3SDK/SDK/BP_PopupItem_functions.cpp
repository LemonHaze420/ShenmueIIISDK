
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

// Function BP_PopupItem.BP_PopupItem_C.IsNextStock
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   CheckId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAvailable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::IsNextStock(const struct FName& CheckId, bool* bAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.IsNextStock");

	ABP_PopupItem_C_IsNextStock_Params params;
	params.CheckId = CheckId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAvailable != nullptr)
		*bAvailable = params.bAvailable;
}


// Function BP_PopupItem.BP_PopupItem_C.GetPopupInfoByID
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PopupId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FST_PopupItemInfo       Info                           (Parm, OutParm)
// int                            ArrayIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::GetPopupInfoByID(int PopupId, bool* bSuccess, struct FST_PopupItemInfo* Info, int* ArrayIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.GetPopupInfoByID");

	ABP_PopupItem_C_GetPopupInfoByID_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (Info != nullptr)
		*Info = params.Info;
	if (ArrayIndex != nullptr)
		*ArrayIndex = params.ArrayIndex;
}


// Function BP_PopupItem.BP_PopupItem_C.CanPopupUI
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::CanPopupUI(bool* bCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.CanPopupUI");

	ABP_PopupItem_C_CanPopupUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCan != nullptr)
		*bCan = params.bCan;
}


// Function BP_PopupItem.BP_PopupItem_C.IsCheckBet
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   CheckId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAvailable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::IsCheckBet(const struct FName& CheckId, bool* bAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.IsCheckBet");

	ABP_PopupItem_C_IsCheckBet_Params params;
	params.CheckId = CheckId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAvailable != nullptr)
		*bAvailable = params.bAvailable;
}


// Function BP_PopupItem.BP_PopupItem_C.IsCheckMoney
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   CheckId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAvailable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::IsCheckMoney(const struct FName& CheckId, bool* bAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.IsCheckMoney");

	ABP_PopupItem_C_IsCheckMoney_Params params;
	params.CheckId = CheckId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAvailable != nullptr)
		*bAvailable = params.bAvailable;
}


// Function BP_PopupItem.BP_PopupItem_C.ForceHidePopup
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PopupItem_C::ForceHidePopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.ForceHidePopup");

	ABP_PopupItem_C_ForceHidePopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.ShowPopupItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WaitTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisableAutoHide               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bApplyData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PopupId                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::ShowPopupItem(const struct FName& ItemId, float WaitTime, bool bDisableAutoHide, bool bApplyData, int* PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.ShowPopupItem");

	ABP_PopupItem_C_ShowPopupItem_Params params;
	params.ItemId = ItemId;
	params.WaitTime = WaitTime;
	params.bDisableAutoHide = bDisableAutoHide;
	params.bApplyData = bApplyData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PopupId != nullptr)
		*PopupId = params.PopupId;
}


// Function BP_PopupItem.BP_PopupItem_C.HidePopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PopupId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::HidePopup(int PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.HidePopup");

	ABP_PopupItem_C_HidePopup_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.FinishUI
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PopupItem_C::FinishUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.FinishUI");

	ABP_PopupItem_C_FinishUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.StartPopup
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PopupItem_C::StartPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.StartPopup");

	ABP_PopupItem_C_StartPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.StepWaitForEndEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PopupItem_C::StepWaitForEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.StepWaitForEndEvent");

	ABP_PopupItem_C_StepWaitForEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.StepShowUI
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PopupItem_C::StepShowUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.StepShowUI");

	ABP_PopupItem_C_StepShowUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.StepWaitTimeCheck
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PopupItem_C::StepWaitTimeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.StepWaitTimeCheck");

	ABP_PopupItem_C_StepWaitTimeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.StepStackCheck
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PopupItem_C::StepStackCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.StepStackCheck");

	ABP_PopupItem_C_StepStackCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.IsCheckItemId
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   CheckId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAvailable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::IsCheckItemId(const struct FName& CheckId, bool* bAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.IsCheckItemId");

	ABP_PopupItem_C_IsCheckItemId_Params params;
	params.CheckId = CheckId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAvailable != nullptr)
		*bAvailable = params.bAvailable;
}


// Function BP_PopupItem.BP_PopupItem_C.IncrementPopupId
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PopupId                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::IncrementPopupId(int* PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.IncrementPopupId");

	ABP_PopupItem_C_IncrementPopupId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PopupId != nullptr)
		*PopupId = params.PopupId;
}


// Function BP_PopupItem.BP_PopupItem_C.ShowPopupMoney
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IncreaseOrDecreaseMoney        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WaitTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisableAutoHide               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_ValueType>      ValueType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PopupId                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::ShowPopupMoney(int IncreaseOrDecreaseMoney, float WaitTime, bool bDisableAutoHide, TEnumAsByte<EN_ValueType> ValueType, int* PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.ShowPopupMoney");

	ABP_PopupItem_C_ShowPopupMoney_Params params;
	params.IncreaseOrDecreaseMoney = IncreaseOrDecreaseMoney;
	params.WaitTime = WaitTime;
	params.bDisableAutoHide = bDisableAutoHide;
	params.ValueType = ValueType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PopupId != nullptr)
		*PopupId = params.PopupId;
}


// Function BP_PopupItem.BP_PopupItem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PopupItem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.UserConstructionScript");

	ABP_PopupItem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.SetupItemUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoClose                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bApplyData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::SetupItemUI(const struct FName& ItemId, bool bAutoClose, int Quantity, bool bApplyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.SetupItemUI");

	ABP_PopupItem_C_SetupItemUI_Params params;
	params.ItemId = ItemId;
	params.bAutoClose = bAutoClose;
	params.Quantity = Quantity;
	params.bApplyData = bApplyData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.SetupMoneyUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HaveMoney                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            IncreaseOrDecreaseMoney        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoClose                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_ValueType>      ValueType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::SetupMoneyUI(int HaveMoney, int IncreaseOrDecreaseMoney, bool bAutoClose, TEnumAsByte<EN_ValueType> ValueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.SetupMoneyUI");

	ABP_PopupItem_C_SetupMoneyUI_Params params;
	params.HaveMoney = HaveMoney;
	params.IncreaseOrDecreaseMoney = IncreaseOrDecreaseMoney;
	params.bAutoClose = bAutoClose;
	params.ValueType = ValueType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.OnClosedItemNameDisp
// (BlueprintCallable, BlueprintEvent)

void ABP_PopupItem_C::OnClosedItemNameDisp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.OnClosedItemNameDisp");

	ABP_PopupItem_C_OnClosedItemNameDisp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.OnFinishedUI
// (BlueprintCallable, BlueprintEvent)

void ABP_PopupItem_C::OnFinishedUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.OnFinishedUI");

	ABP_PopupItem_C_OnFinishedUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.ClearHandle_OnFinishedUI
// (BlueprintCallable, BlueprintEvent)

void ABP_PopupItem_C::ClearHandle_OnFinishedUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.ClearHandle_OnFinishedUI");

	ABP_PopupItem_C_ClearHandle_OnFinishedUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.Evt_StartAnmEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_PopupItem_C::Evt_StartAnmEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.Evt_StartAnmEnd");

	ABP_PopupItem_C_Evt_StartAnmEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PopupItem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.ReceiveBeginPlay");

	ABP_PopupItem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.ReceiveTick");

	ABP_PopupItem_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.ExecuteUbergraph_BP_PopupItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::ExecuteUbergraph_BP_PopupItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.ExecuteUbergraph_BP_PopupItem");

	ABP_PopupItem_C_ExecuteUbergraph_BP_PopupItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.OnFinishedPopupDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PopupId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::OnFinishedPopupDispatcher__DelegateSignature(int PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.OnFinishedPopupDispatcher__DelegateSignature");

	ABP_PopupItem_C_OnFinishedPopupDispatcher__DelegateSignature_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.OnAllFinishedPopupDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PopupItem_C::OnAllFinishedPopupDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.OnAllFinishedPopupDispatcher__DelegateSignature");

	ABP_PopupItem_C_OnAllFinishedPopupDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
