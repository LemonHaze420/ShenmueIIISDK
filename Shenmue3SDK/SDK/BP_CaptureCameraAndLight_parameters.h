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

// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.Init
struct ABP_CaptureCameraAndLight_C_Init_Params
{
	int                                                ItemNumber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_SaveData_ViewItem_C*                     GameData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.GameDataUpdate
struct ABP_CaptureCameraAndLight_C_GameDataUpdate_Params
{
};

// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.UpdateLightPosAndRot
struct ABP_CaptureCameraAndLight_C_UpdateLightPosAndRot_Params
{
	float                                              PosX;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosY;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              posZ;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LightNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.UserConstructionScript
struct ABP_CaptureCameraAndLight_C_UserConstructionScript_Params
{
};

// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.ReceiveBeginPlay
struct ABP_CaptureCameraAndLight_C_ReceiveBeginPlay_Params
{
};

// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.Update
struct ABP_CaptureCameraAndLight_C_Update_Params
{
	int                                                ItemNo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.ExecuteUbergraph_BP_CaptureCameraAndLight
struct ABP_CaptureCameraAndLight_C_ExecuteUbergraph_BP_CaptureCameraAndLight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
