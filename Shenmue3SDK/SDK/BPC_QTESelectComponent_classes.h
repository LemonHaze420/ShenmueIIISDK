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

// BlueprintGeneratedClass BPC_QTESelectComponent.BPC_QTESelectComponent_C
// 0x0021 (0x0159 - 0x0138)
class UBPC_QTESelectComponent_C : public UBPC_QTEBaseComponent_C
{
public:
	struct FName                                       LeftAction;                                               // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightAction;                                              // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SuccessAction;                                            // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWBP_QTESelect_C*                            QTEWidget;                                                // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsInputedOtherFlag;                                       // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_QTESelectComponent.BPC_QTESelectComponent_C");
		return ptr;
	}


	void UpdateAnimationState();
	void DebugQTEForceSuccessUpdateInternal();
	float GetLengthBeforeCountInputLimitTime();
	bool IsInputedOther();
	void SetupQTE(const struct FName& InLeftAction, const struct FName& InRightAction, const struct FName& InSuccessAction);
	void PlayInputFailedAnimation();
	void PlayInputSuccessAnimation(bool InRight);
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
