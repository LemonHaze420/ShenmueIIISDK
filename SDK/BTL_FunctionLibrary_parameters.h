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

// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.Normalize_AccurateTime
struct UBTL_FunctionLibrary_C_Normalize_AccurateTime_Params
{
	struct FAccurateTime                               In;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAccurateTime                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.Add_AccurateTime
struct UBTL_FunctionLibrary_C_Add_AccurateTime_Params
{
	struct FAccurateTime                               A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FAccurateTime                               B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAccurateTime                               Result;                                                   // (Parm, OutParm)
};

// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetSecondsPassed
struct UBTL_FunctionLibrary_C_GetSecondsPassed_Params
{
	struct FAccurateTime                               SinceTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Seconds;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetAccurateRealtimeStruct
struct UBTL_FunctionLibrary_C_GetAccurateRealtimeStruct_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAccurateTime                               AccurateTime;                                             // (Parm, OutParm)
};

// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.AttackCollisionEnumToMainBoneTag
struct UBTL_FunctionLibrary_C_AttackCollisionEnumToMainBoneTag_Params
{
	TEnumAsByte<EBattleAttackCollision>                Enum;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetBattleDataTableList
struct UBTL_FunctionLibrary_C_GetBattleDataTableList_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.AccurateTimeToFloat
struct UBTL_FunctionLibrary_C_AccurateTimeToFloat_Params
{
	struct FAccurateTime                               InTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Seconds;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.SubtractAccurateTime
struct UBTL_FunctionLibrary_C_SubtractAccurateTime_Params
{
	struct FAccurateTime                               Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FAccurateTime                               SubtractTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAccurateTime                               Result;                                                   // (Parm, OutParm)
};

// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.AttackCollisionEnumToBoneGroupTag
struct UBTL_FunctionLibrary_C_AttackCollisionEnumToBoneGroupTag_Params
{
	TEnumAsByte<EBattleAttackCollision>                Enum;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetCurrentAMSectionPercent
struct UBTL_FunctionLibrary_C_GetCurrentAMSectionPercent_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CheckPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetCurrentAMSectionPositiion
struct UBTL_FunctionLibrary_C_GetCurrentAMSectionPositiion_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NowPosition;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.CheckPlaneLineAndPointLR
struct UBTL_FunctionLibrary_C_CheckPlaneLineAndPointLR_Params
{
	struct FVector                                     StartLinePos;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     EndLinePos;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     PointPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              retDir;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetCharacterFootLocation
struct UBTL_FunctionLibrary_C_GetCharacterFootLocation_Params
{
	class AActor*                                      Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
