
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

// Function BPF_Bgm.BPF_Bgm_C.getS3BgmManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3BgmManager_C*      BP_S3BgmManager                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Bgm_C::STATIC_getS3BgmManager(class UObject* __WorldContext, class ABP_S3BgmManager_C** BP_S3BgmManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Bgm.BPF_Bgm_C.getS3BgmManager");

	UBPF_Bgm_C_getS3BgmManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_S3BgmManager != nullptr)
		*BP_S3BgmManager = params.BP_S3BgmManager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
