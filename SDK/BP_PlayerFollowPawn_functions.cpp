
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

// Function BP_PlayerFollowPawn.BP_PlayerFollowPawn_C.UserConstructionScript
// (Exec, Native, Event, NetResponse, Static, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_PlayerFollowPawn_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowPawn.BP_PlayerFollowPawn_C.UserConstructionScript");

	ABP_PlayerFollowPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowPawn.BP_PlayerFollowPawn_C.ReceiveTick
// (Native, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerFollowPawn_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowPawn.BP_PlayerFollowPawn_C.ReceiveTick");

	ABP_PlayerFollowPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowPawn.BP_PlayerFollowPawn_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_PlayerFollowPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowPawn.BP_PlayerFollowPawn_C.ReceiveBeginPlay");

	ABP_PlayerFollowPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowPawn.BP_PlayerFollowPawn_C.ExecuteUbergraph_BP_PlayerFollowPawn
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Private, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerFollowPawn_C::STATIC_ExecuteUbergraph_BP_PlayerFollowPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowPawn.BP_PlayerFollowPawn_C.ExecuteUbergraph_BP_PlayerFollowPawn");

	ABP_PlayerFollowPawn_C_ExecuteUbergraph_BP_PlayerFollowPawn_Params params;
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
