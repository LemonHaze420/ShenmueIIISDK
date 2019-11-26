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

// BlueprintGeneratedClass BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C
// 0x0040 (0x0130 - 0x00F0)
class UBP_S3CameraSmoothRotator_C : public UActorComponent
{
public:
	float                                              YawVelocity;                                              // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 YawVelocityCurve;                                         // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchVelocity;                                            // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	class UCurveFloat*                                 PitchVelocityCurve;                                       // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YawDeaccel;                                               // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchDeaccel;                                             // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 YawAccelCurve;                                            // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PitchAccelCurve;                                          // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationDelayTimer;                                   // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedScale;                                               // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C");
		return ptr;
	}


	void GetYawVelocity(float* YawVelocity);
	void UpdateYaw(float CurrentAngle, float TargetAngle, bool AllowAcceleration, bool ForceDeaccel, float* ResultAngle);
	void UpdateAxis(float CurrentAngle, float TargetAngle, float Velocity, class UCurveFloat* VelocityCurve, class UCurveFloat* AccelerationCurve, float Deaccleration, bool AllowAcceleration, bool ForceDeaccel, float* ResultAngle, float* ResultVelocity);
	void UpdatePitch(float CurrentAngle, float TargetAngle, bool AllowAcceleration, bool ForceDeaccel, float* ResultAngle);
	void Reset();
	void GetRealVelocity(float SourceAngle, float DestinationAngle, float IntendedVelocity, float* RealVelocity);
	float UpdateAngularVelocity(float CurrentAngle, float TargetAngle, float CurrentVel, class UCurveFloat* VelCurve, class UCurveFloat* AccelCurve, float Deaccel, bool EnableAccel, bool ForceDeaccel);
	void Update(float TargetPitch, float TargetYaw, const struct FRotator& CurrentRotation, bool AllowAccel, struct FRotator* NewRotation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
