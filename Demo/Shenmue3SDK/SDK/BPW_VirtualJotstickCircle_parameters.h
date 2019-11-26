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

// Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.SetInputZones
struct UBPW_VirtualJotstickCircle_C_SetInputZones_Params
{
	float                                              Radii;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeadZone;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RunZone;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.GetDeltaPosition
struct UBPW_VirtualJotstickCircle_C_GetDeltaPosition_Params
{
	struct FVector2D                                   FindMyRelativePos;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Relative;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.MakeAxii
struct UBPW_VirtualJotstickCircle_C_MakeAxii_Params
{
	struct FVector2D                                   Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Axii;                                                     // (Parm, OutParm, IsPlainOldData)
};

// Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.SetRadius
struct UBPW_VirtualJotstickCircle_C_SetRadius_Params
{
	float                                              Radius_Pixels_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.SetCenterPosition
struct UBPW_VirtualJotstickCircle_C_SetCenterPosition_Params
{
	struct FVector2D                                   Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.ConstrainPosition
struct UBPW_VirtualJotstickCircle_C_ConstrainPosition_Params
{
	struct FVector2D                                   Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.PreConstruct
struct UBPW_VirtualJotstickCircle_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.ExecuteUbergraph_BPW_VirtualJotstickCircle
struct UBPW_VirtualJotstickCircle_C_ExecuteUbergraph_BPW_VirtualJotstickCircle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
