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

// BlueprintGeneratedClass BPC_S3GameInstanceDebug.BPC_S3GameInstanceDebug_C
// 0x000C (0x00FC - 0x00F0)
class UBPC_S3GameInstanceDebug_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	bool                                               bPrintFPS;                                                // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintFOV;                                                // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPlayerBehaviorId;                                   // 0x00FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintEventStep;                                          // 0x00FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_S3GameInstanceDebug.BPC_S3GameInstanceDebug_C");
		return ptr;
	}


	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_S3GameInstanceDebug(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
