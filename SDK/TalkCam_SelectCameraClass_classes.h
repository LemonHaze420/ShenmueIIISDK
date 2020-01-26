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

// BlueprintGeneratedClass TalkCam_SelectCameraClass.TalkCam_SelectCameraClass_C
// 0x0040 (0x00F0 - 0x00B0)
class UTalkCam_SelectCameraClass_C : public UTalkCam_BaseTask_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      cameraClass;                                              // 0x00B8(0x0028) (Edit, BlueprintVisible)
	bool                                               isPrevMultiple;                                           // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	int                                                CloseUpShotRatio;                                         // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FullShotRatio;                                            // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultShotRatio;                                         // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TalkCam_SelectCameraClass.TalkCam_SelectCameraClass_C");
		return ptr;
	}


	void GetRandCameraClass(TEnumAsByte<EN_TalkCameraClassKind>* newParam);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_TalkCam_SelectCameraClass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
