#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TalkProcess_Battle.BP_TalkProcess_Battle_C
// 0x0040 (0x0078 - 0x0038)
class UBP_TalkProcess_Battle_C : public UBP_TalkProcess_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      CachedPlayerLookatTarget;                                 // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              CachedLookatTargetRefPlayer;                              // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class UBattleTask*                                 BattleTask;                                               // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBattleWinLoseResult>                  BATTLERESULT;                                             // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class AS3Character*                                NPCCharacter;                                             // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEndOnce;                                                 // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                FadeErrorTime;                                            // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkProcess_Battle.BP_TalkProcess_Battle_C");
		return ptr;
	}


	void EnableGameTime(bool bEnabled);
	void ResettingLookAtTargetActors();
	void CachedLookAtTargetActors();
	void OnLoaded_F2C0EA96403370D7C0981B823EF8717B(class UObject* Loaded);
	void Activate();
	void OnEndBattle(TEnumAsByte<EBattleWinLoseResult> Result);
	void ExecuteUbergraph_BP_TalkProcess_Battle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
