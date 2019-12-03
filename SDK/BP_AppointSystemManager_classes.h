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

// BlueprintGeneratedClass BP_AppointSystemManager.BP_AppointSystemManager_C
// 0x014A (0x0482 - 0x0338)
class ABP_AppointSystemManager_C : public AS3AppointSystemManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               AppointButtonEnable;                                      // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CancelButtonEnable;                                       // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x034A(0x0006) MISSED OFFSET
	TArray<bool>                                       itemEnables;                                              // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               selectTexts;                                              // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_S3actionSelect_C*                        Selector;                                                 // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FST_AppointDate                             Date;                                                     // 0x037C(0x0014) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                                    Rotation;                                                 // 0x0390(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FText                                       MainText;                                                 // 0x03A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SubText;                                                  // 0x03B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AddDay;                                                   // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Hour;                                                     // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Minute;                                                   // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDeny;                                                   // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	int                                                EnableTimeMin;                                            // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EnableTimeMax;                                            // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AddHelpCount;                                             // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    StartAppointJump;                                         // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EndAppointJump;                                           // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               SkipEndFade;                                              // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayAppointEyecatch;                                     // 0x0411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0412(0x0002) MISSED OFFSET
	int                                                SafeCounter;                                              // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Eyecatch;                                                 // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_JumpProcessActor_C*                      JumpProcess;                                              // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EN_AppointKStype>>              KSTypeFilter;                                             // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_AppointKSchild_C*                        KSchildActor_1;                                           // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_AppointKSchild_C*                        KSchildActor_2;                                           // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       SaveBasicKS;                                              // 0x0448(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bExecAddJump;                                             // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRegisterDetect;                                          // 0x0461(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HintButtonEnable;                                         // 0x0462(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x0463(0x0005) MISSED OFFSET
	TArray<ES3ActionIconType>                          NewVar_1;                                                 // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               RegistKs;                                                 // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	int                                                IndexTemp;                                                // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLimitTimeOver;                                           // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AppointButtonDisable;                                     // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AppointSystemManager.BP_AppointSystemManager_C");
		return ptr;
	}


	int STATIC_GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void PauseAps(bool Pause);
	void STATIC_ClucSpawnLocationSHE(float BackOffset, float Side_Offset, float Hight_Offset, struct FVector* SHE_vector, struct FRotator* SHE_rot);
	void WarpShe();
	struct FDateTime STATIC_AddDays(int Days);
	void CheckEnableTime(int in_index, int* out_index);
	void STATIC_DetectEnable_Help(bool Enable);
	void STATIC_SetExspFlag(TEnumAsByte<EN_AppointKStype> ks_type);
	void STATIC_CancelAPS();
	void GetJumpRot(TEnumAsByte<EN_AppointKStype> ks_type, float* jumprot, bool* jump_enable);
	void KillKSchild();
	void STATIC_GetJumpTime(TEnumAsByte<EN_AppointKStype> ks_type, struct FST_AppointDate* time_data);
	void STATIC_GetEyecatch(TEnumAsByte<EN_AppointKStype> ks_type, struct FName* Eyecatch, bool* eyecatch_enable);
	void STATIC_GetJumpPoint(TEnumAsByte<EN_AppointKStype> ks_type, struct FVector* jumppos, bool* jump_enable);
	void STATIC_ExecAddKs();
	void GetSelectTexts(const struct FName& INameID, struct FText* GetName);
	void STATIC_ChangeKSFilter();
	void AddKSitem(int KS_pos, int EnableTimeMin, int EnableTimeMax, int JumpHour, int JumpMin, const struct FVector& JumpLocation, const struct FRotator& jumprot, const struct FName& KSlavel, const struct FName& Eyecatch, int ExspFlag, const struct FName& ExspCheck, bool* Add_Complited);
	void SetPlayEyecatchFlag(bool Play);
	void ChangeSkipEndFade(bool EndFadeFlag);
	void IsEnableButtonTime(bool* IsEnable);
	void ReleaseAppointData();
	void STATIC_IsPassAppoint(bool* IsFuture);
	void GetData(int AddDay, int* Year, int* Month, int* Day);
	void IsAppointFuture(bool* Pass);
	void STATIC_GetAppointData(struct FVector* JumpPoint, struct FRotator* Rotation, struct FST_AppointDate* Date, struct FText* MainText, struct FText* SubText);
	void STATIC_SetAppointButtonFlag(bool Deny);
	void Finalize();
	void STATIC_DetectActionUnregist(bool Unregist);
	void SetAppointData(const struct FVector& JumpPoint, const struct FRotator& Rotation, const struct FName& Eyecatch, int AddDay, int Hour, int Minute, int EnableTimeMin, int EnableTimeMax, int ChangeStep, const struct FName& Label_Left, bool SkipEndFade);
	void UserConstructionScript();
	void EyecatchFinish();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void STATIC_DecideDetectAction(ES3ActionIconType Type);
	void STATIC_EndJump(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ApsChild_TimeOver_Actor1();
	void ApsChild_TimeOver_Actor2();
	void STATIC_ChangePlayerController(class APlayerController* PlayerController);
	void HelpEnd();
	void InHelpEnd();
	void STATIC_catch_onSelected(int Index);
	void ExecuteUbergraph_BP_AppointSystemManager(int EntryPoint);
	void EndAppointJump__DelegateSignature();
	void StartAppointJump__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
