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

// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.GetHelpPriority
struct ABP_HelpRegisterActor_C_GetHelpPriority_Params
{
	ES3HelpPriority                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.GetHelpName
struct ABP_HelpRegisterActor_C_GetHelpName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.IsActivateHelp
struct ABP_HelpRegisterActor_C_IsActivateHelp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.RegisterHelp
struct ABP_HelpRegisterActor_C_RegisterHelp_Params
{
	ES3HelpRegisterTiming                              Timing;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.UnregisterHelp
struct ABP_HelpRegisterActor_C_UnregisterHelp_Params
{
	ES3HelpRegisterTiming                              Timing;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.UserConstructionScript
struct ABP_HelpRegisterActor_C_UserConstructionScript_Params
{
};

// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.ReceiveBeginPlay
struct ABP_HelpRegisterActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.ReceiveEndPlay
struct ABP_HelpRegisterActor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.ExecuteUbergraph_BP_HelpRegisterActor
struct ABP_HelpRegisterActor_C_ExecuteUbergraph_BP_HelpRegisterActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
