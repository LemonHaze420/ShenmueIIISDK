
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

// Function BP_TalkCamera_SBH_08.BP_TalkCamera_SBH_08_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_TalkCamera_SBH_08_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_SBH_08.BP_TalkCamera_SBH_08_C.UserConstructionScript");

	ABP_TalkCamera_SBH_08_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_SBH_08.BP_TalkCamera_SBH_08_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TalkCamera_SBH_08_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_SBH_08.BP_TalkCamera_SBH_08_C.ReceiveBeginPlay");

	ABP_TalkCamera_SBH_08_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_SBH_08.BP_TalkCamera_SBH_08_C.ReceiveTick
// (Net, NetReliable, NetRequest, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCamera_SBH_08_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_SBH_08.BP_TalkCamera_SBH_08_C.ReceiveTick");

	ABP_TalkCamera_SBH_08_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_SBH_08.BP_TalkCamera_SBH_08_C.ExecuteUbergraph_BP_TalkCamera_SBH_08
// (NetReliable, NetRequest, Exec, Native, Static, Public, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCamera_SBH_08_C::STATIC_ExecuteUbergraph_BP_TalkCamera_SBH_08(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_SBH_08.BP_TalkCamera_SBH_08_C.ExecuteUbergraph_BP_TalkCamera_SBH_08");

	ABP_TalkCamera_SBH_08_C_ExecuteUbergraph_BP_TalkCamera_SBH_08_Params params;
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
