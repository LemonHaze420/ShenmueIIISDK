
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

// Function BPF_AdventurePlayerPawn.BPF_AdventurePlayerPawn_C.GetAdventurePlayerPawn
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

class APawn* UBPF_AdventurePlayerPawn_C::STATIC_GetAdventurePlayerPawn(class UObject* __WorldContext, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_AdventurePlayerPawn.BPF_AdventurePlayerPawn_C.GetAdventurePlayerPawn");

	UBPF_AdventurePlayerPawn_C_GetAdventurePlayerPawn_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
