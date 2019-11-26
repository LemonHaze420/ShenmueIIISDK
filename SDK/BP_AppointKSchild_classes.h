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

// BlueprintGeneratedClass BP_AppointKSchild.BP_AppointKSchild_C
// 0x0068 (0x0390 - 0x0328)
class ABP_AppointKSchild_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                EnableTimeMin;                                            // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EnableTimeMax;                                            // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       KSlabelID;                                                // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EyeCatchID;                                               // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     JumpLocation;                                             // 0x0350(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    jumprot;                                                  // 0x035C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                Hour;                                                     // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Min;                                                      // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ApsChild_TimeOver;                                        // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                ExspFlagSet;                                              // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDeadEnableFlag;                                          // 0x0384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	struct FName                                       ExspControl;                                              // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AppointKSchild.BP_AppointKSchild_C");
		return ptr;
	}


	void isLive(bool* LIVE);
	void ExecSelfKill(bool Forced);
	void ExecExspFlagSet();
	void GetJumpRot(float* Jump_point);
	void GetJumpTime(int* Hour, int* Min);
	void SetKSinfo(int EnableTimeMin, int EnableTimeMax, int JumpHour, int JumpMin, const struct FVector& JumpLocation, const struct FRotator& jumprot, const struct FName& KSlavel, const struct FName& Eyecatch, int ExspFlagSet, const struct FName& ExspControl);
	void GetJumpInfo(struct FVector* Jump_point);
	void GetEyeCatchID(struct FName* eyecatch_id);
	void GetKsLabelID(struct FName* ks_id);
	void CheckEnableTime();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_AppointKSchild(int EntryPoint);
	void ApsChild_TimeOver__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
