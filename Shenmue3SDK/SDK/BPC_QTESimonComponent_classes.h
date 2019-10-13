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

// BlueprintGeneratedClass BPC_QTESimonComponent.BPC_QTESimonComponent_C
// 0x0020 (0x0158 - 0x0138)
class UBPC_QTESimonComponent_C : public UBPC_QTEBaseComponent_C
{
public:
	TArray<struct FName>                               InputActionList;                                          // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentInputIndex;                                        // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	class UWBP_QTESimon_C*                             QTEWidget;                                                // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_QTESimonComponent.BPC_QTESimonComponent_C");
		return ptr;
	}


	void UpdateAnimationState();
	void PlayStartForceFeedback();
	void DebugQTEForceSuccessUpdateInternal();
	bool CanStartCountInputLimitTime();
	float GetLengthBeforeCountInputLimitTime();
	struct FName GetCurrentSuccessAction();
	void PlayInputFailedAnimation();
	void PlayInputSuccessAnimation();
	void SetupQTE(TArray<struct FName>* InInputActions);
	bool IsPlayingInAnimation();
	void PlayTimeUpFailedAnimation();
	void PlayInAnimation();
	void SetTimeGaugeRate(float* InGaugeRate);
	void ExecuteInputAction(struct FName* InInputAction);
	void Reset();
	void Finalize();
	void Initialize();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
