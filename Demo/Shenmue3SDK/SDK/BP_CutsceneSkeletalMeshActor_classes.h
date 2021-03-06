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

// BlueprintGeneratedClass BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C
// 0x0088 (0x0458 - 0x03D0)
class ABP_CutsceneSkeletalMeshActor_C : public AS3CutsceneSkeletalMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            IndoorCollision;                                          // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFootprintComponent_C*                       FootprintComponent;                                       // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_S3_TagChara_C*                           BP_S3_TagChara;                                           // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_FootIK_C*                               BPC_FootIK;                                               // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bUseClipper;                                              // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseEyeBlink;                                             // 0x03F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateEnabled;                                           // 0x03FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03FB(0x0005) MISSED OFFSET
	class ABP_CutscenePlayer_C*                        RefCutscenePlayer;                                        // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              WeightF_SEQ2;                                             // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceEyeClose;                                           // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	float                                              WeightH_L2;                                               // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeightH_R2;                                               // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeightFullBody_SEQ2;                                      // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseLeftHandIK;                                           // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	class AActor*                                      LeftHandIKEffectorTarget;                                 // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              LeftHandIKAlpha;                                          // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRightHandIK;                                          // 0x042C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	class AActor*                                      RightHandIKEffectorTarget;                                // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              RightHandIKAlpha;                                         // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EyeRotationAlpha;                                         // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EyeRotationHorizontalRate;                                // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EyeRotationVerticalRate;                                  // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EyeRotationHorizontalBaseAngle;                           // 0x0448(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EyeRotationVerticalBaseAngle;                             // 0x044C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bManualEyeClose;                                          // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0451(0x0003) MISSED OFFSET
	float                                              ManualEyeCloseRate;                                       // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C");
		return ptr;
	}


	void CheckWetness();
	float GetManualEyeCloseRate();
	bool IsManualEyeClose();
	float GetEyeRotationVerticalBaseAngle();
	float GetEyeRotationHorizontalBaseAngle();
	float GetEyeRotationVerticalRate();
	float GetEyeRotationHorizontalRate();
	float GetEyeRotationAlpha();
	void SetupIndoorCollision();
	void GetProfile(struct FS3CharacterProfile* Profile);
	void SetProfileFromTable();
	float GetRightHandIKAlpha();
	class AActor* GetRightHandIKEffectorTarget();
	bool IsUseRightHandIK();
	float GetLeftHandIKAlpha();
	class AActor* GetLeftHandIKEffectorTarget();
	bool IsUseLeftHandIK();
	struct FName GetCharaName();
	float GetWeightFullBody_SEQ2();
	float GetWeightH_R2();
	float GetWeightH_L2();
	bool IsEnabledCalcEmotion();
	bool IsForceEyeClose();
	float GetWeightF_SEQ2();
	bool IsTalkSelf();
	bool IsEnabledFreeStateEmotion();
	void ReleaseCutscenePlayer();
	void SetCutscenePlayer(class ABP_CutscenePlayer_C* CutscenePlayer);
	bool IsEnabledEyeBlink();
	bool IsEnabledClipper();
	void SetUpdateEnabled(bool Enabled);
	void UserConstructionScript();
	void SpawnMiniGame();
	void ChangedClothes(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CutsceneSkeletalMeshActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
