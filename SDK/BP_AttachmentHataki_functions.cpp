
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

// Function BP_AttachmentHataki.BP_AttachmentHataki_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AttachmentHataki_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentHataki.BP_AttachmentHataki_C.UserConstructionScript");

	ABP_AttachmentHataki_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttachmentHataki.BP_AttachmentHataki_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AttachmentHataki_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentHataki.BP_AttachmentHataki_C.ReceiveBeginPlay");

	ABP_AttachmentHataki_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
