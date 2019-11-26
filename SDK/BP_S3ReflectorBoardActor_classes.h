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

// BlueprintGeneratedClass BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C
// 0x004B (0x0373 - 0x0328)
class ABP_S3ReflectorBoardActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OwnerActor;                                               // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      OwnerSkeletalMeshComponent;                               // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              LIGHT_DISTANCE;                                           // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JustTalkStart;                                            // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	float                                              AdjustIntensity;                                          // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	struct FName                                       EyeSocketName;                                            // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       PelvisBoneName;                                           // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisabledCutscene;                                         // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisabledTalk;                                             // 0x0372(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C");
		return ptr;
	}


	void SetActiveLight(bool Enabled);
	void ToggleActive();
	void UpdateLightActive();
	void CalcLightPos(const struct FVector& pelvis, struct FVector* ReturnPos);
	void CalcLightPosition();
	void UserConstructionScript();
	void EndCutscene();
	void StartCutscene();
	void StartTalk();
	void EndTalk();
	void ChangeTalkCamera();
	void UnbindEventDispacher();
	void BindEventDispatcher();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void EndOwner(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_S3ReflectorBoardActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
