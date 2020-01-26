#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function wgt_HaveMoney.wgt_HaveMoney_C.SetMoneyText
struct Uwgt_HaveMoney_C_SetMoneyText_Params
{
	int                                                SetValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ValueMin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ValueMax;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_HaveMoney.wgt_HaveMoney_C.SetPos
struct Uwgt_HaveMoney_C_SetPos_Params
{
};

// Function wgt_HaveMoney.wgt_HaveMoney_C.SetValueType
struct Uwgt_HaveMoney_C_SetValueType_Params
{
	TEnumAsByte<EN_ValueType>                          Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_HaveMoney.wgt_HaveMoney_C.GetHaveMoney
struct Uwgt_HaveMoney_C_GetHaveMoney_Params
{
	int                                                HaveMoney;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_HaveMoney.wgt_HaveMoney_C.SetAddMoney
struct Uwgt_HaveMoney_C_SetAddMoney_Params
{
	int                                                AddMoney;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_HaveMoney.wgt_HaveMoney_C.SetSubtractMoney
struct Uwgt_HaveMoney_C_SetSubtractMoney_Params
{
	int                                                SubMoney;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_HaveMoney.wgt_HaveMoney_C.AddHaveMoney
struct Uwgt_HaveMoney_C_AddHaveMoney_Params
{
	int                                                AddMoney;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_HaveMoney.wgt_HaveMoney_C.SubtractHaveMoney
struct Uwgt_HaveMoney_C_SubtractHaveMoney_Params
{
	int                                                SubMoney;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_HaveMoney.wgt_HaveMoney_C.SetHaveMoney
struct Uwgt_HaveMoney_C_SetHaveMoney_Params
{
	int                                                HaveMoney;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NotAnim;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_HaveMoney.wgt_HaveMoney_C.Tick
struct Uwgt_HaveMoney_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_HaveMoney.wgt_HaveMoney_C.Construct
struct Uwgt_HaveMoney_C_Construct_Params
{
};

// Function wgt_HaveMoney.wgt_HaveMoney_C.Reset
struct Uwgt_HaveMoney_C_Reset_Params
{
};

// Function wgt_HaveMoney.wgt_HaveMoney_C.ExecuteUbergraph_wgt_HaveMoney
struct Uwgt_HaveMoney_C_ExecuteUbergraph_wgt_HaveMoney_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
