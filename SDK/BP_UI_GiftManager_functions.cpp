
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

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.CheckResult
// (Exec, Event, NetResponse, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_UseItemResult>  Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ConsumeFlag                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GiftManager_C::CheckResult(TEnumAsByte<EN_UseItemResult>* Result, bool* ConsumeFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.CheckResult");

	ABP_UI_GiftManager_C_CheckResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (ConsumeFlag != nullptr)
		*ConsumeFlag = params.ConsumeFlag;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.GiftChangePage
// (Exec, Event, Static, NetMulticast, Public, Private, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GiftManager_C::STATIC_GiftChangePage(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.GiftChangePage");

	ABP_UI_GiftManager_C_GiftChangePage_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.MakeCanUseItemIDList
// (NetReliable, NetRequest, Event, NetResponse, Static, Public, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_UI_GiftManager_C::STATIC_MakeCanUseItemIDList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.MakeCanUseItemIDList");

	ABP_UI_GiftManager_C_MakeCanUseItemIDList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.InitItemDataLength
// (NetReliable, Exec, Native, Event, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_UI_GiftManager_C::STATIC_InitItemDataLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.InitItemDataLength");

	ABP_UI_GiftManager_C_InitItemDataLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.MakeItemIdList
// (Net, NetReliable, Exec, Native, Static, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_UI_GiftManager_C::STATIC_MakeItemIdList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.MakeItemIdList");

	ABP_UI_GiftManager_C_MakeItemIdList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.UserConstructionScript
// (Net, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_UI_GiftManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.UserConstructionScript");

	ABP_UI_GiftManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, Public, Protected, NetServer)

void ABP_UI_GiftManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.ReceiveBeginPlay");

	ABP_UI_GiftManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.CheckVisibleAddButton
// (Net, NetRequest, Event, NetResponse, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_UI_GiftManager_C::CheckVisibleAddButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.CheckVisibleAddButton");

	ABP_UI_GiftManager_C_CheckVisibleAddButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.CheckVisibleSubButton
// (NetRequest, Event, NetResponse, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_UI_GiftManager_C::CheckVisibleSubButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.CheckVisibleSubButton");

	ABP_UI_GiftManager_C_CheckVisibleSubButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.PushAddSubButtonAfter
// (NetRequest, Event, NetResponse, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_UI_GiftManager_C::PushAddSubButtonAfter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.PushAddSubButtonAfter");

	ABP_UI_GiftManager_C_PushAddSubButtonAfter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.PushCheckDialog
// (Net, Static, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_UI_Button>      PushButton                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GiftManager_C::STATIC_PushCheckDialog(TEnumAsByte<EN_UI_Button> PushButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.PushCheckDialog");

	ABP_UI_GiftManager_C_PushCheckDialog_Params params;
	params.PushButton = PushButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.BeforDestroy
// (Net, NetReliable, Event, NetResponse, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_UI_GiftManager_C::BeforDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.BeforDestroy");

	ABP_UI_GiftManager_C_BeforDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.SetShopName
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ShopID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GiftManager_C::SetShopName(int ShopID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.SetShopName");

	ABP_UI_GiftManager_C_SetShopName_Params params;
	params.ShopID = ShopID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.ExecuteUbergraph_BP_UI_GiftManager
// (Net, NetResponse, Static, Public, Private, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GiftManager_C::STATIC_ExecuteUbergraph_BP_UI_GiftManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.ExecuteUbergraph_BP_UI_GiftManager");

	ABP_UI_GiftManager_C_ExecuteUbergraph_BP_UI_GiftManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.INFO_SuccessItem__DelegateSignature
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            itemList                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GiftManager_C::STATIC_INFO_SuccessItem__DelegateSignature(int itemList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.INFO_SuccessItem__DelegateSignature");

	ABP_UI_GiftManager_C_INFO_SuccessItem__DelegateSignature_Params params;
	params.itemList = itemList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.ED_UseItem__DelegateSignature
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_UseItemResult>  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GiftManager_C::STATIC_ED_UseItem__DelegateSignature(TEnumAsByte<EN_UseItemResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.ED_UseItem__DelegateSignature");

	ABP_UI_GiftManager_C_ED_UseItem__DelegateSignature_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
