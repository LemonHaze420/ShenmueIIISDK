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

// BlueprintGeneratedClass TalkCam_SeletctAsSecondCut.TalkCam_SeletctAsSecondCut_C
// 0x0018 (0x00C8 - 0x00B0)
class UTalkCam_SeletctAsSecondCut_C : public UTalkCam_BaseTask_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (Transient, DuplicateTransient)
	TArray<struct FST_AutoCameraAnalizedInfo>          SelectedCameras;                                          // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TalkCam_SeletctAsSecondCut.TalkCam_SeletctAsSecondCut_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void STATIC_ExecuteUbergraph_TalkCam_SeletctAsSecondCut(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
