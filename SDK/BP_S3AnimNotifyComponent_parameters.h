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

// Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.ReceiveNotify
struct UBP_S3AnimNotifyComponent_C_ReceiveNotify_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.ConsumeNotify
struct UBP_S3AnimNotifyComponent_C_ConsumeNotify_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Exists;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.HasNotify
struct UBP_S3AnimNotifyComponent_C_HasNotify_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.OnReceiveNotify__DelegateSignature
struct UBP_S3AnimNotifyComponent_C_OnReceiveNotify__DelegateSignature_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
