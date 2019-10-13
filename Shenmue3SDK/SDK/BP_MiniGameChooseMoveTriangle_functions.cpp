
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_MiniGameChooseMoveTriangle.BP_MiniGameChooseMoveTriangle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameChooseMoveTriangle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseMoveTriangle.BP_MiniGameChooseMoveTriangle_C.UserConstructionScript");

	ABP_MiniGameChooseMoveTriangle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseMoveTriangle.BP_MiniGameChooseMoveTriangle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGameChooseMoveTriangle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseMoveTriangle.BP_MiniGameChooseMoveTriangle_C.ReceiveBeginPlay");

	ABP_MiniGameChooseMoveTriangle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseMoveTriangle.BP_MiniGameChooseMoveTriangle_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChooseMoveTriangle_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseMoveTriangle.BP_MiniGameChooseMoveTriangle_C.ReceiveTick");

	ABP_MiniGameChooseMoveTriangle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseMoveTriangle.BP_MiniGameChooseMoveTriangle_C.ExecuteUbergraph_BP_MiniGameChooseMoveTriangle
// (HasDefaults)
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
