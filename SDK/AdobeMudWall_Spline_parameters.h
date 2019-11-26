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

// Function AdobeMudWall_Spline.AdobeMudWall_Spline_C.CheckForAssignedMesh
struct AAdobeMudWall_Spline_C_CheckForAssignedMesh_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IndexIsAssigned;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdobeMudWall_Spline.AdobeMudWall_Spline_C.RandomSplineMesh
struct AAdobeMudWall_Spline_C_RandomSplineMesh_Params
{
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdobeMudWall_Spline.AdobeMudWall_Spline_C.EndMeshSelection
struct AAdobeMudWall_Spline_C_EndMeshSelection_Params
{
};

// Function AdobeMudWall_Spline.AdobeMudWall_Spline_C.StartMeshSelection
struct AAdobeMudWall_Spline_C_StartMeshSelection_Params
{
};

// Function AdobeMudWall_Spline.AdobeMudWall_Spline_C.UserConstructionScript
struct AAdobeMudWall_Spline_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
