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

// Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.SetData
struct UBPW_UI_GeneralWindow_Text_C_SetData_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                FontSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.Construct
struct UBPW_UI_GeneralWindow_Text_C_Construct_Params
{
};

// Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.Tick
struct UBPW_UI_GeneralWindow_Text_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.ExecuteUbergraph_BPW_UI_GeneralWindow_Text
struct UBPW_UI_GeneralWindow_Text_C_ExecuteUbergraph_BPW_UI_GeneralWindow_Text_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
