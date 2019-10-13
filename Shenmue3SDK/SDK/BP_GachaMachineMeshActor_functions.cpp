
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_GachaMachineMeshActor.BP_GachaMachineMeshActor_C.SetMachineMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GachaMachineMeshActor_C::SetMachineMaterial(class UMaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GachaMachineMeshActor.BP_GachaMachineMeshActor_C.SetMachineMaterial");

	ABP_GachaMachineMeshActor_C_SetMachineMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GachaMachineMeshActor.BP_GachaMachineMeshActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GachaMachineMeshActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GachaMachineMeshActor.BP_GachaMachineMeshActor_C.UserConstructionScript");

	ABP_GachaMachineMeshActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
