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

// BlueprintGeneratedClass BPF_Calc.BPF_Calc_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Calc_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Calc.BPF_Calc_C");
		return ptr;
	}


	void CalculateVerticalFOV(float HFOV, float AspectRatio, class UObject* __WorldContext, float* VFOV);
	void STATIC_distanceVector(const struct FVector& A, const struct FVector& B, bool Is_Distance_2D, class UObject* __WorldContext, float* Length);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
