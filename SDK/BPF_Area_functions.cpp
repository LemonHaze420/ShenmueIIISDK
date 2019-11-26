
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

// Function BPF_Area.BPF_Area_C.getS3AreaLightManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3AreaLightManagerComponent* AreaLightManager               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPF_Area_C::STATIC_getS3AreaLightManager(class UObject* __WorldContext, class US3AreaLightManagerComponent** AreaLightManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Area.BPF_Area_C.getS3AreaLightManager");

	UBPF_Area_C_getS3AreaLightManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AreaLightManager != nullptr)
		*AreaLightManager = params.AreaLightManager;
}


// Function BPF_Area.BPF_Area_C.getS3AreaManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3AreaManager_C*     BP_S3AreaManager               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Area_C::STATIC_getS3AreaManager(class UObject* __WorldContext, class ABP_S3AreaManager_C** BP_S3AreaManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Area.BPF_Area_C.getS3AreaManager");

	UBPF_Area_C_getS3AreaManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_S3AreaManager != nullptr)
		*BP_S3AreaManager = params.BP_S3AreaManager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
