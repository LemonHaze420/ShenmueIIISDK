
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AdobeMudWall_Spline.AdobeMudWall_Spline_C.CheckForAssignedMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IndexIsAssigned                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             Mesh                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAdobeMudWall_Spline_C::CheckForAssignedMesh(int Index, bool* IndexIsAssigned, class UStaticMesh** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdobeMudWall_Spline.AdobeMudWall_Spline_C.CheckForAssignedMesh");

	AAdobeMudWall_Spline_C_CheckForAssignedMesh_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IndexIsAssigned != nullptr)
		*IndexIsAssigned = params.IndexIsAssigned;
	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function AdobeMudWall_Spline.AdobeMudWall_Spline_C.RandomSplineMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStaticMesh* AAdobeMudWall_Spline_C::RandomSplineMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdobeMudWall_Spline.AdobeMudWall_Spline_C.RandomSplineMesh");

	AAdobeMudWall_Spline_C_RandomSplineMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdobeMudWall_Spline.AdobeMudWall_Spline_C.EndMeshSelection
// (Public, BlueprintCallable, BlueprintEvent)

void AAdobeMudWall_Spline_C::EndMeshSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdobeMudWall_Spline.AdobeMudWall_Spline_C.EndMeshSelection");

	AAdobeMudWall_Spline_C_EndMeshSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdobeMudWall_Spline.AdobeMudWall_Spline_C.StartMeshSelection
// (Public, BlueprintCallable, BlueprintEvent)

void AAdobeMudWall_Spline_C::StartMeshSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdobeMudWall_Spline.AdobeMudWall_Spline_C.StartMeshSelection");

	AAdobeMudWall_Spline_C_StartMeshSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdobeMudWall_Spline.AdobeMudWall_Spline_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAdobeMudWall_Spline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdobeMudWall_Spline.AdobeMudWall_Spline_C.UserConstructionScript");

	AAdobeMudWall_Spline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
