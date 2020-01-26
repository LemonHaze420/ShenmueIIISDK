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

// BlueprintGeneratedClass BP_TalkProcess_Reaction.BP_TalkProcess_Reaction_C
// 0x0018 (0x0050 - 0x0038)
class UBP_TalkProcess_Reaction_C : public UBP_TalkProcess_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      Character;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBPC_TalkReaction_C*                         ReactionComp;                                             // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkProcess_Reaction.BP_TalkProcess_Reaction_C");
		return ptr;
	}


	void Activate();
	void ExecuteUbergraph_BP_TalkProcess_Reaction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
