
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

// Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.SetVisible
// (NetReliable, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChooseTriangleSpawn_C::STATIC_SetVisible(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.SetVisible");

	ABP_MiniGameChooseTriangleSpawn_C_SetVisible_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.RemoveTriangle
// (Net, NetRequest, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChooseTriangleSpawn_C::RemoveTriangle(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.RemoveTriangle");

	ABP_MiniGameChooseTriangleSpawn_C_RemoveTriangle_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.DestroyTriangle
// (Net, NetReliable, Native, Static, NetMulticast, Private, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGameChooseTriangleSpawn_C::STATIC_DestroyTriangle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.DestroyTriangle");

	ABP_MiniGameChooseTriangleSpawn_C_DestroyTriangle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.UserConstructionScript
// (Net, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_MiniGameChooseTriangleSpawn_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.UserConstructionScript");

	ABP_MiniGameChooseTriangleSpawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.ReceiveTick
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChooseTriangleSpawn_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.ReceiveTick");

	ABP_MiniGameChooseTriangleSpawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.ExecuteUbergraph_BP_MiniGameChooseTriangleSpawn
// (NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChooseTriangleSpawn_C::STATIC_ExecuteUbergraph_BP_MiniGameChooseTriangleSpawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.ExecuteUbergraph_BP_MiniGameChooseTriangleSpawn");

	ABP_MiniGameChooseTriangleSpawn_C_ExecuteUbergraph_BP_MiniGameChooseTriangleSpawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
