
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

// Function BP_TalkCameraShowItemZoomKneel_SCU_01.BP_TalkCameraShowItemZoomKneel_SCU_01_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_TalkCameraShowItemZoomKneel_SCU_01_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomKneel_SCU_01.BP_TalkCameraShowItemZoomKneel_SCU_01_C.UserConstructionScript");

	ABP_TalkCameraShowItemZoomKneel_SCU_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoomKneel_SCU_01.BP_TalkCameraShowItemZoomKneel_SCU_01_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TalkCameraShowItemZoomKneel_SCU_01_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomKneel_SCU_01.BP_TalkCameraShowItemZoomKneel_SCU_01_C.ReceiveBeginPlay");

	ABP_TalkCameraShowItemZoomKneel_SCU_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoomKneel_SCU_01.BP_TalkCameraShowItemZoomKneel_SCU_01_C.ReceiveTick
// (Net, NetReliable, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraShowItemZoomKneel_SCU_01_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomKneel_SCU_01.BP_TalkCameraShowItemZoomKneel_SCU_01_C.ReceiveTick");

	ABP_TalkCameraShowItemZoomKneel_SCU_01_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoomKneel_SCU_01.BP_TalkCameraShowItemZoomKneel_SCU_01_C.ExecuteUbergraph_BP_TalkCameraShowItemZoomKneel_SCU_01
// (Net, Event, Static, MulticastDelegate, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraShowItemZoomKneel_SCU_01_C::STATIC_ExecuteUbergraph_BP_TalkCameraShowItemZoomKneel_SCU_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomKneel_SCU_01.BP_TalkCameraShowItemZoomKneel_SCU_01_C.ExecuteUbergraph_BP_TalkCameraShowItemZoomKneel_SCU_01");

	ABP_TalkCameraShowItemZoomKneel_SCU_01_C_ExecuteUbergraph_BP_TalkCameraShowItemZoomKneel_SCU_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
