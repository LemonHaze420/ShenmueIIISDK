
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_TalkCameraShowItemZoomKneel_SCU_03.BP_TalkCameraShowItemZoomKneel_SCU_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TalkCameraShowItemZoomKneel_SCU_03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomKneel_SCU_03.BP_TalkCameraShowItemZoomKneel_SCU_03_C.UserConstructionScript");

	ABP_TalkCameraShowItemZoomKneel_SCU_03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoomKneel_SCU_03.BP_TalkCameraShowItemZoomKneel_SCU_03_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TalkCameraShowItemZoomKneel_SCU_03_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomKneel_SCU_03.BP_TalkCameraShowItemZoomKneel_SCU_03_C.ReceiveBeginPlay");

	ABP_TalkCameraShowItemZoomKneel_SCU_03_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoomKneel_SCU_03.BP_TalkCameraShowItemZoomKneel_SCU_03_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraShowItemZoomKneel_SCU_03_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomKneel_SCU_03.BP_TalkCameraShowItemZoomKneel_SCU_03_C.ReceiveTick");

	ABP_TalkCameraShowItemZoomKneel_SCU_03_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoomKneel_SCU_03.BP_TalkCameraShowItemZoomKneel_SCU_03_C.ExecuteUbergraph_BP_TalkCameraShowItemZoomKneel_SCU_03
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraShowItemZoomKneel_SCU_03_C::ExecuteUbergraph_BP_TalkCameraShowItemZoomKneel_SCU_03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomKneel_SCU_03.BP_TalkCameraShowItemZoomKneel_SCU_03_C.ExecuteUbergraph_BP_TalkCameraShowItemZoomKneel_SCU_03");

	ABP_TalkCameraShowItemZoomKneel_SCU_03_C_ExecuteUbergraph_BP_TalkCameraShowItemZoomKneel_SCU_03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
