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

// BlueprintGeneratedClass TalkCam_BaseTask.TalkCam_BaseTask_C
// 0x0010 (0x00B0 - 0x00A0)
class UTalkCam_BaseTask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	class ABP_AutoTalkCameraDirector_C*                AutoCameraDirector;                                       // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TalkCam_BaseTask.TalkCam_BaseTask_C");
		return ptr;
	}


	void STATIC_IsFull(int mask, bool* Result);
	void STATIC_IsClose(int mask, bool* Result);
	void STATIC_IsBust(int mask, bool* Result);
	void STATIC_IsShoulderCut(int mask, bool* Result);
	void STATIC_isPair(int mask, bool* Result);
	void STATIC_IsFar(int mask, bool* Result);
	void STATIC_IsHorizontal(int mask, bool* Result);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void STATIC_ExecuteUbergraph_TalkCam_BaseTask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
