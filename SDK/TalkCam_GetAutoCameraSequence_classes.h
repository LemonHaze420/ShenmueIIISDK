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

// BlueprintGeneratedClass TalkCam_GetAutoCameraSequence.TalkCam_GetAutoCameraSequence_C
// 0x0030 (0x00E0 - 0x00B0)
class UTalkCam_GetAutoCameraSequence_C : public UTalkCam_BaseTask_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Sequence;                                                 // 0x00B8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TalkCam_GetAutoCameraSequence.TalkCam_GetAutoCameraSequence_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_TalkCam_GetAutoCameraSequence(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
