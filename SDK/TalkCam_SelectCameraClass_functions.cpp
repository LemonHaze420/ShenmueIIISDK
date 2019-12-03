
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

// Function TalkCam_SelectCameraClass.TalkCam_SelectCameraClass_C.GetRandCameraClass
// (Exec, Event, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_TalkCameraClassKind> newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTalkCam_SelectCameraClass_C::STATIC_GetRandCameraClass(TEnumAsByte<EN_TalkCameraClassKind>* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_SelectCameraClass.TalkCam_SelectCameraClass_C.GetRandCameraClass");

	UTalkCam_SelectCameraClass_C_GetRandCameraClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function TalkCam_SelectCameraClass.TalkCam_SelectCameraClass_C.ReceiveTickAI
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkCam_SelectCameraClass_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_SelectCameraClass.TalkCam_SelectCameraClass_C.ReceiveTickAI");

	UTalkCam_SelectCameraClass_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkCam_SelectCameraClass.TalkCam_SelectCameraClass_C.ExecuteUbergraph_TalkCam_SelectCameraClass
// (Net, NetRequest, Exec, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkCam_SelectCameraClass_C::ExecuteUbergraph_TalkCam_SelectCameraClass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_SelectCameraClass.TalkCam_SelectCameraClass_C.ExecuteUbergraph_TalkCam_SelectCameraClass");

	UTalkCam_SelectCameraClass_C_ExecuteUbergraph_TalkCam_SelectCameraClass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
