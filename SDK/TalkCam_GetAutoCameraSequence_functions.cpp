
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

// Function TalkCam_GetAutoCameraSequence.TalkCam_GetAutoCameraSequence_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkCam_GetAutoCameraSequence_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_GetAutoCameraSequence.TalkCam_GetAutoCameraSequence_C.ReceiveTickAI");

	UTalkCam_GetAutoCameraSequence_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkCam_GetAutoCameraSequence.TalkCam_GetAutoCameraSequence_C.ExecuteUbergraph_TalkCam_GetAutoCameraSequence
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkCam_GetAutoCameraSequence_C::ExecuteUbergraph_TalkCam_GetAutoCameraSequence(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_GetAutoCameraSequence.TalkCam_GetAutoCameraSequence_C.ExecuteUbergraph_TalkCam_GetAutoCameraSequence");

	UTalkCam_GetAutoCameraSequence_C_ExecuteUbergraph_TalkCam_GetAutoCameraSequence_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
