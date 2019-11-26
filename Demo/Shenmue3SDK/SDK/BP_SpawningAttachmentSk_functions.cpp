
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

// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.GetSkeletalMeshComp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* ABP_SpawningAttachmentSk_C::GetSkeletalMeshComp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.GetSkeletalMeshComp");

	ABP_SpawningAttachmentSk_C_GetSkeletalMeshComp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.IsMeshVisibility
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SpawningAttachmentSk_C::IsMeshVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.IsMeshVisibility");

	ABP_SpawningAttachmentSk_C_IsMeshVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.GetSkeletalMeshComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeltalMeshComp                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SpawningAttachmentSk_C::GetSkeletalMeshComponent(class USkeletalMeshComponent** SkeltalMeshComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.GetSkeletalMeshComponent");

	ABP_SpawningAttachmentSk_C_GetSkeletalMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeltalMeshComp != nullptr)
		*SkeltalMeshComp = params.SkeltalMeshComp;
}


// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpawningAttachmentSk_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.UserConstructionScript");

	ABP_SpawningAttachmentSk_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.SetMeshVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnable                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawningAttachmentSk_C::SetMeshVisibility(bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.SetMeshVisibility");

	ABP_SpawningAttachmentSk_C_SetMeshVisibility_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.ExecuteUbergraph_BP_SpawningAttachmentSk
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawningAttachmentSk_C::ExecuteUbergraph_BP_SpawningAttachmentSk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.ExecuteUbergraph_BP_SpawningAttachmentSk");

	ABP_SpawningAttachmentSk_C_ExecuteUbergraph_BP_SpawningAttachmentSk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
