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

// BlueprintGeneratedClass BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C
// 0x00F1 (0x01E1 - 0x00F0)
class UBPC_old_QTEFreeCommandComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    Success;                                                  // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    End;                                                      // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ButtonDown;                                               // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Input;                                                    // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Result;                                                   // 0x0129(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableInput;                                              // 0x012A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x012B(0x0005) MISSED OFFSET
	class UWBP_QTEFreeCommand_C*                       CommandWidget;                                            // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              InputTimer;                                               // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputlimitTime;                                           // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FST_old_BattleQTEExperimentFreeCommand> CurrentCommandList;                                       // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FKey>                                CurrentInputKeys;                                         // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FST_old_BattleQTEExperimentFreeCommand      CurrentResultCommand;                                     // 0x0160(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       LastSuccessInputAction;                                   // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRealTime;                                             // 0x01C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01C1(0x0003) MISSED OFFSET
	float                                              BackRealTime;                                             // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastInputTime;                                            // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputInterval;                                            // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCommandInputedFlag;                                     // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET
	class ABP_S3SoundPlayer_C*                         TimeCountSEPlayer;                                        // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWaitingPlayTimeCountSEFlag;                             // 0x01E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C");
		return ptr;
	}


	void StopTimeCountSE();
	void PlayTimeCountSE();
	float STATIC_GetMaxOutAnimationLength();
	float GetInAnimationLength();
	void InputEndSuccess();
	void SetInputInterval(float Interval);
	void PlayOutOk();
	void STATIC_GetActionNameFromKey(const struct FKey& InKey, struct FName* ActionName);
	void STATIC_UpdateInputTimer(float DeltaSeconds);
	void SetUseRealTime(bool UseRealTime);
	void STATIC_CheckCommandSucceable(const struct FST_old_BattleQTEExperimentFreeCommand& FreeCommand, bool* Successable);
	void CheckCurrentInput(bool* Success);
	struct FST_old_BattleQTEExperimentFreeCommand GetResultCommand();
	bool IsInQTE();
	void GetInputSuccessKey(const struct FName& Action, TArray<struct FKey>* SuccessKey);
	void ClearResult();
	void STATIC_InputFunction(const struct FKey& InKey);
	void STATIC_InputEndFunction();
	void STATIC_InputStartFunction(float InInputLimitTime, TArray<struct FST_old_BattleQTEExperimentFreeCommand>* CommandList);
	void EndFunction();
	void STATIC_Prepare();
	void STATIC_GetButtonImage(const struct FName& InputName, class UTexture2D** Texture2D);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void STATIC_ExecuteUbergraph_BPC_old_QTEFreeCommandComponent(int EntryPoint);
	void ButtonDown__DelegateSignature(bool Succeed);
	void End__DelegateSignature();
	void STATIC_Success__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
