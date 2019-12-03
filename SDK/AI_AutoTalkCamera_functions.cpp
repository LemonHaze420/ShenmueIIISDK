
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

// Function AI_AutoTalkCamera.AI_AutoTalkCamera_C.UserConstructionScript
// (Net, NetReliable, Event, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void AAI_AutoTalkCamera_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_AutoTalkCamera.AI_AutoTalkCamera_C.UserConstructionScript");

	AAI_AutoTalkCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AI_AutoTalkCamera.AI_AutoTalkCamera_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void AAI_AutoTalkCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_AutoTalkCamera.AI_AutoTalkCamera_C.ReceiveBeginPlay");

	AAI_AutoTalkCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AI_AutoTalkCamera.AI_AutoTalkCamera_C.ExecuteUbergraph_AI_AutoTalkCamera
// (NetRequest, NetResponse, Static, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAI_AutoTalkCamera_C::STATIC_ExecuteUbergraph_AI_AutoTalkCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_AutoTalkCamera.AI_AutoTalkCamera_C.ExecuteUbergraph_AI_AutoTalkCamera");

	AAI_AutoTalkCamera_C_ExecuteUbergraph_AI_AutoTalkCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
