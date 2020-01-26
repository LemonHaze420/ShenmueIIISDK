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

// BlueprintGeneratedClass BPC_S3PlayerSteering.BPC_S3PlayerSteering_C
// 0x00B8 (0x01C8 - 0x0110)
class UBPC_S3PlayerSteering_C : public US3PlayerSteeringComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (Transient, DuplicateTransient)
	TArray<class UBPC_DoorSteeringHint_C*>             DoorHints;                                                // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class APlayerSplineNavi_C*>                 SplineGuides;                                             // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UObject*                                     Selected_Guide;                                           // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PREVIOUS_PRIORITY_BONUS;                                  // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Selected_TimeOnCurrent;                                   // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              STRENGTH_HYSTERESIS_TIME;                                 // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MIN_HYSTERESIS_MOD;                                       // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SENSOR_NPC_RADIUS;                                        // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	class UCurveFloat*                                 SENSOR_NPC_ANGLE_TO_SCORE;                                // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 SENSOR_NPC_DISTANCE_TO_SCORE;                             // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SENSOR_NPC_CAPSULE_ADD_RADIUS;                            // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoActiveInputTime;                                        // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableDebug;                                             // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Selected_StopMovement;                                    // 0x0171(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0172(0x0002) MISSED OFFSET
	struct FVector                                     Selected_Direction;                                       // 0x0174(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Selected_DirStrength;                                     // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_PC_GuideType>                       Selected_GuideType;                                       // 0x0184(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0185(0x0003) MISSED OFFSET
	class AS3SplineMoveActor*                          FollowSpline;                                             // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Selected_Magnitude;                                       // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceDebugFollow;                                         // 0x0194(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	float                                              MinMoveMag;                                               // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableFollowLeader;                                      // 0x019C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOnlyRestrictiveGuidesMode;                               // 0x019D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x019E(0x0002) MISSED OFFSET
	struct FVector                                     Input_DirectionWS;                                        // 0x01A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Input_Magnitude;                                          // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Selected_NarrowPath;                                      // 0x01B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x01B1(0x0003) MISSED OFFSET
	struct FVector                                     OwnerLocationWS;                                          // 0x01B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3_Character_Adventure_C*                AdventureChar;                                            // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_S3PlayerSteering.BPC_S3PlayerSteering_C");
		return ptr;
	}


	bool ZeroedOutInput();
	void Clear();
	void CalcNPCSteer(class AS3Character* NPC, const struct FVector& PlayerLocation, const struct FVector& InputDirection, float* OutStrength, float* OutPriority, struct FVector* OutDirection);
	void SampleFloatCurveWithLinearDefault(class UCurveFloat* Curve, float InputValue, float* OutputValue);
	void GetNPCAngleN(const struct FVector& NPCLocation, const struct FVector& PlayerLocation, float PlayerNPCDistance, float NPCRadius, float InputAngleWS, float* Angle);
	void ClearHints();
	void Update(const struct FVector& InputDirWS, bool ActiveInput, float InputMagnitude, float* OutStrength, struct FVector* OutDirection, float* OutMagnitude);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_S3PlayerSteering(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
