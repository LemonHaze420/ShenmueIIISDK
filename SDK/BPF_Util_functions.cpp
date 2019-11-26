
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPF_Util.BPF_Util_C.BPF_YawAngleToActor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  To                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  From                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleSignedDegrees             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_YawAngleToActor(class AActor* To, class AActor* From, class UObject* __WorldContext, float* AngleSignedDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_YawAngleToActor");

	UBPF_Util_C_BPF_YawAngleToActor_Params params;
	params.To = To;
	params.From = From;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AngleSignedDegrees != nullptr)
		*AngleSignedDegrees = params.AngleSignedDegrees;
}


// Function BPF_Util.BPF_Util_C.BPF_VectorToActor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  To                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  From                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPF_Util_C::STATIC_BPF_VectorToActor(class AActor* To, class AActor* From, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_VectorToActor");

	UBPF_Util_C_BPF_VectorToActor_Params params;
	params.To = To;
	params.From = From;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Util.BPF_Util_C.BPF_GetCharacterTop
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Bottom                         (Parm, OutParm, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_GetCharacterTop(class ACharacter* Character, class UObject* __WorldContext, struct FVector* Bottom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_GetCharacterTop");

	UBPF_Util_C_BPF_GetCharacterTop_Params params;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bottom != nullptr)
		*Bottom = params.Bottom;
}


// Function BPF_Util.BPF_Util_C.BPF_WorldSpaceYawToDirection
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_WorldSpaceYawToDirection(float Yaw, class UObject* __WorldContext, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_WorldSpaceYawToDirection");

	UBPF_Util_C_BPF_WorldSpaceYawToDirection_Params params;
	params.Yaw = Yaw;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function BPF_Util.BPF_Util_C.BPF_IntStepTo
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBPF_Util_C::STATIC_BPF_IntStepTo(int Current, int Target, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_IntStepTo");

	UBPF_Util_C_BPF_IntStepTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Util.BPF_Util_C.BPF_FindActor2DLookAtRotation
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UBPF_Util_C::STATIC_BPF_FindActor2DLookAtRotation(class AActor* Start, class AActor* Target, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_FindActor2DLookAtRotation");

	UBPF_Util_C_BPF_FindActor2DLookAtRotation_Params params;
	params.Start = Start;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Util.BPF_Util_C.BPF_Find2DLookAtRotation
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UBPF_Util_C::STATIC_BPF_Find2DLookAtRotation(const struct FVector& Start, const struct FVector& Target, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_Find2DLookAtRotation");

	UBPF_Util_C_BPF_Find2DLookAtRotation_Params params;
	params.Start = Start;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Util.BPF_Util_C.BPF_AddCharacterHalfHeight
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Bottom                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (Parm, OutParm, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_AddCharacterHalfHeight(class ACharacter* Character, const struct FVector& Bottom, class UObject* __WorldContext, struct FVector* Center)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_AddCharacterHalfHeight");

	UBPF_Util_C_BPF_AddCharacterHalfHeight_Params params;
	params.Character = Character;
	params.Bottom = Bottom;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Center != nullptr)
		*Center = params.Center;
}


// Function BPF_Util.BPF_Util_C.BPF_GetCharacterBottom
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Bottom                         (Parm, OutParm, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_GetCharacterBottom(class ACharacter* Character, class UObject* __WorldContext, struct FVector* Bottom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_GetCharacterBottom");

	UBPF_Util_C_BPF_GetCharacterBottom_Params params;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bottom != nullptr)
		*Bottom = params.Bottom;
}


// Function BPF_Util.BPF_Util_C.BPF_RotateVectorTo2DDamp
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 RotateMe                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 TowardsMe                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPF_Util_C::STATIC_BPF_RotateVectorTo2DDamp(const struct FVector& RotateMe, const struct FVector& TowardsMe, float DeltaTime, float Damp, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_RotateVectorTo2DDamp");

	UBPF_Util_C_BPF_RotateVectorTo2DDamp_Params params;
	params.RotateMe = RotateMe;
	params.TowardsMe = TowardsMe;
	params.DeltaTime = DeltaTime;
	params.Damp = Damp;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Util.BPF_Util_C.BPF_RemoveVectorZ
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 InVector                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutVector                      (Parm, OutParm, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_RemoveVectorZ(const struct FVector& InVector, class UObject* __WorldContext, struct FVector* OutVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_RemoveVectorZ");

	UBPF_Util_C_BPF_RemoveVectorZ_Params params;
	params.InVector = InVector;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVector != nullptr)
		*OutVector = params.OutVector;
}


// Function BPF_Util.BPF_Util_C.BPF_GetDeltaTimeAsRemainingFraction
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NowTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EndTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DefaultOnEnd                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delta                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_GetDeltaTimeAsRemainingFraction(float DeltaSeconds, float NowTime, float StartTime, float EndTime, float DefaultOnEnd, class UObject* __WorldContext, float* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_GetDeltaTimeAsRemainingFraction");

	UBPF_Util_C_BPF_GetDeltaTimeAsRemainingFraction_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.NowTime = NowTime;
	params.StartTime = StartTime;
	params.EndTime = EndTime;
	params.DefaultOnEnd = DefaultOnEnd;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delta != nullptr)
		*Delta = params.Delta;
}


// Function BPF_Util.BPF_Util_C.BPF_DirectionToWorldSpaceYaw
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WorldSpaceYaw                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_DirectionToWorldSpaceYaw(const struct FVector& Direction, class UObject* __WorldContext, float* WorldSpaceYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_DirectionToWorldSpaceYaw");

	UBPF_Util_C_BPF_DirectionToWorldSpaceYaw_Params params;
	params.Direction = Direction;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldSpaceYaw != nullptr)
		*WorldSpaceYaw = params.WorldSpaceYaw;
}


// Function BPF_Util.BPF_Util_C.BPF_LerpAngle
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ResultAngle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_LerpAngle(float A, float B, float Alpha, class UObject* __WorldContext, float* ResultAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_LerpAngle");

	UBPF_Util_C_BPF_LerpAngle_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultAngle != nullptr)
		*ResultAngle = params.ResultAngle;
}


// Function BPF_Util.BPF_Util_C.BPF_LerpAngleSigned
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AlphaWithSign                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ResultAngle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_LerpAngleSigned(float A, float B, float AlphaWithSign, class UObject* __WorldContext, float* ResultAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_LerpAngleSigned");

	UBPF_Util_C_BPF_LerpAngleSigned_Params params;
	params.A = A;
	params.B = B;
	params.AlphaWithSign = AlphaWithSign;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultAngle != nullptr)
		*ResultAngle = params.ResultAngle;
}


