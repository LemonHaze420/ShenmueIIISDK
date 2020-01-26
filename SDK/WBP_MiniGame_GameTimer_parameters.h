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

// Function WBP_MiniGame_GameTimer.WBP_MiniGame_GameTimer_C.SetCenterIcon
struct UWBP_MiniGame_GameTimer_C_SetCenterIcon_Params
{
	class UTexture2D*                                  Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_GameTimer.WBP_MiniGame_GameTimer_C.SetProgress
struct UWBP_MiniGame_GameTimer_C_SetProgress_Params
{
	float                                              Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_GameTimer.WBP_MiniGame_GameTimer_C.PreConstruct
struct UWBP_MiniGame_GameTimer_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_GameTimer.WBP_MiniGame_GameTimer_C.Construct
struct UWBP_MiniGame_GameTimer_C_Construct_Params
{
};

// Function WBP_MiniGame_GameTimer.WBP_MiniGame_GameTimer_C.ExecuteUbergraph_WBP_MiniGame_GameTimer
struct UWBP_MiniGame_GameTimer_C_ExecuteUbergraph_WBP_MiniGame_GameTimer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
