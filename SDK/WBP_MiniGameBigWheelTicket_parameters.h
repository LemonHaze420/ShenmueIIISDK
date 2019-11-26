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

// Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.SetVisible
struct UWBP_MiniGameBigWheelTicket_C_SetVisible_Params
{
	bool                                               BigImage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SmallNum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.SetTexture
struct UWBP_MiniGameBigWheelTicket_C_SetTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.SetSmallImagePos
struct UWBP_MiniGameBigWheelTicket_C_SetSmallImagePos_Params
{
};

// Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.PreConstruct
struct UWBP_MiniGameBigWheelTicket_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.PlayChangeSmallAnimation
struct UWBP_MiniGameBigWheelTicket_C_PlayChangeSmallAnimation_Params
{
};

// Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.ExecuteUbergraph_WBP_MiniGameBigWheelTicket
struct UWBP_MiniGameBigWheelTicket_C_ExecuteUbergraph_WBP_MiniGameBigWheelTicket_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
