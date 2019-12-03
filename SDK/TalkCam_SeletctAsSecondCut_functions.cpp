
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

// Function TalkCam_SeletctAsSecondCut.TalkCam_SeletctAsSecondCut_C.ReceiveTickAI
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkCam_SeletctAsSecondCut_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_SeletctAsSecondCut.TalkCam_SeletctAsSecondCut_C.ReceiveTickAI");

	UTalkCam_SeletctAsSecondCut_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkCam_SeletctAsSecondCut.TalkCam_SeletctAsSecondCut_C.ExecuteUbergraph_TalkCam_SeletctAsSecondCut
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkCam_SeletctAsSecondCut_C::STATIC_ExecuteUbergraph_TalkCam_SeletctAsSecondCut(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_SeletctAsSecondCut.TalkCam_SeletctAsSecondCut_C.ExecuteUbergraph_TalkCam_SeletctAsSecondCut");

	UTalkCam_SeletctAsSecondCut_C_ExecuteUbergraph_TalkCam_SeletctAsSecondCut_Params params;
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
