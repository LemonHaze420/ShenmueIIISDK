
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

// Function BP_TalkCameraShowItemZoom_SCU_04.BP_TalkCameraShowItemZoom_SCU_04_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, Native, Event, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_TalkCameraShowItemZoom_SCU_04_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoom_SCU_04.BP_TalkCameraShowItemZoom_SCU_04_C.UserConstructionScript");

	ABP_TalkCameraShowItemZoom_SCU_04_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoom_SCU_04.BP_TalkCameraShowItemZoom_SCU_04_C.ReceiveBeginPlay
// (Exec, Native, NetResponse, Static, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TalkCameraShowItemZoom_SCU_04_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoom_SCU_04.BP_TalkCameraShowItemZoom_SCU_04_C.ReceiveBeginPlay");

	ABP_TalkCameraShowItemZoom_SCU_04_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoom_SCU_04.BP_TalkCameraShowItemZoom_SCU_04_C.ReceiveTick
// (NetRequest, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraShowItemZoom_SCU_04_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoom_SCU_04.BP_TalkCameraShowItemZoom_SCU_04_C.ReceiveTick");

	ABP_TalkCameraShowItemZoom_SCU_04_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoom_SCU_04.BP_TalkCameraShowItemZoom_SCU_04_C.ExecuteUbergraph_BP_TalkCameraShowItemZoom_SCU_04
// (Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraShowItemZoom_SCU_04_C::ExecuteUbergraph_BP_TalkCameraShowItemZoom_SCU_04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoom_SCU_04.BP_TalkCameraShowItemZoom_SCU_04_C.ExecuteUbergraph_BP_TalkCameraShowItemZoom_SCU_04");

	ABP_TalkCameraShowItemZoom_SCU_04_C_ExecuteUbergraph_BP_TalkCameraShowItemZoom_SCU_04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
