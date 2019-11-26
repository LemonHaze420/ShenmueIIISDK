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

// Function SubABP_NPCLead.SubABP_NPCLead_C.IsEnableLookAt
struct USubABP_NPCLead_C_IsEnableLookAt_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubABP_NPCLead.SubABP_NPCLead_C.InitFaceMotages
struct USubABP_NPCLead_C_InitFaceMotages_Params
{
	bool                                               Succsess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
