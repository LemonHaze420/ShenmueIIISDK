
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

// Function WBP_Parts_Money.WBP_Parts_Money_C.SetValue
// (Net, NetRequest, Exec, Native, Static, Public, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NotAnim                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Parts_Money_C::STATIC_SetValue(int Value, bool NotAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Parts_Money.WBP_Parts_Money_C.SetValue");

	UWBP_Parts_Money_C_SetValue_Params params;
	params.Value = Value;
	params.NotAnim = NotAnim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
