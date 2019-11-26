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

// Function BPF_Memo.BPF_Memo_C.GetS3MemoTextureDataManager
struct UBPF_Memo_C_GetS3MemoTextureDataManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_MemoTextureDataManager_C*                BP_MemoTextureDataManager;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Memo.BPF_Memo_C.getS3MemopadManager
struct UBPF_Memo_C_getS3MemopadManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3MemopadManager_C*                      BPS3MemopadManager;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
