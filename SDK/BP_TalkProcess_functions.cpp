
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_TalkProcess.BP_TalkProcess_C.GetCameraManager
// (Native, MulticastDelegate, Public, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_TalkCameraManager_C* TalkCameraManager              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_C::GetCameraManager(class ABP_TalkCameraManager_C** TalkCameraManager, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess.BP_TalkProcess_C.GetCameraManager");

	UBP_TalkProcess_C_GetCameraManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TalkCameraManager != nullptr)
		*TalkCameraManager = params.TalkCameraManager;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_TalkProcess.BP_TalkProcess_C.GetManager
// (NetReliable, NetRequest, Exec, Event, Static, Public, NetServer)
// Parameters:
// class ABP_TalkEventManager_C*  TalkEventManager               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_C::STATIC_GetManager(class ABP_TalkEventManager_C** TalkEventManager, bool* bSuccess)
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
