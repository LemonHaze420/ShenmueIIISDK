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

// Function BPC_CameraGroup.BPC_CameraGroup_C.GetAllCameras
struct UBPC_CameraGroup_C_GetAllCameras_Params
{
	TArray<class UClass*>                              AllCameras;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BPC_CameraGroup.BPC_CameraGroup_C.ReceiveBeginPlay
struct UBPC_CameraGroup_C_ReceiveBeginPlay_Params
{
};

// Function BPC_CameraGroup.BPC_CameraGroup_C.ExecuteUbergraph_BPC_CameraGroup
struct UBPC_CameraGroup_C_ExecuteUbergraph_BPC_CameraGroup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