// Function BPF_Util.BPF_Util_C.BPF_AngleVector2DSignedDegrees
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleSignedDegrees             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_AngleVector2DSignedDegrees(const struct FVector& Target, const struct FVector& Source, class UObject* __WorldContext, float* AngleSignedDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_AngleVector2DSignedDegrees");

	UBPF_Util_C_BPF_AngleVector2DSignedDegrees_Params params;
	params.Target = Target;
	params.Source = Source;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AngleSignedDegrees != nullptr)
		*AngleSignedDegrees = params.AngleSignedDegrees;
}


// Function BPF_Util.BPF_Util_C.BPF_GetSplineAreaAtPointVector3D
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         PointVector                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBox                    OutBounds                      (Parm, OutParm, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_GetSplineAreaAtPointVector3D(const struct FVector& Offset, class UObject* __WorldContext, TArray<struct FVector>* PointVector, struct FBox* OutBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_GetSplineAreaAtPointVector3D");

	UBPF_Util_C_BPF_GetSplineAreaAtPointVector3D_Params params;
	params.Offset = Offset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PointVector != nullptr)
		*PointVector = params.PointVector;
	if (OutBounds != nullptr)
		*OutBounds = params.OutBounds;
}


// Function BPF_Util.BPF_Util_C.BPF_InterpolateAngleConstantNear
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ResultAngle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_InterpolateAngleConstantNear(float Source, float Target, float Delta, class UObject* __WorldContext, float* ResultAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_InterpolateAngleConstantNear");

	UBPF_Util_C_BPF_InterpolateAngleConstantNear_Params params;
	params.Source = Source;
	params.Target = Target;
	params.Delta = Delta;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultAngle != nullptr)
		*ResultAngle = params.ResultAngle;
}


