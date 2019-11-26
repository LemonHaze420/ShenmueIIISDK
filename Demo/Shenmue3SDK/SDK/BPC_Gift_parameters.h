#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPC_Gift.BPC_Gift_C.ClearCacheMiniGameContainer
struct UBPC_Gift_C_ClearCacheMiniGameContainer_Params
{
};

// Function BPC_Gift.BPC_Gift_C.ShowPopup
struct UBPC_Gift_C_ShowPopup_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Gift.BPC_Gift_C.IsItemGift
struct UBPC_Gift_C_IsItemGift_Params
{
	struct FS3GameGift                                 CheckGIft;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bItem;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Gift.BPC_Gift_C.IsBetGift
struct UBPC_Gift_C_IsBetGift_Params
{
	struct FS3GameGift                                 CheckGIft;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bBet;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Gift.BPC_Gift_C.GetValueType
struct UBPC_Gift_C_GetValueType_Params
{
	TEnumAsByte<EN_ValueType>                          ValueType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Gift.BPC_Gift_C.IsMoneyGift
struct UBPC_Gift_C_IsMoneyGift_Params
{
	struct FS3GameGift                                 CheckGIft;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bMoney;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Gift.BPC_Gift_C.PushGiftCustomizeMoney
struct UBPC_Gift_C_PushGiftCustomizeMoney_Params
{
	int                                                Money;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Gift.BPC_Gift_C.GetGiftData
struct UBPC_Gift_C_GetGiftData_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       GiftId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS3GiftDataTable                            GiftData;                                                 // (Parm, OutParm)
};

// Function BPC_Gift.BPC_Gift_C.ClearGift
struct UBPC_Gift_C_ClearGift_Params
{
};

// Function BPC_Gift.BPC_Gift_C.ClearGiftStack
struct UBPC_Gift_C_ClearGiftStack_Params
{
};

// Function BPC_Gift.BPC_Gift_C.PopGift
struct UBPC_Gift_C_PopGift_Params
{
	struct FName                                       GiftId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS3GiftDataTable                            OutGiftData;                                              // (Parm, OutParm)
};

// Function BPC_Gift.BPC_Gift_C.PushGift
struct UBPC_Gift_C_PushGift_Params
{
	struct FName                                       GiftId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
