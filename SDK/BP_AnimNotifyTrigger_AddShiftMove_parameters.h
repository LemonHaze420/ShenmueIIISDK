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

// Function BP_AnimNotifyTrigger_AddShiftMove.BP_AnimNotifyTrigger_AddShiftMove_C.GetNotifyName
struct UBP_AnimNotifyTrigger_AddShiftMove_C_GetNotifyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_AnimNotifyTrigger_AddShiftMove.BP_AnimNotifyTrigger_AddShiftMove_C.GetNotifyID
struct UBP_AnimNotifyTrigger_AddShiftMove_C_GetNotifyID_Params
{
	struct FName                                       NotifyID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
