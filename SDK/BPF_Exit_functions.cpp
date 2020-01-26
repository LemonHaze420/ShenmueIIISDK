
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

// Function BPF_Exit.BPF_Exit_C.CanExit
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Exit_C::STATIC_CanExit(class UObject* __WorldContext, bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Exit.BPF_Exit_C.CanExit");

	UBPF_Exit_C_CanExit_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
