
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

// Function BPF_MiniGame.BPF_MiniGame_C.getS3MiniGameManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_MiniGameManager_C*   MiniGameManager                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_MiniGame_C::STATIC_getS3MiniGameManager(class UObject* __WorldContext, class ABP_MiniGameManager_C** MiniGameManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniGame.BPF_MiniGame_C.getS3MiniGameManager");

	UBPF_MiniGame_C_getS3MiniGameManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MiniGameManager != nullptr)
		*MiniGameManager = params.MiniGameManager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
