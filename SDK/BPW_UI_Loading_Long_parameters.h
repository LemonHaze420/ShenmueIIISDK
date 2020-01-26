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

// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.ChangeFontType
struct UBPW_UI_Loading_Long_C_ChangeFontType_Params
{
};

// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.CheckHiddenMirror
struct UBPW_UI_Loading_Long_C_CheckHiddenMirror_Params
{
};

// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.SetLoadingType
struct UBPW_UI_Loading_Long_C_SetLoadingType_Params
{
	ES3LoadingType                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.SetDebugIndex
struct UBPW_UI_Loading_Long_C_SetDebugIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.GetProgressBarImage
struct UBPW_UI_Loading_Long_C_GetProgressBarImage_Params
{
	class US3LoadingProgressImage*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.SetCharaData
struct UBPW_UI_Loading_Long_C_SetCharaData_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.SetTexture
struct UBPW_UI_Loading_Long_C_SetTexture_Params
{
};

// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.Tick
struct UBPW_UI_Loading_Long_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.ExecuteUbergraph_BPW_UI_Loading_Long
struct UBPW_UI_Loading_Long_C_ExecuteUbergraph_BPW_UI_Loading_Long_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.MirrorRotation__DelegateSignature
struct UBPW_UI_Loading_Long_C_MirrorRotation__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
