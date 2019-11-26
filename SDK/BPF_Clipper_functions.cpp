
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

// Function BPF_Clipper.BPF_Clipper_C.getS3ClipperManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Clipper_C*           AsBP_Clipper                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Clipper_C::STATIC_getS3ClipperManager(class UObject* __WorldContext, class ABP_Clipper_C** AsBP_Clipper)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Clipper.BPF_Clipper_C.getS3ClipperManager");

	UBPF_Clipper_C_getS3ClipperManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBP_Clipper != nullptr)
		*AsBP_Clipper = params.AsBP_Clipper;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
