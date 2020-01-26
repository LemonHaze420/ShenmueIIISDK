
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

// Function BPF_GameInstance.BPF_GameInstance_C.getS3GameInstance
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_S3GameInstance_C*    BP_S3GameInstance              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_GameInstance_C::STATIC_getS3GameInstance(class UObject* __WorldContext, class UBP_S3GameInstance_C** BP_S3GameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_GameInstance.BPF_GameInstance_C.getS3GameInstance");

	UBPF_GameInstance_C_getS3GameInstance_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_S3GameInstance != nullptr)
		*BP_S3GameInstance = params.BP_S3GameInstance;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
