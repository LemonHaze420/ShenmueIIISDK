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

// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.Get_BorderContainerNum_Text_1
struct UWBP_MiniGame_FL_C_Get_BorderContainerNum_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.Get_CurrentContainerNum_Text_1
struct UWBP_MiniGame_FL_C_Get_CurrentContainerNum_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetCarriedNum
struct UWBP_MiniGame_FL_C_SetCarriedNum_Params
{
	int                                                CarriedNum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetTimeProgress
struct UWBP_MiniGame_FL_C_SetTimeProgress_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetProgressCircle
struct UWBP_MiniGame_FL_C_SetProgressCircle_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetMapAngle
struct UWBP_MiniGame_FL_C_SetMapAngle_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.ResetMapScale
struct UWBP_MiniGame_FL_C_ResetMapScale_Params
{
};

// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.ChangeMapScale
struct UWBP_MiniGame_FL_C_ChangeMapScale_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.RotateMap
struct UWBP_MiniGame_FL_C_RotateMap_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetMapVisible
struct UWBP_MiniGame_FL_C_SetMapVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetMapTexture
struct UWBP_MiniGame_FL_C_SetMapTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.Construct
struct UWBP_MiniGame_FL_C_Construct_Params
{
};

// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.ExecuteUbergraph_WBP_MiniGame_FL
struct UWBP_MiniGame_FL_C_ExecuteUbergraph_WBP_MiniGame_FL_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
