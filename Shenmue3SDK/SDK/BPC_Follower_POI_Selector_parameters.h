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

// Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.InRange
struct UBPC_Follower_POI_Selector_C_InRange_Params
{
	class ABP_Follower_POI_C*                          POI;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInRange;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.ScorePOI
struct UBPC_Follower_POI_Selector_C_ScorePOI_Params
{
	class ABP_Follower_POI_C*                          POI;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TestLeaderLoS;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Score;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.IsNavStraightLine
struct UBPC_Follower_POI_Selector_C_IsNavStraightLine_Params
{
	class AS3Character*                                Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Follower_POI_C*                          POI;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsStraight;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.UpdateHistory
struct UBPC_Follower_POI_Selector_C_UpdateHistory_Params
{
	class ABP_Follower_POI_C*                          Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.SearchForPOI
struct UBPC_Follower_POI_Selector_C_SearchForPOI_Params
{
	bool                                               bIgnoreTimer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTestLeaderLOS;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Follower_POI_C*                          POI;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bRanQuery;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.ReceiveTick
struct UBPC_Follower_POI_Selector_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.ExecuteUbergraph_BPC_Follower_POI_Selector
struct UBPC_Follower_POI_Selector_C_ExecuteUbergraph_BPC_Follower_POI_Selector_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
