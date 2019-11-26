
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

// Function BPF_MiniMap.BPF_MiniMap_C.GetS3MinimapManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_MiniMap2DManager_C*  MinimapManager                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_MiniMap_C::STATIC_GetS3MinimapManager(class UObject* __WorldContext, class ABP_MiniMap2DManager_C** MinimapManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMap.BPF_MiniMap_C.GetS3MinimapManager");

	UBPF_MiniMap_C_GetS3MinimapManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinimapManager != nullptr)
		*MinimapManager = params.MinimapManager;
}


// Function BPF_MiniMap.BPF_MiniMap_C.GetS3MinimapWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_MiniMap2D_C*        MiniMap                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPF_MiniMap_C::STATIC_GetS3MinimapWidget(class UObject* __WorldContext, class UWBP_MiniMap2D_C** MiniMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMap.BPF_MiniMap_C.GetS3MinimapWidget");

	UBPF_MiniMap_C_GetS3MinimapWidget_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MiniMap != nullptr)
		*MiniMap = params.MiniMap;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
