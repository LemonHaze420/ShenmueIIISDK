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

// Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.ChangeFontColor
struct UBPW_UI_Loading_Short_C_ChangeFontColor_Params
{
	class UTextBlock*                                  Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.StartFade
struct UBPW_UI_Loading_Short_C_StartFade_Params
{
	bool                                               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.Construct
struct UBPW_UI_Loading_Short_C_Construct_Params
{
};

// Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.Tick
struct UBPW_UI_Loading_Short_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.ExecuteUbergraph_BPW_UI_Loading_Short
struct UBPW_UI_Loading_Short_C_ExecuteUbergraph_BPW_UI_Loading_Short_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.OnFinishFadeOut__DelegateSignature
struct UBPW_UI_Loading_Short_C_OnFinishFadeOut__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
