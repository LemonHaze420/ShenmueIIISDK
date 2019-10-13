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

// BlueprintGeneratedClass BTD_TalkCam_SecondCut.BTD_TalkCam_SecondCut_C
// 0x0000 (0x00A0 - 0x00A0)
class UBTD_TalkCam_SecondCut_C : public UBTDecorator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTD_TalkCam_SecondCut.BTD_TalkCam_SecondCut_C");
		return ptr;
	}


	bool PerformConditionCheck(class AActor** OwnerActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
