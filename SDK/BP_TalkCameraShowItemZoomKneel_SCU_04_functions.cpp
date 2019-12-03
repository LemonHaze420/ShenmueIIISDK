
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

// Function BP_TalkCameraShowItemZoomKneel_SCU_04.BP_TalkCameraShowItemZoomKneel_SCU_04_C.UserConstructionScript
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_TalkCameraShowItemZoomKneel_SCU_04_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomKneel_SCU_04.BP_TalkCameraShowItemZoomKneel_SCU_04_C.UserConstructionScript");

	ABP_TalkCameraShowItemZoomKneel_SCU_04_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoomKneel_SCU_04.BP_TalkCameraShowItemZoomKneel_SCU_04_C.ReceiveBeginPlay
// (NetRequest, Exec, NetResponse, Static, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TalkCameraShowItemZoomKneel_SCU_04_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomKneel_SCU_04.BP_TalkCameraShowItemZoomKneel_SCU_04_C.ReceiveBeginPlay");

	ABP_TalkCameraShowItemZoomKneel_SCU_04_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoomKneel_SCU_04.BP_TalkCameraShowItemZoomKneel_SCU_04_C.ReceiveTick
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraShowItemZoomKneel_SCU_04_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomKneel_SCU_04.BP_TalkCameraShowItemZoomKneel_SCU_04_C.ReceiveTick");

	ABP_TalkCameraShowItemZoomKneel_SCU_04_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoomKneel_SCU_04.BP_TalkCameraShowItemZoomKneel_SCU_04_C.ExecuteUbergraph_BP_TalkCameraShowItemZoomKneel_SCU_04
// (Net, NetRequest, Exec, MulticastDelegate, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraShowItemZoomKneel_SCU_04_C::ExecuteUbergraph_BP_TalkCameraShowItemZoomKneel_SCU_04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomKneel_SCU_04.BP_TalkCameraShowItemZoomKneel_SCU_04_C.ExecuteUbergraph_BP_TalkCameraShowItemZoomKneel_SCU_04");

	ABP_TalkCameraShowItemZoomKneel_SCU_04_C_ExecuteUbergraph_BP_TalkCameraShowItemZoomKneel_SCU_04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
