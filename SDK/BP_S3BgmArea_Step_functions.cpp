
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

// Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.JudgeBGM
// (NetReliable, Exec, NetResponse, NetMulticast, Private, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmArea_Step_C::JudgeBGM(int Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.JudgeBGM");

	ABP_S3BgmArea_Step_C_JudgeBGM_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_S3BgmArea_Step_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.UserConstructionScript");

	ABP_S3BgmArea_Step_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.ReceiveBeginPlay
// (Net, NetReliable, NetResponse, Static, MulticastDelegate, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_S3BgmArea_Step_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.ReceiveBeginPlay");

	ABP_S3BgmArea_Step_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.ReceiveEndPlay
// (Net, Exec, NetResponse, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmArea_Step_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.ReceiveEndPlay");

	ABP_S3BgmArea_Step_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.ChangeStep
// (NetReliable, Exec, NetResponse, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmArea_Step_C::ChangeStep(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.ChangeStep");

	ABP_S3BgmArea_Step_C_ChangeStep_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.ExecuteUbergraph_BP_S3BgmArea_Step
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmArea_Step_C::STATIC_ExecuteUbergraph_BP_S3BgmArea_Step(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.ExecuteUbergraph_BP_S3BgmArea_Step");

	ABP_S3BgmArea_Step_C_ExecuteUbergraph_BP_S3BgmArea_Step_Params params;
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
