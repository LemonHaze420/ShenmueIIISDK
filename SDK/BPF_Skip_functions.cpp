
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

// Function BPF_Skip.BPF_Skip_C.GetS3SkipController
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_SkipController_C*    AsBP_Skip_Controller           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Skip_C::STATIC_GetS3SkipController(class UObject* __WorldContext, class ABP_SkipController_C** AsBP_Skip_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skip.BPF_Skip_C.GetS3SkipController");

	UBPF_Skip_C_GetS3SkipController_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBP_Skip_Controller != nullptr)
		*AsBP_Skip_Controller = params.AsBP_Skip_Controller;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
