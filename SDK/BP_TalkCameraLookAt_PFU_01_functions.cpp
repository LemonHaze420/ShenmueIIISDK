
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

// Function BP_TalkCameraLookAt_PFU_01.BP_TalkCameraLookAt_PFU_01_C.UserConstructionScript
// (Net, NetRequest, Exec, Native, NetResponse, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)

void ABP_TalkCameraLookAt_PFU_01_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraLookAt_PFU_01.BP_TalkCameraLookAt_PFU_01_C.UserConstructionScript");

	ABP_TalkCameraLookAt_PFU_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraLookAt_PFU_01.BP_TalkCameraLookAt_PFU_01_C.ReceiveBeginPlay
// (Net, NetRequest, Event, NetResponse, Static, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TalkCameraLookAt_PFU_01_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraLookAt_PFU_01.BP_TalkCameraLookAt_PFU_01_C.ReceiveBeginPlay");

	ABP_TalkCameraLookAt_PFU_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraLookAt_PFU_01.BP_TalkCameraLookAt_PFU_01_C.ReceiveTick
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraLookAt_PFU_01_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraLookAt_PFU_01.BP_TalkCameraLookAt_PFU_01_C.ReceiveTick");

	ABP_TalkCameraLookAt_PFU_01_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraLookAt_PFU_01.BP_TalkCameraLookAt_PFU_01_C.ExecuteUbergraph_BP_TalkCameraLookAt_PFU_01
// (NetRequest, NetMulticast, Public, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraLookAt_PFU_01_C::ExecuteUbergraph_BP_TalkCameraLookAt_PFU_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraLookAt_PFU_01.BP_TalkCameraLookAt_PFU_01_C.ExecuteUbergraph_BP_TalkCameraLookAt_PFU_01");

	ABP_TalkCameraLookAt_PFU_01_C_ExecuteUbergraph_BP_TalkCameraLookAt_PFU_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
