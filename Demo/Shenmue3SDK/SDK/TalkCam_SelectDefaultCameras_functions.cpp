
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

// Function TalkCam_SelectDefaultCameras.TalkCam_SelectDefaultCameras_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkCam_SelectDefaultCameras_C::ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_SelectDefaultCameras.TalkCam_SelectDefaultCameras_C.ReceiveTickAI");

	UTalkCam_SelectDefaultCameras_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkCam_SelectDefaultCameras.TalkCam_SelectDefaultCameras_C.ExecuteUbergraph_TalkCam_SelectDefaultCameras
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkCam_SelectDefaultCameras_C::ExecuteUbergraph_TalkCam_SelectDefaultCameras(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_SelectDefaultCameras.TalkCam_SelectDefaultCameras_C.ExecuteUbergraph_TalkCam_SelectDefaultCameras");

	UTalkCam_SelectDefaultCameras_C_ExecuteUbergraph_TalkCam_SelectDefaultCameras_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
