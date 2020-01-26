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

// BlueprintGeneratedClass BP_State_Follow_Base.BP_State_Follow_Base_C
// 0x0010 (0x0048 - 0x0038)
class UBP_State_Follow_Base_C : public UFiniteStateBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (Transient, DuplicateTransient)
	class UBPC_FollowFSM_C*                            FollowFSM;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_Follow_Base.BP_State_Follow_Base_C");
		return ptr;
	}


	void GetPawn(class ABP_NPC_Lead_C** Pawn);
	void IsDebugDrawingEnabled(bool* DrawDebug);
	void UpdateTransitions(float DeltaSeconds);
	void IsCurrentState(bool* bIsCurrent);
	void StateOnInitialize();
	void ExecuteUbergraph_BP_State_Follow_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
