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

// BlueprintGeneratedClass BP_ChobuBrazier.BP_ChobuBrazier_C
// 0x00C8 (0x0400 - 0x0338)
class ABP_ChobuBrazier_C : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class AS3GimmickEmitter*                           Emitter;                                                  // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ABP_S3AtomSoundArea_C*                       SoundArea;                                                // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UParticleSystem*                             particle;                                                 // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EmitterDistance;                                          // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EmitterOffset;                                            // 0x035C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class USoundAtomCue*                               AtomCue;                                                  // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SoundDistance;                                            // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	class USoundAttenuation*                           Attenuation;                                              // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SoundOffset;                                              // 0x0384(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               AllDay;                                                   // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	TMap<ES3DayTimeEvent, bool>                        DayTime;                                                  // 0x0398(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               LastDisable;                                              // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET
	class ABP_S3WorldTimekeeper_C*                     GameTimeManager;                                          // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FDateTime                                   NewVar_1;                                                 // 0x03F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ChobuBrazier.BP_ChobuBrazier_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ChangeTimeEvent(ES3DayTimeEvent EventType);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_ChobuBrazier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
