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

// Function BP_MemoTextureDataManager.BP_MemoTextureDataManager_C.GetTextureData
struct ABP_MemoTextureDataManager_C_GetTextureData_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Offset;                                                   // (Parm, OutParm, IsPlainOldData)
	class UTexture*                                    TextureReference;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MemoTextureDataManager.BP_MemoTextureDataManager_C.UserConstructionScript
struct ABP_MemoTextureDataManager_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
