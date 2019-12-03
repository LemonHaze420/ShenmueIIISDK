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


	void STATIC_GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type);
	void STATIC_FinalizeTalk();
	void STATIC_RestartMiniGame();
	void STATIC_EnterMiniGame(float EnterTime);
	void STATIC_DrawMiniGame();
	void STATIC_LoseMiniGame();
	void STATIC_WinMiniGame();
	void STATIC_EndMiniGame();
	void STATIC_StartMiniGame();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
