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

// BlueprintGeneratedClass BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C
// 0x0080 (0x0170 - 0x00F0)
class UBPC_NPCTalkDetectController_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	TMap<ES3TalkType, class US3TalkComponentBase*>     TalkComponents;                                           // 0x00F8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class US3TalkComponentBase*                        CurrentComponent;                                         // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	ES3TalkType                                        CurrentTalkType;                                          // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0151(0x0007) MISSED OFFSET
	TArray<struct FS3SubQuestControl>                  SubQuestControlInfo;                                      // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_ScheduleNPC_C*                           NpcActor;                                                 // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C");
		return ptr;
	}


	void IsActiveMiniGameScript(bool* MiniGame);
	void STATIC_GetActiveComponents(TArray<class UBPC_S3_TalkComponent_C*>* TalkComponents);
	void ParseSubQuestControl(const struct FName& CharaName);
	void IsEnabledDetectIcon(ES3TalkType Type, bool* bEnabled);
	void GetCurrentTalkComponent(class US3TalkComponentBase** OutComponent);
	bool FindComponent(ES3TalkType Type, class US3TalkComponentBase** Value);
	void CanNPCTalk(bool* bCan);
	void STATIC_IsTalking(bool* bTalking);
	void STATIC_GetActionType(TArray<struct FS3DetectActionParam>* Params);
	void STATIC_RegisterTalkComponent(ES3TalkType TalkType, class US3TalkComponentBase* Component);
	void STATIC_OnStart();
	void STATIC_OnFinished();
	void STATIC_ReceiveBeginPlay();
	void STATIC_DecideDetectAction(ES3ActionIconType ActionType);
	void ExecuteUbergraph_BPC_NPCTalkDetectController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
