
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

// Function BPF_MotionAnalysis.BPF_MotionAnalysis_C.BPF_FindOverlappingNotifyState
// (NetRequest, Native, Event, Static, NetMulticast, Public, Private, Protected, Delegate, BlueprintEvent, NetValidate)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FindStateClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState*        StateRef                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState*        OutState                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_MotionAnalysis_C::STATIC_BPF_FindOverlappingNotifyState(class UAnimMontage* Montage, class UClass* FindStateClass, class UAnimNotifyState* StateRef, class UObject* __WorldContext, class UAnimNotifyState** OutState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MotionAnalysis.BPF_MotionAnalysis_C.BPF_FindOverlappingNotifyState");

	UBPF_MotionAnalysis_C_BPF_FindOverlappingNotifyState_Params params;
	params.Montage = Montage;
	params.FindStateClass = FindStateClass;
	params.StateRef = StateRef;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutState != nullptr)
		*OutState = params.OutState;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
