
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

// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.DisableSoftwareCursor
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_AdventureCursorWindow_C::DisableSoftwareCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.DisableSoftwareCursor");

	UBPW_AdventureCursorWindow_C_DisableSoftwareCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.OnMouseUp
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_AdventureCursorWindow_C::OnMouseUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.OnMouseUp");

	UBPW_AdventureCursorWindow_C_OnMouseUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.OnMouseDown
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_AdventureCursorWindow_C::OnMouseDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.OnMouseDown");

	UBPW_AdventureCursorWindow_C_OnMouseDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.UpdateSoftwareCursor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPW_AdventureCursorWindow_C::CanTrapMouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.CanTrapMouse");

	UBPW_AdventureCursorWindow_C_CanTrapMouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.ConstrainViewportMousePosition
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_AdventureCursorWindow_C::EnableVirtualJoystick(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.EnableVirtualJoystick");

	UBPW_AdventureCursorWindow_C_EnableVirtualJoystick_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.SetMouseCursorProperties
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnableWalkMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_AdventureCursorWindow_C::SetMouseCursorProperties(bool EnableWalkMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.SetMouseCursorProperties");

	UBPW_AdventureCursorWindow_C_SetMouseCursorProperties_Params params;
	params.EnableWalkMode = EnableWalkMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.GetConstrainRect
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Min                            (Parm, OutParm, IsPlainOldData)
// struct FVector2D               Max                            (Parm, OutParm, IsPlainOldData)

void UBPW_AdventureCursorWindow_C::GetConstrainRect(struct FVector2D* Min, struct FVector2D* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.GetConstrainRect");

	UBPW_AdventureCursorWindow_C_GetConstrainRect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.ConstrainAbsoluteMousePosition
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventReply != nullptr)
		*EventReply = params.EventReply;

	return params.ReturnValue;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_AdventureCursorWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.Construct");

	UBPW_AdventureCursorWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_AdventureCursorWindow_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.Tick");

	UBPW_AdventureCursorWindow_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.ExecuteUbergraph_BPW_AdventureCursorWindow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_AdventureCursorWindow_C::ExecuteUbergraph_BPW_AdventureCursorWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.ExecuteUbergraph_BPW_AdventureCursorWindow");

	UBPW_AdventureCursorWindow_C_ExecuteUbergraph_BPW_AdventureCursorWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
