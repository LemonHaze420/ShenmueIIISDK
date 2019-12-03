
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

// Function TalkCam_SelectLookActor.TalkCam_SelectLookActor_C.ReceiveTickAI
// (NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkCam_SelectLookActor_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_SelectLookActor.TalkCam_SelectLookActor_C.ReceiveTickAI");

	UTalkCam_SelectLookActor_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkCam_SelectLookActor.TalkCam_SelectLookActor_C.ExecuteUbergraph_TalkCam_SelectLookActor
// (Net, Native, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkCam_SelectLookActor_C::STATIC_ExecuteUbergraph_TalkCam_SelectLookActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_SelectLookActor.TalkCam_SelectLookActor_C.ExecuteUbergraph_TalkCam_SelectLookActor");

	UTalkCam_SelectLookActor_C_ExecuteUbergraph_TalkCam_SelectLookActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
