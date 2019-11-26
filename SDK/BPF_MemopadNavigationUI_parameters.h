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

// Function BPF_MemopadNavigationUI.BPF_MemopadNavigationUI_C.BPF_UpdateMemopadShoulderUIGlow2
struct UBPF_MemopadNavigationUI_C_BPF_UpdateMemopadShoulderUIGlow2_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInteractable;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_MemopadNavigationUI.BPF_MemopadNavigationUI_C.BPF_UpdateMemopadShoulderUIGlow
struct UBPF_MemopadNavigationUI_C_BPF_UpdateMemopadShoulderUIGlow_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      AlphaSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInteractable;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_MemopadNavigationUI.BPF_MemopadNavigationUI_C.BPF_InitMemopadShoulderUI
struct UBPF_MemopadNavigationUI_C_BPF_InitMemopadShoulderUI_Params
{
	class UImage*                                      Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      Left;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RightMaterial;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LeftMaterial;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
