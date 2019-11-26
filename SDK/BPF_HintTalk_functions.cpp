
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

// Function BPF_HintTalk.BPF_HintTalk_C.GetHintTalkManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_HintTalkManager_C*   HintTalkManager                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_HintTalk_C::STATIC_GetHintTalkManager(class UObject* __WorldContext, class ABP_HintTalkManager_C** HintTalkManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_HintTalk.BPF_HintTalk_C.GetHintTalkManager");

	UBPF_HintTalk_C_GetHintTalkManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HintTalkManager != nullptr)
		*HintTalkManager = params.HintTalkManager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
