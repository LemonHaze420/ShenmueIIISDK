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

// Function BP_AnimNotifyState_AttackBase.BP_AnimNotifyState_AttackBase_C.GetAttackCollisionEnum
struct UBP_AnimNotifyState_AttackBase_C_GetAttackCollisionEnum_Params
{
	TEnumAsByte<EBattleAttackCollision>                Enum;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimNotifyState_AttackBase.BP_AnimNotifyState_AttackBase_C.GetNotifyID
struct UBP_AnimNotifyState_AttackBase_C_GetNotifyID_Params
{
	struct FName                                       NotifyID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
