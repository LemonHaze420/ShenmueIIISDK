
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

// Function BPF_Attention.BPF_Attention_C.GetS3AttentionController
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3AttentionController_C* AttentionController            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Attention_C::STATIC_GetS3AttentionController(class UObject* __WorldContext, class ABP_S3AttentionController_C** AttentionController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Attention.BPF_Attention_C.GetS3AttentionController");

	UBPF_Attention_C_GetS3AttentionController_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttentionController != nullptr)
		*AttentionController = params.AttentionController;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
