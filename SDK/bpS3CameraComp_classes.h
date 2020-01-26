#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bpS3CameraComp.bpS3CameraComp_C
// 0x0000 (0x07F0 - 0x07F0)
class UbpS3CameraComp_C : public UCameraComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bpS3CameraComp.bpS3CameraComp_C");
		return ptr;
	}


	void GetVerticalFOV(float* VerticalFOV);
	void HorizonRatioToPitch(float HorizonRatio, float* Pitch);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
