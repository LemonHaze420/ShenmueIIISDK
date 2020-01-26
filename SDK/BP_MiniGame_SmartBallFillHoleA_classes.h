#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MiniGame_SmartBallFillHoleA.BP_MiniGame_SmartBallFillHoleA_C
// 0x000C (0x0938 - 0x092C)
class ABP_MiniGame_SmartBallFillHoleA_C : public ABP_MiniGame_SmartBallFillHoleBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x092C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0930(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_SmartBallFillHoleA.BP_MiniGame_SmartBallFillHoleA_C");
		return ptr;
	}


	void CheckBingo(int* BingoNum);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MiniGame_SmartBallFillHoleA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
