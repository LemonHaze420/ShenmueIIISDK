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

// BlueprintGeneratedClass TalkCam_SelectNextCameraMask.TalkCam_SelectNextCameraMask_C
// 0x0070 (0x0120 - 0x00B0)
class UTalkCam_SelectNextCameraMask_C : public UTalkCam_BaseTask_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (Transient, DuplicateTransient)
	int                                                maxFrequency;                                             // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	TArray<int>                                        Frequency;                                                // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FBlackboardKeySelector                      NextCameraMask;                                           // 0x00D0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      bLookSameCharacter;                                       // 0x00F8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TalkCam_SelectNextCameraMask.TalkCam_SelectNextCameraMask_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ExecuteUbergraph_TalkCam_SelectNextCameraMask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
