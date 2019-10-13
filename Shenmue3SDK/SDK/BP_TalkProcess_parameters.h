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

// Function BP_TalkProcess.BP_TalkProcess_C.GetCameraManager
struct UBP_TalkProcess_C_GetCameraManager_Params
{
	class ABP_TalkCameraManager_C*                     TalkCameraManager;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess.BP_TalkProcess_C.GetManager
struct UBP_TalkProcess_C_GetManager_Params
{
	class ABP_TalkEventManager_C*                      TalkEventManager;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
