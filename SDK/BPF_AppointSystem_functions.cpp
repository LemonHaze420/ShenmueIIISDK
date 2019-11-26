
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

// Function BPF_AppointSystem.BPF_AppointSystem_C.GetS3AppointSystemManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_AppointSystemManager_C* newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_AppointSystem_C::STATIC_GetS3AppointSystemManager(class UObject* __WorldContext, class ABP_AppointSystemManager_C** newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_AppointSystem.BPF_AppointSystem_C.GetS3AppointSystemManager");

	UBPF_AppointSystem_C_GetS3AppointSystemManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
