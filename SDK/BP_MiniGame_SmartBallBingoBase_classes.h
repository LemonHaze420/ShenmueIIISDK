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

// BlueprintGeneratedClass BP_MiniGame_SmartBallBingoBase.BP_MiniGame_SmartBallBingoBase_C
// 0x0008 (0x08E8 - 0x08E0)
class ABP_MiniGame_SmartBallBingoBase_C : public ABP_MiniGame_TestNewSmartBallBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_SmartBallBingoBase.BP_MiniGame_SmartBallBingoBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void StartMiniGame();
	void ExecuteUbergraph_BP_MiniGame_SmartBallBingoBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
