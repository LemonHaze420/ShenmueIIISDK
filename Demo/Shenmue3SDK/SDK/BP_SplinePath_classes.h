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

// BlueprintGeneratedClass BP_SplinePath.BP_SplinePath_C
// 0x0010 (0x0338 - 0x0328)
class ABP_SplinePath_C : public AActor
{
public:
	class USplineComponent*                            spline;                                                   // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SplinePath.BP_SplinePath_C");
		return ptr;
	}


	void GetNextLocation(float CurrentLocation, float RequestedOffsetInUU, float* TimeValueOnSplineComponent);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