// Function BPF_Util.BPF_Util_C.BPF_InterpolateAngleConstantSigned
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DirectionSignedDeg             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ResultAngle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_InterpolateAngleConstantSigned(float Source, float Target, float DirectionSignedDeg, class UObject* __WorldContext, float* ResultAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_InterpolateAngleConstantSigned");

	UBPF_Util_C_BPF_InterpolateAngleConstantSigned_Params params;
	params.Source = Source;
	params.Target = Target;
	params.DirectionSignedDeg = DirectionSignedDeg;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultAngle != nullptr)
		*ResultAngle = params.ResultAngle;
}


// Function BPF_Util.BPF_Util_C.BPF_ConvertAngleToSignDegrees
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          AngleDegrees                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Sign                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_ConvertAngleToSignDegrees(float AngleDegrees, float Sign, class UObject* __WorldContext, float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_ConvertAngleToSignDegrees");

	UBPF_Util_C_BPF_ConvertAngleToSignDegrees_Params params;
	params.AngleDegrees = AngleDegrees;
	params.Sign = Sign;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BPF_Util.BPF_Util_C.BPF_AngleDifferenceSignedDegrees
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Difference                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_AngleDifferenceSignedDegrees(float Target, float Source, class UObject* __WorldContext, float* Difference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_AngleDifferenceSignedDegrees");

	UBPF_Util_C_BPF_AngleDifferenceSignedDegrees_Params params;
	params.Target = Target;
	params.Source = Source;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difference != nullptr)
		*Difference = params.Difference;
}


// Function BPF_Util.BPF_Util_C.BPF_ResumeCamera
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_ResumeCamera(float BlendTime, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_ResumeCamera");

	UBPF_Util_C_BPF_ResumeCamera_Params params;
	params.BlendTime = BlendTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Util.BPF_Util_C.BPF_RInterpToQuaternion
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                Current                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UBPF_Util_C::STATIC_BPF_RInterpToQuaternion(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_RInterpToQuaternion");

	UBPF_Util_C_BPF_RInterpToQuaternion_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Util.BPF_Util_C.BPF_RInterpToQuaternionLinear
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                Current                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UBPF_Util_C::STATIC_BPF_RInterpToQuaternionLinear(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_RInterpToQuaternionLinear");

	UBPF_Util_C_BPF_RInterpToQuaternionLinear_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Util.BPF_Util_C.BPF_IsLineSightCheck
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOutputLog                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_IsLineSightCheck(class AActor* Actor, class AActor* TargetActor, float Angle, bool bOutputLog, class UObject* __WorldContext, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_IsLineSightCheck");

	UBPF_Util_C_BPF_IsLineSightCheck_Params params;
	params.Actor = Actor;
	params.TargetActor = TargetActor;
	params.Angle = Angle;
	params.bOutputLog = bOutputLog;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BPF_Util.BPF_Util_C.BPF_GetEyeLocationAndRightVector
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EyeLocation                    (Parm, OutParm, IsPlainOldData)
// struct FVector                 RightVector                    (Parm, OutParm, IsPlainOldData)
// bool                           bSuccessEyeLocation            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_GetEyeLocationAndRightVector(class AActor* Actor, class UObject* __WorldContext, struct FVector* EyeLocation, struct FVector* RightVector, bool* bSuccessEyeLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_GetEyeLocationAndRightVector");

	UBPF_Util_C_BPF_GetEyeLocationAndRightVector_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EyeLocation != nullptr)
		*EyeLocation = params.EyeLocation;
	if (RightVector != nullptr)
		*RightVector = params.RightVector;
	if (bSuccessEyeLocation != nullptr)
		*bSuccessEyeLocation = params.bSuccessEyeLocation;
}


// Function BPF_Util.BPF_Util_C.BPF_Vector2DLengthSquared
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 v1                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 v2                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_Vector2DLengthSquared(const struct FVector& v1, const struct FVector& v2, class UObject* __WorldContext, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_Vector2DLengthSquared");

	UBPF_Util_C_BPF_Vector2DLengthSquared_Params params;
	params.v1 = v1;
	params.v2 = v2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BPF_Util.BPF_Util_C.BPF_AddDeltaTime
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AddedValue                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_AddDeltaTime(class UObject* __WorldContext, float* Value, float* AddedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_AddDeltaTime");

	UBPF_Util_C_BPF_AddDeltaTime_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (AddedValue != nullptr)
		*AddedValue = params.AddedValue;
}


// Function BPF_Util.BPF_Util_C.BPF_GetSplineRate
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MoveDistance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_GetSplineRate(class AActor* Actor, float MoveDistance, class UObject* __WorldContext, float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_GetSplineRate");

	UBPF_Util_C_BPF_GetSplineRate_Params params;
	params.Actor = Actor;
	params.MoveDistance = MoveDistance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rate != nullptr)
		*Rate = params.Rate;
}


// Function BPF_Util.BPF_Util_C.BPF_GetSplineAreaAtSpline
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          x_max                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          x_min                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          y_max                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          y_min                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_GetSplineAreaAtSpline(class AActor* Actor, float Offset, class UObject* __WorldContext, float* x_max, float* x_min, float* y_max, float* y_min)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_GetSplineAreaAtSpline");

	UBPF_Util_C_BPF_GetSplineAreaAtSpline_Params params;
	params.Actor = Actor;
	params.Offset = Offset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (x_max != nullptr)
		*x_max = params.x_max;
	if (x_min != nullptr)
		*x_min = params.x_min;
	if (y_max != nullptr)
		*y_max = params.y_max;
	if (y_min != nullptr)
		*y_min = params.y_min;
}


// Function BPF_Util.BPF_Util_C.BPF_GetSplineAreaAtPointVector
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         PointVector                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          x_max                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          x_min                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          y_max                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          y_min                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_GetSplineAreaAtPointVector(float Offset, class UObject* __WorldContext, TArray<struct FVector>* PointVector, float* x_max, float* x_min, float* y_max, float* y_min)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_GetSplineAreaAtPointVector");

	UBPF_Util_C_BPF_GetSplineAreaAtPointVector_Params params;
	params.Offset = Offset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PointVector != nullptr)
		*PointVector = params.PointVector;
	if (x_max != nullptr)
		*x_max = params.x_max;
	if (x_min != nullptr)
		*x_min = params.x_min;
	if (y_max != nullptr)
		*y_max = params.y_max;
	if (y_min != nullptr)
		*y_min = params.y_min;
}


