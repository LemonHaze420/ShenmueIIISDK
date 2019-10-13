
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

// Function BP_InNarrowSpaceCamera_Single02.BP_InNarrowSpaceCamera_Single02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_InNarrowSpaceCamera_Single02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InNarrowSpaceCamera_Single02.BP_InNarrowSpaceCamera_Single02_C.UserConstructionScript");

	ABP_InNarrowSpaceCamera_Single02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InNarrowSpaceCamera_Single02.BP_InNarrowSpaceCamera_Single02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_InNarrowSpaceCamera_Single02_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InNarrowSpaceCamera_Single02.BP_InNarrowSpaceCamera_Single02_C.ReceiveBeginPlay");

	ABP_InNarrowSpaceCamera_Single02_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InNarrowSpaceCamera_Single02.BP_InNarrowSpaceCamera_Single02_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_InNarrowSpaceCamera_Single02_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InNarrowSpaceCamera_Single02.BP_InNarrowSpaceCamera_Single02_C.ReceiveTick");

	ABP_InNarrowSpaceCamera_Single02_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InNarrowSpaceCamera_Single02.BP_InNarrowSpaceCamera_Single02_C.ExecuteUbergraph_BP_InNarrowSpaceCamera_Single02
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_InNarrowSpaceCamera_Single02_C::ExecuteUbergraph_BP_InNarrowSpaceCamera_Single02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InNarrowSpaceCamera_Single02.BP_InNarrowSpaceCamera_Single02_C.ExecuteUbergraph_BP_InNarrowSpaceCamera_Single02");

	ABP_InNarrowSpaceCamera_Single02_C_ExecuteUbergraph_BP_InNarrowSpaceCamera_Single02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
