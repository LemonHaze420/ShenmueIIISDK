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

// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.SpawnFreeFish
struct ABP_MiniGame_FishingArea_C_SpawnFreeFish_Params
{
};

// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.GetRareScale
struct ABP_MiniGame_FishingArea_C_GetRareScale_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RareScale;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.GetSpawnFishData
struct ABP_MiniGame_FishingArea_C_GetSpawnFishData_Params
{
	TArray<struct FST_Fishing_FishSetting>             SpawnFish;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.SetEnabledArea
struct ABP_MiniGame_FishingArea_C_SetEnabledArea_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.CheckOverlappingActor
struct ABP_MiniGame_FishingArea_C_CheckOverlappingActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOverlapping;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.GetFishIdName
struct ABP_MiniGame_FishingArea_C_GetFishIdName_Params
{
	TEnumAsByte<E_MiniGame_FishType>                   FishType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.UserConstructionScript
struct ABP_MiniGame_FishingArea_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.ReceiveBeginPlay
struct ABP_MiniGame_FishingArea_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_FishingArea_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.ExecuteUbergraph_BP_MiniGame_FishingArea
struct ABP_MiniGame_FishingArea_C_ExecuteUbergraph_BP_MiniGame_FishingArea_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
