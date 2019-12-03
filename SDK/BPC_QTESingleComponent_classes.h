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

// BlueprintGeneratedClass BPC_QTESingleComponent.BPC_QTESingleComponent_C
// 0x0010 (0x0148 - 0x0138)
class UBPC_QTESingleComponent_C : public UBPC_QTEBaseComponent_C
{
public:
	struct FName                                       SuccessAction;                                            // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWBP_QTESingle_C*                            QTEWidget;                                                // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_QTESingleComponent.BPC_QTESingleComponent_C");
		return ptr;
	}


	void STATIC_UpdateAnimationState();
	void STATIC_DebugQTEForceSuccessUpdateInternal();
	float STATIC_GetLengthBeforeCountInputLimitTime();
	void SetupQTE(const struct FName& InSuccessAction);
	void PlayInputFailedAnimation();
	void STATIC_PlayInputSuccessAnimation();
	bool IsPlayingInAnimation();
	void STATIC_PlayTimeUpFailedAnimation();
	void STATIC_PlayInAnimation();
	void STATIC_SetTimeGaugeRate(float InGaugeRate);
	void STATIC_ExecuteInputAction(const struct FName& InInputAction);
	void STATIC_Finalize();
	void Initialize();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
