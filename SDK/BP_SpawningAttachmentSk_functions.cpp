
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

// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.GetSkeletalMeshComp
// (Net, NetRequest, Native, NetMulticast, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* ABP_SpawningAttachmentSk_C::GetSkeletalMeshComp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.GetSkeletalMeshComp");

	ABP_SpawningAttachmentSk_C_GetSkeletalMeshComp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.IsMeshVisibility
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SpawningAttachmentSk_C::IsMeshVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.IsMeshVisibility");

	ABP_SpawningAttachmentSk_C_IsMeshVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.GetSkeletalMeshComponent
// (NetRequest, Native, NetMulticast, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  SkeltalMeshComp                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SpawningAttachmentSk_C::GetSkeletalMeshComponent(class USkeletalMeshComponent** SkeltalMeshComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.GetSkeletalMeshComponent");

	ABP_SpawningAttachmentSk_C_GetSkeletalMeshComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeltalMeshComp != nullptr)
		*SkeltalMeshComp = params.SkeltalMeshComp;
}


// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.UserConstructionScript
// (NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_SpawningAttachmentSk_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.UserConstructionScript");

	ABP_SpawningAttachmentSk_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.SetMeshVisibility
// (NetRequest, Exec, Native, NetMulticast, Public, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bEnable                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawningAttachmentSk_C::SetMeshVisibility(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.SetMeshVisibility");

	ABP_SpawningAttachmentSk_C_SetMeshVisibility_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.ExecuteUbergraph_BP_SpawningAttachmentSk
// (NetRequest, Native, Event, NetResponse, Static, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawningAttachmentSk_C::STATIC_ExecuteUbergraph_BP_SpawningAttachmentSk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.ExecuteUbergraph_BP_SpawningAttachmentSk");

	ABP_SpawningAttachmentSk_C_ExecuteUbergraph_BP_SpawningAttachmentSk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
