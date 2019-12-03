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

// BlueprintGeneratedClass BPC_MiniGameDebugStandaloneTalkScript.BPC_MiniGameDebugStandaloneTalkScript_C
// 0x0018 (0x0118 - 0x0100)
class UBPC_MiniGameDebugStandaloneTalkScript_C : public UBPC_MiniGameStandaloneTalkScript_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0100(0x0008) (Transient, DuplicateTransient)
	bool                                               bDebugStandAlone;                                         // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	class US3MiniGameDataList*                         DebugScriptList;                                          // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGameDebugStandaloneTalkScript.BPC_MiniGameDebugStandaloneTalkScript_C");
		return ptr;
	}


	void STATIC_EnableDebugTalkScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BPC_MiniGameDebugStandaloneTalkScript(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
