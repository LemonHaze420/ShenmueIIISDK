
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

// Function ABP_AttachmentHataki_Feather.ABP_AttachmentHataki_Feather_C.ExecuteUbergraph_ABP_AttachmentHataki_Feather
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_AttachmentHataki_Feather_C::ExecuteUbergraph_ABP_AttachmentHataki_Feather(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AttachmentHataki_Feather.ABP_AttachmentHataki_Feather_C.ExecuteUbergraph_ABP_AttachmentHataki_Feather");

	UABP_AttachmentHataki_Feather_C_ExecuteUbergraph_ABP_AttachmentHataki_Feather_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
