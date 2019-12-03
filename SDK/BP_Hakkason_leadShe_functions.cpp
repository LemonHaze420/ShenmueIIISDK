
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

// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.CheckLoadSartShe
// (Net, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// bool                           is_load                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SheLocation                    (Parm, OutParm, IsPlainOldData)
// struct FRotator                SheRotation                    (Parm, OutParm, IsPlainOldData)

void ABP_Hakkason_leadShe_C::CheckLoadSartShe(bool* is_load, struct FVector* SheLocation, struct FRotator* SheRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.CheckLoadSartShe");

	ABP_Hakkason_leadShe_C_CheckLoadSartShe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (is_load != nullptr)
		*is_load = params.is_load;
	if (SheLocation != nullptr)
		*SheLocation = params.SheLocation;
	if (SheRotation != nullptr)
		*SheRotation = params.SheRotation;
}


// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.InitSet
// (Net, NetRequest, Exec, Static, Private, Protected, Delegate, NetClient, DLLImport)
// Parameters:
// struct FDataTableRowHandle     EventId                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            UseFlagID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LoadStart                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_leadShe_C::STATIC_InitSet(const struct FDataTableRowHandle& EventId, int UseFlagID, bool LoadStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.InitSet");

	ABP_Hakkason_leadShe_C_InitSet_Params params;
	params.EventId = EventId;
	params.UseFlagID = UseFlagID;
	params.LoadStart = LoadStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.UserConstructionScript
// (Net, Exec, Native, NetResponse, NetMulticast, Public, Protected, Delegate, NetClient, BlueprintCallable)

void ABP_Hakkason_leadShe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.UserConstructionScript");

	ABP_Hakkason_leadShe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.ReceiveTick
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_leadShe_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.ReceiveTick");

	ABP_Hakkason_leadShe_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.RenewalActorCount
// (NetReliable, NetRequest, Exec, Native, Public, Private, HasOutParms, NetClient, DLLImport)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RenewalCounter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_leadShe_C::RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.RenewalActorCount");

	ABP_Hakkason_leadShe_C_RenewalActorCount_Params params;
	params.ActorId = ActorId;
	params.RenewalCounter = RenewalCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.KillSheLead
// (Net, NetRequest, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_leadShe_C::STATIC_KillSheLead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.KillSheLead");

	ABP_Hakkason_leadShe_C_KillSheLead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.StartLeadSHE_Macro
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LoadStart                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_leadShe_C::STATIC_StartLeadSHE_Macro(bool LoadStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.StartLeadSHE_Macro");

	ABP_Hakkason_leadShe_C_StartLeadSHE_Macro_Params params;
	params.LoadStart = LoadStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.ExecuteUbergraph_BP_Hakkason_leadShe
// (NetReliable, NetRequest, Native, NetResponse, Static, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_leadShe_C::STATIC_ExecuteUbergraph_BP_Hakkason_leadShe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.ExecuteUbergraph_BP_Hakkason_leadShe");

	ABP_Hakkason_leadShe_C_ExecuteUbergraph_BP_Hakkason_leadShe_Params params;
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
