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

// BlueprintGeneratedClass BP_BTL_Audience.BP_BTL_Audience_C
// 0x0059 (0x0381 - 0x0328)
class ABP_BTL_Audience_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ABP_S3SoundPlayer_C*>                 SoundPlayers;                                             // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class USoundAtomCue*>                       HitCheerCues;                                             // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class USoundAtomCue*>                       KOCheerCues;                                              // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bActive;                                                  // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCooldownHit;                                             // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCooldownKO;                                              // 0x0372(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOneShotsSurround;                                        // 0x0373(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NoRepeatIdx;                                              // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundAttenuation*                           OneShotAttenuation;                                       // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomPositions;                                         // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_Audience.BP_BTL_Audience_C");
		return ptr;
	}


	struct FVector STATIC_CalcCenter();
	void STATIC_PlayRandomCenterReaction(TArray<class USoundAtomCue*>* Sounds);
	void STATIC_PlayReaction(TArray<class USoundAtomCue*>* Sounds);
	bool STATIC_IsActive();
	void STATIC_PlaySurroundSoundReactions(TArray<class USoundAtomCue*>* Sounds);
	void SetActive(bool Active);
	void STATIC_ReactToHit();
	void STATIC_ReactToKO();
	void UserConstructionScript();
	void STATIC_StartCooldownHit();
	void STATIC_StartCooldownKO();
	void ExecuteUbergraph_BP_BTL_Audience(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
