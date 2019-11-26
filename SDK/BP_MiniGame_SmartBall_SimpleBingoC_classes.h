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

// BlueprintGeneratedClass BP_MiniGame_SmartBall_SimpleBingoC.BP_MiniGame_SmartBall_SimpleBingoC_C
// 0x000C (0x0908 - 0x08FC)
class ABP_MiniGame_SmartBall_SimpleBingoC_C : public ABP_MiniGame_SmartBall_SimpleBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x08FC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0900(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_SmartBall_SimpleBingoC.BP_MiniGame_SmartBall_SimpleBingoC_C");
		return ptr;
	}


	void CheckBingo(int* BingoNum);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_MiniGame_SmartBall_SimpleBingoC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
