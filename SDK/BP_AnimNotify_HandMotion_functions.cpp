
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

// Function BP_AnimNotify_HandMotion.BP_AnimNotify_HandMotion_C.GetNotifyName
// (NetReliable, NetRequest, Exec, Static, Public, NetServer)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_AnimNotify_HandMotion_C::STATIC_GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_HandMotion.BP_AnimNotify_HandMotion_C.GetNotifyName");

	UBP_AnimNotify_HandMotion_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotify_HandMotion.BP_AnimNotify_HandMotion_C.Received_Notify
// (NetReliable, Native, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AnimNotify_HandMotion_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_HandMotion.BP_AnimNotify_HandMotion_C.Received_Notify");

	UBP_AnimNotify_HandMotion_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
