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

// Function BP_KartPawnBase.BP_KartPawnBase_C.InitializeSound
struct ABP_KartPawnBase_C_InitializeSound_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.UpdateAcceleration
struct ABP_KartPawnBase_C_UpdateAcceleration_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.StopMotorSE
struct ABP_KartPawnBase_C_StopMotorSE_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.PlayMotorSE
struct ABP_KartPawnBase_C_PlayMotorSE_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Set Meshes Visibility
struct ABP_KartPawnBase_C_Set_Meshes_Visibility_Params
{
	bool                                               New_Visibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Draw Debug Info
struct ABP_KartPawnBase_C_Draw_Debug_Info_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Update Game HUD
struct ABP_KartPawnBase_C_Update_Game_HUD_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Update Engine Sound
struct ABP_KartPawnBase_C_Update_Engine_Sound_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Update Front Wheels Rotation (Steering)
struct ABP_KartPawnBase_C_Update_Front_Wheels_Rotation__Steering__Params
{
	bool                                               is_handle_front;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Update Wheels Rotation (Movement)
struct ABP_KartPawnBase_C_Update_Wheels_Rotation__Movement__Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Update Wheels Position
struct ABP_KartPawnBase_C_Update_Wheels_Position_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Apply Suspension Forces
struct ABP_KartPawnBase_C_Apply_Suspension_Forces_Params
{
	int                                                Grounded_Wheels_Count;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Perform Suspension Raycasting
struct ABP_KartPawnBase_C_Perform_Suspension_Raycasting_Params
{
	struct FVector                                     Suspension_Point_World_Location;                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Suspension_Point_Relative_Location;                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Suspension_Point_World_Offset;                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ground_Hited__;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Apply_Force_Location;                                     // (Parm, OutParm, IsPlainOldData)
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.UserConstructionScript
struct ABP_KartPawnBase_C_UserConstructionScript_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Suspention Initialization Timeline__FinishedFunc
struct ABP_KartPawnBase_C_Suspention_Initialization_Timeline__FinishedFunc_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Suspention Initialization Timeline__UpdateFunc
struct ABP_KartPawnBase_C_Suspention_Initialization_Timeline__UpdateFunc_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.ReceiveBeginPlay
struct ABP_KartPawnBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.ReceiveTick
struct ABP_KartPawnBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Apply Gravity And Anti Sliding Forces
struct ABP_KartPawnBase_C_Apply_Gravity_And_Anti_Sliding_Forces_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Start debugging
struct ABP_KartPawnBase_C_Start_debugging_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Stop debugging
struct ABP_KartPawnBase_C_Stop_debugging_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Update Center of Mass Offset
struct ABP_KartPawnBase_C_Update_Center_of_Mass_Offset_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.ReceivePossessed
struct ABP_KartPawnBase_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.ReceiveUnpossessed
struct ABP_KartPawnBase_C_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.On Bomb Hit
struct ABP_KartPawnBase_C_On_Bomb_Hit_Params
{
	struct FVector                                     Bomb_location;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Set Throttle Input
struct ABP_KartPawnBase_C_Set_Throttle_Input_Params
{
	float                                              Throttle_Axis;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Set Steering Input
struct ABP_KartPawnBase_C_Set_Steering_Input_Params
{
	float                                              Steering_Axis;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.Toggle Debug Mode
struct ABP_KartPawnBase_C_Toggle_Debug_Mode_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.On Speed Boost Begin
struct ABP_KartPawnBase_C_On_Speed_Boost_Begin_Params
{
	bool                                               Auto_Stop_Speed_Boost__;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Boost_Duration;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.On Speed Boost End
struct ABP_KartPawnBase_C_On_Speed_Boost_End_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.On Speed Boost Update
struct ABP_KartPawnBase_C_On_Speed_Boost_Update_Params
{
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.On Respawn
struct ABP_KartPawnBase_C_On_Respawn_Params
{
	struct FVector                                     NewLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.SetTickEnable
struct ABP_KartPawnBase_C_SetTickEnable_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.ReceiveEndPlay
struct ABP_KartPawnBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KartPawnBase.BP_KartPawnBase_C.ExecuteUbergraph_BP_KartPawnBase
struct ABP_KartPawnBase_C_ExecuteUbergraph_BP_KartPawnBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
