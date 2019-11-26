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

// Function PlayerMotionDatabase.PlayerMotionDatabase_C.IndexMontageByInt
struct APlayerMotionDatabase_C_IndexMontageByInt_Params
{
	TArray<class UAnimMontage*>                        List;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Int;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_Event
struct APlayerMotionDatabase_C_SearchMontage_Event_Params
{
	TEnumAsByte<EN_PC_EventMontage>                    Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_KnockDoor
struct APlayerMotionDatabase_C_SearchMontage_KnockDoor_Params
{
	TEnumAsByte<EN_DoorOpenType>                       Enum;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_OpenDoor
struct APlayerMotionDatabase_C_SearchMontage_OpenDoor_Params
{
	TEnumAsByte<EN_DoorOpenType>                       Enum;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RightSide;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_TalkShow
struct APlayerMotionDatabase_C_SearchMontage_TalkShow_Params
{
	TEnumAsByte<EN_SHOW_ID>                            Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Crouch;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_WalkEnd
struct APlayerMotionDatabase_C_SearchMontage_WalkEnd_Params
{
	bool                                               Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerMotionDatabase.PlayerMotionDatabase_C.IndexMontageByEnum
struct APlayerMotionDatabase_C_IndexMontageByEnum_Params
{
	TArray<class UAnimMontage*>                        List;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	unsigned char                                      Enum;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_Turn
struct APlayerMotionDatabase_C_SearchMontage_Turn_Params
{
	TEnumAsByte<EN_PC_TurnDirection10>                 TurnDir10;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerMotionDatabase.PlayerMotionDatabase_C.Initialize
struct APlayerMotionDatabase_C_Initialize_Params
{
};

// Function PlayerMotionDatabase.PlayerMotionDatabase_C.UserConstructionScript
struct APlayerMotionDatabase_C_UserConstructionScript_Params
{
};

// Function PlayerMotionDatabase.PlayerMotionDatabase_C.ReceiveBeginPlay
struct APlayerMotionDatabase_C_ReceiveBeginPlay_Params
{
};

// Function PlayerMotionDatabase.PlayerMotionDatabase_C.ExecuteUbergraph_PlayerMotionDatabase
struct APlayerMotionDatabase_C_ExecuteUbergraph_PlayerMotionDatabase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
