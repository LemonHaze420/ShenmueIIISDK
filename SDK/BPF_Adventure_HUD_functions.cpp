
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

// Function BPF_Adventure_HUD.BPF_Adventure_HUD_C.getS3AdventureHud
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3AdventureHUD_C*    AdventureHUD                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Adventure_HUD_C::STATIC_getS3AdventureHud(class UObject* __WorldContext, class ABP_S3AdventureHUD_C** AdventureHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Adventure_HUD.BPF_Adventure_HUD_C.getS3AdventureHud");

	UBPF_Adventure_HUD_C_getS3AdventureHud_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdventureHUD != nullptr)
		*AdventureHUD = params.AdventureHUD;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
