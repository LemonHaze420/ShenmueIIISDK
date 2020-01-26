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

// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.IsSpecialEvent
struct ABP_MiniGameDLCBigWheel_C_IsSpecialEvent_Params
{
	bool                                               Event;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.UpdateEventFlag
struct ABP_MiniGameDLCBigWheel_C_UpdateEventFlag_Params
{
};

// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.IsGetAllItem
struct ABP_MiniGameDLCBigWheel_C_IsGetAllItem_Params
{
	class UDataTable*                                  Table;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.IsFigureEvent
struct ABP_MiniGameDLCBigWheel_C_IsFigureEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.IsAfterEvent
struct ABP_MiniGameDLCBigWheel_C_IsAfterEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.UserConstructionScript
struct ABP_MiniGameDLCBigWheel_C_UserConstructionScript_Params
{
};

// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.UpdateSpecialItemData
struct ABP_MiniGameDLCBigWheel_C_UpdateSpecialItemData_Params
{
	class UDataTable*                                  DataTable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.OnFlagChanged
struct ABP_MiniGameDLCBigWheel_C_OnFlagChanged_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.AddJackpotCount
struct ABP_MiniGameDLCBigWheel_C_AddJackpotCount_Params
{
};

// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.ReceiveBeginPlay
struct ABP_MiniGameDLCBigWheel_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.UpdateTicketNum
struct ABP_MiniGameDLCBigWheel_C_UpdateTicketNum_Params
{
};

// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.EndMiniGame
struct ABP_MiniGameDLCBigWheel_C_EndMiniGame_Params
{
};

// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.ExecuteUbergraph_BP_MiniGameDLCBigWheel
struct ABP_MiniGameDLCBigWheel_C_ExecuteUbergraph_BP_MiniGameDLCBigWheel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
