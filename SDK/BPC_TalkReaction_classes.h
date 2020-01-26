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

// BlueprintGeneratedClass BPC_TalkReaction.BPC_TalkReaction_C
// 0x0040 (0x0130 - 0x00F0)
class UBPC_TalkReaction_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) UNKNOWN PROPERTY: ArrayProperty BPC_TalkReaction.BPC_TalkReaction_C.LoadAnimMontageList
	int                                                LoadIndex;                                                // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	TArray<class UAnimMontage*>                        PlayAnimMontageList;                                      // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bLoaded;                                                  // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	class AS3Character*                                OwnerReactionCharacter;                                   // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_TalkReaction.BPC_TalkReaction_C");
		return ptr;
	}


	void GetSubAnimCharacterBase(class USubABP_CharacterBase_C** AsSub_ABP_Character_Base);
	void OwnerStopAnimation();
	void OnLoaded_D61EDC7B437B6BD78FA87FAB93DFA5D1(class UObject* Loaded);
	void ReceiveBeginPlay();
	void PlayReactionAnimation(int ReactionId, float PlayRate, float BlendWeights, int ReturnFlag);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BPC_TalkReaction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
