
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

// Function BP_TalkCameraAC_CraneUp_PBH_04.BP_TalkCameraAC_CraneUp_PBH_04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TalkCameraAC_CraneUp_PBH_04_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraAC_CraneUp_PBH_04.BP_TalkCameraAC_CraneUp_PBH_04_C.UserConstructionScript");

	ABP_TalkCameraAC_CraneUp_PBH_04_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraAC_CraneUp_PBH_04.BP_TalkCameraAC_CraneUp_PBH_04_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TalkCameraAC_CraneUp_PBH_04_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraAC_CraneUp_PBH_04.BP_TalkCameraAC_CraneUp_PBH_04_C.ReceiveBeginPlay");

	ABP_TalkCameraAC_CraneUp_PBH_04_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraAC_CraneUp_PBH_04.BP_TalkCameraAC_CraneUp_PBH_04_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraAC_CraneUp_PBH_04_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraAC_CraneUp_PBH_04.BP_TalkCameraAC_CraneUp_PBH_04_C.ReceiveTick");

	ABP_TalkCameraAC_CraneUp_PBH_04_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraAC_CraneUp_PBH_04.BP_TalkCameraAC_CraneUp_PBH_04_C.ExecuteUbergraph_BP_TalkCameraAC_CraneUp_PBH_04
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraAC_CraneUp_PBH_04_C::ExecuteUbergraph_BP_TalkCameraAC_CraneUp_PBH_04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraAC_CraneUp_PBH_04.BP_TalkCameraAC_CraneUp_PBH_04_C.ExecuteUbergraph_BP_TalkCameraAC_CraneUp_PBH_04");

	ABP_TalkCameraAC_CraneUp_PBH_04_C_ExecuteUbergraph_BP_TalkCameraAC_CraneUp_PBH_04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
