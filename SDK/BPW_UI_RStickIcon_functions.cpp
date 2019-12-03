
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

// Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.IsVisibleIcon
// (Net, NetRequest, NetResponse, Static, NetMulticast, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPW_UI_RStickIcon_C::STATIC_IsVisibleIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.IsVisibleIcon");

	UBPW_UI_RStickIcon_C_IsVisibleIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.SetPosCenter
// (NetReliable, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPW_UI_RStickIcon_C::SetPosCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.SetPosCenter");

	UBPW_UI_RStickIcon_C_SetPosCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.SetPosRight
// (Net, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPW_UI_RStickIcon_C::SetPosRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.SetPosRight");

	UBPW_UI_RStickIcon_C_SetPosRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.SetPos
// (Net, NetRequest, Event, NetMulticast, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               InPosition                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPW_UI_RStickIcon_C::SetPos(const struct FVector2D& InPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.SetPos");

	UBPW_UI_RStickIcon_C_SetPos_Params params;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.SetVisible
// (NetReliable, Native, Event, Static, NetMulticast, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_RStickIcon_C::STATIC_SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.SetVisible");

	UBPW_UI_RStickIcon_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.Construct
// (Event, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPW_UI_RStickIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.Construct");

	UBPW_UI_RStickIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.ExecuteUbergraph_BPW_UI_RStickIcon
// (NetReliable, Static, NetMulticast, MulticastDelegate, Public, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_RStickIcon_C::STATIC_ExecuteUbergraph_BPW_UI_RStickIcon(int EntryPoint)
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
