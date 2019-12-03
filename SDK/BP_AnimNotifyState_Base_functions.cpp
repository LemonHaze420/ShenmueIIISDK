
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

// Function BP_AnimNotifyState_Base.BP_AnimNotifyState_Base_C.GetNotifyID
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FName                   NotifyID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotifyState_Base_C::STATIC_GetNotifyID(struct FName* NotifyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Base.BP_AnimNotifyState_Base_C.GetNotifyID");

	UBP_AnimNotifyState_Base_C_GetNotifyID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NotifyID != nullptr)
		*NotifyID = params.NotifyID;
}


// Function BP_AnimNotifyState_Base.BP_AnimNotifyState_Base_C.Received_NotifyEnd
// (Exec, Static, NetMulticast, MulticastDelegate, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AnimNotifyState_Base_C::STATIC_Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Base.BP_AnimNotifyState_Base_C.Received_NotifyEnd");

	UBP_AnimNotifyState_Base_C_Received_NotifyEnd_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotifyState_Base.BP_AnimNotifyState_Base_C.Received_NotifyBegin
// (Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AnimNotifyState_Base_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Base.BP_AnimNotifyState_Base_C.Received_NotifyBegin");

	UBP_AnimNotifyState_Base_C_Received_NotifyBegin_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;

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
