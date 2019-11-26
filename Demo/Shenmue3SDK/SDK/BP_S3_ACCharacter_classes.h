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

// BlueprintGeneratedClass BP_S3_ACCharacter.BP_S3_ACCharacter_C
// 0x0020 (0x095C - 0x093C)
class ABP_S3_ACCharacter_C : public ABP_S3Character_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x093C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0940(0x0008) (Transient, DuplicateTransient)
	class UFootprintComponent_C*                       FootprintComponent;                                       // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AS3Character*                                SameIDCharacter;                                          // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               SwapedJoinActor;                                          // 0x0958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SwapedTalkedActor;                                        // 0x0959(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SwapedCameraSpeaking;                                     // 0x095A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SwapedCameraListening;                                    // 0x095B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3_ACCharacter.BP_S3_ACCharacter_C");
		return ptr;
	}


	void LoadSkeletalMesh(class USkeletalMesh** Mesh);
	void GetNPCMesh(const struct FName& CharacterName, class US3NPCDefinition* Definition, bool* Success, class USkeletalMesh** Mesh);
	void Detach();
	void AttachSetting(class US3NPCDefinition** Definition);
	bool IsTalking();
	void InitCharacter(const struct FName& CharaName, bool* Success);
	void UserConstructionScript();
	void Init(const struct FName& Name);
	void Finalize();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnTalkStart(class US3TalkComponent** TalkComponent);
	void OnTalkFinished(class US3TalkComponent** TalkComponent, bool* interrupted);
	void Screen_Player();
	void Screen_NPC();
	void ExecuteUbergraph_BP_S3_ACCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
