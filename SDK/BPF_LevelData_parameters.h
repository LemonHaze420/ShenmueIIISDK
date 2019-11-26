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

// Function BPF_LevelData.BPF_LevelData_C.GetACLevelName
struct UBPF_LevelData_C_GetACLevelName_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_LevelData.BPF_LevelData_C.IsInChobuRyosya
struct UBPF_LevelData_C_IsInChobuRyosya_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               In;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_LevelData.BPF_LevelData_C.GetBPLevelName
struct UBPF_LevelData_C_GetBPLevelName_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_LevelData.BPF_LevelData_C.GetLookAtLevelName
struct UBPF_LevelData_C_GetLookAtLevelName_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_LevelData.BPF_LevelData_C.GetLandscapeLevelNames
struct UBPF_LevelData_C_GetLandscapeLevelNames_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_LevelData.BPF_LevelData_C.GetMinimapLevelName
struct UBPF_LevelData_C_GetMinimapLevelName_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_LevelData.BPF_LevelData_C.GetNaviMeshLevelName
struct UBPF_LevelData_C_GetNaviMeshLevelName_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_LevelData.BPF_LevelData_C.GetNPCLevelName
struct UBPF_LevelData_C_GetNPCLevelName_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_LevelData.BPF_LevelData_C.GetChobuLevelName
struct UBPF_LevelData_C_GetChobuLevelName_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_LevelData.BPF_LevelData_C.getLevelNameAndEnum
struct UBPF_LevelData_C_getLevelNameAndEnum_Params
{
	struct FString                                     PersistentLevelName;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Detail;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     nameStr;                                                  // (Parm, OutParm, ZeroConstructor)
	ES3Where                                           enWhere;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_LevelData.BPF_LevelData_C.getLevelData
struct UBPF_LevelData_C_getLevelData_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3LevelDataAsset*                           LevelData;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
