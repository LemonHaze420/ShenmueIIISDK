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

// BlueprintGeneratedClass SL_Hakkason_ENV_Area11.SL_Hakkason_ENV_Area11_C
// 0x0008 (0x0338 - 0x0330)
class ASL_Hakkason_ENV_Area11_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SL_Hakkason_ENV_Area11.SL_Hakkason_ENV_Area11_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_SL_Hakkason_ENV_Area11(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
