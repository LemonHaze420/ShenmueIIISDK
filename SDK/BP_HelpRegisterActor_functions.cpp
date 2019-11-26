
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
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HelpRegisterActor_C::IsActivateHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.IsActivateHelp");

	ABP_HelpRegisterActor_C_IsActivateHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.RegisterHelp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3HelpRegisterTiming          Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HelpRegisterActor_C::RegisterHelp(ES3HelpRegisterTiming Timing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.RegisterHelp");

	ABP_HelpRegisterActor_C_RegisterHelp_Params params;
	params.Timing = Timing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.UnregisterHelp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HelpRegisterActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.UserConstructionScript");

	ABP_HelpRegisterActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HelpRegisterActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.ReceiveBeginPlay");

	ABP_HelpRegisterActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
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
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HelpRegisterActor_C::ExecuteUbergraph_BP_HelpRegisterActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelpRegisterActor.BP_HelpRegisterActor_C.ExecuteUbergraph_BP_HelpRegisterActor");

	ABP_HelpRegisterActor_C_ExecuteUbergraph_BP_HelpRegisterActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
