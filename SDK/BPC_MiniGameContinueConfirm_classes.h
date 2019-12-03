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

// BlueprintGeneratedClass BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C
// 0x0058 (0x0148 - 0x00F0)
class UBPC_MiniGameContinueConfirm_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class ABP_S3actionSelect_C*                        ActionSelect;                                             // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                actionSelectResult;                                       // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGameContinueDispatcher;                                 // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameFinishedDispatcher;                                 // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       LabelName_Continue;                                       // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LabelName_Cancel;                                         // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Repay;                                                    // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	class UBPC_MiniGameContainer_C*                    MiniGameContainer;                                        // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C");
		return ptr;
	}


	void STATIC_CleanUp();
	void StartGameContinueConfirmCheck();
	void BindActionSelectEvents(class ABP_S3actionSelect_C* Action);
	void STATIC_onSelected(int Index);
	void STATIC_UnbindActionSelectEvents();
	void STATIC_RepayMiniGame(float WaitTime);
	void STATIC_ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_MiniGameContinueConfirm(int EntryPoint);
	void STATIC_OnGameFinishedDispatcher__DelegateSignature();
	void OnGameContinueDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
