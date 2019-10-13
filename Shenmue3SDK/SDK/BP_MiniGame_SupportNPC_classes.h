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

// BlueprintGeneratedClass BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C
// 0x00F8 (0x0420 - 0x0328)
class ABP_MiniGame_SupportNPC_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UABP_MiniGame_SupportNPC_C*                  RefAnimInstance;                                          // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               IdleAnim;                                                 // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_SubtitlePlayer_C*                        SubtitlePlayer;                                           // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0358(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.UseMeshReference
	float                                              ChangeStateDelayTime;                                     // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LabelListNumber;                                          // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentMorphRate;                                         // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	struct FName                                       PreMorphName;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CurrentMorphName;                                         // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxMorphRate;                                             // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MorphChangeSpeed;                                         // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               MorphNameList;                                            // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_MG_SupportNPCAction>             SuccessNormalActionList;                                  // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FST_MG_SupportNPCAction>             SuccessJustActionList;                                    // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FST_MG_SupportNPCAction>             SuccessUnbeliActionList;                                  // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FST_MG_SupportNPCAction>             FailedNormalActionList;                                   // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FST_MG_SupportNPCAction>             FailedAfterJustActionList;                                // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FST_MG_SupportNPCAction                     UseAction;                                                // 0x0408(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C");
		return ptr;
	}


	void FlatteningMorph();
	void IsPlayingLabelVoice(bool* Playing);
	void GetActionData(bool IsSuccess, bool Just, bool Unbeli, struct FST_MG_SupportNPCAction* Data);
	void SetLookAtLocation(const struct FVector& LookAtLocation);
	void UpdateClipper();
	void PlayScript(const struct FName& Label, const struct FName& CharaName);
	void SetMesh(class USkeletalMesh* NewMesh);
	void ChangeState(bool IsSuccess, bool IsJust, bool IsUnbeli);
	void SetEnabled(bool Enabled);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void Event_ChangeState(bool IsSuccess, bool IsJust, bool IsUnbeli);
	void ExecuteUbergraph_BP_MiniGame_SupportNPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
