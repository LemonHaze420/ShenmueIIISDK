
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

// Function BPF_PlayerCtrl.BPF_PlayerCtrl_C.getS3PlayerCtrl
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerCtrl_C*           PlayerCtrl                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_PlayerCtrl_C::STATIC_getS3PlayerCtrl(class UObject* __WorldContext, class APlayerCtrl_C** PlayerCtrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_PlayerCtrl.BPF_PlayerCtrl_C.getS3PlayerCtrl");

	UBPF_PlayerCtrl_C_getS3PlayerCtrl_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerCtrl != nullptr)
		*PlayerCtrl = params.PlayerCtrl;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
