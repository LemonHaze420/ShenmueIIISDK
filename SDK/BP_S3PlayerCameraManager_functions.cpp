
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

// Function BP_S3PlayerCameraManager.BP_S3PlayerCameraManager_C.UserConstructionScript
// (Net, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_S3PlayerCameraManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManager.BP_S3PlayerCameraManager_C.UserConstructionScript");

	ABP_S3PlayerCameraManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManager.BP_S3PlayerCameraManager_C.ReceiveBeginPlay
// (NetRequest, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManager_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManager.BP_S3PlayerCameraManager_C.ReceiveBeginPlay");

	ABP_S3PlayerCameraManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManager.BP_S3PlayerCameraManager_C.ReceiveTick
// (NetRequest, Exec, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManager_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManager.BP_S3PlayerCameraManager_C.ReceiveTick");

	ABP_S3PlayerCameraManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManager.BP_S3PlayerCameraManager_C.ExecuteUbergraph_BP_S3PlayerCameraManager
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManager_C::ExecuteUbergraph_BP_S3PlayerCameraManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManager.BP_S3PlayerCameraManager_C.ExecuteUbergraph_BP_S3PlayerCameraManager");

	ABP_S3PlayerCameraManager_C_ExecuteUbergraph_BP_S3PlayerCameraManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
