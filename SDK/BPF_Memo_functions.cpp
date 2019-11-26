
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

// Function BPF_Memo.BPF_Memo_C.GetS3MemoTextureDataManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_MemoTextureDataManager_C* BP_MemoTextureDataManager      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Memo_C::STATIC_GetS3MemoTextureDataManager(class UObject* __WorldContext, class ABP_MemoTextureDataManager_C** BP_MemoTextureDataManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Memo.BPF_Memo_C.GetS3MemoTextureDataManager");

	UBPF_Memo_C_GetS3MemoTextureDataManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_MemoTextureDataManager != nullptr)
		*BP_MemoTextureDataManager = params.BP_MemoTextureDataManager;
}


// Function BPF_Memo.BPF_Memo_C.getS3MemopadManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3MemopadManager_C*  BPS3MemopadManager             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Memo_C::STATIC_getS3MemopadManager(class UObject* __WorldContext, class ABP_S3MemopadManager_C** BPS3MemopadManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Memo.BPF_Memo_C.getS3MemopadManager");

	UBPF_Memo_C_getS3MemopadManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BPS3MemopadManager != nullptr)
		*BPS3MemopadManager = params.BPS3MemopadManager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
