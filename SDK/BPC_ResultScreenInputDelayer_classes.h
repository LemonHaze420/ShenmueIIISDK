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

// BlueprintGeneratedClass BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C
// 0x0038 (0x0128 - 0x00F0)
class UBPC_ResultScreenInputDelayer_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnEnableInput;                                            // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDisableInput;                                           // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              LastDitchDelay;                                           // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ScreenWaitDone;                                           // 0x011C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               FixedWaitDone;                                            // 0x011D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Done;                                                     // 0x011E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x011F(0x0001) MISSED OFFSET
	class UBPW_UI_GeneralWindow_Button_C*              Button;                                                   // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C");
		return ptr;
	}


	void SetInputEnabled(bool bValue);
	void DelayInput(float Delay, class UBPW_UI_GeneralWindow_Button_C* Button);
	void NotifyAnimationComplete();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BPC_ResultScreenInputDelayer(int EntryPoint);
	void OnDisableInput__DelegateSignature();
	void OnEnableInput__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
