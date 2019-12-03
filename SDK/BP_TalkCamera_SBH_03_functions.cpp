
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

// Function BP_TalkCamera_SBH_03.BP_TalkCamera_SBH_03_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_TalkCamera_SBH_03_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_SBH_03.BP_TalkCamera_SBH_03_C.UserConstructionScript");

	ABP_TalkCamera_SBH_03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_SBH_03.BP_TalkCamera_SBH_03_C.ReceiveBeginPlay
// (NetRequest, Exec, Native, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_TalkCamera_SBH_03_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_SBH_03.BP_TalkCamera_SBH_03_C.ReceiveBeginPlay");

	ABP_TalkCamera_SBH_03_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_SBH_03.BP_TalkCamera_SBH_03_C.ReceiveTick
// (Net, NetReliable, Event, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCamera_SBH_03_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_SBH_03.BP_TalkCamera_SBH_03_C.ReceiveTick");

	ABP_TalkCamera_SBH_03_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_SBH_03.BP_TalkCamera_SBH_03_C.ExecuteUbergraph_BP_TalkCamera_SBH_03
// (Net, Exec, NetResponse, Public, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCamera_SBH_03_C::ExecuteUbergraph_BP_TalkCamera_SBH_03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_SBH_03.BP_TalkCamera_SBH_03_C.ExecuteUbergraph_BP_TalkCamera_SBH_03");

	ABP_TalkCamera_SBH_03_C_ExecuteUbergraph_BP_TalkCamera_SBH_03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
