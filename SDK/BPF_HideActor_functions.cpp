
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

// Function BPF_HideActor.BPF_HideActor_C.HideActor
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHidden                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableCollision                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_HideActor_C::STATIC_HideActor(class AActor* TargetActor, bool IsHidden, bool EnableCollision, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_HideActor.BPF_HideActor_C.HideActor");

	UBPF_HideActor_C_HideActor_Params params;
	params.TargetActor = TargetActor;
	params.IsHidden = IsHidden;
	params.EnableCollision = EnableCollision;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
