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

// Class FiniteStateMachine.FiniteStateBase
// 0x0010 (0x0038 - 0x0028)
class UFiniteStateBase : public UObject
{
public:
	struct FName                                       StateName;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFiniteStateMachineComponent*                StateMachineComponent;                                    // 0x0030(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FiniteStateMachine.FiniteStateBase");
		return ptr;
	}


	void StateUpdate(float Delta, bool* bDummy);
	void StateOnSuspend(bool* bDummy);
	void StateOnResume(bool* bDummy);
	void StateOnInitialize();
	void StateExit(float Delta, bool* bProcessing);
	void StateEnter(float Delta, bool* bProcessing);
};


// Class FiniteStateMachine.FiniteStateMachineComponent
// 0x00D0 (0x01C0 - 0x00F0)
class UFiniteStateMachineComponent : public UActorComponent
{
public:
	TArray<class UClass*>                              StateBaseClasses;                                         // 0x00F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       StartupStateName;                                         // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartupGlobalStateName;                                   // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSelfTickUpdate;                                          // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsedStateDispatcher;                                     // 0x0111(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0112(0x0006) MISSED OFFSET
	TMap<struct FName, class UFiniteStateBase*>        StateInstanceMap;                                         // 0x0118(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UFiniteStateBase*                            CurrentState;                                             // 0x0168(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UFiniteStateBase*                            PreviousState;                                            // 0x0170(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UFiniteStateBase*                            NewState;                                                 // 0x0178(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UFiniteStateBase*                            GlobalState;                                              // 0x0180(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEnterDispatcher;                                        // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateDispatcher;                                       // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnExitDispatcher;                                         // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FiniteStateMachine.FiniteStateMachineComponent");
		return ptr;
	}


	void UpdateState(float Delta);
	void Suspend();
	void SetNewGlobalState(const struct FName& NewStateName);
	void RevertToPreviousState();
	void Resume();
	bool IsStateActive(const struct FName& StateName);
	class UFiniteStateBase* GetStateByStateName(const struct FName& StateName);
	void CreateStateInstance();
	void ChangeStateLazy(const struct FName& NewStateName);
	void ChangeState(const struct FName& NewStateName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
