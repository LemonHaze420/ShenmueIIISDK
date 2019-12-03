
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

// Function wgt_FishingRodList.wgt_FishingRodList_C.DestroyCaptureItem
// (Static, NetMulticast, Delegate, NetServer)

void Uwgt_FishingRodList_C::STATIC_DestroyCaptureItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_FishingRodList.wgt_FishingRodList_C.DestroyCaptureItem");

	Uwgt_FishingRodList_C_DestroyCaptureItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_FishingRodList.wgt_FishingRodList_C.SetItemCapture
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 RodId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LureID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uwgt_FishingRodList_C::STATIC_SetItemCapture(const struct FString& RodId, const struct FString& LureID)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_FishingRodList.wgt_FishingRodList_C.SetItemCapture");

	Uwgt_FishingRodList_C_SetItemCapture_Params params;
	params.RodId = RodId;
	params.LureID = LureID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_FishingRodList.wgt_FishingRodList_C.SetPayButtonVisible
// (Event, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_FishingRodList_C::SetPayButtonVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_FishingRodList.wgt_FishingRodList_C.SetPayButtonVisible");

	Uwgt_FishingRodList_C_SetPayButtonVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_FishingRodList.wgt_FishingRodList_C.PagePrev
// (NetRequest, Native, NetResponse, NetMulticast, Delegate, NetServer)

void Uwgt_FishingRodList_C::PagePrev()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_FishingRodList.wgt_FishingRodList_C.PagePrev");

	Uwgt_FishingRodList_C_PagePrev_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_FishingRodList.wgt_FishingRodList_C.PageNext
// (Net, NetReliable, Native, NetResponse, NetMulticast, Delegate, NetServer)

void Uwgt_FishingRodList_C::PageNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_FishingRodList.wgt_FishingRodList_C.PageNext");

	Uwgt_FishingRodList_C_PageNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_FishingRodList.wgt_FishingRodList_C.ResetDialog
// (Net, NetReliable, NetRequest, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_FishingRodList_C::STATIC_ResetDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_FishingRodList.wgt_FishingRodList_C.ResetDialog");

	Uwgt_FishingRodList_C_ResetDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_FishingRodList.wgt_FishingRodList_C.PushDialogLeft
// (Net, NetReliable, NetRequest, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_FishingRodList_C::STATIC_PushDialogLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_FishingRodList.wgt_FishingRodList_C.PushDialogLeft");

	Uwgt_FishingRodList_C_PushDialogLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_FishingRodList.wgt_FishingRodList_C.PushDialogRight
// (NetReliable, NetRequest, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_FishingRodList_C::STATIC_PushDialogRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_FishingRodList.wgt_FishingRodList_C.PushDialogRight");

	Uwgt_FishingRodList_C_PushDialogRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_FishingRodList.wgt_FishingRodList_C.Construct
// (Net, NetRequest, Exec, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void Uwgt_FishingRodList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_FishingRodList.wgt_FishingRodList_C.Construct");

	Uwgt_FishingRodList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_FishingRodList.wgt_FishingRodList_C.Tick
// (NetReliable, Native, Event, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_FishingRodList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_FishingRodList.wgt_FishingRodList_C.Tick");

	Uwgt_FishingRodList_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_FishingRodList.wgt_FishingRodList_C.FinishMeshLoad
// (Net, NetReliable, Event, NetMulticast, Public, Delegate, NetServer)

void Uwgt_FishingRodList_C::FinishMeshLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_FishingRodList.wgt_FishingRodList_C.FinishMeshLoad");

	Uwgt_FishingRodList_C_FinishMeshLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_FishingRodList.wgt_FishingRodList_C.ExecuteUbergraph_wgt_FishingRodList
// (NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_FishingRodList_C::STATIC_ExecuteUbergraph_wgt_FishingRodList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_FishingRodList.wgt_FishingRodList_C.ExecuteUbergraph_wgt_FishingRodList");

	Uwgt_FishingRodList_C_ExecuteUbergraph_wgt_FishingRodList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
