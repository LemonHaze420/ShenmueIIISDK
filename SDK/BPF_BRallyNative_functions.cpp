
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

// Function BPF_BRallyNative.BPF_BRallyNative_C.BPF_IsBattleRallyGamemode
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_BRallyNative_C::STATIC_BPF_IsBattleRallyGamemode(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_BRallyNative.BPF_BRallyNative_C.BPF_IsBattleRallyGamemode");

	UBPF_BRallyNative_C_BPF_IsBattleRallyGamemode_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_BRallyNative.BPF_BRallyNative_C.BPF_GetBRallyAwardComponent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3_BRallyAwardSystem*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class US3_BRallyAwardSystem* UBPF_BRallyNative_C::STATIC_BPF_GetBRallyAwardComponent(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_BRallyNative.BPF_BRallyNative_C.BPF_GetBRallyAwardComponent");

	UBPF_BRallyNative_C_BPF_GetBRallyAwardComponent_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
