
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

// Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_RStickIcon_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.SetVisible");

	UBPW_UI_RStickIcon_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_UI_RStickIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.Construct");

	UBPW_UI_RStickIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.ExecuteUbergraph_BPW_UI_RStickIcon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_RStickIcon_C::ExecuteUbergraph_BPW_UI_RStickIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.ExecuteUbergraph_BPW_UI_RStickIcon");

	UBPW_UI_RStickIcon_C_ExecuteUbergraph_BPW_UI_RStickIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
