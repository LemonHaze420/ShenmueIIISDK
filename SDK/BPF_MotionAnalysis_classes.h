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

// BlueprintGeneratedClass BPF_MotionAnalysis.BPF_MotionAnalysis_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_MotionAnalysis_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_MotionAnalysis.BPF_MotionAnalysis_C");
		return ptr;
	}


	void STATIC_BPF_FindOverlappingNotifyState(class UAnimMontage* Montage, class UClass* FindStateClass, class UAnimNotifyState* StateRef, class UObject* __WorldContext, class UAnimNotifyState** OutState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
