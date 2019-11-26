
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

// Function BP_S3AreaManager.BP_S3AreaManager_C.IsTargetComponentInBuilding
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Primitive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           UsePoint                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3BuildingStaticMeshActor_C* Building                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           isIn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AreaManager_C::IsTargetComponentInBuilding(class UPrimitiveComponent* Primitive, bool UsePoint, class ABP_S3BuildingStaticMeshActor_C** Building, bool* isIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AreaManager.BP_S3AreaManager_C.IsTargetComponentInBuilding");

	ABP_S3AreaManager_C_IsTargetComponentInBuilding_Params params;
	params.Primitive = Primitive;
	params.UsePoint = UsePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Building != nullptr)
		*Building = params.Building;
	if (isIn != nullptr)
		*isIn = params.isIn;
}


// Function BP_S3AreaManager.BP_S3AreaManager_C.GetBuildingByCharaName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3BuildingStaticMeshActor_C* Building                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AreaManager_C::GetBuildingByCharaName(const struct FName& CharaName, class ABP_S3BuildingStaticMeshActor_C** Building)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AreaManager.BP_S3AreaManager_C.GetBuildingByCharaName");

	ABP_S3AreaManager_C_GetBuildingByCharaName_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Building != nullptr)
		*Building = params.Building;
}


// Function BP_S3AreaManager.BP_S3AreaManager_C.GetLeavePoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InBuilding                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void ABP_S3AreaManager_C::GetLeavePoint(class AActor* Actor, bool* InBuilding, struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AreaManager.BP_S3AreaManager_C.GetLeavePoint");

	ABP_S3AreaManager_C_GetLeavePoint_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InBuilding != nullptr)
		*InBuilding = params.InBuilding;
	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function BP_S3AreaManager.BP_S3AreaManager_C.GetBuildingByName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BuildingName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class ABP_S3BuildingStaticMeshActor_C* Building                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AreaManager_C::GetBuildingByName(const struct FString& BuildingName, class ABP_S3BuildingStaticMeshActor_C** Building)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AreaManager.BP_S3AreaManager_C.GetBuildingByName");

	ABP_S3AreaManager_C_GetBuildingByName_Params params;
	params.BuildingName = BuildingName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Building != nullptr)
		*Building = params.Building;
}


// Function BP_S3AreaManager.BP_S3AreaManager_C.IsPlayerInBuilding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3BuildingStaticMeshActor_C* Building                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           isIn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AreaManager_C::IsPlayerInBuilding(class ABP_S3BuildingStaticMeshActor_C** Building, bool* isIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AreaManager.BP_S3AreaManager_C.IsPlayerInBuilding");

	ABP_S3AreaManager_C_IsPlayerInBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Building != nullptr)
		*Building = params.Building;
	if (isIn != nullptr)
		*isIn = params.isIn;
}


// Function BP_S3AreaManager.BP_S3AreaManager_C.SetBuilding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3BuildingStaticMeshActor_C* Building                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Remove                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AreaManager_C::SetBuilding(class ABP_S3BuildingStaticMeshActor_C* Building, bool Remove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AreaManager.BP_S3AreaManager_C.SetBuilding");

	ABP_S3AreaManager_C_SetBuilding_Params params;
	params.Building = Building;
	params.Remove = Remove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AreaManager.BP_S3AreaManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AreaManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AreaManager.BP_S3AreaManager_C.UserConstructionScript");

	ABP_S3AreaManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
