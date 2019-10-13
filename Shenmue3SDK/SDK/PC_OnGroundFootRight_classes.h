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

// BlueprintGeneratedClass PC_OnGroundFootRight.PC_OnGroundFootRight_C
// 0x0000 (0x0030 - 0x0030)
class UPC_OnGroundFootRight_C : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PC_OnGroundFootRight.PC_OnGroundFootRight_C");
		return ptr;
	}


	bool Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* FrameDeltaTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
