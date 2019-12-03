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

// BlueprintGeneratedClass BPF_AngleRange.BPF_AngleRange_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_AngleRange_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_AngleRange.BPF_AngleRange_C");
		return ptr;
	}


	void BPF_GetNormalizedOutsideRange(float InAngle, float RangeCenter, float RangePlusMinus, class UObject* __WorldContext, float* Normalized);
	void STATIC_BPF_ExpandAngleRange(float IncludeAngle, float RangeCenterDeg, float RangePlusMinusDeg, class UObject* __WorldContext, float* NewCenter, float* NewPlusMinus);
	void BPF_GetInAngleRange(float AngleDeg, float RangeCenterDeg, float RangePlusMinusDeg, class UObject* __WorldContext, bool* bInRange);
	void STATIC_BPF_GetNormalizedInRange(float InAngle, float RangeCenter, float RangePlusMinus, class UObject* __WorldContext, float* Normalized);
	void BPF_GetAngleOutsideRange(float InAngle, float RangeCenterDeg, float RangePlusMinusDeg, class UObject* __WorldContext, float* AngleFromRange);
	void ConvertAngleRange_LimitsToCenter(const struct FVector2D& Range, class UObject* __WorldContext, float* Center, float* PlusMinus);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
