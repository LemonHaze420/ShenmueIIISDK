
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

// Function BPF_PlayerCtrlAdventure.BPF_PlayerCtrlAdventure_C.getS3PlayerControllerAdventure
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3AdventurePlayerController_C* S3PlayerControllerAdventure    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_PlayerCtrlAdventure_C::STATIC_getS3PlayerControllerAdventure(class UObject* __WorldContext, class ABP_S3AdventurePlayerController_C** S3PlayerControllerAdventure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_PlayerCtrlAdventure.BPF_PlayerCtrlAdventure_C.getS3PlayerControllerAdventure");

	UBPF_PlayerCtrlAdventure_C_getS3PlayerControllerAdventure_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (S3PlayerControllerAdventure != nullptr)
		*S3PlayerControllerAdventure = params.S3PlayerControllerAdventure;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
