
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

// Function BP_State_LookAtNPC_Global.BP_State_LookAtNPC_Global_C.StateUpdate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_Global_C::StateUpdate(float* Delta, bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC_Global.BP_State_LookAtNPC_Global_C.StateUpdate");

	UBP_State_LookAtNPC_Global_C_StateUpdate_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


// Function BP_State_LookAtNPC_Global.BP_State_LookAtNPC_Global_C.CheckNPCLocomationState
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_State_LookAtNPC_Global_C::CheckNPCLocomationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC_Global.BP_State_LookAtNPC_Global_C.CheckNPCLocomationState");

	UBP_State_LookAtNPC_Global_C_CheckNPCLocomationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
