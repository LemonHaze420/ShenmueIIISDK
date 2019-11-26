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

// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.IsLoading
struct ABP_SkillDisplayScene_Base_C_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.GetWidgetVisible
struct ABP_SkillDisplayScene_Base_C_GetWidgetVisible_Params
{
	class UWidget*                                     self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.CaptureSingleFrame
struct ABP_SkillDisplayScene_Base_C_CaptureSingleFrame_Params
{
	struct FName                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.SetRenderTexture
struct ABP_SkillDisplayScene_Base_C_SetRenderTexture_Params
{
	class UTextureRenderTarget2D*                      TextureRenderTarget2D;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.EnableDrawToTexture
struct ABP_SkillDisplayScene_Base_C_EnableDrawToTexture_Params
{
	bool                                               bRender;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.StopMotion
struct ABP_SkillDisplayScene_Base_C_StopMotion_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.PlayMotionForItem
struct ABP_SkillDisplayScene_Base_C_PlayMotionForItem_Params
{
	struct FName                                       Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.UserConstructionScript
struct ABP_SkillDisplayScene_Base_C_UserConstructionScript_Params
{
};

// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.ReceiveTick
struct ABP_SkillDisplayScene_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.ReceiveEndPlay
struct ABP_SkillDisplayScene_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.ExecuteUbergraph_BP_SkillDisplayScene_Base
struct ABP_SkillDisplayScene_Base_C_ExecuteUbergraph_BP_SkillDisplayScene_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
