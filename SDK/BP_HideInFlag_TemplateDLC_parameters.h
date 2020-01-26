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

// Function BP_HideInFlag_TemplateDLC.BP_HideInFlag_TemplateDLC_C.CheckExsp
struct UBP_HideInFlag_TemplateDLC_C_CheckExsp_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInFlag_TemplateDLC.BP_HideInFlag_TemplateDLC_C.CheckChangeFlag
struct UBP_HideInFlag_TemplateDLC_C_CheckChangeFlag_Params
{
	int                                                change_flag;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInFlag_TemplateDLC.BP_HideInFlag_TemplateDLC_C.CheckExterndFlag
struct UBP_HideInFlag_TemplateDLC_C_CheckExterndFlag_Params
{
	bool                                               In_Range;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInFlag_TemplateDLC.BP_HideInFlag_TemplateDLC_C.CheckFlagValue
struct UBP_HideInFlag_TemplateDLC_C_CheckFlagValue_Params
{
	bool                                               In_Range;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInFlag_TemplateDLC.BP_HideInFlag_TemplateDLC_C.CheckHide
struct UBP_HideInFlag_TemplateDLC_C_CheckHide_Params
{
	bool                                               Hide_On;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInFlag_TemplateDLC.BP_HideInFlag_TemplateDLC_C.ChangeHide_Owner
struct UBP_HideInFlag_TemplateDLC_C_ChangeHide_Owner_Params
{
	bool                                               Hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInFlag_TemplateDLC.BP_HideInFlag_TemplateDLC_C.ReceiveBeginPlay
struct UBP_HideInFlag_TemplateDLC_C_ReceiveBeginPlay_Params
{
};

// Function BP_HideInFlag_TemplateDLC.BP_HideInFlag_TemplateDLC_C.ReceiveEndPlay
struct UBP_HideInFlag_TemplateDLC_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInFlag_TemplateDLC.BP_HideInFlag_TemplateDLC_C.Event_FlagChange
struct UBP_HideInFlag_TemplateDLC_C_Event_FlagChange_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInFlag_TemplateDLC.BP_HideInFlag_TemplateDLC_C.Evt_StepChange
struct UBP_HideInFlag_TemplateDLC_C_Evt_StepChange_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInFlag_TemplateDLC.BP_HideInFlag_TemplateDLC_C.StepChangeIn
struct UBP_HideInFlag_TemplateDLC_C_StepChangeIn_Params
{
};

// Function BP_HideInFlag_TemplateDLC.BP_HideInFlag_TemplateDLC_C.ExecuteUbergraph_BP_HideInFlag_TemplateDLC
struct UBP_HideInFlag_TemplateDLC_C_ExecuteUbergraph_BP_HideInFlag_TemplateDLC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
