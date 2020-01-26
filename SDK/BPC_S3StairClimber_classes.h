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

// BlueprintGeneratedClass BPC_S3StairClimber.BPC_S3StairClimber_C
// 0x0088 (0x0178 - 0x00F0)
class UBPC_S3StairClimber_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class ABP_S3StaircaseBase_C*                       Stairs;                                                   // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AS3Character*                                CharacterActor;                                           // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               OnStairs;                                                 // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DirUp;                                                    // 0x0109(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x010A(0x0002) MISSED OFFSET
	float                                              TargetZ;                                                  // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StepProgress;                                             // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RawVeerAngle;                                             // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RelativeVeerAngle;                                        // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrideScale;                                              // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MAX_ANGLE;                                                // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MANUAL_UPDATE_ONLY;                                       // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
	float                                              ROOT_OFFSET;                                              // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	class ABP_S3StaircaseBase_C*                       InteractingStairs;                                        // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_S3StaircaseBase_C*>               OverlappingStairs;                                        // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              StepsClimbed;                                             // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RAYCAST_ERROR_TOLERANCE;                                  // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FacingRight;                                              // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStartStairUse;                                          // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndStairUse;                                            // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_S3StairClimber.BPC_S3StairClimber_C");
		return ptr;
	}


	void IsHeightFixEnabled(bool* bEnabled);
	struct FVector MatchHorizontal(const struct FVector& InLocation, const struct FVector& TargetRelativeY);
	bool ValidateStairCollisionWithTrace(const struct FVector& TestLocation, class ABP_S3StaircaseBase_C* Stair);
	void SetMainStairs(class ABP_S3StaircaseBase_C* StairsIn);
	void IgnoreStairCollision(bool bShouldIgnore, class ABP_S3StaircaseBase_C* Stair);
	void PostUpdateHeightFix();
	void BottomToCenterLocation(const struct FVector& Bottom, struct FVector* Center);
	void TrySelectAndUpdateStairs(class ABP_S3StaircaseBase_C* InStairs, bool* Success);
	void CalculateMovePosition(const struct FVector& PrevLocation, float PrevAnimCycle, float NextAnimCycle, struct FVector* OutLocation);
	void CalculateAngleData(class ABP_S3StaircaseBase_C* Stairs, float* OutRawVeerAngle, float* OutDirectionalVeerAngle, float* OutStrideScale, bool* OutDirUp);
	bool CheckOnStairs(class ABP_S3StaircaseBase_C* Stairs, float StrideScale, bool AddHysteresis);
	void GetArcTOA(const struct FVector2D& End, const struct FVector2D& Start, float* OutCalc);
	void GetWeightedAngleToCorner(bool IsLeftSide, float* Angle);
	void SetInteractingStairs(class ABP_S3StaircaseBase_C* Stair);
	void MatchAnimCycle(float InAnimPosition, float InStairPosition, bool bUp, float* OutAnimPosition);
	void ClampDirection(const struct FVector& Direction, struct FVector* Clamped);
	void Update(float DeltaTime);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnBeginOverlapStairs(class ABP_S3StaircaseBase_C* Staircase);
	void OnEndOverlapStairs(class ABP_S3StaircaseBase_C* Staircase);
	void ExecuteUbergraph_BPC_S3StairClimber(int EntryPoint);
	void OnEndStairUse__DelegateSignature();
	void OnStartStairUse__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
