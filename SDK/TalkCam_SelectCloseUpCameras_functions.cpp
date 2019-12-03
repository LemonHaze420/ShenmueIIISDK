
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

// Function TalkCam_SelectCloseUpCameras.TalkCam_SelectCloseUpCameras_C.ReceiveTickAI
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkCam_SelectCloseUpCameras.TalkCam_SelectCloseUpCameras_C.ExecuteUbergraph_TalkCam_SelectCloseUpCameras
// (Net, NetReliable, Exec, Event, Static, NetMulticast, Public, Delegate, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkCam_SelectCloseUpCameras_C::STATIC_ExecuteUbergraph_TalkCam_SelectCloseUpCameras(int EntryPoint)
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
