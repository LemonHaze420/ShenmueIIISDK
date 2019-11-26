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

// Function TalkCam_SelectCameraClass.TalkCam_SelectCameraClass_C.GetRandCameraClass
struct UTalkCam_SelectCameraClass_C_GetRandCameraClass_Params
{
	TEnumAsByte<EN_TalkCameraClassKind>                newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TalkCam_SelectCameraClass.TalkCam_SelectCameraClass_C.ReceiveTickAI
struct UTalkCam_SelectCameraClass_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TalkCam_SelectCameraClass.TalkCam_SelectCameraClass_C.ExecuteUbergraph_TalkCam_SelectCameraClass
struct UTalkCam_SelectCameraClass_C_ExecuteUbergraph_TalkCam_SelectCameraClass_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
