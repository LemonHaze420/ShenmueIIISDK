
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

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.GetSelectSellItem
// (NetReliable, NetResponse, Static, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PageIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_SelectSellItem      SelectSellItem                 (Parm, OutParm)

void UBPW_UI_ItemIcon_C::STATIC_GetSelectSellItem(int PageIndex, struct FST_SelectSellItem* SelectSellItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.GetSelectSellItem");

	UBPW_UI_ItemIcon_C_GetSelectSellItem_Params params;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectSellItem != nullptr)
		*SelectSellItem = params.SelectSellItem;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.ResetSelectSellItem
// (Net, Exec, Static, NetMulticast, Public, Delegate, NetServer, HasDefaults, BlueprintEvent, BlueprintPure, Const)

void UBPW_UI_ItemIcon_C::STATIC_ResetSelectSellItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.ResetSelectSellItem");

	UBPW_UI_ItemIcon_C_ResetSelectSellItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.CalcHaveItemNum
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            PageIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HaveItemNum                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::STATIC_CalcHaveItemNum(int PageIndex, int* HaveItemNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.CalcHaveItemNum");

	UBPW_UI_ItemIcon_C_CalcHaveItemNum_Params params;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HaveItemNum != nullptr)
		*HaveItemNum = params.HaveItemNum;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetSelectSellItem
// (Net, NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FST_SelectSellItem      SelectSellItemID               (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_UI_ItemIcon_C::STATIC_SetSelectSellItem(const struct FST_SelectSellItem& SelectSellItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetSelectSellItem");

	UBPW_UI_ItemIcon_C_SetSelectSellItem_Params params;
	params.SelectSellItemID = SelectSellItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetSkillImage
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Private, Protected, Delegate, DLLImport, BlueprintEvent, BlueprintPure)

void UBPW_UI_ItemIcon_C::STATIC_SetSkillImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetSkillImage");

	UBPW_UI_ItemIcon_C_SetSkillImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetImageBrightness
// (NetReliable, Event, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsBright                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::SetImageBrightness(bool IsBright)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetImageBrightness");

	UBPW_UI_ItemIcon_C_SetImageBrightness_Params params;
	params.IsBright = IsBright;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetFrameType
// (Net, NetRequest, Native, Event, Static, NetMulticast, Public, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_IconFramePos>   newParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::STATIC_SetFrameType(TEnumAsByte<EN_IconFramePos> newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetFrameType");

	UBPW_UI_ItemIcon_C_SetFrameType_Params params;
	params.newParam = newParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.ItemImageLight
// (Net, NetRequest, Event, Static, Public, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsLight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::STATIC_ItemImageLight(bool IsLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.ItemImageLight");

	UBPW_UI_ItemIcon_C_ItemImageLight_Params params;
	params.IsLight = IsLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.GetItemNum
// (NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ItemNum                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::STATIC_GetItemNum(int* ItemNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.GetItemNum");

	UBPW_UI_ItemIcon_C_GetItemNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemNum != nullptr)
		*ItemNum = params.ItemNum;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetNum
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Public, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PageNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::SetNum(int Num, int PageNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetNum");

	UBPW_UI_ItemIcon_C_SetNum_Params params;
	params.Num = Num;
	params.PageNum = PageNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.GetItemID
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ItemId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::STATIC_GetItemID(int* ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.GetItemID");

	UBPW_UI_ItemIcon_C_GetItemID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemId != nullptr)
		*ItemId = params.ItemId;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.IconVisibility
// (Net, NetReliable, NetRequest, Exec, Native, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::STATIC_IconVisibility(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.IconVisibility");

	UBPW_UI_ItemIcon_C_IconVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.PropotionIconSize
// (Net, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ItemIconSize                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::PropotionIconSize(float ItemIconSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.PropotionIconSize");

	UBPW_UI_ItemIcon_C_PropotionIconSize_Params params;
	params.ItemIconSize = ItemIconSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.FocusIcon
// (NetMulticast, Protected, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// bool                           IsSelect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::FocusIcon(bool IsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.FocusIcon");

	UBPW_UI_ItemIcon_C_FocusIcon_Params params;
	params.IsSelect = IsSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetIcon
// (NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::SetIcon(int ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetIcon");

	UBPW_UI_ItemIcon_C_SetIcon_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.ProportionFontSize
// (NetResponse, Private, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ItemIconSize                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::ProportionFontSize(float ItemIconSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.ProportionFontSize");

	UBPW_UI_ItemIcon_C_ProportionFontSize_Params params;
	params.ItemIconSize = ItemIconSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.Construct
// (Exec, NetResponse, Static, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPW_UI_ItemIcon_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.Construct");

	UBPW_UI_ItemIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.PreConstruct
// (NetReliable, NetRequest, Exec, Native, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.PreConstruct");

	UBPW_UI_ItemIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.ExecuteUbergraph_BPW_UI_ItemIcon
// (Net, NetReliable, Exec, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::ExecuteUbergraph_BPW_UI_ItemIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.ExecuteUbergraph_BPW_UI_ItemIcon");

	UBPW_UI_ItemIcon_C_ExecuteUbergraph_BPW_UI_ItemIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
