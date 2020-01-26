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

// Function BP_SB_InputBase.BP_SB_InputBase_C.IsInputAxisValue
struct ABP_SB_InputBase_C_IsInputAxisValue_Params
{
	bool                                               bInput;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_InputBase.BP_SB_InputBase_C.IsChangeAxisValue
struct ABP_SB_InputBase_C_IsChangeAxisValue_Params
{
	bool                                               bChange;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_InputBase.BP_SB_InputBase_C.UserConstructionScript
struct ABP_SB_InputBase_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
