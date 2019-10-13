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

// Function BP_BTL_CharacterSpawnerBase.BP_BTL_CharacterSpawnerBase_C.isPlayer
struct ABP_BTL_CharacterSpawnerBase_C_isPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BTL_CharacterSpawnerBase.BP_BTL_CharacterSpawnerBase_C.IsEnabled
struct ABP_BTL_CharacterSpawnerBase_C_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BTL_CharacterSpawnerBase.BP_BTL_CharacterSpawnerBase_C.GetSpawnInfo
struct ABP_BTL_CharacterSpawnerBase_C_GetSpawnInfo_Params
{
	class UObject*                                     Outer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBTL_Launch_NPC_C*                           LaunchInfo;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_CharacterSpawnerBase.BP_BTL_CharacterSpawnerBase_C.GetID
struct ABP_BTL_CharacterSpawnerBase_C_GetID_Params
{
	struct FName                                       Identifier;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_CharacterSpawnerBase.BP_BTL_CharacterSpawnerBase_C.UserConstructionScript
struct ABP_BTL_CharacterSpawnerBase_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
