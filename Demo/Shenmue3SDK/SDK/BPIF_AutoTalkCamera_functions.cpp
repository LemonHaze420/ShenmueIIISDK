
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

// Function BPIF_AutoTalkCamera.BPIF_AutoTalkCamera_C.ChangeTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          NewTarget                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          lerpTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPIF_AutoTalkCamera_C::ChangeTarget(TArray<class AActor*> NewTarget, float lerpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIF_AutoTalkCamera.BPIF_AutoTalkCamera_C.ChangeTarget");

	UBPIF_AutoTalkCamera_C_ChangeTarget_Params params;
	params.NewTarget = NewTarget;
	params.lerpTime = lerpTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
