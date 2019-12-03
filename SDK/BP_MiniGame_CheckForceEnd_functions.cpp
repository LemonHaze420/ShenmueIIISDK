
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

// Function BP_MiniGame_CheckForceEnd.BP_MiniGame_CheckForceEnd_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_CheckForceEnd_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CheckForceEnd.BP_MiniGame_CheckForceEnd_C.UserConstructionScript");

	ABP_MiniGame_CheckForceEnd_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CheckForceEnd.BP_MiniGame_CheckForceEnd_C.ReceiveTick
// (NetResponse, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CheckForceEnd_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CheckForceEnd.BP_MiniGame_CheckForceEnd_C.ReceiveTick");

	ABP_MiniGame_CheckForceEnd_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CheckForceEnd.BP_MiniGame_CheckForceEnd_C.ReceiveBeginPlay
// (Net, Event, NetResponse, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CheckForceEnd_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CheckForceEnd.BP_MiniGame_CheckForceEnd_C.ReceiveBeginPlay");

	ABP_MiniGame_CheckForceEnd_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CheckForceEnd.BP_MiniGame_CheckForceEnd_C.ExecuteUbergraph_BP_MiniGame_CheckForceEnd
// (NetReliable, Exec, Event, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CheckForceEnd_C::ExecuteUbergraph_BP_MiniGame_CheckForceEnd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CheckForceEnd.BP_MiniGame_CheckForceEnd_C.ExecuteUbergraph_BP_MiniGame_CheckForceEnd");

	ABP_MiniGame_CheckForceEnd_C_ExecuteUbergraph_BP_MiniGame_CheckForceEnd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
