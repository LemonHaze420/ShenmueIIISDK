
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

// Function BPF_SaveLoad.BPF_SaveLoad_C.GetS3SaveLoadManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_S3SaveLoadManager_C* newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_SaveLoad_C::STATIC_GetS3SaveLoadManager(class UObject* __WorldContext, class UBP_S3SaveLoadManager_C** newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SaveLoad.BPF_SaveLoad_C.GetS3SaveLoadManager");

	UBPF_SaveLoad_C_GetS3SaveLoadManager_Params params;
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
