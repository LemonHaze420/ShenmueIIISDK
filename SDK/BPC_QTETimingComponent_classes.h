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

// BlueprintGeneratedClass BPC_QTETimingComponent.BPC_QTETimingComponent_C
// 0x0029 (0x0161 - 0x0138)
class UBPC_QTETimingComponent_C : public UBPC_QTEBaseComponent_C
{
public:
	struct FName                                       SuccessAction;                                            // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWBP_QTETiming_C*                            QTEWidget;                                                // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              JustTimingStartRate;                                      // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JustTimingEndRate;                                        // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEarlyFailedFlag;                                        // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	float                                              SuccessInputLimitTimeLength;                              // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuccessInputLimitStartTime;                               // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuccessInputLimitEndTime;                                 // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReadyActionAnimationFlag;                               // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_QTETimingComponent.BPC_QTETimingComponent_C");
		return ptr;
	}


	void STATIC_UpdateAnimationState();
	void STATIC_FinishQTE();
	void AdjustActionAnimationTime();
	void PlayActionAnimation();
	void StartCountInputLimitTime();
	void STATIC_Update();
	float GetActionAnimationLength();
	void STATIC_SetSuccessInputLimitTimeLength(float InLength);
	void STATIC_DebugQTEForceSuccessUpdateInternal();
	float GetLengthBeforeCountInputLimitTime();
	bool IsEarlyFailed();
	void STATIC_SetupQTE(const struct FName& InSuccessAction, float InJustTimingStartRate, float InJustTimingEndRate);
	void STATIC_PlayInputFailedAnimation();
	void PlayInputSuccessAnimation();
	bool IsPlayingInAnimation();
	void PlayTimeUpFailedAnimation();
	void STATIC_PlayInAnimation();
	void STATIC_SetTimeGaugeRate(float InGaugeRate);
	void ExecuteInputAction(const struct FName& InInputAction);
	void STATIC_Reset();
	void STATIC_Finalize();
	void STATIC_Initialize();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
