
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

// Function BP_TalkCamera_PBH_04.BP_TalkCamera_PBH_04_C.UserConstructionScript
// (Exec, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_TalkCamera_PBH_04_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_PBH_04.BP_TalkCamera_PBH_04_C.UserConstructionScript");

	ABP_TalkCamera_PBH_04_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_PBH_04.BP_TalkCamera_PBH_04_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Event, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_TalkCamera_PBH_04_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_PBH_04.BP_TalkCamera_PBH_04_C.ReceiveBeginPlay");

	ABP_TalkCamera_PBH_04_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_PBH_04.BP_TalkCamera_PBH_04_C.ReceiveTick
// (NetReliable, Exec, Native, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCamera_PBH_04_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_PBH_04.BP_TalkCamera_PBH_04_C.ReceiveTick");

	ABP_TalkCamera_PBH_04_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_PBH_04.BP_TalkCamera_PBH_04_C.ExecuteUbergraph_BP_TalkCamera_PBH_04
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCamera_PBH_04_C::STATIC_ExecuteUbergraph_BP_TalkCamera_PBH_04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_PBH_04.BP_TalkCamera_PBH_04_C.ExecuteUbergraph_BP_TalkCamera_PBH_04");

	ABP_TalkCamera_PBH_04_C_ExecuteUbergraph_BP_TalkCamera_PBH_04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
