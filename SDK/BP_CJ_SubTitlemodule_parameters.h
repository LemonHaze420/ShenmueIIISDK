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

// Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.isSubTitleDonw
struct ABP_CJ_SubTitlemodule_C_isSubTitleDonw_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.SelectText
struct ABP_CJ_SubTitlemodule_C_SelectText_Params
{
	struct FName                                       TextID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.UserConstructionScript
struct ABP_CJ_SubTitlemodule_C_UserConstructionScript_Params
{
};

// Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.ReceiveBeginPlay
struct ABP_CJ_SubTitlemodule_C_ReceiveBeginPlay_Params
{
};

// Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.ReceiveTick
struct ABP_CJ_SubTitlemodule_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.ExecuteUbergraph_BP_CJ_SubTitlemodule
struct ABP_CJ_SubTitlemodule_C_ExecuteUbergraph_BP_CJ_SubTitlemodule_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.SelectEnd__DelegateSignature
struct ABP_CJ_SubTitlemodule_C_SelectEnd__DelegateSignature_Params
{
	struct FName                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
