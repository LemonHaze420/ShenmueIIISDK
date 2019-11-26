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

// BlueprintGeneratedClass BPC_MiniGameStandaloneTalkScript.BPC_MiniGameStandaloneTalkScript_C
// 0x0010 (0x0100 - 0x00F0)
class UBPC_MiniGameStandaloneTalkScript_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class US3MiniGameDataList*                         MiniGameDataList;                                         // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGameStandaloneTalkScript.BPC_MiniGameStandaloneTalkScript_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BPC_MiniGameStandaloneTalkScript(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
