
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

// Function BP_MiniGame_QteTriangleSpawnLowerRight.BP_MiniGame_QteTriangleSpawnLowerRight_C.SetVisible
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_QteTriangleSpawnLowerRight_C::STATIC_SetVisible(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawnLowerRight.BP_MiniGame_QteTriangleSpawnLowerRight_C.SetVisible");

	ABP_MiniGame_QteTriangleSpawnLowerRight_C_SetVisible_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleSpawnLowerRight.BP_MiniGame_QteTriangleSpawnLowerRight_C.RemoveTriangle
// (NetReliable, Event, NetMulticast, MulticastDelegate, Protected, HasOutParms, NetClient, DLLImport)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_QteTriangleSpawnLowerRight_C::RemoveTriangle(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawnLowerRight.BP_MiniGame_QteTriangleSpawnLowerRight_C.RemoveTriangle");

	ABP_MiniGame_QteTriangleSpawnLowerRight_C_RemoveTriangle_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleSpawnLowerRight.BP_MiniGame_QteTriangleSpawnLowerRight_C.DestroyTriangle
// (Net, NetReliable, NetRequest, Exec, Static, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)

void ABP_MiniGame_QteTriangleSpawnLowerRight_C::STATIC_DestroyTriangle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawnLowerRight.BP_MiniGame_QteTriangleSpawnLowerRight_C.DestroyTriangle");

	ABP_MiniGame_QteTriangleSpawnLowerRight_C_DestroyTriangle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleSpawnLowerRight.BP_MiniGame_QteTriangleSpawnLowerRight_C.UserConstructionScript
// (NetReliable, Exec, Static, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_QteTriangleSpawnLowerRight_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawnLowerRight.BP_MiniGame_QteTriangleSpawnLowerRight_C.UserConstructionScript");

	ABP_MiniGame_QteTriangleSpawnLowerRight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleSpawnLowerRight.BP_MiniGame_QteTriangleSpawnLowerRight_C.ReceiveBeginPlay
// (Net, NetRequest, NetResponse, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_QteTriangleSpawnLowerRight_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawnLowerRight.BP_MiniGame_QteTriangleSpawnLowerRight_C.ReceiveBeginPlay");

	ABP_MiniGame_QteTriangleSpawnLowerRight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleSpawnLowerRight.BP_MiniGame_QteTriangleSpawnLowerRight_C.ReceiveTick
// (Net, NetReliable, Exec, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_QteTriangleSpawnLowerRight_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawnLowerRight.BP_MiniGame_QteTriangleSpawnLowerRight_C.ReceiveTick");

	ABP_MiniGame_QteTriangleSpawnLowerRight_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleSpawnLowerRight.BP_MiniGame_QteTriangleSpawnLowerRight_C.ExecuteUbergraph_BP_MiniGame_QteTriangleSpawnLowerRight
// (Net, NetReliable, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_QteTriangleSpawnLowerRight_C::ExecuteUbergraph_BP_MiniGame_QteTriangleSpawnLowerRight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawnLowerRight.BP_MiniGame_QteTriangleSpawnLowerRight_C.ExecuteUbergraph_BP_MiniGame_QteTriangleSpawnLowerRight");

	ABP_MiniGame_QteTriangleSpawnLowerRight_C_ExecuteUbergraph_BP_MiniGame_QteTriangleSpawnLowerRight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
