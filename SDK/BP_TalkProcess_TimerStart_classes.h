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

// BlueprintGeneratedClass BP_TalkProcess_TimerStart.BP_TalkProcess_TimerStart_C
// 0x0010 (0x0048 - 0x0038)
class UBP_TalkProcess_TimerStart_C : public UBP_TalkProcess_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (Transient, DuplicateTransient)
	class UBPC_ScriptTimer_C*                          ScriptTimer;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkProcess_TimerStart.BP_TalkProcess_TimerStart_C");
		return ptr;
	}


	void Activate();
	void STATIC_ExecuteUbergraph_BP_TalkProcess_TimerStart(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
