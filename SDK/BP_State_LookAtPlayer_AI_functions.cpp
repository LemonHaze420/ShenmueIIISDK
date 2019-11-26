
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

// Function BP_State_LookAtPlayer_AI.BP_State_LookAtPlayer_AI_C.SetupRandomParam
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_State_LookAtPlayer_AI_C::SetupRandomParam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtPlayer_AI.BP_State_LookAtPlayer_AI_C.SetupRandomParam");

	UBP_State_LookAtPlayer_AI_C_SetupRandomParam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_LookAtPlayer_AI.BP_State_LookAtPlayer_AI_C.StateExit
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtPlayer_AI_C::StateExit(float Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtPlayer_AI.BP_State_LookAtPlayer_AI_C.StateExit");

	UBP_State_LookAtPlayer_AI_C_StateExit_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function BP_State_LookAtPlayer_AI.BP_State_LookAtPlayer_AI_C.StateUpdate
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtPlayer_AI_C::StateUpdate(float Delta, bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtPlayer_AI.BP_State_LookAtPlayer_AI_C.StateUpdate");

	UBP_State_LookAtPlayer_AI_C_StateUpdate_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


// Function BP_State_LookAtPlayer_AI.BP_State_LookAtPlayer_AI_C.StateEnter
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtPlayer_AI_C::StateEnter(float Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtPlayer_AI.BP_State_LookAtPlayer_AI_C.StateEnter");

	UBP_State_LookAtPlayer_AI_C_StateEnter_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
