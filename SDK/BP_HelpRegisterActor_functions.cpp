
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

// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.GetHelpPriority
// (Net, NetReliable, Exec, NetResponse, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3HelpPriority                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ES3HelpPriority ABP_HelpRegisterActor_C::GetHelpPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.GetHelpPriority");

	ABP_HelpRegisterActor_C_GetHelpPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.GetHelpName
// (NetReliable, Exec, NetResponse, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_HelpRegisterActor_C::GetHelpName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.GetHelpName");

	ABP_HelpRegisterActor_C_GetHelpName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.IsActivateHelp
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetServer)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HelpRegisterActor_C::STATIC_IsActivateHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.IsActivateHelp");

	ABP_HelpRegisterActor_C_IsActivateHelp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.RegisterHelp
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetServer)
// Parameters:
// ES3HelpRegisterTiming          Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HelpRegisterActor_C::STATIC_RegisterHelp(ES3HelpRegisterTiming Timing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.RegisterHelp");

	ABP_HelpRegisterActor_C_RegisterHelp_Params params;
	params.Timing = Timing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.UnregisterHelp
// (NetMulticast, NetServer)
// Parameters:
// ES3HelpRegisterTiming          Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HelpRegisterActor_C::UnregisterHelp(ES3HelpRegisterTiming Timing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.UnregisterHelp");

	ABP_HelpRegisterActor_C_UnregisterHelp_Params params;
	params.Timing = Timing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.UserConstructionScript
// (NetReliable, Native, Event, NetResponse, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport)

void ABP_HelpRegisterActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.UserConstructionScript");

	ABP_HelpRegisterActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetServer)

void ABP_HelpRegisterActor_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.ReceiveBeginPlay");

	ABP_HelpRegisterActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.ReceiveEndPlay
// (Net, Exec, NetResponse, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HelpRegisterActor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.ReceiveEndPlay");

	ABP_HelpRegisterActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.ExecuteUbergraph_BP_HelpRegisterActor
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HelpRegisterActor_C::STATIC_ExecuteUbergraph_BP_HelpRegisterActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.ExecuteUbergraph_BP_HelpRegisterActor");

	ABP_HelpRegisterActor_C_ExecuteUbergraph_BP_HelpRegisterActor_Params params;
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
