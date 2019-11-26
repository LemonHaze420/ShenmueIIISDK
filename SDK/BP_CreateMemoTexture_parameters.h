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

// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.MakeString_EN
struct ABP_CreateMemoTexture_C_MakeString_EN_Params
{
	TArray<struct FString>                             String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.SetRowCountAndTexturePos
struct ABP_CreateMemoTexture_C_SetRowCountAndTexturePos_Params
{
	bool                                               Front;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMemoFlag;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Arrayndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uwgt_MemoPageBase_C*                         Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.PrintErrorLog
struct ABP_CreateMemoTexture_C_PrintErrorLog_Params
{
	int                                                MemoIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.GetMemoLabel
struct ABP_CreateMemoTexture_C_GetMemoLabel_Params
{
	int                                                MemoIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Label;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.SetTexture
struct ABP_CreateMemoTexture_C_SetTexture_Params
{
	TArray<int>                                        MemoNo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.RenderContactInfo
struct ABP_CreateMemoTexture_C_RenderContactInfo_Params
{
	int                                                RowCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uwgt_S3Memopad_textContentBase_C*            Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.GetMemoNo
struct ABP_CreateMemoTexture_C_GetMemoNo_Params
{
	int                                                PageNo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MemoNo;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.DestroyActor
struct ABP_CreateMemoTexture_C_DestroyActor_Params
{
};

// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.UserConstructionScript
struct ABP_CreateMemoTexture_C_UserConstructionScript_Params
{
};

// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.ReceiveBeginPlay
struct ABP_CreateMemoTexture_C_ReceiveBeginPlay_Params
{
};

// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.Update
struct ABP_CreateMemoTexture_C_Update_Params
{
};

// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.ExecuteUbergraph_BP_CreateMemoTexture
struct ABP_CreateMemoTexture_C_ExecuteUbergraph_BP_CreateMemoTexture_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
