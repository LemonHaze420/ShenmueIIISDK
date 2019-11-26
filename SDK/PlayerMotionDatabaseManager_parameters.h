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

// Function PlayerMotionDatabaseManager.PlayerMotionDatabaseManager_C.GetSelectedDatabase
struct UPlayerMotionDatabaseManager_C_GetSelectedDatabase_Params
{
	TEnumAsByte<EPC_EN_PlayerMotionDatabase>           DatabaseType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerMotionDatabase_C*                     Database;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerMotionDatabaseManager.PlayerMotionDatabaseManager_C.GetDatabase
struct UPlayerMotionDatabaseManager_C_GetDatabase_Params
{
	class APlayerMotionDatabase_C*                     Datagbase;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerMotionDatabaseManager.PlayerMotionDatabaseManager_C.Initialize
struct UPlayerMotionDatabaseManager_C_Initialize_Params
{
};

// Function PlayerMotionDatabaseManager.PlayerMotionDatabaseManager_C.SwitchDatabase
struct UPlayerMotionDatabaseManager_C_SwitchDatabase_Params
{
	TEnumAsByte<EPC_EN_PlayerMotionDatabase>           DatabaseType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
