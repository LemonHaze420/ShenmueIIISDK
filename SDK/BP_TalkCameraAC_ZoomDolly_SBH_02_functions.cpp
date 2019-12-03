
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

// Function BP_TalkCameraAC_ZoomDolly_SBH_02.BP_TalkCameraAC_ZoomDolly_SBH_02_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_TalkCameraAC_ZoomDolly_SBH_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraAC_ZoomDolly_SBH_02.BP_TalkCameraAC_ZoomDolly_SBH_02_C.UserConstructionScript");

	ABP_TalkCameraAC_ZoomDolly_SBH_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraAC_ZoomDolly_SBH_02.BP_TalkCameraAC_ZoomDolly_SBH_02_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, Event, NetResponse, Static, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TalkCameraAC_ZoomDolly_SBH_02_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraAC_ZoomDolly_SBH_02.BP_TalkCameraAC_ZoomDolly_SBH_02_C.ReceiveBeginPlay");

	ABP_TalkCameraAC_ZoomDolly_SBH_02_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraAC_ZoomDolly_SBH_02.BP_TalkCameraAC_ZoomDolly_SBH_02_C.ReceiveTick
// (NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraAC_ZoomDolly_SBH_02_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraAC_ZoomDolly_SBH_02.BP_TalkCameraAC_ZoomDolly_SBH_02_C.ReceiveTick");

	ABP_TalkCameraAC_ZoomDolly_SBH_02_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraAC_ZoomDolly_SBH_02.BP_TalkCameraAC_ZoomDolly_SBH_02_C.ExecuteUbergraph_BP_TalkCameraAC_ZoomDolly_SBH_02
// (Net, Exec, Event, NetResponse, Static, Public, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraAC_ZoomDolly_SBH_02_C::STATIC_ExecuteUbergraph_BP_TalkCameraAC_ZoomDolly_SBH_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraAC_ZoomDolly_SBH_02.BP_TalkCameraAC_ZoomDolly_SBH_02_C.ExecuteUbergraph_BP_TalkCameraAC_ZoomDolly_SBH_02");

	ABP_TalkCameraAC_ZoomDolly_SBH_02_C_ExecuteUbergraph_BP_TalkCameraAC_ZoomDolly_SBH_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
