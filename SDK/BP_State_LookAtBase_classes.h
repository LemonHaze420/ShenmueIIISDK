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

// BlueprintGeneratedClass BP_State_LookAtBase.BP_State_LookAtBase_C
// 0x0010 (0x0048 - 0x0038)
class UBP_State_LookAtBase_C : public US3LookAtStateBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (Transient, DuplicateTransient)
	class UBPC_LookAtFSM_C*                            LookAtFSM;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_LookAtBase.BP_State_LookAtBase_C");
		return ptr;
	}


	void ResetLookAtParamater(bool bResetTarget);
	void GetStateOwner(class AActor** OwnerActor);
	void StateOnInitialize();
	void ExecuteUbergraph_BP_State_LookAtBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
