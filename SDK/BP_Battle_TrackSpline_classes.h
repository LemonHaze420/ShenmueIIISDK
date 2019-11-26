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

// BlueprintGeneratedClass BP_Battle_TrackSpline.BP_Battle_TrackSpline_C
// 0x0020 (0x0348 - 0x0328)
class ABP_Battle_TrackSpline_C : public AActor
{
public:
	class UBoxComponent*                               ProgressionBlocker;                                       // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline1;                                                  // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot1;                                        // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EN_BTL_PlayerMoveLimitSetting>         PlayerMovementLimit;                                      // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_BTL_TrackSplineCameraSetting>       CameraBehavior;                                           // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0342(0x0002) MISSED OFFSET
	int                                                MaxLiveEnemy;                                             // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Battle_TrackSpline.BP_Battle_TrackSpline_C");
		return ptr;
	}


	void Editor_Fixup();
	void SetBlockDistance(float Distance);
	void CalculateClosestDirection(const struct FVector& SourceLocation, const struct FVector& SourceDirection, float LookAheadAmount, struct FVector* OutDirection);
	void LookAhead(const struct FVector& CurrentLocation, float DistanceAhead, struct FVector* OutLocation);
	void FindTangent(const struct FVector& WorldLocation, struct FVector* Tangent);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
