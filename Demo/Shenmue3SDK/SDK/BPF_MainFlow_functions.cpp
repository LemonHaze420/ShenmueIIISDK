
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

// Function BPF_MainFlow.BPF_MainFlow_C.getS3MainFlowManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_MainFlowManager_C*   MainFlowManager                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_MainFlow_C::STATIC_getS3MainFlowManager(class UObject* __WorldContext, class ABP_MainFlowManager_C** MainFlowManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MainFlow.BPF_MainFlow_C.getS3MainFlowManager");

	UBPF_MainFlow_C_getS3MainFlowManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MainFlowManager != nullptr)
		*MainFlowManager = params.MainFlowManager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
