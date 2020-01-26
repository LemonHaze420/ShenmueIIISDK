
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

// Function BPF_UltraDynamicSky.BPF_UltraDynamicSky_C.GetUltraDynamicSky
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AUltra_Dynamic_Sky_BP_C* UDS                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_UltraDynamicSky_C::STATIC_GetUltraDynamicSky(class UObject* __WorldContext, class AUltra_Dynamic_Sky_BP_C** UDS)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_UltraDynamicSky.BPF_UltraDynamicSky_C.GetUltraDynamicSky");

	UBPF_UltraDynamicSky_C_GetUltraDynamicSky_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UDS != nullptr)
		*UDS = params.UDS;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
