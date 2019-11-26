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

// BlueprintGeneratedClass SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C
// 0x0020 (0x0350 - 0x0330)
class ASL_Hakkason_ENV_Area7_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	bool                                               IsCutscene;                                               // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnYOU;                                                 // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDayTime;                                                // 0x033A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isNightNPCflag;                                           // 0x033B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isExspYouOff;                                             // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x033D(0x0003) MISSED OFFSET
	class ABP_HakkasonYouManager_C*                    Manager;                                                  // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3AtomSoundAreaBox_C*                    AC_SE_HANAUTA_ExecuteUbergraph_SL_Hakkason_ENV_Area7_RefProperty;// 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C");
		return ptr;
	}


	void CheckYouHouseSyoji(bool Open);
	void CheckHanautaCollision();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void UnspawnNPC(const struct FGameplayTag& NPCID);
	void StartCutscene();
	void EndCutscene();
	void SpawnNPC(const struct FGameplayTag& NPCID);
	void BindNPCManager();
	void ChangeDayTime(ES3DayTimeEvent EventType);
	void ReceiveBeginPlay();
	void CheckNPCflagChange(int ArrayIndex, int SetFlags);
	void CheckStepChange(int SetSteps);
	void ExecuteUbergraph_SL_Hakkason_ENV_Area7(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
