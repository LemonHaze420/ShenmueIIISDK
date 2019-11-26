#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_money_status.BP_money_status_C.IsShouldVisible
struct ABP_money_status_C_IsShouldVisible_Params
{
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_money_status.BP_money_status_C.SetForbid
struct ABP_money_status_C_SetForbid_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fobid;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_money_status.BP_money_status_C.CheckVisible
struct ABP_money_status_C_CheckVisible_Params
{
};

// Function BP_money_status.BP_money_status_C.Hide
struct ABP_money_status_C_Hide_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_money_status.BP_money_status_C.Show
struct ABP_money_status_C_Show_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_money_status.BP_money_status_C.UserConstructionScript
struct ABP_money_status_C_UserConstructionScript_Params
{
};

// Function BP_money_status.BP_money_status_C.ReceiveBeginPlay
struct ABP_money_status_C_ReceiveBeginPlay_Params
{
};

// Function BP_money_status.BP_money_status_C.ReceiveEndPlay
struct ABP_money_status_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_money_status.BP_money_status_C.CreateWidget
struct ABP_money_status_C_CreateWidget_Params
{
};

// Function BP_money_status.BP_money_status_C.DestroyWidget
struct ABP_money_status_C_DestroyWidget_Params
{
};

// Function BP_money_status.BP_money_status_C.FadeOutFinished
struct ABP_money_status_C_FadeOutFinished_Params
{
};

// Function BP_money_status.BP_money_status_C.ExecuteUbergraph_BP_money_status
struct ABP_money_status_C_ExecuteUbergraph_BP_money_status_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
