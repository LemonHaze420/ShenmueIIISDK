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

// Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.CheckFlagValue
struct UBP_HideInFlag_Template_C_CheckFlagValue_Params
{
	bool                                               In_Range;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.CheckHide
struct UBP_HideInFlag_Template_C_CheckHide_Params
{
	bool                                               Hide_On;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.ChangeHide_Owner
struct UBP_HideInFlag_Template_C_ChangeHide_Owner_Params
{
	bool                                               Hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.ReceiveBeginPlay
struct UBP_HideInFlag_Template_C_ReceiveBeginPlay_Params
{
};

// Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.ReceiveEndPlay
struct UBP_HideInFlag_Template_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.Event_FlagChange
struct UBP_HideInFlag_Template_C_Event_FlagChange_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.ExecuteUbergraph_BP_HideInFlag_Template
struct UBP_HideInFlag_Template_C_ExecuteUbergraph_BP_HideInFlag_Template_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
