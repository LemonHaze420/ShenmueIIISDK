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

// BlueprintGeneratedClass SL_Chobu_NPC05.SL_Chobu_NPC05_C
// 0x0008 (0x0338 - 0x0330)
class ASL_Chobu_NPC05_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SL_Chobu_NPC05.SL_Chobu_NPC05_C");
		return ptr;
	}


	void ShenfaActionSofa();
	void ExecuteUbergraph_SL_Chobu_NPC05(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
