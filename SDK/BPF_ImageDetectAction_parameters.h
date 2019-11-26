#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.SetDetectIconMaterialParams
struct UBPF_ImageDetectAction_C_SetDetectIconMaterialParams_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.GetDetectActionConfirm
struct UBPF_ImageDetectAction_C_GetDetectActionConfirm_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.GetDeviceBindingIcon
struct UBPF_ImageDetectAction_C_GetDeviceBindingIcon_Params
{
	ES3PadButtonIndex                                  Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.DetectIconIdxToFaceButtonIdx
struct UBPF_ImageDetectAction_C_DetectIconIdxToFaceButtonIdx_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Absolute;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3PadButtonIndex                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.GetDetectIconBase
struct UBPF_ImageDetectAction_C_GetDetectIconBase_Params
{
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Absolute;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    IconBase;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.GetDetectButtonBase
struct UBPF_ImageDetectAction_C_GetDetectButtonBase_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UTexture2D*>                          TexArray;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.GetDetectActionIcon
struct UBPF_ImageDetectAction_C_GetDetectActionIcon_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FlipSize;                                                 // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
