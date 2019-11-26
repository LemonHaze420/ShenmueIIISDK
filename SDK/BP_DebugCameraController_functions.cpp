
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

// Function BP_DebugCameraController.BP_DebugCameraController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugCameraController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCameraController.BP_DebugCameraController_C.UserConstructionScript");

	ABP_DebugCameraController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCameraController.BP_DebugCameraController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugCameraController_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCameraController.BP_DebugCameraController_C.ReceiveTick");

	ABP_DebugCameraController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCameraController.BP_DebugCameraController_C.ExecuteUbergraph_BP_DebugCameraController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugCameraController_C::ExecuteUbergraph_BP_DebugCameraController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCameraController.BP_DebugCameraController_C.ExecuteUbergraph_BP_DebugCameraController");

	ABP_DebugCameraController_C_ExecuteUbergraph_BP_DebugCameraController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
