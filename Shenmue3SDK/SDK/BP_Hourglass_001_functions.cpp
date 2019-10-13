
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

// Function BP_Hourglass_001.BP_Hourglass_001_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Hourglass_001_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hourglass_001.BP_Hourglass_001_C.UserConstructionScript");

	ABP_Hourglass_001_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hourglass_001.BP_Hourglass_001_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Hourglass_001_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hourglass_001.BP_Hourglass_001_C.Timeline_0__FinishedFunc");

	ABP_Hourglass_001_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hourglass_001.BP_Hourglass_001_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Hourglass_001_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hourglass_001.BP_Hourglass_001_C.Timeline_0__UpdateFunc");

	ABP_Hourglass_001_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hourglass_001.BP_Hourglass_001_C.Timeline_0__NewTrack_4__EventFunc
// (BlueprintEvent)

void ABP_Hourglass_001_C::Timeline_0__NewTrack_4__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hourglass_001.BP_Hourglass_001_C.Timeline_0__NewTrack_4__EventFunc");

	ABP_Hourglass_001_C_Timeline_0__NewTrack_4__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hourglass_001.BP_Hourglass_001_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Hourglass_001_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hourglass_001.BP_Hourglass_001_C.ReceiveBeginPlay");

	ABP_Hourglass_001_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hourglass_001.BP_Hourglass_001_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hourglass_001_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hourglass_001.BP_Hourglass_001_C.ReceiveTick");

	ABP_Hourglass_001_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hourglass_001.BP_Hourglass_001_C.ExecuteUbergraph_BP_Hourglass_001
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hourglass_001_C::ExecuteUbergraph_BP_Hourglass_001(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hourglass_001.BP_Hourglass_001_C.ExecuteUbergraph_BP_Hourglass_001");

	ABP_Hourglass_001_C_ExecuteUbergraph_BP_Hourglass_001_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
