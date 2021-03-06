
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_TalkProcess.BP_TalkProcess_C.GetCameraManager
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_TalkCameraManager_C* TalkCameraManager              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_C::GetCameraManager(class ABP_TalkCameraManager_C** TalkCameraManager, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess.BP_TalkProcess_C.GetCameraManager");

	UBP_TalkProcess_C_GetCameraManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TalkCameraManager != nullptr)
		*TalkCameraManager = params.TalkCameraManager;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_TalkProcess.BP_TalkProcess_C.GetManager
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_TalkEventManager_C*  TalkEventManager               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_C::GetManager(class ABP_TalkEventManager_C** TalkEventManager, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess.BP_TalkProcess_C.GetManager");

	UBP_TalkProcess_C_GetManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TalkEventManager != nullptr)
		*TalkEventManager = params.TalkEventManager;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
