
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

// Function BPC_Gift.BPC_Gift_C.ClearCacheMiniGameContainer
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_Gift_C::ClearCacheMiniGameContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Gift.BPC_Gift_C.ClearCacheMiniGameContainer");

	UBPC_Gift_C_ClearCacheMiniGameContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Gift.BPC_Gift_C.ShowPopup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_Gift_C::ShowPopup(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Gift.BPC_Gift_C.ShowPopup");

	UBPC_Gift_C_ShowPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BPC_Gift.BPC_Gift_C.IsItemGift
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS3GameGift             CheckGIft                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bItem                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_Gift_C::IsItemGift(struct FS3GameGift* CheckGIft, bool* bItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Gift.BPC_Gift_C.IsItemGift");

	UBPC_Gift_C_IsItemGift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheckGIft != nullptr)
		*CheckGIft = params.CheckGIft;
	if (bItem != nullptr)
		*bItem = params.bItem;
}


// Function BPC_Gift.BPC_Gift_C.IsBetGift
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS3GameGift             CheckGIft                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bBet                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_Gift_C::IsBetGift(struct FS3GameGift* CheckGIft, bool* bBet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Gift.BPC_Gift_C.IsBetGift");

	UBPC_Gift_C_IsBetGift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheckGIft != nullptr)
		*CheckGIft = params.CheckGIft;
	if (bBet != nullptr)
		*bBet = params.bBet;
}


// Function BPC_Gift.BPC_Gift_C.GetValueType
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_ValueType>      ValueType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_Gift_C::GetValueType(TEnumAsByte<EN_ValueType>* ValueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Gift.BPC_Gift_C.GetValueType");

	UBPC_Gift_C_GetValueType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValueType != nullptr)
		*ValueType = params.ValueType;
}


// Function BPC_Gift.BPC_Gift_C.IsMoneyGift
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS3GameGift             CheckGIft                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bMoney                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_Gift_C::IsMoneyGift(struct FS3GameGift* CheckGIft, bool* bMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Gift.BPC_Gift_C.IsMoneyGift");

	UBPC_Gift_C_IsMoneyGift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheckGIft != nullptr)
		*CheckGIft = params.CheckGIft;
	if (bMoney != nullptr)
		*bMoney = params.bMoney;
}


// Function BPC_Gift.BPC_Gift_C.PushGiftCustomizeMoney
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Gift_C::PushGiftCustomizeMoney(int Money)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Gift.BPC_Gift_C.PushGiftCustomizeMoney");

	UBPC_Gift_C_PushGiftCustomizeMoney_Params params;
	params.Money = Money;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Gift.BPC_Gift_C.GetGiftData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   GiftId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS3GiftDataTable        GiftData                       (Parm, OutParm)

void UBPC_Gift_C::GetGiftData(bool* bSuccess, struct FName* GiftId, struct FS3GiftDataTable* GiftData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Gift.BPC_Gift_C.GetGiftData");

	UBPC_Gift_C_GetGiftData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (GiftId != nullptr)
		*GiftId = params.GiftId;
	if (GiftData != nullptr)
		*GiftData = params.GiftData;
}


// Function BPC_Gift.BPC_Gift_C.ClearGift
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_Gift_C::ClearGift()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Gift.BPC_Gift_C.ClearGift");

	UBPC_Gift_C_ClearGift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Gift.BPC_Gift_C.ClearGiftStack
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_Gift_C::ClearGiftStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Gift.BPC_Gift_C.ClearGiftStack");

	UBPC_Gift_C_ClearGiftStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Gift.BPC_Gift_C.PopGift
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   GiftId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS3GiftDataTable        OutGiftData                    (Parm, OutParm)

void UBPC_Gift_C::PopGift(struct FName* GiftId, struct FS3GiftDataTable* OutGiftData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Gift.BPC_Gift_C.PopGift");

	UBPC_Gift_C_PopGift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GiftId != nullptr)
		*GiftId = params.GiftId;
	if (OutGiftData != nullptr)
		*OutGiftData = params.OutGiftData;
}


// Function BPC_Gift.BPC_Gift_C.PushGift
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   GiftId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Gift_C::PushGift(const struct FName& GiftId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Gift.BPC_Gift_C.PushGift");

	UBPC_Gift_C_PushGift_Params params;
	params.GiftId = GiftId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
