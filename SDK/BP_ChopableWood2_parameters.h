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

// Function BP_ChopableWood2.BP_ChopableWood2_C.ChopActionFromRot
struct ABP_ChopableWood2_C_ChopActionFromRot_Params
{
	struct FRotator                                    Rot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_ChopableWood2.BP_ChopableWood2_C.MakeRandomVector
struct ABP_ChopableWood2_C_MakeRandomVector_Params
{
	float                                              x_max;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              x_min;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              y_max;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              y_min;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z_Max;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z_min;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RandomtVector;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function BP_ChopableWood2.BP_ChopableWood2_C.UserConstructionScript
struct ABP_ChopableWood2_C_UserConstructionScript_Params
{
};

// Function BP_ChopableWood2.BP_ChopableWood2_C.ChopAction
struct ABP_ChopableWood2_C_ChopAction_Params
{
};

// Function BP_ChopableWood2.BP_ChopableWood2_C.ReceiveBeginPlay
struct ABP_ChopableWood2_C_ReceiveBeginPlay_Params
{
};

// Function BP_ChopableWood2.BP_ChopableWood2_C.DelayDestroy
struct ABP_ChopableWood2_C_DelayDestroy_Params
{
	float                                              DelayTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChopableWood2.BP_ChopableWood2_C.ExecuteUbergraph_BP_ChopableWood2
struct ABP_ChopableWood2_C_ExecuteUbergraph_BP_ChopableWood2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
