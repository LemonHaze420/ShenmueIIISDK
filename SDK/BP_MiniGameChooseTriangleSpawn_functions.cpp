
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

// Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChooseTriangleSpawn_C::SetVisible(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.SetVisible");

	ABP_MiniGameChooseTriangleSpawn_C_SetVisible_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.RemoveTriangle
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameChooseTriangleSpawn_C::DestroyTriangle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.DestroyTriangle");

	ABP_MiniGameChooseTriangleSpawn_C_DestroyTriangle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameChooseTriangleSpawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.UserConstructionScript");

	ABP_MiniGameChooseTriangleSpawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChooseTriangleSpawn_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.ReceiveTick");

	ABP_MiniGameChooseTriangleSpawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.ExecuteUbergraph_BP_MiniGameChooseTriangleSpawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChooseTriangleSpawn_C::ExecuteUbergraph_BP_MiniGameChooseTriangleSpawn(int EntryPoint)
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
