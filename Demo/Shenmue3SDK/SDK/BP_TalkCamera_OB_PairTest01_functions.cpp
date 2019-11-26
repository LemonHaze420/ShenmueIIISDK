
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

// Function BP_TalkCamera_OB_PairTest01.BP_TalkCamera_OB_PairTest01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TalkCamera_OB_PairTest01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_OB_PairTest01.BP_TalkCamera_OB_PairTest01_C.UserConstructionScript");

	ABP_TalkCamera_OB_PairTest01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_OB_PairTest01.BP_TalkCamera_OB_PairTest01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TalkCamera_OB_PairTest01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_OB_PairTest01.BP_TalkCamera_OB_PairTest01_C.ReceiveBeginPlay");

	ABP_TalkCamera_OB_PairTest01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_OB_PairTest01.BP_TalkCamera_OB_PairTest01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCamera_OB_PairTest01_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_OB_PairTest01.BP_TalkCamera_OB_PairTest01_C.ReceiveTick");

	ABP_TalkCamera_OB_PairTest01_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCamera_OB_PairTest01.BP_TalkCamera_OB_PairTest01_C.ExecuteUbergraph_BP_TalkCamera_OB_PairTest01
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCamera_OB_PairTest01_C::ExecuteUbergraph_BP_TalkCamera_OB_PairTest01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCamera_OB_PairTest01.BP_TalkCamera_OB_PairTest01_C.ExecuteUbergraph_BP_TalkCamera_OB_PairTest01");

	ABP_TalkCamera_OB_PairTest01_C_ExecuteUbergraph_BP_TalkCamera_OB_PairTest01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
