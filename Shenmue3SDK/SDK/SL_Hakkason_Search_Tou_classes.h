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

// BlueprintGeneratedClass SL_Hakkason_Search_Tou.SL_Hakkason_Search_Tou_C
// 0x0018 (0x0348 - 0x0330)
class ASL_Hakkason_Search_Tou_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	bool                                               bEnabledSafetyEvent;                                      // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	class ABP_SearchArea_C*                            BP_SearchArea_Too_ExecuteUbergraph_SL_Hakkason_Search_Tou_RefProperty;// 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SL_Hakkason_Search_Tou.SL_Hakkason_Search_Tou_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnFlagChange(int ArrayIndex, int SetFlags);
	void ChangeToFree();
	void ExecuteUbergraph_SL_Hakkason_Search_Tou(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
