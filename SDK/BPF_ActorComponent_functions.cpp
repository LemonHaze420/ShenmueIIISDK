
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

// Function BPF_ActorComponent.BPF_ActorComponent_C.SafeDestroyAndRelease
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_ActorComponent_C::STATIC_SafeDestroyAndRelease(class UObject* __WorldContext, class UActorComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ActorComponent.BPF_ActorComponent_C.SafeDestroyAndRelease");

	UBPF_ActorComponent_C_SafeDestroyAndRelease_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
