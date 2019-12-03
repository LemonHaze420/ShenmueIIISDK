
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

// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.SetVisible
// (NetMulticast, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_QteTriangleSpawn_C::SetVisible(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.SetVisible");

	ABP_MiniGame_QteTriangleSpawn_C_SetVisible_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.RemoveTriangle
// (NetReliable, Exec, Event, Static, Public, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_QteTriangleSpawn_C::STATIC_RemoveTriangle(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.RemoveTriangle");

	ABP_MiniGame_QteTriangleSpawn_C_RemoveTriangle_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.DestroyTriangle
// (NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_QteTriangleSpawn_C::DestroyTriangle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.DestroyTriangle");

	ABP_MiniGame_QteTriangleSpawn_C_DestroyTriangle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.UserConstructionScript
// (NetReliable, NetRequest, NetResponse, Public, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_QteTriangleSpawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.UserConstructionScript");

	ABP_MiniGame_QteTriangleSpawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.ReceiveBeginPlay
// (Net, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_QteTriangleSpawn_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.ReceiveBeginPlay");

	ABP_MiniGame_QteTriangleSpawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.ReceiveTick
// (Net, NetReliable, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_QteTriangleSpawn_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.ReceiveTick");

	ABP_MiniGame_QteTriangleSpawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.ExecuteUbergraph_BP_MiniGame_QteTriangleSpawn
// (NetReliable, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_QteTriangleSpawn_C::STATIC_ExecuteUbergraph_BP_MiniGame_QteTriangleSpawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.ExecuteUbergraph_BP_MiniGame_QteTriangleSpawn");

	ABP_MiniGame_QteTriangleSpawn_C_ExecuteUbergraph_BP_MiniGame_QteTriangleSpawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