// Function BPF_Util.BPF_Util_C.BPF_Length1d
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          V0                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          v1                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_Length1d(float V0, float v1, class UObject* __WorldContext, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_Length1d");

	UBPF_Util_C_BPF_Length1d_Params params;
	params.V0 = V0;
	params.v1 = v1;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
}


// Function BPF_Util.BPF_Util_C.BPF_ReducedScaleChangeNoLimit
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          defult_len                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          change_over_len                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_ReducedScaleChangeNoLimit(float defult_len, float change_over_len, float Alpha, class UObject* __WorldContext, float* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_ReducedScaleChangeNoLimit");

	UBPF_Util_C_BPF_ReducedScaleChangeNoLimit_Params params;
	params.defult_len = defult_len;
	params.change_over_len = change_over_len;
	params.Alpha = Alpha;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BPF_Util.BPF_Util_C.BPF_InterVector
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 v1                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 v2                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 V0                             (Parm, OutParm, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_InterVector(const struct FVector& v1, const struct FVector& v2, float Rate, class UObject* __WorldContext, struct FVector* V0)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_InterVector");

	UBPF_Util_C_BPF_InterVector_Params params;
	params.v1 = v1;
	params.v2 = v2;
	params.Rate = Rate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (V0 != nullptr)
		*V0 = params.V0;
}


// Function BPF_Util.BPF_Util_C.BPF_QueryTagCharaName2Character
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AS3Character*            Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_QueryTagCharaName2Character(const struct FName& CharaName, class UObject* __WorldContext, class AS3Character** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_QueryTagCharaName2Character");

	UBPF_Util_C_BPF_QueryTagCharaName2Character_Params params;
	params.CharaName = CharaName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BPF_Util.BPF_Util_C.BPF_PadInput2SinTbl
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DstSinTbl                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_PadInput2SinTbl(float Input, class UObject* __WorldContext, float* DstSinTbl)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_PadInput2SinTbl");

	UBPF_Util_C_BPF_PadInput2SinTbl_Params params;
	params.Input = Input;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DstSinTbl != nullptr)
		*DstSinTbl = params.DstSinTbl;
}


