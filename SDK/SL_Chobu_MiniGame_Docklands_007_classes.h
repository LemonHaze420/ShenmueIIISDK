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

// BlueprintGeneratedClass SL_Chobu_MiniGame_Docklands_007.SL_Chobu_MiniGame_Docklands_007_C
// 0x0008 (0x0338 - 0x0330)
class ASL_Chobu_MiniGame_Docklands_007_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SL_Chobu_MiniGame_Docklands_007.SL_Chobu_MiniGame_Docklands_007_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_SL_Chobu_MiniGame_Docklands_007(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
