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

// BlueprintGeneratedClass BPI_MiniGame.BPI_MiniGame_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_MiniGame_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_MiniGame.BPI_MiniGame_C");
		return ptr;
	}


	void GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type);
	void FinalizeTalk();
	void RestartMiniGame();
	void EnterMiniGame(float EnterTime);
	void DrawMiniGame();
	void LoseMiniGame();
	void WinMiniGame();
	void EndMiniGame();
	void StartMiniGame();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
