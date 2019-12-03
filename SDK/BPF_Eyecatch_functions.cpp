
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

// Function BPF_Eyecatch.BPF_Eyecatch_C.getS3EyecatchManager
// (NetRequest, Exec, Native, Event, Public, Protected, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_eyecatch_C*          BP_eyecatch                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Eyecatch_C::getS3EyecatchManager(class UObject* __WorldContext, class ABP_eyecatch_C** BP_eyecatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Eyecatch.BPF_Eyecatch_C.getS3EyecatchManager");

	UBPF_Eyecatch_C_getS3EyecatchManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_eyecatch != nullptr)
		*BP_eyecatch = params.BP_eyecatch;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
