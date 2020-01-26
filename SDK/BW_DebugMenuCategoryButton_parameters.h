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

// Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.ShowCursor
struct UBW_DebugMenuCategoryButton_C_ShowCursor_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.GetText_1
struct UBW_DebugMenuCategoryButton_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.OnMouseButtonDown_1
struct UBW_DebugMenuCategoryButton_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.PreConstruct
struct UBW_DebugMenuCategoryButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.ExecuteUbergraph_BW_DebugMenuCategoryButton
struct UBW_DebugMenuCategoryButton_C_ExecuteUbergraph_BW_DebugMenuCategoryButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.OnClick__DelegateSignature
struct UBW_DebugMenuCategoryButton_C_OnClick__DelegateSignature_Params
{
	class UBW_DebugMenuCategoryButton_C*               Clicked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
