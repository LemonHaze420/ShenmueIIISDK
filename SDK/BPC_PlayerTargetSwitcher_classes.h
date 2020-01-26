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

// BlueprintGeneratedClass BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C
// 0x0058 (0x0148 - 0x00F0)
class UBPC_PlayerTargetSwitcher_C : public UActorComponent
{
public:
	class AS3Character*                                TargetedNPC;                                              // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSwitchRequested;                                         // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableDebug;                                             // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00FA(0x0002) MISSED OFFSET
	struct FVector                                     OwnerPawnLocation;                                        // 0x00FC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              NPCDetectRadius;                                          // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NPCPriorityRadius;                                        // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OwnerPawnForward;                                         // 0x0110(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableTargetInvalidation;                                 // 0x011C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableTargetSelection;                                    // 0x011D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x011E(0x0002) MISSED OFFSET
	float                                              OwnerPawnYawWS;                                           // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastSelectedYawAngleAS;                                   // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bManualDirectionRequested;                                // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	struct FVector                                     ManualRequestedVector;                                    // 0x012C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnFaceDirection;                                          // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C");
		return ptr;
	}


	void CachePawnData(class AActor* Pawn);
	void DoPlayerRequestedSwitch(class AActor* Pawn);
	void UpdateDetectAction();
	void Reset();
	void FaceDirection(const struct FVector& Direction);
	bool IsNPCTalkative(class AActor* Target);
	void RequestManualDirection(const struct FVector& Direction);
	void GetTargetCandidates(TArray<class AS3Character*>* OutNPCs, TArray<float>* OutScores);
	void RequestSwitchTarget();
	void Update(class APawn* Pawn);
	void OnFaceDirection__DelegateSignature(const struct FVector& Direction);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
