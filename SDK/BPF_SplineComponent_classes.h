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

// BlueprintGeneratedClass BPF_SplineComponent.BPF_SplineComponent_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_SplineComponent_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_SplineComponent.BPF_SplineComponent_C");
		return ptr;
	}


	struct FVector STATIC_BPF_Spline_FindPredictedWorldLocationWithProjection(class USplineComponent* spline, const struct FVector& WorldLocation, float DistanceForward, class UObject* __WorldContext);
	float STATIC_BPF_Spline_FindDistanceClosestToWorldLocation(class USplineComponent* spline, const struct FVector& WorldLocation, class UObject* __WorldContext);
	struct FVector STATIC_BPF_Spline_FindPredictedWorldLocation(class USplineComponent* spline, const struct FVector& WorldLocation, float DistanceForward, class UObject* __WorldContext);
	struct FVector STATIC_BPF_Spline_FindTangentClosestToWorldLocation(class USplineComponent* spline, class UObject* __WorldContext, struct FVector* WorldLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
