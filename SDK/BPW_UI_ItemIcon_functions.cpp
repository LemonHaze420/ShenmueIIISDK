
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

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.GetItemNumSafe
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FST_SelectSellItem      ST_SelectSellItem              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            ItemToFind                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBPW_UI_ItemIcon_C::GetItemNumSafe(const struct FST_SelectSellItem& ST_SelectSellItem, int ItemToFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.GetItemNumSafe");

	UBPW_UI_ItemIcon_C_GetItemNumSafe_Params params;
	params.ST_SelectSellItem = ST_SelectSellItem;
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.GetSelectSellItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            PageIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_SelectSellItem      SelectSellItem                 (Parm, OutParm)

void UBPW_UI_ItemIcon_C::GetSelectSellItem(int PageIndex, struct FST_SelectSellItem* SelectSellItem)
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
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_ItemIcon_C::ResetSelectSellItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.ResetSelectSellItem");

	UBPW_UI_ItemIcon_C_ResetSelectSellItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.CalcHaveItemNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PageIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HaveItemNum                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::CalcHaveItemNum(int PageIndex, int* HaveItemNum)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SelectSellItem      SelectSellItemID               (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_UI_ItemIcon_C::SetSelectSellItem(const struct FST_SelectSellItem& SelectSellItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetSelectSellItem");

	UBPW_UI_ItemIcon_C_SetSelectSellItem_Params params;
	params.SelectSellItemID = SelectSellItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetSkillImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_ItemIcon_C::SetSkillImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetSkillImage");

	UBPW_UI_ItemIcon_C_SetSkillImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetImageBrightness
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_IconFramePos>   newParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::SetFrameType(TEnumAsByte<EN_IconFramePos> newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetFrameType");

	UBPW_UI_ItemIcon_C_SetFrameType_Params params;
	params.newParam = newParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.ItemImageLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::ItemImageLight(bool IsLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.ItemImageLight");

	UBPW_UI_ItemIcon_C_ItemImageLight_Params params;
	params.IsLight = IsLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.GetItemNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ItemNum                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::GetItemNum(int* ItemNum)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.GetItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ItemId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::GetItemID(int* ItemId)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::IconVisibility(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.IconVisibility");

	UBPW_UI_ItemIcon_C_IconVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.PropotionIconSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_UI_ItemIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.Construct");

	UBPW_UI_ItemIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.PreConstruct");

	UBPW_UI_ItemIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.ExecuteUbergraph_BPW_UI_ItemIcon
// ()
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
