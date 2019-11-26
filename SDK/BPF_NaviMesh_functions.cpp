
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

// Function BPF_NaviMesh.BPF_NaviMesh_C.GetNavModifierVolumes
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ANavModifierVolume*> Volumes                        (Parm, OutParm, ZeroConstructor)

void UBPF_NaviMesh_C::STATIC_GetNavModifierVolumes(class UObject* __WorldContext, TArray<class ANavModifierVolume*>* Volumes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_NaviMesh.BPF_NaviMesh_C.GetNavModifierVolumes");

	UBPF_NaviMesh_C_GetNavModifierVolumes_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Volumes != nullptr)
		*Volumes = params.Volumes;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
