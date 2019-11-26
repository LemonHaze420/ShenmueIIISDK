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

// BlueprintGeneratedClass TalkCam_SelectDefaultCameras.TalkCam_SelectDefaultCameras_C
// 0x0048 (0x00F8 - 0x00B0)
class UTalkCam_SelectDefaultCameras_C : public UTalkCam_BaseTask_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (Transient, DuplicateTransient)
	TArray<struct FST_AutoCameraAnalizedInfo>          SelectedCameras;                                          // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FBlackboardKeySelector                      NextCameraMask;                                           // 0x00C8(0x0028) (Edit, BlueprintVisible)
	int                                                CurrentMask;                                              // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PairCameraWaight;                                         // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TalkCam_SelectDefaultCameras.TalkCam_SelectDefaultCameras_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_TalkCam_SelectDefaultCameras(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
