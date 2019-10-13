
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

// Function BPF_Help.BPF_Help_C.GetS3HelpManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3HelpManager_C*     newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Help_C::STATIC_GetS3HelpManager(class UObject* __WorldContext, class ABP_S3HelpManager_C** newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Help.BPF_Help_C.GetS3HelpManager");

	UBPF_Help_C_GetS3HelpManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
