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

// BlueprintGeneratedClass BP_MiniGame_SmartBallFillHoleC.BP_MiniGame_SmartBallFillHoleC_C
// 0x000C (0x0938 - 0x092C)
class ABP_MiniGame_SmartBallFillHoleC_C : public ABP_MiniGame_SmartBallFillHoleBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x092C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0930(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_SmartBallFillHoleC.BP_MiniGame_SmartBallFillHoleC_C");
		return ptr;
	}


	void CheckBingo(int* BingoNum);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MiniGame_SmartBallFillHoleC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
