
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

// Function BP_BaseTalkCamera.BP_BaseTalkCamera_C.GetCamera
// (Net, Native, Public, Protected, NetServer, NetClient, DLLImport)
// Parameters:
// class UCameraComponent*        Camera                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_BaseTalkCamera_C::GetCamera(class UCameraComponent** Camera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseTalkCamera.BP_BaseTalkCamera_C.GetCamera");

	ABP_BaseTalkCamera_C_GetCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Camera != nullptr)
		*Camera = params.Camera;
}


// Function BP_BaseTalkCamera.BP_BaseTalkCamera_C.UserConstructionScript
// (Net, NetRequest, Exec, Event, NetResponse, Public, Protected, NetServer, NetClient, DLLImport)

void ABP_BaseTalkCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseTalkCamera.BP_BaseTalkCamera_C.UserConstructionScript");

	ABP_BaseTalkCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseTalkCamera.BP_BaseTalkCamera_C.ReceiveTick
// (Net, NetRequest, Exec, NetResponse, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseTalkCamera_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseTalkCamera.BP_BaseTalkCamera_C.ReceiveTick");

	ABP_BaseTalkCamera_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseTalkCamera.BP_BaseTalkCamera_C.ReceiveBeginPlay
// (Net, NetRequest, NetMulticast, NetServer)

void ABP_BaseTalkCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseTalkCamera.BP_BaseTalkCamera_C.ReceiveBeginPlay");

	ABP_BaseTalkCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseTalkCamera.BP_BaseTalkCamera_C.ExecuteUbergraph_BP_BaseTalkCamera
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseTalkCamera_C::STATIC_ExecuteUbergraph_BP_BaseTalkCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseTalkCamera.BP_BaseTalkCamera_C.ExecuteUbergraph_BP_BaseTalkCamera");

	ABP_BaseTalkCamera_C_ExecuteUbergraph_BP_BaseTalkCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
