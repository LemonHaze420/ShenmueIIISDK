
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

// Function BPF_Reward.BPF_Reward_C.GetBP_RewardManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_RewardManager_C*     Manager                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Reward_C::STATIC_GetBP_RewardManager(class UObject* __WorldContext, class ABP_RewardManager_C** Manager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Reward.BPF_Reward_C.GetBP_RewardManager");

	UBPF_Reward_C_GetBP_RewardManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Manager != nullptr)
		*Manager = params.Manager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
