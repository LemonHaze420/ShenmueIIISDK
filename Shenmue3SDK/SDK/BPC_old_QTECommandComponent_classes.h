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

// BlueprintGeneratedClass BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C
// 0x0078 (0x0168 - 0x00F0)
class UBPC_old_QTECommandComponent_C : public UActorComponent
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
	class UWBP_QTECommand_C*                           CommandWidget;                                            // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               Command;                                                  // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsInstructionFlag;                                        // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	int                                                CurrentInputIndex;                                        // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputTimer;                                               // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputlimitTime;                                           // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRealTime;                                             // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	float                                              BackRealTime;                                             // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         TimeCountSEPlayer;                                        // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C");
		return ptr;
	}


	void StopTimeCountSE();
	void PlayTimeCountSE();
	float GetInAnimationLength();
	void Update(float DeltaSeconds);
	void SetUseRealTime(bool UseRealTime);
	bool IsInQTE();
	void GetInputSuccessKey(int Index, TArray<struct FKey>* SuccessKey);
	void InstructionStartFunction(float InInputLimitTime, TArray<struct FName>* SuccessAction);
	void ClearResult();
	void InputFunction(const struct FKey& InKey);
	void InputEndFunction();
	void InputStartFunction();
	void EndFunction();
	void Prepare();
	void GetButtonImage(const struct FName& InputName, class UTexture2D** Texture2D);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BPC_old_QTECommandComponent(int EntryPoint);
	void ButtonDown__DelegateSignature(bool Succeed);
	void End__DelegateSignature();
	void Success__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
