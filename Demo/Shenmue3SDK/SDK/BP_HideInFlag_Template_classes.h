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

// BlueprintGeneratedClass BP_HideInFlag_Template.BP_HideInFlag_Template_C
// 0x0018 (0x0108 - 0x00F0)
class UBP_HideInFlag_Template_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	int                                                CheckFlagID;                                              // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HideType;                                                 // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HideFlag;                                                 // 0x00FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00FE(0x0002) MISSED OFFSET
	int                                                CheckFlagValue_L;                                         // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CheckFlagValue_H;                                         // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HideInFlag_Template.BP_HideInFlag_Template_C");
		return ptr;
	}


	void CheckFlagValue(bool* In_Range);
	void CheckHide(bool* Hide_On);
	void ChangeHide_Owner(bool Hide);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void Event_FlagChange(int ArrayIndex, int SetFlags);
	void ExecuteUbergraph_BP_HideInFlag_Template(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
