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

// Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.RemoveWidget
struct ABP_HaveMoneyManager_C_RemoveWidget_Params
{
};

// Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.SubMoney
struct ABP_HaveMoneyManager_C_SubMoney_Params
{
	int                                                SubMoney;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AfterHaveMoney;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.AddMoney
struct ABP_HaveMoneyManager_C_AddMoney_Params
{
	int                                                AddMoney;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AfterHaveMoney;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.UserConstructionScript
struct ABP_HaveMoneyManager_C_UserConstructionScript_Params
{
};

// Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.ReceiveBeginPlay
struct ABP_HaveMoneyManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.ExecuteUbergraph_BP_HaveMoneyManager
struct ABP_HaveMoneyManager_C_ExecuteUbergraph_BP_HaveMoneyManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
