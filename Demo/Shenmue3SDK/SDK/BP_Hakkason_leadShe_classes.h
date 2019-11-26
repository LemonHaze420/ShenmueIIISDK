#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Hakkason_leadShe.BP_Hakkason_leadShe_C
// 0x0026 (0x034E - 0x0328)
class ABP_Hakkason_leadShe_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FDataTableRowHandle                         SetEvent;                                                 // 0x0338(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                FlagID;                                                   // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      This_Renewal_Counter;                                     // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoa;                                                     // 0x034D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hakkason_leadShe.BP_Hakkason_leadShe_C");
		return ptr;
	}


	void CheckLoadSartShe(bool* is_load, struct FVector* SheLocation, struct FRotator* SheRotation);
	void InitSet(const struct FDataTableRowHandle& EventId, int UseFlagID, bool LoadStart);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter);
	void KillSheLead();
	void StartLeadSHE_Macro(bool LoadStart);
	void ExecuteUbergraph_BP_Hakkason_leadShe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
