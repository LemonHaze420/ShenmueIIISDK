
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

// Function BP_TalkCamera_PBH_06.BP_TalkCamera_PBH_06_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TalkCamera_PBH_06_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_PBH_06.BP_TalkCamera_PBH_06_C.UserConstructionScript");

	ABP_TalkCamera_PBH_06_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_PBH_06.BP_TalkCamera_PBH_06_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TalkCamera_PBH_06_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_PBH_06.BP_TalkCamera_PBH_06_C.ReceiveBeginPlay");

	ABP_TalkCamera_PBH_06_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_PBH_06.BP_TalkCamera_PBH_06_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCamera_PBH_06_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_PBH_06.BP_TalkCamera_PBH_06_C.ReceiveTick");

	ABP_TalkCamera_PBH_06_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_PBH_06.BP_TalkCamera_PBH_06_C.ExecuteUbergraph_BP_TalkCamera_PBH_06
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCamera_PBH_06_C::ExecuteUbergraph_BP_TalkCamera_PBH_06(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_PBH_06.BP_TalkCamera_PBH_06_C.ExecuteUbergraph_BP_TalkCamera_PBH_06");

	ABP_TalkCamera_PBH_06_C_ExecuteUbergraph_BP_TalkCamera_PBH_06_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
