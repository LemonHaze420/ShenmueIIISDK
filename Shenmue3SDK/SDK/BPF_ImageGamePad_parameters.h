#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPlatformFullDpadImage
struct UBPF_ImageGamePad_C_GetPlatformFullDpadImage_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetCancelButtonImage
struct UBPF_ImageGamePad_C_GetCancelButtonImage_Params
{
	TEnumAsByte<EFaceButtonImageStyle>                 Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetConfirmButtonImage
struct UBPF_ImageGamePad_C_GetConfirmButtonImage_Params
{
	TEnumAsByte<EFaceButtonImageStyle>                 Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPlatformShoulderImage
struct UBPF_ImageGamePad_C_GetPlatformShoulderImage_Params
{
	TEnumAsByte<EShoulderButtonStyle>                  Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGamepadShoulder>                      Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetShoulderSetAsset
struct UBPF_ImageGamePad_C_GetShoulderSetAsset_Params
{
	TEnumAsByte<EShoulderButtonStyle>                  Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3Platform                                        Platform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadShoulderSetAsset_C*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetShoulderImage
struct UBPF_ImageGamePad_C_GetShoulderImage_Params
{
	TEnumAsByte<EShoulderButtonStyle>                  Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGamepadShoulder>                      Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3Platform                                        Platform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetGamePadImageSet
struct UBPF_ImageGamePad_C_GetGamePadImageSet_Params
{
	ES3Platform                                        Platform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadImageSetAsset_C*                  SET;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPlatformFaceButtonImage_ByIndex
struct UBPF_ImageGamePad_C_GetPlatformFaceButtonImage_ByIndex_Params
{
	TEnumAsByte<EFaceButtonImageStyle>                 Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3PadButtonIndex                                  Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetFaceButtonImage_ByIndex
struct UBPF_ImageGamePad_C_GetFaceButtonImage_ByIndex_Params
{
	TEnumAsByte<EFaceButtonImageStyle>                 Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3Platform                                        Platform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3PadButtonIndex                                  Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetDpadButtonSetAsset
struct UBPF_ImageGamePad_C_GetDpadButtonSetAsset_Params
{
	TEnumAsByte<EDpadButtonImageStyle>                 Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3Platform                                        Platform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadFaceButtonSetAsset_C*             SET;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetFaceButtonSetAsset
struct UBPF_ImageGamePad_C_GetFaceButtonSetAsset_Params
{
	TEnumAsByte<EFaceButtonImageStyle>                 Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3Platform                                        Platform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadFaceButtonSetAsset_C*             SET;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPopPlatformButtonImage
struct UBPF_ImageGamePad_C_GetPopPlatformButtonImage_Params
{
	bool                                               Absolute;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonA;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonB;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonX;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonY;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonBlank;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetDefaultPlatformButtonImage
struct UBPF_ImageGamePad_C_GetDefaultPlatformButtonImage_Params
{
	bool                                               Absolute;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonA;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonB;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonX;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonY;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonBlank;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPlatformFaceButtonImage
struct UBPF_ImageGamePad_C_GetPlatformFaceButtonImage_Params
{
	TEnumAsByte<EFaceButtonImageStyle>                 Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Absolute;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonA;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Button_B;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonX;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonY;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonBlank;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetFaceButtonImage
struct UBPF_ImageGamePad_C_GetFaceButtonImage_Params
{
	TEnumAsByte<EFaceButtonImageStyle>                 Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3Platform                                        Platform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonA;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Button_B;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonX;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonY;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonBlank;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPlatformDpadImage
struct UBPF_ImageGamePad_C_GetPlatformDpadImage_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DpadUP;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DpadDOWN;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  dpadRIGHT;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  dpadLEFT;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  dpadNEUTRAL;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetDpadImage
struct UBPF_ImageGamePad_C_GetDpadImage_Params
{
	ES3Platform                                        Platform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DpadUP;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DpadDOWN;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  dpadRIGHT;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  dpadLEFT;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  dpadNEUTRAL;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetQTEPlatformButtonImage
struct UBPF_ImageGamePad_C_GetQTEPlatformButtonImage_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonA;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonB;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonX;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonY;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ButtonBlank;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
