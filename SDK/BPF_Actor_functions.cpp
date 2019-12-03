
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

// Function BPF_Actor.BPF_Actor_C.SafeDestroyAndRelease
// (NetReliable, Native, NetResponse, Static, MulticastDelegate, Public, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Actor_C::STATIC_SafeDestroyAndRelease(class UObject* __WorldContext, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Actor.BPF_Actor_C.SafeDestroyAndRelease");

	UBPF_Actor_C_SafeDestroyAndRelease_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
