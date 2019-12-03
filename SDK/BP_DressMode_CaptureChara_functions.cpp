
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

// Function BP_DressMode_CaptureChara.BP_DressMode_CaptureChara_C.UserConstructionScript
// (NetRequest, NetResponse, Public, Private, Protected, NetClient, Const)

void ABP_DressMode_CaptureChara_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DressMode_CaptureChara.BP_DressMode_CaptureChara_C.UserConstructionScript");

	ABP_DressMode_CaptureChara_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DressMode_CaptureChara.BP_DressMode_CaptureChara_C.ReceiveTick
// (NetReliable, Exec, Native, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DressMode_CaptureChara_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DressMode_CaptureChara.BP_DressMode_CaptureChara_C.ReceiveTick");

	ABP_DressMode_CaptureChara_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DressMode_CaptureChara.BP_DressMode_CaptureChara_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_DressMode_CaptureChara_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DressMode_CaptureChara.BP_DressMode_CaptureChara_C.ReceiveBeginPlay");

	ABP_DressMode_CaptureChara_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DressMode_CaptureChara.BP_DressMode_CaptureChara_C.ExecuteUbergraph_BP_DressMode_CaptureChara
// (NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Const)
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
