
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

// Function BPF_KunfuMinigame.BPF_KunfuMinigame_C.BPF_GetAllKunFuKeys_Minigame
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_KunfuMinigame_C::STATIC_BPF_GetAllKunFuKeys_Minigame(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_KunfuMinigame.BPF_KunfuMinigame_C.BPF_GetAllKunFuKeys_Minigame");

	UBPF_KunfuMinigame_C_BPF_GetAllKunFuKeys_Minigame_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_KunfuMinigame.BPF_KunfuMinigame_C.BPF_GetKunfuKey_Minigame
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_KungFuType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBPF_KunfuMinigame_C::STATIC_BPF_GetKunfuKey_Minigame(TEnumAsByte<E_MiniGame_KungFuType> Type, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_KunfuMinigame.BPF_KunfuMinigame_C.BPF_GetKunfuKey_Minigame");

	UBPF_KunfuMinigame_C_BPF_GetKunfuKey_Minigame_Params params;
	params.Type = Type;
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
