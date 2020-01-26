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

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetSunAndMoonMovement
struct AUltra_Dynamic_Sky_BP_C_SetSunAndMoonMovement_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetCurrentUDMMat
struct AUltra_Dynamic_Sky_BP_C_GetCurrentUDMMat_Params
{
	class UMaterialInstanceDynamic*                    newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ForceMoonPosition
struct AUltra_Dynamic_Sky_BP_C_ForceMoonPosition_Params
{
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ForceUpdateSkylight
struct AUltra_Dynamic_Sky_BP_C_ForceUpdateSkylight_Params
{
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.IsCloudy
struct AUltra_Dynamic_Sky_BP_C_IsCloudy_Params
{
	bool                                               Cloudy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ResetCloudSimulateTime
struct AUltra_Dynamic_Sky_BP_C_ResetCloudSimulateTime_Params
{
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetWindSpeed
struct AUltra_Dynamic_Sky_BP_C_SetWindSpeed_Params
{
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UpdateFogDensity
struct AUltra_Dynamic_Sky_BP_C_UpdateFogDensity_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.AnmateCloudDensity
struct AUltra_Dynamic_Sky_BP_C_AnmateCloudDensity_Params
{
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UpdateWind
struct AUltra_Dynamic_Sky_BP_C_UpdateWind_Params
{
	struct FVector                                     WindVector;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetGameTime
struct AUltra_Dynamic_Sky_BP_C_SetGameTime_Params
{
	float                                              InGameTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bJump;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetCloudRatio
struct AUltra_Dynamic_Sky_BP_C_GetCloudRatio_Params
{
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetSunLocation
struct AUltra_Dynamic_Sky_BP_C_GetSunLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetFogDensity
struct AUltra_Dynamic_Sky_BP_C_SetFogDensity_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.CanRain
struct AUltra_Dynamic_Sky_BP_C_CanRain_Params
{
	bool                                               Rain;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UpdateCloudDensity
struct AUltra_Dynamic_Sky_BP_C_UpdateCloudDensity_Params
{
	float                                              NewDencity;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetCloudChangeSpeed
struct AUltra_Dynamic_Sky_BP_C_SetCloudChangeSpeed_Params
{
	bool                                               Quick;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TransitionTest;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetSkyParamater
struct AUltra_Dynamic_Sky_BP_C_GetSkyParamater_Params
{
	struct FRotator                                    Direction;                                                // (Parm, OutParm, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LightColor;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Update Skylight
struct AUltra_Dynamic_Sky_BP_C_Update_Skylight_Params
{
	bool                                               bAutoTimeOfDay;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables
struct AUltra_Dynamic_Sky_BP_C_Set_Material_Variables_Params
{
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Solar Angle
struct AUltra_Dynamic_Sky_BP_C_Set_Solar_Angle_Params
{
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript
struct AUltra_Dynamic_Sky_BP_C_UserConstructionScript_Params
{
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick
struct AUltra_Dynamic_Sky_BP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay
struct AUltra_Dynamic_Sky_BP_C_ReceiveBeginPlay_Params
{
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP
struct AUltra_Dynamic_Sky_BP_C_ExecuteUbergraph_Ultra_Dynamic_Sky_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.OnUpdateWind__DelegateSignature
struct AUltra_Dynamic_Sky_BP_C_OnUpdateWind__DelegateSignature_Params
{
	struct FVector                                     WindDirection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.OnReadyCloud__DelegateSignature
struct AUltra_Dynamic_Sky_BP_C_OnReadyCloud__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
