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

// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.GetClothMeshComponent
struct ABP_MiniGame_ThrowGameBase_C_GetClothMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.SpawnThrowObject
struct ABP_MiniGame_ThrowGameBase_C_SpawnThrowObject_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	ESpawnActorCollisionHandlingMethod                 CollisionHandlingOverride;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_MiniGame_ThrowObjectBase_C*              CurrentThrowObject;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.SetupAnimInstance
struct ABP_MiniGame_ThrowGameBase_C_SetupAnimInstance_Params
{
	class UClass*                                      NewClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.UserConstructionScript
struct ABP_MiniGame_ThrowGameBase_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.StartMiniGame
struct ABP_MiniGame_ThrowGameBase_C_StartMiniGame_Params
{
};

// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.EndMiniGame
struct ABP_MiniGame_ThrowGameBase_C_EndMiniGame_Params
{
};

// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.WinMiniGame
struct ABP_MiniGame_ThrowGameBase_C_WinMiniGame_Params
{
};

// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.LoseMiniGame
struct ABP_MiniGame_ThrowGameBase_C_LoseMiniGame_Params
{
};

// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.DrawMiniGame
struct ABP_MiniGame_ThrowGameBase_C_DrawMiniGame_Params
{
};

// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.RestartMiniGame
struct ABP_MiniGame_ThrowGameBase_C_RestartMiniGame_Params
{
};

// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.OnThorwObject
struct ABP_MiniGame_ThrowGameBase_C_OnThorwObject_Params
{
};

// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.ReceiveBeginPlay
struct ABP_MiniGame_ThrowGameBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.ExecuteUbergraph_BP_MiniGame_ThrowGameBase
struct ABP_MiniGame_ThrowGameBase_C_ExecuteUbergraph_BP_MiniGame_ThrowGameBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
