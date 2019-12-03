
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

// Function BP_PopupItem.BP_PopupItem_C.IsNextStock
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   CheckId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAvailable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::IsNextStock(const struct FName& CheckId, bool* bAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.IsNextStock");

	ABP_PopupItem_C_IsNextStock_Params params;
	params.CheckId = CheckId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAvailable != nullptr)
		*bAvailable = params.bAvailable;
}


// Function BP_PopupItem.BP_PopupItem_C.GetPopupInfoByID
// (Exec, Event, NetResponse, Static, Public, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PopupId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FST_PopupItemInfo       Info                           (Parm, OutParm)
// int                            ArrayIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::STATIC_GetPopupInfoByID(int PopupId, bool* bSuccess, struct FST_PopupItemInfo* Info, int* ArrayIndex)
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
// (Exec, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Native, NetMulticast, Public, Delegate, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// struct FName                   CheckId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAvailable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::IsCheckBet(const struct FName& CheckId, bool* bAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.IsCheckBet");

	ABP_PopupItem_C_IsCheckBet_Params params;
	params.CheckId = CheckId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAvailable != nullptr)
		*bAvailable = params.bAvailable;
}


// Function BP_PopupItem.BP_PopupItem_C.IsCheckMoney
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Delegate, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// struct FName                   CheckId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAvailable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::STATIC_IsCheckMoney(const struct FName& CheckId, bool* bAvailable)
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
// (Net, NetReliable, Exec, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_PopupItem_C::ForceHidePopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.ForceHidePopup");

	ABP_PopupItem_C_ForceHidePopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.ShowPopupItem
// (Native, Static, NetMulticast, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WaitTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisableAutoHide               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bApplyData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PopupId                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::STATIC_ShowPopupItem(const struct FName& ItemId, float WaitTime, bool bDisableAutoHide, bool bApplyData, int* PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.ShowPopupItem");

	ABP_PopupItem_C_ShowPopupItem_Params params;
	params.ItemId = ItemId;
	params.WaitTime = WaitTime;
	params.bDisableAutoHide = bDisableAutoHide;
	params.bApplyData = bApplyData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PopupId != nullptr)
		*PopupId = params.PopupId;
}


// Function BP_PopupItem.BP_PopupItem_C.HidePopup
// (Net, Native, Event, Static, NetMulticast, Public, Delegate, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// int                            PopupId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::STATIC_HidePopup(int PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.HidePopup");

	ABP_PopupItem_C_HidePopup_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.FinishUI
// (Net, NetRequest, Exec, Native, MulticastDelegate, Public, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_PopupItem_C::FinishUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.FinishUI");

	ABP_PopupItem_C_FinishUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.StartPopup
// (Exec, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_PopupItem_C::STATIC_StartPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.StartPopup");

	ABP_PopupItem_C_StartPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.StepWaitForEndEvent
// (Net, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_PopupItem_C::STATIC_StepWaitForEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.StepWaitForEndEvent");

	ABP_PopupItem_C_StepWaitForEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.StepShowUI
// (Net, Static, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void ABP_PopupItem_C::STATIC_StepShowUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.StepShowUI");

	ABP_PopupItem_C_StepShowUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.StepWaitTimeCheck
// (NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_PopupItem_C::STATIC_StepWaitTimeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.StepWaitTimeCheck");

	ABP_PopupItem_C_StepWaitTimeCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.StepStackCheck
// (Net, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_PopupItem_C::StepStackCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.StepStackCheck");

	ABP_PopupItem_C_StepStackCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.IsCheckItemId
// (NetReliable, Exec, NetResponse, Static, NetMulticast, Public, Delegate, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// struct FName                   CheckId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAvailable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::STATIC_IsCheckItemId(const struct FName& CheckId, bool* bAvailable)
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
// (Net, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            PopupId                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::IncrementPopupId(int* PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.IncrementPopupId");

	ABP_PopupItem_C_IncrementPopupId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PopupId != nullptr)
		*PopupId = params.PopupId;
}


// Function BP_PopupItem.BP_PopupItem_C.ShowPopupMoney
// (Net, NetReliable, NetRequest, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
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
// (Net, Exec, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_PopupItem_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.UserConstructionScript");

	ABP_PopupItem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.SetupItemUI
// (Net, NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (Net, NetReliable, Exec, Native, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_PopupItem_C::STATIC_OnClosedItemNameDisp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.OnClosedItemNameDisp");

	ABP_PopupItem_C_OnClosedItemNameDisp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.OnFinishedUI
// (NetReliable, Exec, Native, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_PopupItem_C::STATIC_OnFinishedUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.OnFinishedUI");

	ABP_PopupItem_C_OnFinishedUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.ClearHandle_OnFinishedUI
// (NetReliable, Exec, Native, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_PopupItem_C::STATIC_ClearHandle_OnFinishedUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.ClearHandle_OnFinishedUI");

	ABP_PopupItem_C_ClearHandle_OnFinishedUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.Evt_StartAnmEnd
// (Net, Exec, Native, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_PopupItem_C::STATIC_Evt_StartAnmEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.Evt_StartAnmEnd");

	ABP_PopupItem_C_Evt_StartAnmEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.ReceiveBeginPlay
// (Net, Exec, Native, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_PopupItem_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.ReceiveBeginPlay");

	ABP_PopupItem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.ReceiveTick
// (Net, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.ReceiveTick");

	ABP_PopupItem_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.ExecuteUbergraph_BP_PopupItem
// (Net, Static, MulticastDelegate, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::STATIC_ExecuteUbergraph_BP_PopupItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.ExecuteUbergraph_BP_PopupItem");

	ABP_PopupItem_C_ExecuteUbergraph_BP_PopupItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.OnFinishedPopupDispatcher__DelegateSignature
// (Net, Exec, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            PopupId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PopupItem_C::STATIC_OnFinishedPopupDispatcher__DelegateSignature(int PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopupItem.BP_PopupItem_C.OnFinishedPopupDispatcher__DelegateSignature");

	ABP_PopupItem_C_OnFinishedPopupDispatcher__DelegateSignature_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PopupItem.BP_PopupItem_C.OnAllFinishedPopupDispatcher__DelegateSignature
// (Net, Exec, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_PopupItem_C::STATIC_OnAllFinishedPopupDispatcher__DelegateSignature()
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
