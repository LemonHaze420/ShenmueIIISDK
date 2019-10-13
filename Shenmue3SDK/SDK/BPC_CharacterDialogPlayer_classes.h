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

// BlueprintGeneratedClass BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C
// 0x0022 (0x0112 - 0x00F0)
class UBPC_CharacterDialogPlayer_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	struct FName                                       CharaName;                                                // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_SubtitlePlayer_C*                        SubtitlePlayer;                                           // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CurrentLabel;                                             // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanDestroy;                                               // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ES3PlayerBehavior                                  LimitedState;                                             // 0x0111(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C");
		return ptr;
	}


	void LimitToBehaviorState(ES3PlayerBehavior State);
	void StopSubtitleDialog();
	bool IsSpeaking();
	void RandomLabelNoRepeat(TArray<struct FName>* Labels, int* LastIndex, struct FName* Selection);
	void CallOnEnd(bool IsLast);
	void PlaySubtitleDialog(const struct FName& Label, ES3TextPathType Type, float MinTime);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BPC_CharacterDialogPlayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
