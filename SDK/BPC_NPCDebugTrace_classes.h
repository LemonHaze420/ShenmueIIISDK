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

// BlueprintGeneratedClass BPC_NPCDebugTrace.BPC_NPCDebugTrace_C
// 0x0068 (0x0158 - 0x00F0)
class UBPC_NPCDebugTrace_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class ABP_ScheduleNPC_C*                           NPC;                                                      // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class US3NPCAnimInstance*                          AnimIns;                                                  // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_ScheduleNPCAI_C*                         AIController;                                             // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugTraceDistance;                                       // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DebugTraceColor;                                          // 0x0114(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      NPCMesh;                                                  // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBPC_S3_TalkComponent_C*                     TalkComponent;                                            // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBPC_BSComponent_C*                          BSComponent;                                              // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameTalk_C*                         MiniGameComponent;                                        // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBPC_ShopTalk_C*                             ShopComponent;                                            // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class US3PlayerMovementComponent*                  MovementComponent;                                        // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_NPCDebugTrace.BPC_NPCDebugTrace_C");
		return ptr;
	}


	void Trace();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BPC_NPCDebugTrace(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
