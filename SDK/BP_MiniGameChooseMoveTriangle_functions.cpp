
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

// Function BP_MiniGameChooseMoveTriangle.BP_MiniGameChooseMoveTriangle_C.UserConstructionScript
// (Net, Exec, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_MiniGameChooseMoveTriangle_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseMoveTriangle.BP_MiniGameChooseMoveTriangle_C.UserConstructionScript");

	ABP_MiniGameChooseMoveTriangle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseMoveTriangle.BP_MiniGameChooseMoveTriangle_C.ReceiveBeginPlay
// (Net, Exec, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGameChooseMoveTriangle_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseMoveTriangle.BP_MiniGameChooseMoveTriangle_C.ReceiveBeginPlay");

	ABP_MiniGameChooseMoveTriangle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseMoveTriangle.BP_MiniGameChooseMoveTriangle_C.ReceiveTick
// (Net, NetRequest, Native, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChooseMoveTriangle_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseMoveTriangle.BP_MiniGameChooseMoveTriangle_C.ReceiveTick");

	ABP_MiniGameChooseMoveTriangle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseMoveTriangle.BP_MiniGameChooseMoveTriangle_C.ExecuteUbergraph_BP_MiniGameChooseMoveTriangle
// (NetReliable, Exec, NetResponse, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChooseMoveTriangle_C::ExecuteUbergraph_BP_MiniGameChooseMoveTriangle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseMoveTriangle.BP_MiniGameChooseMoveTriangle_C.ExecuteUbergraph_BP_MiniGameChooseMoveTriangle");

	ABP_MiniGameChooseMoveTriangle_C_ExecuteUbergraph_BP_MiniGameChooseMoveTriangle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
