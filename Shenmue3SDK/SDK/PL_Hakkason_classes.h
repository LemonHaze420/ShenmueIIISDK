#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PL_Hakkason.PL_Hakkason_C
// 0x0008 (0x0338 - 0x0330)
class APL_Hakkason_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PL_Hakkason.PL_Hakkason_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_PL_Hakkason(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
