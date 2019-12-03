#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_S3AreaManager.BP_S3AreaManager_C
// 0x0020 (0x03C0 - 0x03A0)
class ABP_S3AreaManager_C : public AS3AreaManager
{
public:
	class UBPC_DebugAreaLight_C*                       BPC_DebugAreaLight;                                       // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ABP_S3BuildingStaticMeshActor_C*>     BuildingActors;                                           // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3AreaManager.BP_S3AreaManager_C");
		return ptr;
	}


	void STATIC_IsTargetComponentInBuilding(class UPrimitiveComponent* Primitive, bool UsePoint, class ABP_S3BuildingStaticMeshActor_C** Building, bool* isIn);
	void STATIC_GetBuildingByCharaName(const struct FName& CharaName, class ABP_S3BuildingStaticMeshActor_C** Building);
	void GetLeavePoint(class AActor* Actor, bool* InBuilding, struct FVector* Location, struct FRotator* Rotation);
	void STATIC_GetBuildingByName(const struct FString& BuildingName, class ABP_S3BuildingStaticMeshActor_C** Building);
	void IsPlayerInBuilding(class ABP_S3BuildingStaticMeshActor_C** Building, bool* isIn);
	void STATIC_SetBuilding(class ABP_S3BuildingStaticMeshActor_C* Building, bool Remove);
	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
