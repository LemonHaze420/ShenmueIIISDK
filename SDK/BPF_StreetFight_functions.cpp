
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPF_StreetFight.BPF_StreetFight_C.GetStreetFightManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_StreetFightManager_C* Manager                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_StreetFight_C::STATIC_GetStreetFightManager(class UObject* __WorldContext, class ABP_StreetFightManager_C** Manager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_StreetFight.BPF_StreetFight_C.GetStreetFightManager");

	UBPF_StreetFight_C_GetStreetFightManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Manager != nullptr)
		*Manager = params.Manager;
}


// Function BPF_StreetFight.BPF_StreetFight_C.GetStreetFightTrigger
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AS3StreetFightTrigger*   Manager                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_StreetFight_C::STATIC_GetStreetFightTrigger(class UObject* __WorldContext, class AS3StreetFightTrigger** Manager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_StreetFight.BPF_StreetFight_C.GetStreetFightTrigger");

	UBPF_StreetFight_C_GetStreetFightTrigger_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Manager != nullptr)
		*Manager = params.Manager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
