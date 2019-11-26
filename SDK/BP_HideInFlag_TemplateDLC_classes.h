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

// BlueprintGeneratedClass BP_HideInFlag_TemplateDLC.BP_HideInFlag_TemplateDLC_C
// 0x0028 (0x0118 - 0x00F0)
class UBP_HideInFlag_TemplateDLC_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	int                                                CheckFlagID;                                              // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HideType;                                                 // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HideFlag;                                                 // 0x00FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00FE(0x0002) MISSED OFFSET
	int                                                CheckFlagValue_L;                                         // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CheckFlagValue_H;                                         // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DlcExtendedFlag1;                                         // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DlcExtendedFlag2;                                         // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ExspCheck;                                                // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HideInFlag_TemplateDLC.BP_HideInFlag_TemplateDLC_C");
		return ptr;
	}


	void CheckExsp(bool* Result);
	void CheckChangeFlag(int change_flag, bool* Result);
	void CheckExterndFlag(bool* In_Range);
	void CheckFlagValue(bool* In_Range);
	void CheckHide(bool* Hide_On);
	void ChangeHide_Owner(bool Hide);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Event_FlagChange(int ArrayIndex, int SetFlags);
	void Evt_StepChange(int SetSteps);
	void StepChangeIn();
	void ExecuteUbergraph_BP_HideInFlag_TemplateDLC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
