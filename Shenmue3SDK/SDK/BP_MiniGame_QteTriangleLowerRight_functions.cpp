
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

// Function BP_MiniGame_QteTriangleLowerRight.BP_MiniGame_QteTriangleLowerRight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_QteTriangleLowerRight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleLowerRight.BP_MiniGame_QteTriangleLowerRight_C.UserConstructionScript");

	ABP_MiniGame_QteTriangleLowerRight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleLowerRight.BP_MiniGame_QteTriangleLowerRight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_QteTriangleLowerRight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleLowerRight.BP_MiniGame_QteTriangleLowerRight_C.ReceiveBeginPlay");

	ABP_MiniGame_QteTriangleLowerRight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleLowerRight.BP_MiniGame_QteTriangleLowerRight_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_QteTriangleLowerRight_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleLowerRight.BP_MiniGame_QteTriangleLowerRight_C.ReceiveTick");

	ABP_MiniGame_QteTriangleLowerRight_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_QteTriangleLowerRight.BP_MiniGame_QteTriangleLowerRight_C.ExecuteUbergraph_BP_MiniGame_QteTriangleLowerRight
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_QteTriangleLowerRight_C::ExecuteUbergraph_BP_MiniGame_QteTriangleLowerRight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_QteTriangleLowerRight.BP_MiniGame_QteTriangleLowerRight_C.ExecuteUbergraph_BP_MiniGame_QteTriangleLowerRight");

	ABP_MiniGame_QteTriangleLowerRight_C_ExecuteUbergraph_BP_MiniGame_QteTriangleLowerRight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
