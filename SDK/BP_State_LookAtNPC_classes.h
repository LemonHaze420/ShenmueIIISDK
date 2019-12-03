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

// BlueprintGeneratedClass BP_State_LookAtNPC.BP_State_LookAtNPC_C
// 0x0011 (0x0059 - 0x0048)
class UBP_State_LookAtNPC_C : public UBP_State_LookAtBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)
	class US3NPCAnimInstance*                          NPCAnimInstance;                                          // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugOutputLog;                                          // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_LookAtNPC.BP_State_LookAtNPC_C");
		return ptr;
	}


	void STATIC_IsNPCLocomotionAnimation(bool* bReturnValue);
	void STATIC_IsNPCLocomotionSit(bool* bReturnValue);
	void IsNPCLocomotionWalk(bool* bReturnValue);
	void STATIC_IsNPCLocomotionIdle(bool* bReturnValue);
	void IsInitializeState(bool* bSuccess);
	void StateOnInitialize();
	void STATIC_Setup();
	void STATIC_ExecuteUbergraph_BP_State_LookAtNPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
