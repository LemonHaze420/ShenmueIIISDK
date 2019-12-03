
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

// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.DisableSoftwareCursor
// (Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Delegate, BlueprintEvent, BlueprintPure)

void UBPW_AdventureCursorWindow_C::STATIC_DisableSoftwareCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.DisableSoftwareCursor");

	UBPW_AdventureCursorWindow_C_DisableSoftwareCursor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.OnMouseUp
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, Private, BlueprintEvent, BlueprintPure)

void UBPW_AdventureCursorWindow_C::STATIC_OnMouseUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.OnMouseUp");

	UBPW_AdventureCursorWindow_C_OnMouseUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.OnMouseDown
// (Net, NetReliable, Native, Event, NetResponse, Static, Private, BlueprintEvent, BlueprintPure)

void UBPW_AdventureCursorWindow_C::STATIC_OnMouseDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.OnMouseDown");

	UBPW_AdventureCursorWindow_C_OnMouseDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.UpdateSoftwareCursor
// (Exec, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               MouseScreenSpace               (Parm, OutParm, IsPlainOldData)
// struct FVector2D               VirtualAxii                    (Parm, OutParm, IsPlainOldData)
// bool                           JoystickOn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           SetMousePosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_AdventureCursorWindow_C::UpdateSoftwareCursor(struct FVector2D* MouseScreenSpace, struct FVector2D* VirtualAxii, bool* JoystickOn, bool* SetMousePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.UpdateSoftwareCursor");

	UBPW_AdventureCursorWindow_C_UpdateSoftwareCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseScreenSpace != nullptr)
		*MouseScreenSpace = params.MouseScreenSpace;
	if (VirtualAxii != nullptr)
		*VirtualAxii = params.VirtualAxii;
	if (JoystickOn != nullptr)
		*JoystickOn = params.JoystickOn;
	if (SetMousePosition != nullptr)
		*SetMousePosition = params.SetMousePosition;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.CanTrapMouse
// (Exec, Native, Event, NetResponse, Static, Private, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPW_AdventureCursorWindow_C::STATIC_CanTrapMouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.CanTrapMouse");

	UBPW_AdventureCursorWindow_C_CanTrapMouse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.ConstrainViewportMousePosition
// (Net, NetRequest, Event, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UBPW_AdventureCursorWindow_C::ConstrainViewportMousePosition(const struct FVector2D& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.ConstrainViewportMousePosition");

	UBPW_AdventureCursorWindow_C_ConstrainViewportMousePosition_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.EnableVirtualJoystick
// (Exec, Native, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_AdventureCursorWindow_C::STATIC_EnableVirtualJoystick(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.EnableVirtualJoystick");

	UBPW_AdventureCursorWindow_C_EnableVirtualJoystick_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.SetMouseCursorProperties
// (Net, NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// bool                           EnableWalkMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_AdventureCursorWindow_C::STATIC_SetMouseCursorProperties(bool EnableWalkMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.SetMouseCursorProperties");

	UBPW_AdventureCursorWindow_C_SetMouseCursorProperties_Params params;
	params.EnableWalkMode = EnableWalkMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.GetConstrainRect
// (NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Min                            (Parm, OutParm, IsPlainOldData)
// struct FVector2D               Max                            (Parm, OutParm, IsPlainOldData)

void UBPW_AdventureCursorWindow_C::STATIC_GetConstrainRect(struct FVector2D* Min, struct FVector2D* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.GetConstrainRect");

	UBPW_AdventureCursorWindow_C_GetConstrainRect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.ConstrainAbsoluteMousePosition
// (Native, Event, NetResponse, Public, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEventReply             EventReply                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBPW_AdventureCursorWindow_C::ConstrainAbsoluteMousePosition(const struct FVector2D& Location, struct FEventReply* EventReply)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.ConstrainAbsoluteMousePosition");

	UBPW_AdventureCursorWindow_C_ConstrainAbsoluteMousePosition_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventReply != nullptr)
		*EventReply = params.EventReply;

	return params.ReturnValue;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.Construct
// (Exec, Native, Event, NetResponse, Static, Private, BlueprintEvent, BlueprintPure)

void UBPW_AdventureCursorWindow_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.Construct");

	UBPW_AdventureCursorWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.Tick
// (Net, NetReliable, NetRequest, Native, Event, Public, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_AdventureCursorWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.Tick");

	UBPW_AdventureCursorWindow_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.ExecuteUbergraph_BPW_AdventureCursorWindow
// (Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_AdventureCursorWindow_C::STATIC_ExecuteUbergraph_BPW_AdventureCursorWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.ExecuteUbergraph_BPW_AdventureCursorWindow");

	UBPW_AdventureCursorWindow_C_ExecuteUbergraph_BPW_AdventureCursorWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
