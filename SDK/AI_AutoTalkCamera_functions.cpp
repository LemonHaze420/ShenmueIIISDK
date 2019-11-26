
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

// Function AI_AutoTalkCamera.AI_AutoTalkCamera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAI_AutoTalkCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_AutoTalkCamera.AI_AutoTalkCamera_C.UserConstructionScript");

	AAI_AutoTalkCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AI_AutoTalkCamera.AI_AutoTalkCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAI_AutoTalkCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_AutoTalkCamera.AI_AutoTalkCamera_C.ReceiveBeginPlay");

	AAI_AutoTalkCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AI_AutoTalkCamera.AI_AutoTalkCamera_C.ExecuteUbergraph_AI_AutoTalkCamera
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAI_AutoTalkCamera_C::ExecuteUbergraph_AI_AutoTalkCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_AutoTalkCamera.AI_AutoTalkCamera_C.ExecuteUbergraph_AI_AutoTalkCamera");

	AAI_AutoTalkCamera_C_ExecuteUbergraph_AI_AutoTalkCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