// Function BPF_Util.BPF_Util_C.BPF_LineWrongSideOut2d
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PosX                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosY                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Vx0                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Vy0                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Vx1                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Vy1                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DstFlag                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_LineWrongSideOut2d(float PosX, float PosY, float Vx0, float Vy0, float Vx1, float Vy1, class UObject* __WorldContext, bool* DstFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_LineWrongSideOut2d");

	UBPF_Util_C_BPF_LineWrongSideOut2d_Params params;
	params.PosX = PosX;
	params.PosY = PosY;
	params.Vx0 = Vx0;
	params.Vy0 = Vy0;
	params.Vx1 = Vx1;
	params.Vy1 = Vy1;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DstFlag != nullptr)
		*DstFlag = params.DstFlag;
}


// Function BPF_Util.BPF_Util_C.BPF_AngleVector
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 v1                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 v2                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RetRot                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_AngleVector(const struct FVector& v1, const struct FVector& v2, class UObject* __WorldContext, float* RetRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_AngleVector");

	UBPF_Util_C_BPF_AngleVector_Params params;
	params.v1 = v1;
	params.v2 = v2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetRot != nullptr)
		*RetRot = params.RetRot;
}


// Function BPF_Util.BPF_Util_C.BPF_TriangleNormal
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 V0                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 v1                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 v2                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_TriangleNormal(const struct FVector& V0, const struct FVector& v1, const struct FVector& v2, class UObject* __WorldContext, struct FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_TriangleNormal");

	UBPF_Util_C_BPF_TriangleNormal_Params params;
	params.V0 = V0;
	params.v1 = v1;
	params.v2 = v2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Normal != nullptr)
		*Normal = params.Normal;
}


// Function BPF_Util.BPF_Util_C.BPF_LineDirection
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 V0                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 v1                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Dst                            (Parm, OutParm, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_LineDirection(const struct FVector& V0, const struct FVector& v1, class UObject* __WorldContext, struct FVector* Dst)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_LineDirection");

	UBPF_Util_C_BPF_LineDirection_Params params;
	params.V0 = V0;
	params.v1 = v1;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dst != nullptr)
		*Dst = params.Dst;
}


// Function BPF_Util.BPF_Util_C.BPF_DeltaTimeScale
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Dst                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_DeltaTimeScale(float Scale, class UObject* __WorldContext, float* Dst)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_DeltaTimeScale");

	UBPF_Util_C_BPF_DeltaTimeScale_Params params;
	params.Scale = Scale;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dst != nullptr)
		*Dst = params.Dst;
}


// Function BPF_Util.BPF_Util_C.stringCompare
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 stringA                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 stringB                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           i                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_stringCompare(const struct FString& stringA, const struct FString& stringB, bool i, class UObject* __WorldContext, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.stringCompare");

	UBPF_Util_C_stringCompare_Params params;
	params.stringA = stringA;
	params.stringB = stringB;
	params.i = i;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPF_Util.BPF_Util_C.BPF_TraceIdast1dDeltaTime
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          V                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TergetV                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Dst                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_TraceIdast1dDeltaTime(float V, float TergetV, float Speed, class UObject* __WorldContext, float* Dst)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_TraceIdast1dDeltaTime");

	UBPF_Util_C_BPF_TraceIdast1dDeltaTime_Params params;
	params.V = V;
	params.TergetV = TergetV;
	params.Speed = Speed;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dst != nullptr)
		*Dst = params.Dst;
}


// Function BPF_Util.BPF_Util_C.toString(withDigit)
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            digit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 digitFixString                 (Parm, OutParm, ZeroConstructor)

void UBPF_Util_C::STATIC_toString_withDigit_(int Value, int digit, class UObject* __WorldContext, struct FString* digitFixString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.toString(withDigit)");

	UBPF_Util_C_toString_withDigit__Params params;
	params.Value = Value;
	params.digit = digit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (digitFixString != nullptr)
		*digitFixString = params.digitFixString;
}


// Function BPF_Util.BPF_Util_C.BPF_FloatEqual
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DstFlag                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Util_C::STATIC_BPF_FloatEqual(float A, float B, class UObject* __WorldContext, bool* DstFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Util.BPF_Util_C.BPF_FloatEqual");

	UBPF_Util_C_BPF_FloatEqual_Params params;
	params.A = A;
	params.B = B;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DstFlag != nullptr)
		*DstFlag = params.DstFlag;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
