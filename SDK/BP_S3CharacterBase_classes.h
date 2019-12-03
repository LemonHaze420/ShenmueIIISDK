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

// BlueprintGeneratedClass BP_S3CharacterBase.BP_S3CharacterBase_C
// 0x0024 (0x0904 - 0x08E0)
class ABP_S3CharacterBase_C : public AS3Character
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08E0(0x0008) (Transient, DuplicateTransient)
	class UBPC_LookAtFSM_C*                            BPC_LookAtFSM;                                            // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_CharacterFadeCamera_C*                  BPC_CharacterFadeCamera;                                  // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_S3_TagChara_C*                           BP_S3_TagChara;                                           // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IDLE_AFTER_TALK_TIME;                                     // 0x0900(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3CharacterBase.BP_S3CharacterBase_C");
		return ptr;
	}


	bool IsTalking();
	void GetEnableIK(bool* bIKEnabled);
	void STATIC_SetEnableIK(bool bInIKEnabled, bool* dummy);
	TEnumAsByte<ES3HandednessType> STATIC_GetProfileHandedness();
	bool ReturnOutOfWorld();
	void IsInShelter(bool* Sheltered);
	struct FString STATIC_GetProfileCharaName();
	void GetProfileDisplayName(struct FString* Display_Name, struct FString* Display_Rubi, struct FString* Display_Name_Alphabet);
	TEnumAsByte<ES3CharacterGender> STATIC_GetProfileGender();
	int STATIC_GetProfileWeight();
	float STATIC_GetProfileHeight();
	int STATIC_GetProfileAge();
	void GetProfile(struct FS3CharacterProfile* Profile);
	void DestroyComponentByTag(class UClass* ComponentClass, const struct FName& Tag);
	void UserConstructionScript();
	void OnTalkStart(class US3TalkComponent* TalkComponent);
	void OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted);
	void Screen_Player();
	void Screen_NPC();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void TagCharaCheck();
	void LoadFaceAnimAsset();
	void SetFaceAnimData(class US3FaceAnimDataAsset* InFaceMontageData);
	void StartCharaFadeOut(class AActor* Executor, float FadeTime);
	void StartCharaFadeIn(class AActor* Executor, float FadeTime);
	void ExecuteUbergraph_BP_S3CharacterBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
