
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

// Function BPF_FadeMaterial.BPF_FadeMaterial_C.CreateFadeMaterial
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* FadeMaterial                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_FadeMaterial_C::STATIC_CreateFadeMaterial(class UMaterialInterface* Source, class UObject* __WorldContext, class UMaterialInstanceDynamic** FadeMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_FadeMaterial.BPF_FadeMaterial_C.CreateFadeMaterial");

	UBPF_FadeMaterial_C_CreateFadeMaterial_Params params;
	params.Source = Source;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FadeMaterial != nullptr)
		*FadeMaterial = params.FadeMaterial;
}


// Function BPF_FadeMaterial.BPF_FadeMaterial_C.SimpleDuplicateMatParams
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      MaterialInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      FadeMatTemplate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UBPF_FadeMaterial_C::STATIC_SimpleDuplicateMatParams(class UMaterialInterface* MaterialInstance, class UMaterialInterface* FadeMatTemplate, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_FadeMaterial.BPF_FadeMaterial_C.SimpleDuplicateMatParams");

	UBPF_FadeMaterial_C_SimpleDuplicateMatParams_Params params;
	params.MaterialInstance = MaterialInstance;
	params.FadeMatTemplate = FadeMatTemplate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_FadeMaterial.BPF_FadeMaterial_C.SwitchToFadeMaterial
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UMaterialInterface*> Materials                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_FadeMaterial_C::STATIC_SwitchToFadeMaterial(class USkeletalMeshComponent* Component, class UObject* __WorldContext, TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_FadeMaterial.BPF_FadeMaterial_C.SwitchToFadeMaterial");

	UBPF_FadeMaterial_C_SwitchToFadeMaterial_Params params;
	params.Component = Component;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Materials != nullptr)
		*Materials = params.Materials;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
