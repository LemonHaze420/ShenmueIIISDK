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

// BlueprintGeneratedClass BP_NPCManager.BP_NPCManager_C
// 0x000A (0x06DA - 0x06D0)
class ABP_NPCManager_C : public AS3NPCManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D0(0x0008) (Transient, DuplicateTransient)
	bool                                               bSGNWarp;                                                 // 0x06D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAddedDebugTrace;                                         // 0x06D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPCManager.BP_NPCManager_C");
		return ptr;
	}


	bool IsDebugDisableNPC();
	void InitializeNPC(class AS3Character* Character, class US3NPCDefinition* NPCDef);
	void SetUpTagCharaComponent(class ABP_ScheduleNPC_C* TargetNPC, class US3NPCDefinition* NPCDef);
	void SetUpTalkComponents(class ABP_ScheduleNPC_C* TargetNPC, class US3NPCDefinition* NPCDef);
	void UserConstructionScript();
	void BlueprintInitializeNPC(class AS3Character* NewNPC, class AS3NPCController* NewAI, class US3NPCDefinition* NPCDef);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_NPCManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
