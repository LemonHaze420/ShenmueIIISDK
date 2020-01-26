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

// BlueprintGeneratedClass BP_S3AtomSound.BP_S3AtomSound_C
// 0x0048 (0x0378 - 0x0330)
class ABP_S3AtomSound_C : public AAtomSound
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ECRISelectorType>                      SelectorType;                                             // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	struct FString                                     GameTimeLabel;                                            // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               CustomAutoActivate;                                       // 0x0358(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	float                                              OriginalVolume;                                           // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SystemVolume;                                             // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	TArray<class AActor*>                              DisableActors;                                            // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3AtomSound.BP_S3AtomSound_C");
		return ptr;
	}


	void SetLanguageSelector();
	void SetSystemVolume(float Volume);
	void Stop();
	void PlayOrActivate();
	void SetDisableSound(bool Disable, class AActor* Actor);
	void IsDisable(bool* Disabled);
	void PermitPlay();
	void SetGameTimeSelector(bool* Change);
	void Replay();
	void SetWeatherSelector(bool Bind);
	void SetSelectorLabel();
	void UserConstructionScript();
	void ChangeWeather();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_S3AtomSound(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
