
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

// Function BP_AnimNotify_PlayAtomCue.BP_AnimNotify_PlayAtomCue_C.CanPlay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotify_PlayAtomCue_C::CanPlay(bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_PlayAtomCue.BP_AnimNotify_PlayAtomCue_C.CanPlay");

	UBP_AnimNotify_PlayAtomCue_C_CanPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_AnimNotify_PlayAtomCue.BP_AnimNotify_PlayAtomCue_C.SetSelectorLabel
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAtomComponent*          Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_AnimNotify_PlayAtomCue_C::SetSelectorLabel(class UAtomComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_PlayAtomCue.BP_AnimNotify_PlayAtomCue_C.SetSelectorLabel");

	UBP_AnimNotify_PlayAtomCue_C_SetSelectorLabel_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimNotify_PlayAtomCue.BP_AnimNotify_PlayAtomCue_C.GetNotifyName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_AnimNotify_PlayAtomCue_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_PlayAtomCue.BP_AnimNotify_PlayAtomCue_C.GetNotifyName");

	UBP_AnimNotify_PlayAtomCue_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotify_PlayAtomCue.BP_AnimNotify_PlayAtomCue_C.Received_Notify
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AnimNotify_PlayAtomCue_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_PlayAtomCue.BP_AnimNotify_PlayAtomCue_C.Received_Notify");

	UBP_AnimNotify_PlayAtomCue_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
