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

// BlueprintGeneratedClass PL_Chobu.PL_Chobu_C
// 0x0008 (0x0338 - 0x0330)
class APL_Chobu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PL_Chobu.PL_Chobu_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_PL_Chobu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
