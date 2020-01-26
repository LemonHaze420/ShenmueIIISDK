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

// Function BP_S3Memopad_page.BP_S3Memopad_page_C.SetPhoto
struct ABP_S3Memopad_page_C_SetPhoto_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              IsMaterialRender;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_page.BP_S3Memopad_page_C.SetPageTexture
struct ABP_S3Memopad_page_C_SetPageTexture_Params
{
	int                                                IndexR;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                IndexF;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_page.BP_S3Memopad_page_C.SetTextMesh
struct ABP_S3Memopad_page_C_SetTextMesh_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Turning;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_page.BP_S3Memopad_page_C.CanReady
struct ABP_S3Memopad_page_C_CanReady_Params
{
};

// Function BP_S3Memopad_page.BP_S3Memopad_page_C.SetTurnState
struct ABP_S3Memopad_page_C_SetTurnState_Params
{
	TEnumAsByte<EN_memopadTurntype>                    Turn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LastPage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_page.BP_S3Memopad_page_C.Initialize
struct ABP_S3Memopad_page_C_Initialize_Params
{
	bool                                               CoverFlg;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_page.BP_S3Memopad_page_C.EndAnim
struct ABP_S3Memopad_page_C_EndAnim_Params
{
};

// Function BP_S3Memopad_page.BP_S3Memopad_page_C.GetTurnState
struct ABP_S3Memopad_page_C_GetTurnState_Params
{
	TEnumAsByte<EN_memopadTurntype>                    State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_page.BP_S3Memopad_page_C.UserConstructionScript
struct ABP_S3Memopad_page_C_UserConstructionScript_Params
{
};

// Function BP_S3Memopad_page.BP_S3Memopad_page_C.ReceiveBeginPlay
struct ABP_S3Memopad_page_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3Memopad_page.BP_S3Memopad_page_C.ViewPage
struct ABP_S3Memopad_page_C_ViewPage_Params
{
};

// Function BP_S3Memopad_page.BP_S3Memopad_page_C.ReceiveTick
struct ABP_S3Memopad_page_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_page.BP_S3Memopad_page_C.ExecuteUbergraph_BP_S3Memopad_page
struct ABP_S3Memopad_page_C_ExecuteUbergraph_BP_S3Memopad_page_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
