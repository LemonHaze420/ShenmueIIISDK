
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

// Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.GetLookTargetSocketLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName*                  InSocketName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_TalkCameraShowItemZoomBase_C::GetLookTargetSocketLocation(struct FName* InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.GetLookTargetSocketLocation");

	ABP_TalkCameraShowItemZoomBase_C_GetLookTargetSocketLocation_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TalkCameraShowItemZoomBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.UserConstructionScript");

	ABP_TalkCameraShowItemZoomBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TalkCameraShowItemZoomBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.ReceiveBeginPlay");

	ABP_TalkCameraShowItemZoomBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraShowItemZoomBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.ReceiveTick");

	ABP_TalkCameraShowItemZoomBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.ExecuteUbergraph_BP_TalkCameraShowItemZoomBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraShowItemZoomBase_C::ExecuteUbergraph_BP_TalkCameraShowItemZoomBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.ExecuteUbergraph_BP_TalkCameraShowItemZoomBase");

	ABP_TalkCameraShowItemZoomBase_C_ExecuteUbergraph_BP_TalkCameraShowItemZoomBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
