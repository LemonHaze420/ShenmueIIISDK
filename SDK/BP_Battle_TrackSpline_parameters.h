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

// Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.Editor_Fixup
struct ABP_Battle_TrackSpline_C_Editor_Fixup_Params
{
};

// Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.SetBlockDistance
struct ABP_Battle_TrackSpline_C_SetBlockDistance_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.CalculateClosestDirection
struct ABP_Battle_TrackSpline_C_CalculateClosestDirection_Params
{
	struct FVector                                     SourceLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     SourceDirection;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              LookAheadAmount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutDirection;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.LookAhead
struct ABP_Battle_TrackSpline_C_LookAhead_Params
{
	struct FVector                                     CurrentLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              DistanceAhead;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.FindTangent
struct ABP_Battle_TrackSpline_C_FindTangent_Params
{
	struct FVector                                     WorldLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Tangent;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.UserConstructionScript
struct ABP_Battle_TrackSpline_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
