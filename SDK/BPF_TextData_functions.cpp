
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

// Function BPF_TextData.BPF_TextData_C.GetS3TextItemName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ItemName                       (Parm, OutParm)

void UBPF_TextData_C::STATIC_GetS3TextItemName(const struct FString& ItemId, class UObject* __WorldContext, struct FText* ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_TextData.BPF_TextData_C.GetS3TextItemName");

	UBPF_TextData_C_GetS3TextItemName_Params params;
	params.ItemId = ItemId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemName != nullptr)
		*ItemName = params.ItemName;
}


// Function BPF_TextData.BPF_TextData_C.getS3TextDataManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_TextDataManager_C*   TextDataManager                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_TextData_C::STATIC_getS3TextDataManager(class UObject* __WorldContext, class UBP_TextDataManager_C** TextDataManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_TextData.BPF_TextData_C.getS3TextDataManager");

	UBPF_TextData_C_getS3TextDataManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextDataManager != nullptr)
		*TextDataManager = params.TextDataManager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
