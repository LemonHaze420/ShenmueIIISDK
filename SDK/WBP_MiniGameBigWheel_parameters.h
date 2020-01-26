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

// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.SetButtonPower
struct UWBP_MiniGameBigWheel_C_SetButtonPower_Params
{
	float                                              Power;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.SetTexture
struct UWBP_MiniGameBigWheel_C_SetTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.SetVisibleTicket
struct UWBP_MiniGameBigWheel_C_SetVisibleTicket_Params
{
	int                                                VisibleNum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.SetTicketPos
struct UWBP_MiniGameBigWheel_C_SetTicketPos_Params
{
};

// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.SetVisibleButtonIcon
struct UWBP_MiniGameBigWheel_C_SetVisibleButtonIcon_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.PreConstruct
struct UWBP_MiniGameBigWheel_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.Construct
struct UWBP_MiniGameBigWheel_C_Construct_Params
{
};

// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.Tick
struct UWBP_MiniGameBigWheel_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.ExecuteUbergraph_WBP_MiniGameBigWheel
struct UWBP_MiniGameBigWheel_C_ExecuteUbergraph_WBP_MiniGameBigWheel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
