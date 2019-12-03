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

// BlueprintGeneratedClass BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C
// 0x0090 (0x0180 - 0x00F0)
class UBPC_old_QTESelectComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class UWBP_QTESelect_C*                            Widget;                                                   // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FKey>                                SuccessKey;                                               // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    Success;                                                  // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    End;                                                      // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ButtonDown;                                               // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Input;                                                    // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Result;                                                   // 0x0141(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableInput;                                              // 0x0142(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0143(0x0005) MISSED OFFSET
	TArray<struct FKey>                                LeftKey;                                                  // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FKey>                                RightKey;                                                 // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               InputOther;                                               // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRealTime;                                             // 0x0169(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x016A(0x0002) MISSED OFFSET
	float                                              BackRealTime;                                             // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWaitingPlaySE;                                          // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	class ABP_S3SoundPlayer_C*                         TimeCountSEPlayer;                                        // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C");
		return ptr;
	}


	void STATIC_StopTimeCountSE();
	void PlayTimeCountSE();
	void UpdateAnimationState();
	bool STATIC_IsInQTE();
	float GetInAnimationLength();
	bool STATIC_IsPlayingIn();
	void STATIC_SetTimeGaugeRate(float Rate);
	void UpdateTime(float TickDeltaSeconds, float* CurrentDeltaSeconds);
	void SetUseRealTime(bool UseRealTime);
	void ClearResult();
	void STATIC_InputFunction(const struct FKey& InKey);
	void STATIC_InputEndFunction();
	void InputStartFunction(const struct FName& LeftAction, const struct FName& RightAction, const struct FName& SuccessAction);
	void STATIC_EndFunction();
	void STATIC_Prepare();
	void STATIC_GetButtonImage(const struct FName& InputName, class UTexture2D** Texture2D);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void STATIC_ExecuteUbergraph_BPC_old_QTESelectComponent(int EntryPoint);
	void ButtonDown__DelegateSignature(bool Succeed);
	void End__DelegateSignature();
	void Success__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
