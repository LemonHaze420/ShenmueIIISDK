
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

// Function BPF_TimeManager.BPF_TimeManager_C.getS3GameTimeManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3WorldTimekeeper_C* BP_S3World_Timekeeper          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_TimeManager_C::STATIC_getS3GameTimeManager(class UObject* __WorldContext, class ABP_S3WorldTimekeeper_C** BP_S3World_Timekeeper)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_TimeManager.BPF_TimeManager_C.getS3GameTimeManager");

	UBPF_TimeManager_C_getS3GameTimeManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_S3World_Timekeeper != nullptr)
		*BP_S3World_Timekeeper = params.BP_S3World_Timekeeper;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
