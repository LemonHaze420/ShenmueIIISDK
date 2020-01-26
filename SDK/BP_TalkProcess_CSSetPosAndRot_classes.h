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

// BlueprintGeneratedClass BP_TalkProcess_CSSetPosAndRot.BP_TalkProcess_CSSetPosAndRot_C
// 0x0020 (0x0058 - 0x0038)
class UBP_TalkProcess_CSSetPosAndRot_C : public UBP_TalkProcess_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     CSLocation;                                               // 0x0040(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CSRotation;                                               // 0x004C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkProcess_CSSetPosAndRot.BP_TalkProcess_CSSetPosAndRot_C");
		return ptr;
	}


	void Activate();
	void ExecuteUbergraph_BP_TalkProcess_CSSetPosAndRot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
