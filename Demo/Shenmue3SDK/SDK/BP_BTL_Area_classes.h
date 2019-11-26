#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BTL_Area.BP_BTL_Area_C
// 0x0008 (0x0330 - 0x0328)
class ABP_BTL_Area_C : public AActor
{
public:
	class USceneComponent*                             Scene;                                                    // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_Area.BP_BTL_Area_C");
		return ptr;
	}


	void InsideEntireArea(const struct FVector& Point, bool* bIsInside);
	struct FVector GetPathfindingRefLocation();
	bool TestStraightPathInside(const struct FVector& Location);
	void ClampLocation(const struct FVector& InLocation, struct FVector* OutLocation);
	struct FVector NudgeDirTowardsCenter(const struct FVector& Direction, const struct FVector& ToCenter);
	void EnableCollision(bool Enabled, bool* dummy);
	void IsReturnedInside(const struct FVector& InLocation, bool* Returned);
	void ScaleMovement(const struct FVector& Location, const struct FVector& Direction, struct FVector* Redirected);
	void InsideFreeArea(const struct FVector& Point, bool* bIsInside);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
