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

// BlueprintGeneratedClass BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C
// 0x0008 (0x0870 - 0x0868)
class ABP_WhackJangMoleMiniGame_C : public ABP_WhackMoleMiniGame_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0868(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_ExecuteUbergraph_BP_WhackJangMoleMiniGame(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
