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

// BlueprintGeneratedClass BP_HideInStep_Template.BP_HideInStep_Template_C
// 0x0014 (0x0104 - 0x00F0)
class UBP_HideInStep_Template_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	int                                                MinStep;                                                  // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxStep;                                                  // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeedHide;                                                 // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HideType;                                                 // 0x0101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StepDisable;                                              // 0x0102(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartON;                                                  // 0x0103(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HideInStep_Template.BP_HideInStep_Template_C");
		return ptr;
	}


	void ChangeHide_Owner(bool Hide);
	void CheckStep_MinMax(int MinStep, int MaxStep, bool* Result);
	void LocalEvt_ChangeStep(int SetSteps);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void StartIn();
	void ExecuteUbergraph_BP_HideInStep_Template(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
