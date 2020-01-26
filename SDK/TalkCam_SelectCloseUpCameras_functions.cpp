
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

// Function TalkCam_SelectCloseUpCameras.TalkCam_SelectCloseUpCameras_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkCam_SelectCloseUpCameras_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_SelectCloseUpCameras.TalkCam_SelectCloseUpCameras_C.ReceiveTickAI");

	UTalkCam_SelectCloseUpCameras_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkCam_SelectCloseUpCameras.TalkCam_SelectCloseUpCameras_C.ExecuteUbergraph_TalkCam_SelectCloseUpCameras
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkCam_SelectCloseUpCameras_C::ExecuteUbergraph_TalkCam_SelectCloseUpCameras(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_SelectCloseUpCameras.TalkCam_SelectCloseUpCameras_C.ExecuteUbergraph_TalkCam_SelectCloseUpCameras");

	UTalkCam_SelectCloseUpCameras_C_ExecuteUbergraph_TalkCam_SelectCloseUpCameras_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
