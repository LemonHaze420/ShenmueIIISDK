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

// BlueprintGeneratedClass BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C
// 0x0028 (0x0118 - 0x00F0)
class UBPC_ScriptTimeOverChecker_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	float                                              limitTime;                                                // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInitialize;                                              // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	float                                              StartMarkTimer;                                           // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGameTimeOverDispatcher;                                 // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void StopTimeOverCheck();
	void StartTimeOverCheck(float GameStopTime);
	void ReceiveTick(float DeltaSeconds);
	void OnEndTalk();
	void ExecuteUbergraph_BPC_ScriptTimeOverChecker(int EntryPoint);
	void OnGameTimeOverDispatcher__DelegateSignature(float GameStopTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
