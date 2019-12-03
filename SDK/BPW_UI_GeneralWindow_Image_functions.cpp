
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

// Function BPW_UI_GeneralWindow_Image.BPW_UI_GeneralWindow_Image_C.SetData
// (Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPW_UI_GeneralWindow_Image_C::SetData(const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Image.BPW_UI_GeneralWindow_Image_C.SetData");

	UBPW_UI_GeneralWindow_Image_C_SetData_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
