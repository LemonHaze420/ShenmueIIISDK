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

// Function BPC_MiniGameBoardNum.BPC_MiniGameBoardNum_C.Update
struct UBPC_MiniGameBoardNum_C_Update_Params
{
};

// Function BPC_MiniGameBoardNum.BPC_MiniGameBoardNum_C.SetNumber
struct UBPC_MiniGameBoardNum_C_SetNumber_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameBoardNum.BPC_MiniGameBoardNum_C.SetList
struct UBPC_MiniGameBoardNum_C_SetList_Params
{
	TArray<class UStaticMeshComponent*>                MeshList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UMaterialInstanceDynamic*>            MaterialList;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPC_MiniGameBoardNum.BPC_MiniGameBoardNum_C.InitializeMesh
struct UBPC_MiniGameBoardNum_C_InitializeMesh_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
