
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

// Function BPF_Door.BPF_Door_C.GetDoorManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_DoorManager_C*       DoorManager                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Door_C::STATIC_GetDoorManager(class UObject* __WorldContext, class ABP_DoorManager_C** DoorManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Door.BPF_Door_C.GetDoorManager");

	UBPF_Door_C_GetDoorManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoorManager != nullptr)
		*DoorManager = params.DoorManager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
