
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

// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.CheckLoadSartShe
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     EventId                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            UseFlagID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LoadStart                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_leadShe_C::InitSet(const struct FDataTableRowHandle& EventId, int UseFlagID, bool LoadStart)
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
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_leadShe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.UserConstructionScript");

	ABP_Hakkason_leadShe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_leadShe_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.ReceiveTick");

	ABP_Hakkason_leadShe_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.RenewalActorCount
// (BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.KillSheLead
// (BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_leadShe_C::KillSheLead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.KillSheLead");

	ABP_Hakkason_leadShe_C_KillSheLead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.StartLeadSHE_Macro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LoadStart                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_leadShe_C::StartLeadSHE_Macro(bool LoadStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.StartLeadSHE_Macro");

	ABP_Hakkason_leadShe_C_StartLeadSHE_Macro_Params params;
	params.LoadStart = LoadStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.ExecuteUbergraph_BP_Hakkason_leadShe
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_leadShe_C::ExecuteUbergraph_BP_Hakkason_leadShe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.ExecuteUbergraph_BP_Hakkason_leadShe");

	ABP_Hakkason_leadShe_C_ExecuteUbergraph_BP_Hakkason_leadShe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
