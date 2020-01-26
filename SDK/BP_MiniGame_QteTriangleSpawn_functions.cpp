
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_QteTriangleSpawn_C::RemoveTriangle(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.RemoveTriangle");

	ABP_MiniGame_QteTriangleSpawn_C_RemoveTriangle_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.DestroyTriangle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_QteTriangleSpawn_C::DestroyTriangle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.DestroyTriangle");

	ABP_MiniGame_QteTriangleSpawn_C_DestroyTriangle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_QteTriangleSpawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.UserConstructionScript");

	ABP_MiniGame_QteTriangleSpawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_QteTriangleSpawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.ReceiveBeginPlay");

	ABP_MiniGame_QteTriangleSpawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_QteTriangleSpawn_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.ReceiveTick");

	ABP_MiniGame_QteTriangleSpawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.ExecuteUbergraph_BP_MiniGame_QteTriangleSpawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_QteTriangleSpawn_C::ExecuteUbergraph_BP_MiniGame_QteTriangleSpawn(int EntryPoint)
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
