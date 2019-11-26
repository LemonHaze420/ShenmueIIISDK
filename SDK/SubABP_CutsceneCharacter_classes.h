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

// AnimBlueprintGeneratedClass SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C
// 0x0014 (0x3728 - 0x3714)
class USubABP_CutsceneCharacter_C : public USubABP_CharacterBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x3714(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x3718(0x0008) (Transient, DuplicateTransient)
	class ABP_CutsceneSkeletalMeshActor_C*             CutsceneSkeletalMeshActor;                                // 0x3720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C");
		return ptr;
	}


	bool IsUseFluctuationEmotion();
	void InitFaceMotages(bool* Succsess);
	void CalcLookAt();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void CalcEmotion();
	void CalcClipper();
	void CalcEyeBlink();
	void ExecuteUbergraph_SubABP_CutsceneCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
