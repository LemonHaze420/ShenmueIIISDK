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

// BlueprintGeneratedClass BP_MainFlowCScontrol.BP_MainFlowCScontrol_C
// 0x0018 (0x0108 - 0x00F0)
class UBP_MainFlowCScontrol_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	bool                                               ExecStartEvent;                                           // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	struct FName                                       SaveCutSceneID;                                           // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MainFlowCScontrol.BP_MainFlowCScontrol_C");
		return ptr;
	}


	void CSEvent_Enable(const struct FName& CutsceneName, bool UseFade);
	void CallCS_Event(const struct FName& EventName, bool End);
	void OnStartCutScene();
	void OnEndCutscene();
	void ExecuteUbergraph_BP_MainFlowCScontrol(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
