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

// BlueprintGeneratedClass SL_Hakkason_Demo.SL_Hakkason_Demo_C
// 0x0018 (0x0348 - 0x0330)
class ASL_Hakkason_Demo_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class ABP_DemoPlayTimer_C*                         DemoPlay;                                                 // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_Player180ReturnTrigger_C*                BP_Player180ReturnTrigger30_ExecuteUbergraph_SL_Hakkason_Demo_RefProperty;// 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SL_Hakkason_Demo.SL_Hakkason_Demo_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_SL_Hakkason_Demo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
