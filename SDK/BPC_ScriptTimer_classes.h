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

// BlueprintGeneratedClass BPC_ScriptTimer.BPC_ScriptTimer_C
// 0x0010 (0x0100 - 0x00F0)
class UBPC_ScriptTimer_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	bool                                               bBindingEvent;                                            // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	int                                                MaxTime;                                                  // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_ScriptTimer.BPC_ScriptTimer_C");
		return ptr;
	}


	void STATIC_ConvertTime(float Minutes, int* Time);
	void STATIC_UpdateGlobalFlag();
	void ReceiveBeginPlay();
	void BindGameTimeManager();
	void UnbindGameTimeManager();
	void OnUpdateNextDay();
	void OnUpdateGameTime(float UpdateTime);
	void StopTimer(int GlobalFlagIndex);
	void StartTimer(int GlobalFlagIndex);
	void ExecuteUbergraph_BPC_ScriptTimer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
