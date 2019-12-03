
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

// Function BPF_SkeletalMesh.BPF_SkeletalMesh_C.GetS3PostProcessAnimInstance
// (NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3PostProcessAnimInstance* AnimInstance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_SkeletalMesh_C::GetS3PostProcessAnimInstance(class AActor* Actor, class UObject* __WorldContext, class US3PostProcessAnimInstance** AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SkeletalMesh.BPF_SkeletalMesh_C.GetS3PostProcessAnimInstance");

	UBPF_SkeletalMesh_C_GetS3PostProcessAnimInstance_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimInstance != nullptr)
		*AnimInstance = params.AnimInstance;
}


// Function BPF_SkeletalMesh.BPF_SkeletalMesh_C.ChangeMaterial
// (Net, NetReliable, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// class USkeletalMeshComponent*  Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EClothPartsType                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_SkeletalMesh_C::STATIC_ChangeMaterial(class USkeletalMeshComponent* Component, EClothPartsType Type, class UMaterialInterface* Material, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SkeletalMesh.BPF_SkeletalMesh_C.ChangeMaterial");

	UBPF_SkeletalMesh_C_ChangeMaterial_Params params;
	params.Component = Component;
	params.Type = Type;
	params.Material = Material;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_SkeletalMesh.BPF_SkeletalMesh_C.SetDisablePostProcessPhysics
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// class USkeletalMeshComponent*  Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Disable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_SkeletalMesh_C::STATIC_SetDisablePostProcessPhysics(class USkeletalMeshComponent* Component, bool Disable, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SkeletalMesh.BPF_SkeletalMesh_C.SetDisablePostProcessPhysics");

	UBPF_SkeletalMesh_C_SetDisablePostProcessPhysics_Params params;
	params.Component = Component;
	params.Disable = Disable;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_SkeletalMesh.BPF_SkeletalMesh_C.GetFaceSubAnimInstance
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USubABP_CharacterBase_C* SubABP                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_SkeletalMesh_C::STATIC_GetFaceSubAnimInstance(class USkeletalMeshComponent* Component, class UObject* __WorldContext, class USubABP_CharacterBase_C** SubABP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SkeletalMesh.BPF_SkeletalMesh_C.GetFaceSubAnimInstance");

	UBPF_SkeletalMesh_C_GetFaceSubAnimInstance_Params params;
	params.Component = Component;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubABP != nullptr)
		*SubABP = params.SubABP;
}


// Function BPF_SkeletalMesh.BPF_SkeletalMesh_C.TryGetSocketLocation
// (NetReliable, Event, NetResponse, NetMulticast, Public, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InSocketName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void UBPF_SkeletalMesh_C::TryGetSocketLocation(class USceneComponent* Target, const struct FName& InSocketName, class UObject* __WorldContext, bool* Result, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SkeletalMesh.BPF_SkeletalMesh_C.TryGetSocketLocation");

	UBPF_SkeletalMesh_C_TryGetSocketLocation_Params params;
	params.Target = Target;
	params.InSocketName = InSocketName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (Location != nullptr)
		*Location = params.Location;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
