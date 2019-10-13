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

// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.ModPlayerForTeleport
struct UBP_Gimmick_warpPortalComp_C_ModPlayerForTeleport_Params
{
	bool                                               ToTeleport;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.FadePlayer
struct UBP_Gimmick_warpPortalComp_C_FadePlayer_Params
{
	bool                                               Fade;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.SetPortalTransform
struct UBP_Gimmick_warpPortalComp_C_SetPortalTransform_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.GetPortalTransform
struct UBP_Gimmick_warpPortalComp_C_GetPortalTransform_Params
{
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.isAvailable(player)
struct UBP_Gimmick_warpPortalComp_C_isAvailable_player__Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.ReceiveBeginPlay
struct UBP_Gimmick_warpPortalComp_C_ReceiveBeginPlay_Params
{
};

// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.ReturnPlayerState
struct UBP_Gimmick_warpPortalComp_C_ReturnPlayerState_Params
{
};

// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.onTeleport
struct UBP_Gimmick_warpPortalComp_C_onTeleport_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.ReceiveEndPlay
struct UBP_Gimmick_warpPortalComp_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.ExecuteUbergraph_BP_Gimmick_warpPortalComp
struct UBP_Gimmick_warpPortalComp_C_ExecuteUbergraph_BP_Gimmick_warpPortalComp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.teleport__DelegateSignature
struct UBP_Gimmick_warpPortalComp_C_teleport__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
