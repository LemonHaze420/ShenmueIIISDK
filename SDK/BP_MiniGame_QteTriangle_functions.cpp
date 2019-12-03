
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

// Function BP_MiniGame_QteTriangle.BP_MiniGame_QteTriangle_C.UserConstructionScript
// (NetReliable, Exec, Native, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_MiniGame_QteTriangle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangle.BP_MiniGame_QteTriangle_C.UserConstructionScript");

	ABP_MiniGame_QteTriangle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangle.BP_MiniGame_QteTriangle_C.ReceiveBeginPlay
// (NetReliable, Exec, Native, MulticastDelegate, Protected, HasOutParms, HasDefaults, DLLImport)

void ABP_MiniGame_QteTriangle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangle.BP_MiniGame_QteTriangle_C.ReceiveBeginPlay");

	ABP_MiniGame_QteTriangle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangle.BP_MiniGame_QteTriangle_C.ReceiveTick
// (NetRequest, NetResponse, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_QteTriangle_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangle.BP_MiniGame_QteTriangle_C.ReceiveTick");

	ABP_MiniGame_QteTriangle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangle.BP_MiniGame_QteTriangle_C.ExecuteUbergraph_BP_MiniGame_QteTriangle
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_QteTriangle_C::STATIC_ExecuteUbergraph_BP_MiniGame_QteTriangle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangle.BP_MiniGame_QteTriangle_C.ExecuteUbergraph_BP_MiniGame_QteTriangle");

	ABP_MiniGame_QteTriangle_C_ExecuteUbergraph_BP_MiniGame_QteTriangle_Params params;
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
