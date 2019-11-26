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

// Function BP_GimmickChair.BP_GimmickChair_C.GetChairForm
struct ABP_GimmickChair_C_GetChairForm_Params
{
	EChairForm                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GimmickChair.BP_GimmickChair_C.CalcStartRotation
struct ABP_GimmickChair_C_CalcStartRotation_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    GoalRotate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_GimmickChair.BP_GimmickChair_C.GetNearStartPointDist
struct ABP_GimmickChair_C_GetNearStartPointDist_Params
{
	int                                                poiIdx;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                stIdx;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GimmickChair.BP_GimmickChair_C.CalcZLocation
struct ABP_GimmickChair_C_CalcZLocation_Params
{
};

// Function BP_GimmickChair.BP_GimmickChair_C.IsCharacterSitting
struct ABP_GimmickChair_C_IsCharacterSitting_Params
{
	class AS3Character*                                Character;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GimmickChair.BP_GimmickChair_C.ModeChangeRequest
struct ABP_GimmickChair_C_ModeChangeRequest_Params
{
	struct FS3ChairResultStruct                        Result;                                                   // (Parm, OutParm)
	EChairOccupied                                     Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AS3Character*                                Character;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                poiIdx;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                stIdx;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              moveDist;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GimmickChair.BP_GimmickChair_C.CreatePointData
struct ABP_GimmickChair_C_CreatePointData_Params
{
	struct FVector                                     Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FS3ChairPointStruct                         S3ChairPointStruct;                                       // (Parm, OutParm)
};

// Function BP_GimmickChair.BP_GimmickChair_C.GetOccupied
struct ABP_GimmickChair_C_GetOccupied_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EChairOccupied                                     Occupied;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GimmickChair.BP_GimmickChair_C.SetOccupied
struct ABP_GimmickChair_C_SetOccupied_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EChairOccupied                                     Occupied;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AS3Character*                                Target_Chara;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GimmickChair.BP_GimmickChair_C.Reserve
struct ABP_GimmickChair_C_Reserve_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AS3Character*                                Target_Chara;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GimmickChair.BP_GimmickChair_C.SitDown
struct ABP_GimmickChair_C_SitDown_Params
{
	class ABP_S3Character_C*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GimmickChair.BP_GimmickChair_C.CalcChairWidth
struct ABP_GimmickChair_C_CalcChairWidth_Params
{
};

// Function BP_GimmickChair.BP_GimmickChair_C.CalcPointOffset
struct ABP_GimmickChair_C_CalcPointOffset_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_GimmickChair.BP_GimmickChair_C.UserConstructionScript
struct ABP_GimmickChair_C_UserConstructionScript_Params
{
};

// Function BP_GimmickChair.BP_GimmickChair_C.ReceiveBeginPlay
struct ABP_GimmickChair_C_ReceiveBeginPlay_Params
{
};

// Function BP_GimmickChair.BP_GimmickChair_C.ReceiveTick
struct ABP_GimmickChair_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GimmickChair.BP_GimmickChair_C.ExecuteUbergraph_BP_GimmickChair
struct ABP_GimmickChair_C_ExecuteUbergraph_BP_GimmickChair_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
