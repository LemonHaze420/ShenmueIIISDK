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

// BlueprintGeneratedClass BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C
// 0x004B (0x01A8 - 0x015D)
class UBPC_TurnAround_NPCLead_C : public UBPC_TurnAround_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x015D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0160(0x0008) (Transient, DuplicateTransient)
	bool                                               bSit;                                                     // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	class UAnimMontage*                                SitAnimMontage;                                           // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0178(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.SitAnimMontageAsset
	class ABP_S3CharacterBase_C*                       S3Character;                                              // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C");
		return ptr;
	}


	void SetEnableBodyLookAt(bool Enable);
	void CanTurnAround(bool* bCan);
	void IsPlayingSitAnimation(bool* bPlaying);
	void OnLoaded_F7D60CF146905F4918060D8140E96419(class UObject* Loaded);
	void ReturnPreTalkRotationActor();
	void ForceFinishTurnAround(bool bUpdateRotation, const struct FRotator& NewRotation);
	void TrySitMotation();
	void ReceiveBeginPlay();
	void TurnAroundTickFinish();
	void ExecuteUbergraph_BPC_TurnAround_NPCLead(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
