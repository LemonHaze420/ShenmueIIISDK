#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.DisableSoftwareCursor
struct UBPW_AdventureCursorWindow_C_DisableSoftwareCursor_Params
{
};

// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.OnMouseUp
struct UBPW_AdventureCursorWindow_C_OnMouseUp_Params
{
};

// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.OnMouseDown
struct UBPW_AdventureCursorWindow_C_OnMouseDown_Params
{
};

// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.UpdateSoftwareCursor
struct UBPW_AdventureCursorWindow_C_UpdateSoftwareCursor_Params
{
	struct FVector2D                                   MouseScreenSpace;                                         // (Parm, OutParm, IsPlainOldData)
	struct FVector2D                                   VirtualAxii;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               JoystickOn;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               SetMousePosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.CanTrapMouse
struct UBPW_AdventureCursorWindow_C_CanTrapMouse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.ConstrainViewportMousePosition
struct UBPW_AdventureCursorWindow_C_ConstrainViewportMousePosition_Params
{
	struct FVector2D                                   Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.EnableVirtualJoystick
struct UBPW_AdventureCursorWindow_C_EnableVirtualJoystick_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.SetMouseCursorProperties
struct UBPW_AdventureCursorWindow_C_SetMouseCursorProperties_Params
{
	bool                                               EnableWalkMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.GetConstrainRect
struct UBPW_AdventureCursorWindow_C_GetConstrainRect_Params
{
	struct FVector2D                                   Min;                                                      // (Parm, OutParm, IsPlainOldData)
	struct FVector2D                                   Max;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.ConstrainAbsoluteMousePosition
struct UBPW_AdventureCursorWindow_C_ConstrainAbsoluteMousePosition_Params
{
	struct FEventReply                                 EventReply;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector2D                                   Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.Construct
struct UBPW_AdventureCursorWindow_C_Construct_Params
{
};

// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.Tick
struct UBPW_AdventureCursorWindow_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C.ExecuteUbergraph_BPW_AdventureCursorWindow
struct UBPW_AdventureCursorWindow_C_ExecuteUbergraph_BPW_AdventureCursorWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
