
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

// Function BPF_PopupItem.BPF_PopupItem_C.getS3PopupItem
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_PopupItem_C*         BP_PopupItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_PopupItem_C::STATIC_getS3PopupItem(class UObject* __WorldContext, class ABP_PopupItem_C** BP_PopupItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_PopupItem.BPF_PopupItem_C.getS3PopupItem");

	UBPF_PopupItem_C_getS3PopupItem_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_PopupItem != nullptr)
		*BP_PopupItem = params.BP_PopupItem;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
