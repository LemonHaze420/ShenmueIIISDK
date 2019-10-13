
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

// Function BPF_ItemIcon.BPF_ItemIcon_C.SetItemIconToImage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  target_image                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            item_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_ItemIcon_C::STATIC_SetItemIconToImage(class UImage* target_image, int item_id, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ItemIcon.BPF_ItemIcon_C.SetItemIconToImage");

	UBPF_ItemIcon_C_SetItemIconToImage_Params params;
	params.target_image = target_image;
	params.item_id = item_id;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
