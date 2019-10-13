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

// Function BPC_ObjectLoader.BPC_ObjectLoader_C.AssetLoadObject
struct UBPC_ObjectLoader_C_AssetLoadObject_Params
{
	struct FST_ObjectLoadInfo                          LoadInfo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPC_ObjectLoader.BPC_ObjectLoader_C.RemoveLoadingList
struct UBPC_ObjectLoader_C_RemoveLoadingList_Params
{
	struct FString                                     LoadId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPC_ObjectLoader.BPC_ObjectLoader_C.AddLoadingList
struct UBPC_ObjectLoader_C_AddLoadingList_Params
{
	struct FString                                     LoadId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPC_ObjectLoader.BPC_ObjectLoader_C.OnLoaded_066D0130431550B75D2FBDB198B97FBC
struct UBPC_ObjectLoader_C_OnLoaded_066D0130431550B75D2FBDB198B97FBC_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ObjectLoader.BPC_ObjectLoader_C.RequestLoadObject
struct UBPC_ObjectLoader_C_RequestLoadObject_Params
{
	struct FString                                     LoadId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPC_ObjectLoader.BPC_ObjectLoader_C.StartLoadObject
struct UBPC_ObjectLoader_C_StartLoadObject_Params
{
	struct FST_ObjectLoadInfo                          LoadObjInfo;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPC_ObjectLoader.BPC_ObjectLoader_C.ReceiveTick
struct UBPC_ObjectLoader_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ObjectLoader.BPC_ObjectLoader_C.ExecuteUbergraph_BPC_ObjectLoader
struct UBPC_ObjectLoader_C_ExecuteUbergraph_BPC_ObjectLoader_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ObjectLoader.BPC_ObjectLoader_C.OnLoadedObjectDispatcher__DelegateSignature
struct UBPC_ObjectLoader_C_OnLoadedObjectDispatcher__DelegateSignature_Params
{
	struct FString                                     LoadId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     LoadedObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
