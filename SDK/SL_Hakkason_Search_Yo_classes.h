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

// BlueprintGeneratedClass SL_Hakkason_Search_Yo.SL_Hakkason_Search_Yo_C
// 0x0018 (0x0348 - 0x0330)
class ASL_Hakkason_Search_Yo_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	int                                                SEARCH_STEP;                                              // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	class ABP_SearchArea_C*                            BP_SearchArea_Yo_ExecuteUbergraph_SL_Hakkason_Search_Yo_RefProperty;// 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SL_Hakkason_Search_Yo.SL_Hakkason_Search_Yo_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void Start_SearchYo();
	void STATIC_ExecuteUbergraph_SL_Hakkason_Search_Yo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
