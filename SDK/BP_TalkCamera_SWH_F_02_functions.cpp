
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

// Function BP_TalkCamera_SWH_F_02.BP_TalkCamera_SWH_F_02_C.UserConstructionScript
// (NetReliable, NetRequest, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_TalkCamera_SWH_F_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_SWH_F_02.BP_TalkCamera_SWH_F_02_C.UserConstructionScript");

	ABP_TalkCamera_SWH_F_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_SWH_F_02.BP_TalkCamera_SWH_F_02_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TalkCamera_SWH_F_02_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_SWH_F_02.BP_TalkCamera_SWH_F_02_C.ReceiveBeginPlay");

	ABP_TalkCamera_SWH_F_02_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_SWH_F_02.BP_TalkCamera_SWH_F_02_C.ReceiveTick
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCamera_SWH_F_02_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_SWH_F_02.BP_TalkCamera_SWH_F_02_C.ReceiveTick");

	ABP_TalkCamera_SWH_F_02_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_SWH_F_02.BP_TalkCamera_SWH_F_02_C.ExecuteUbergraph_BP_TalkCamera_SWH_F_02
// (Net, NetReliable, NetMulticast, Public, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCamera_SWH_F_02_C::ExecuteUbergraph_BP_TalkCamera_SWH_F_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_SWH_F_02.BP_TalkCamera_SWH_F_02_C.ExecuteUbergraph_BP_TalkCamera_SWH_F_02");

	ABP_TalkCamera_SWH_F_02_C_ExecuteUbergraph_BP_TalkCamera_SWH_F_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
