
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

// Function BPF_BP_S3BattleStatsManager.BPF_BP_S3BattleStatsManager_C.BPF_GetBPS3BattleStatsManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_S3BattleStatsManager_C* BPManager                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_BP_S3BattleStatsManager_C::STATIC_BPF_GetBPS3BattleStatsManager(class UObject* __WorldContext, class UBP_S3BattleStatsManager_C** BPManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_BP_S3BattleStatsManager.BPF_BP_S3BattleStatsManager_C.BPF_GetBPS3BattleStatsManager");

	UBPF_BP_S3BattleStatsManager_C_BPF_GetBPS3BattleStatsManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BPManager != nullptr)
		*BPManager = params.BPManager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
