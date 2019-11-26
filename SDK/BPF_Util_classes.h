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

// BlueprintGeneratedClass BPF_Util.BPF_Util_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Util_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Util.BPF_Util_C");
		return ptr;
	}


	void STATIC_BPF_YawAngleToActor(class AActor* To, class AActor* From, class UObject* __WorldContext, float* AngleSignedDegrees);
	struct FVector STATIC_BPF_VectorToActor(class AActor* To, class AActor* From, class UObject* __WorldContext);
	void STATIC_BPF_GetCharacterTop(class ACharacter* Character, class UObject* __WorldContext, struct FVector* Bottom);
	void STATIC_BPF_WorldSpaceYawToDirection(float Yaw, class UObject* __WorldContext, struct FVector* Direction);
	int STATIC_BPF_IntStepTo(int Current, int Target, class UObject* __WorldContext);
	struct FRotator STATIC_BPF_FindActor2DLookAtRotation(class AActor* Start, class AActor* Target, class UObject* __WorldContext);
	struct FRotator STATIC_BPF_Find2DLookAtRotation(const struct FVector& Start, const struct FVector& Target, class UObject* __WorldContext);
	void STATIC_BPF_AddCharacterHalfHeight(class ACharacter* Character, const struct FVector& Bottom, class UObject* __WorldContext, struct FVector* Center);
	void STATIC_BPF_GetCharacterBottom(class ACharacter* Character, class UObject* __WorldContext, struct FVector* Bottom);
	struct FVector STATIC_BPF_RotateVectorTo2DDamp(const struct FVector& RotateMe, const struct FVector& TowardsMe, float DeltaTime, float Damp, class UObject* __WorldContext);
	void STATIC_BPF_RemoveVectorZ(const struct FVector& InVector, class UObject* __WorldContext, struct FVector* OutVector);
	void STATIC_BPF_GetDeltaTimeAsRemainingFraction(float DeltaSeconds, float NowTime, float StartTime, float EndTime, float DefaultOnEnd, class UObject* __WorldContext, float* Delta);
	void STATIC_BPF_DirectionToWorldSpaceYaw(const struct FVector& Direction, class UObject* __WorldContext, float* WorldSpaceYaw);
	void STATIC_BPF_LerpAngle(float A, float B, float Alpha, class UObject* __WorldContext, float* ResultAngle);
	void STATIC_BPF_LerpAngleSigned(float A, float B, float AlphaWithSign, class UObject* __WorldContext, float* ResultAngle);
	void STATIC_BPF_AngleVector2DSignedDegrees(const struct FVector& Target, const struct FVector& Source, class UObject* __WorldContext, float* AngleSignedDegrees);
	void STATIC_BPF_GetSplineAreaAtPointVector3D(const struct FVector& Offset, class UObject* __WorldContext, TArray<struct FVector>* PointVector, struct FBox* OutBounds);
	void STATIC_BPF_InterpolateAngleConstantNear(float Source, float Target, float Delta, class UObject* __WorldContext, float* ResultAngle);
	void STATIC_BPF_InterpolateAngleConstantSigned(float Source, float Target, float DirectionSignedDeg, class UObject* __WorldContext, float* ResultAngle);
	void STATIC_BPF_ConvertAngleToSignDegrees(float AngleDegrees, float Sign, class UObject* __WorldContext, float* Out);
	void STATIC_BPF_AngleDifferenceSignedDegrees(float Target, float Source, class UObject* __WorldContext, float* Difference);
	void STATIC_BPF_ResumeCamera(float BlendTime, class UObject* __WorldContext);
	struct FRotator STATIC_BPF_RInterpToQuaternion(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, class UObject* __WorldContext);
	struct FRotator STATIC_BPF_RInterpToQuaternionLinear(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, class UObject* __WorldContext);
	void STATIC_BPF_IsLineSightCheck(class AActor* Actor, class AActor* TargetActor, float Angle, bool bOutputLog, class UObject* __WorldContext, bool* bResult);
	void STATIC_BPF_GetEyeLocationAndRightVector(class AActor* Actor, class UObject* __WorldContext, struct FVector* EyeLocation, struct FVector* RightVector, bool* bSuccessEyeLocation);
	void STATIC_BPF_Vector2DLengthSquared(const struct FVector& v1, const struct FVector& v2, class UObject* __WorldContext, float* Distance);
	void STATIC_BPF_AddDeltaTime(class UObject* __WorldContext, float* Value, float* AddedValue);
	void STATIC_BPF_GetSplineRate(class AActor* Actor, float MoveDistance, class UObject* __WorldContext, float* Rate);
	void STATIC_BPF_GetSplineAreaAtSpline(class AActor* Actor, float Offset, class UObject* __WorldContext, float* x_max, float* x_min, float* y_max, float* y_min);
	void STATIC_BPF_GetSplineAreaAtPointVector(float Offset, class UObject* __WorldContext, TArray<struct FVector>* PointVector, float* x_max, float* x_min, float* y_max, float* y_min);
	void STATIC_BPF_Length1d(float V0, float v1, class UObject* __WorldContext, float* Length);
	void STATIC_BPF_ReducedScaleChangeNoLimit(float defult_len, float change_over_len, float Alpha, class UObject* __WorldContext, float* newParam);
	void STATIC_BPF_InterVector(const struct FVector& v1, const struct FVector& v2, float Rate, class UObject* __WorldContext, struct FVector* V0);
	void STATIC_BPF_QueryTagCharaName2Character(const struct FName& CharaName, class UObject* __WorldContext, class AS3Character** Character);
	void STATIC_BPF_PadInput2SinTbl(float Input, class UObject* __WorldContext, float* DstSinTbl);
	void STATIC_BPF_LineWrongSideOut2d(float PosX, float PosY, float Vx0, float Vy0, float Vx1, float Vy1, class UObject* __WorldContext, bool* DstFlag);
	void STATIC_BPF_AngleVector(const struct FVector& v1, const struct FVector& v2, class UObject* __WorldContext, float* RetRot);
	void STATIC_BPF_TriangleNormal(const struct FVector& V0, const struct FVector& v1, const struct FVector& v2, class UObject* __WorldContext, struct FVector* Normal);
	void STATIC_BPF_LineDirection(const struct FVector& V0, const struct FVector& v1, class UObject* __WorldContext, struct FVector* Dst);
	void STATIC_BPF_DeltaTimeScale(float Scale, class UObject* __WorldContext, float* Dst);
	void STATIC_stringCompare(const struct FString& stringA, const struct FString& stringB, bool i, class UObject* __WorldContext, int* Result);
	void STATIC_BPF_TraceIdast1dDeltaTime(float V, float TergetV, float Speed, class UObject* __WorldContext, float* Dst);
	void STATIC_toString_withDigit_(int Value, int digit, class UObject* __WorldContext, struct FString* digitFixString);
	void STATIC_BPF_FloatEqual(float A, float B, class UObject* __WorldContext, bool* DstFlag);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
