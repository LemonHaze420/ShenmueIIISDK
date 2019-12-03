
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

// Function BPC_MeshFader.BPC_MeshFader_C.RegisterSiblingMeshes
// (NetReliable, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_MeshFader_C::STATIC_RegisterSiblingMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MeshFader.BPC_MeshFader_C.RegisterSiblingMeshes");

	UBPC_MeshFader_C_RegisterSiblingMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MeshFader.BPC_MeshFader_C.RegisterSiblingSkeletalMeshes
// (Net, NetRequest, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_MeshFader_C::STATIC_RegisterSiblingSkeletalMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MeshFader.BPC_MeshFader_C.RegisterSiblingSkeletalMeshes");

	UBPC_MeshFader_C_RegisterSiblingSkeletalMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MeshFader.BPC_MeshFader_C.CreateFadeMaterial
// (NetReliable, Exec, Event, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMaterialInterface*      SourceMaterial                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UBPC_MeshFader_C::STATIC_CreateFadeMaterial(class UMaterialInterface* SourceMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MeshFader.BPC_MeshFader_C.CreateFadeMaterial");

	UBPC_MeshFader_C_CreateFadeMaterial_Params params;
	params.SourceMaterial = SourceMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
