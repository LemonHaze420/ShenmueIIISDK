#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C
// 0x0068 (0x0158 - 0x00F0)
class UBPC_old_QTESingleComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class UWBP_QTESingle_C*                            Widget;                                                   // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FKey>                                SuccessKey;                                               // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    Success;                                                  // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    End;                                                      // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ButtonDown;                                               // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Input;                                                    // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Result;                                                   // 0x0141(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableInput;                                              // 0x0142(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRealTime;                                             // 0x0143(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BackRealTime;                                             // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWaitingPlaySE;                                          // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	class ABP_S3SoundPlayer_C*                         TimeCountSEPlayer;                                        // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C");
		return ptr;
	}


	void StopTimeCountSE();
	void PlayTimeCountSE();
	void UpdateAnimationState();
	bool IsInQTE();
	float GetInAnimationLength();
	bool IsPlayingIn();
	void SetTimeGaugeRate(float Rate);
	void UpdateTime(float TickDeltaSeconds, float* CurrentDeltaSeconds);
	void SetUseRealTime(bool UseRealTime);
	void ClearResult();
	void InputFunction(const struct FKey& InKey);
	void InputEndFunction();
	void InputStartFunction(const struct FName& SuccessAction);
	void EndFunction();
	void Prepare();
	void GetButtonImage(const struct FName& InputName, class UTexture2D** Texture2D);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BPC_old_QTESingleComponent(int EntryPoint);
	void ButtonDown__DelegateSignature(bool Succeed);
	void End__DelegateSignature();
	void Success__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
