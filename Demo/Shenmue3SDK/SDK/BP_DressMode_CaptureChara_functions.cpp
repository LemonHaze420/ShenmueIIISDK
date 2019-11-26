
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

// Function BP_DressMode_CaptureChara.BP_DressMode_CaptureChara_C.GetClothMeshComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_DressMode_CaptureChara_C::GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DressMode_CaptureChara.BP_DressMode_CaptureChara_C.GetClothMeshComponent");

	ABP_DressMode_CaptureChara_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DressMode_CaptureChara.BP_DressMode_CaptureChara_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DressMode_CaptureChara_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DressMode_CaptureChara.BP_DressMode_CaptureChara_C.UserConstructionScript");

	ABP_DressMode_CaptureChara_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DressMode_CaptureChara.BP_DressMode_CaptureChara_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DressMode_CaptureChara_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DressMode_CaptureChara.BP_DressMode_CaptureChara_C.ReceiveTick");

	ABP_DressMode_CaptureChara_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DressMode_CaptureChara.BP_DressMode_CaptureChara_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DressMode_CaptureChara_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DressMode_CaptureChara.BP_DressMode_CaptureChara_C.ReceiveBeginPlay");

	ABP_DressMode_CaptureChara_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DressMode_CaptureChara.BP_DressMode_CaptureChara_C.ExecuteUbergraph_BP_DressMode_CaptureChara
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DressMode_CaptureChara_C::ExecuteUbergraph_BP_DressMode_CaptureChara(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DressMode_CaptureChara.BP_DressMode_CaptureChara_C.ExecuteUbergraph_BP_DressMode_CaptureChara");

	ABP_DressMode_CaptureChara_C_ExecuteUbergraph_BP_DressMode_CaptureChara_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
