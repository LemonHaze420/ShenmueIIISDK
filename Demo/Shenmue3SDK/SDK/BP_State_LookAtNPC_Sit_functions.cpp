
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

// Function BP_State_LookAtNPC_Sit.BP_State_LookAtNPC_Sit_C.GetLookAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_Sit_C::GetLookAngle(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC_Sit.BP_State_LookAtNPC_Sit_C.GetLookAngle");

	UBP_State_LookAtNPC_Sit_C_GetLookAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function BP_State_LookAtNPC_Sit.BP_State_LookAtNPC_Sit_C.GetLookDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_Sit_C::GetLookDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC_Sit.BP_State_LookAtNPC_Sit_C.GetLookDistance");

	UBP_State_LookAtNPC_Sit_C_GetLookDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_State_LookAtNPC_Sit.BP_State_LookAtNPC_Sit_C.StateExit
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_Sit_C::StateExit(float* Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC_Sit.BP_State_LookAtNPC_Sit_C.StateExit");

	UBP_State_LookAtNPC_Sit_C_StateExit_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function BP_State_LookAtNPC_Sit.BP_State_LookAtNPC_Sit_C.StateUpdate
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_Sit_C::StateUpdate(float* Delta, bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC_Sit.BP_State_LookAtNPC_Sit_C.StateUpdate");

	UBP_State_LookAtNPC_Sit_C_StateUpdate_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


// Function BP_State_LookAtNPC_Sit.BP_State_LookAtNPC_Sit_C.StateEnter
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_Sit_C::StateEnter(float* Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC_Sit.BP_State_LookAtNPC_Sit_C.StateEnter");

	UBP_State_LookAtNPC_Sit_C_StateEnter_Params params;
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
