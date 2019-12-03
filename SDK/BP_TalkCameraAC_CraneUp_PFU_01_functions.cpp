
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

// Function BP_TalkCameraAC_CraneUp_PFU_01.BP_TalkCameraAC_CraneUp_PFU_01_C.UserConstructionScript
// (NetReliable, NetRequest, Native, Event, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_TalkCameraAC_CraneUp_PFU_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraAC_CraneUp_PFU_01.BP_TalkCameraAC_CraneUp_PFU_01_C.UserConstructionScript");

	ABP_TalkCameraAC_CraneUp_PFU_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraAC_CraneUp_PFU_01.BP_TalkCameraAC_CraneUp_PFU_01_C.ReceiveBeginPlay
// (Exec, NetResponse, NetMulticast, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TalkCameraAC_CraneUp_PFU_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraAC_CraneUp_PFU_01.BP_TalkCameraAC_CraneUp_PFU_01_C.ReceiveBeginPlay");

	ABP_TalkCameraAC_CraneUp_PFU_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraAC_CraneUp_PFU_01.BP_TalkCameraAC_CraneUp_PFU_01_C.ReceiveTick
// (NetRequest, Native, NetResponse, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraAC_CraneUp_PFU_01_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraAC_CraneUp_PFU_01.BP_TalkCameraAC_CraneUp_PFU_01_C.ReceiveTick");

	ABP_TalkCameraAC_CraneUp_PFU_01_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraAC_CraneUp_PFU_01.BP_TalkCameraAC_CraneUp_PFU_01_C.ExecuteUbergraph_BP_TalkCameraAC_CraneUp_PFU_01
// (Native, Event, NetResponse, Static, Public, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraAC_CraneUp_PFU_01_C::STATIC_ExecuteUbergraph_BP_TalkCameraAC_CraneUp_PFU_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraAC_CraneUp_PFU_01.BP_TalkCameraAC_CraneUp_PFU_01_C.ExecuteUbergraph_BP_TalkCameraAC_CraneUp_PFU_01");

	ABP_TalkCameraAC_CraneUp_PFU_01_C_ExecuteUbergraph_BP_TalkCameraAC_CraneUp_PFU_01_Params params;
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
