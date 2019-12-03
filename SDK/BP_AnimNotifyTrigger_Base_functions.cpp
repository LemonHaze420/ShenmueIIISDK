
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

// Function BP_AnimNotifyTrigger_Base.BP_AnimNotifyTrigger_Base_C.GetNotifyID
// (NetReliable, Native, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// struct FName                   NotifyID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotifyTrigger_Base_C::STATIC_GetNotifyID(struct FName* NotifyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyTrigger_Base.BP_AnimNotifyTrigger_Base_C.GetNotifyID");

	UBP_AnimNotifyTrigger_Base_C_GetNotifyID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NotifyID != nullptr)
		*NotifyID = params.NotifyID;
}


// Function BP_AnimNotifyTrigger_Base.BP_AnimNotifyTrigger_Base_C.Received_Notify
// (Net, Native, Event, NetResponse, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, NetValidate)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AnimNotifyTrigger_Base_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyTrigger_Base.BP_AnimNotifyTrigger_Base_C.Received_Notify");

	UBP_AnimNotifyTrigger_Base_C_Received_Notify_Params params;
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
