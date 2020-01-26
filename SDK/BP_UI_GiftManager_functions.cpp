
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

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.CheckResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GiftManager_C::GiftChangePage(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.GiftChangePage");

	ABP_UI_GiftManager_C_GiftChangePage_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.MakeCanUseItemIDList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_GiftManager_C::MakeCanUseItemIDList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.MakeCanUseItemIDList");

	ABP_UI_GiftManager_C_MakeCanUseItemIDList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.InitItemDataLength
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_GiftManager_C::InitItemDataLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.InitItemDataLength");

	ABP_UI_GiftManager_C_InitItemDataLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.MakeItemIdList
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_GiftManager_C::MakeItemIdList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.MakeItemIdList");

	ABP_UI_GiftManager_C_MakeItemIdList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_GiftManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.UserConstructionScript");

	ABP_UI_GiftManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_UI_GiftManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.ReceiveBeginPlay");

	ABP_UI_GiftManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.CheckVisibleAddButton
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_GiftManager_C::CheckVisibleAddButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.CheckVisibleAddButton");

	ABP_UI_GiftManager_C_CheckVisibleAddButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.CheckVisibleSubButton
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_GiftManager_C::CheckVisibleSubButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.CheckVisibleSubButton");

	ABP_UI_GiftManager_C_CheckVisibleSubButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.PushAddSubButtonAfter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_GiftManager_C::PushAddSubButtonAfter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.PushAddSubButtonAfter");

	ABP_UI_GiftManager_C_PushAddSubButtonAfter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.PushCheckDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_UI_Button>      PushButton                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GiftManager_C::PushCheckDialog(TEnumAsByte<EN_UI_Button> PushButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.PushCheckDialog");

	ABP_UI_GiftManager_C_PushCheckDialog_Params params;
	params.PushButton = PushButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.BeforDestroy
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_GiftManager_C::BeforDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.BeforDestroy");

	ABP_UI_GiftManager_C_BeforDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.SetShopName
// (Public, BlueprintCallable, BlueprintEvent)
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
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GiftManager_C::ExecuteUbergraph_BP_UI_GiftManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.ExecuteUbergraph_BP_UI_GiftManager");

	ABP_UI_GiftManager_C_ExecuteUbergraph_BP_UI_GiftManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.INFO_SuccessItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemList                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GiftManager_C::INFO_SuccessItem__DelegateSignature(int ItemList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.INFO_SuccessItem__DelegateSignature");

	ABP_UI_GiftManager_C_INFO_SuccessItem__DelegateSignature_Params params;
	params.ItemList = ItemList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GiftManager.BP_UI_GiftManager_C.ED_UseItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_UseItemResult>  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GiftManager_C::ED_UseItem__DelegateSignature(TEnumAsByte<EN_UseItemResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GiftManager.BP_UI_GiftManager_C.ED_UseItem__DelegateSignature");

	ABP_UI_GiftManager_C_ED_UseItem__DelegateSignature_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
