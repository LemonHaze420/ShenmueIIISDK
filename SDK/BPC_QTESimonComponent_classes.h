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
	void STATIC_DebugQTEForceSuccessUpdateInternal();
	bool CanStartCountInputLimitTime();
	float STATIC_GetLengthBeforeCountInputLimitTime();
	struct FName STATIC_GetCurrentSuccessAction();
	void PlayInputFailedAnimation();
	void PlayInputSuccessAnimation();
	void STATIC_SetupQTE(TArray<struct FName>* InInputActions);
	bool IsPlayingInAnimation();
	void STATIC_PlayTimeUpFailedAnimation();
	void PlayInAnimation();
	void STATIC_SetTimeGaugeRate(float InGaugeRate);
	void ExecuteInputAction(const struct FName& InInputAction);
	void STATIC_Reset();
	void Finalize();
	void STATIC_Initialize();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
