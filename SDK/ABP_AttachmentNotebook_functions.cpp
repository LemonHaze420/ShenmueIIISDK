
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

// Function ABP_AttachmentNotebook.ABP_AttachmentNotebook_C.PlayAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AnimationName                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UABP_AttachmentNotebook_C::PlayAnimation(struct FName* AnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentNotebook.ABP_AttachmentNotebook_C.PlayAnimation");

	UABP_AttachmentNotebook_C_PlayAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationName != nullptr)
		*AnimationName = params.AnimationName;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
