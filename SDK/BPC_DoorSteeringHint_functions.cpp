
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

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.InitForStrength
// (Net, NetReliable, Native, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_DoorGuideStrength> Str                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::InitForStrength(TEnumAsByte<EN_DoorGuideStrength> Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.InitForStrength");

	UBPC_DoorSteeringHint_C_InitForStrength_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetAlternateWeightBasedOnDir
// (NetReliable, NetRequest, Event, NetResponse, Static, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Scaler                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::STATIC_GetAlternateWeightBasedOnDir(const struct FVector2D& Location, const struct FVector2D& Direction, float* Scaler)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetAlternateWeightBasedOnDir");

	UBPC_DoorSteeringHint_C_GetAlternateWeightBasedOnDir_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scaler != nullptr)
		*Scaler = params.Scaler;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CheckLOS
// (Net, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 From                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           OutLOS                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::STATIC_CheckLOS(const struct FVector& From, bool* OutLOS)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CheckLOS");

	UBPC_DoorSteeringHint_C_CheckLOS_Params params;
	params.From = From;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLOS != nullptr)
		*OutLOS = params.OutLOS;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalcHintSizeInDir
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 InSideDirection                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 InBackDirection                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InMaxDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InTestBackDistance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InTestIntervalDistance         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutDistance                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::CalcHintSizeInDir(const struct FVector& InLocation, const struct FVector& InSideDirection, const struct FVector& InBackDirection, float InMaxDistance, float InTestBackDistance, float InTestIntervalDistance, float* OutDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalcHintSizeInDir");

	UBPC_DoorSteeringHint_C_CalcHintSizeInDir_Params params;
	params.InLocation = InLocation;
	params.InSideDirection = InSideDirection;
	params.InBackDirection = InBackDirection;
	params.InMaxDistance = InMaxDistance;
	params.InTestBackDistance = InTestBackDistance;
	params.InTestIntervalDistance = InTestIntervalDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDistance != nullptr)
		*OutDistance = params.OutDistance;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.AutoConfigureSteeringHint
// (Net, NetReliable, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)

void UBPC_DoorSteeringHint_C::AutoConfigureSteeringHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.AutoConfigureSteeringHint");

	UBPC_DoorSteeringHint_C_AutoConfigureSteeringHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.InitAllPoints
// (Net, Static, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UBPC_DoorSteeringHint_C::STATIC_InitAllPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.InitAllPoints");

	UBPC_DoorSteeringHint_C_InitAllPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CheckInsideBoundingBox
// (NetRequest, Exec, Event, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bIsInside                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::STATIC_CheckInsideBoundingBox(const struct FVector& Location, bool* bIsInside)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CheckInsideBoundingBox");

	UBPC_DoorSteeringHint_C_CheckInsideBoundingBox_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsInside != nullptr)
		*bIsInside = params.bIsInside;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.InitBoundingBox
// (Net, NetReliable, Exec, Native, Event, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBPC_DoorSteeringHint_C::STATIC_InitBoundingBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.InitBoundingBox");

	UBPC_DoorSteeringHint_C_InitBoundingBox_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalculateSteer
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 InputDirection                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 OutDirection                   (Parm, OutParm, IsPlainOldData)
// float                          Strength                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::STATIC_CalculateSteer(const struct FVector& Location, const struct FVector& InputDirection, struct FVector* OutDirection, float* Strength, float* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalculateSteer");

	UBPC_DoorSteeringHint_C_CalculateSteer_Params params;
	params.Location = Location;
	params.InputDirection = InputDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;
	if (Strength != nullptr)
		*Strength = params.Strength;
	if (Priority != nullptr)
		*Priority = params.Priority;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalcSteeringTarget
// (Public, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Target                         (Parm, OutParm, IsPlainOldData)

void UBPC_DoorSteeringHint_C::CalcSteeringTarget(const struct FVector2D& Location, struct FVector2D* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalcSteeringTarget");

	UBPC_DoorSteeringHint_C_CalcSteeringTarget_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalcDistanceDoorframeToPoint
// (NetReliable, Event, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::STATIC_CalcDistanceDoorframeToPoint(const struct FVector2D& Point, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalcDistanceDoorframeToPoint");

	UBPC_DoorSteeringHint_C_CalcDistanceDoorframeToPoint_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.DistancePointToLineSegment
// (Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               P                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               LS2                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               LS1                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::DistancePointToLineSegment(const struct FVector2D& P, const struct FVector2D& LS2, const struct FVector2D& LS1, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.DistancePointToLineSegment");

	UBPC_DoorSteeringHint_C_DistancePointToLineSegment_Params params;
	params.P = P;
	params.LS2 = LS2;
	params.LS1 = LS1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.InAngleRangeCC
// (Net, NetReliable, Exec, NetResponse, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Range                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bIsIn                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::InAngleRangeCC(float Angle, const struct FVector2D& Range, bool* bIsIn, float* Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.InAngleRangeCC");

	UBPC_DoorSteeringHint_C_InAngleRangeCC_Params params;
	params.Angle = Angle;
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsIn != nullptr)
		*bIsIn = params.bIsIn;
	if (Weight != nullptr)
		*Weight = params.Weight;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetSteerAmountAngleMethod
// (Exec, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Steer                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::STATIC_GetSteerAmountAngleMethod(const struct FVector2D& Location, const struct FVector2D& Direction, float* Steer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetSteerAmountAngleMethod");

	UBPC_DoorSteeringHint_C_GetSteerAmountAngleMethod_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Steer != nullptr)
		*Steer = params.Steer;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetWorldSpaceAngle
// (Net, NetRequest, Exec, Native, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          World                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::GetWorldSpaceAngle(float Component, float* World)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetWorldSpaceAngle");

	UBPC_DoorSteeringHint_C_GetWorldSpaceAngle_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (World != nullptr)
		*World = params.World;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetHeadingAngleFromDirection
// (Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::STATIC_GetHeadingAngleFromDirection(const struct FVector2D& Direction, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetHeadingAngleFromDirection");

	UBPC_DoorSteeringHint_C_GetHeadingAngleFromDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetComponentSpaceAngle
// (NetReliable, Exec, Native, Event, MulticastDelegate, Private, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          World                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Component                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::GetComponentSpaceAngle(float World, float* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetComponentSpaceAngle");

	UBPC_DoorSteeringHint_C_GetComponentSpaceAngle_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetHeadingAngleFromLocations
// (Exec, Native, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               FromLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               ToLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Degrees                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::GetHeadingAngleFromLocations(const struct FVector2D& FromLocation, const struct FVector2D& ToLocation, float* Degrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetHeadingAngleFromLocations");

	UBPC_DoorSteeringHint_C_GetHeadingAngleFromLocations_Params params;
	params.FromLocation = FromLocation;
	params.ToLocation = ToLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Degrees != nullptr)
		*Degrees = params.Degrees;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalculateAngleRange
// (Net, NetRequest, NetResponse, Static, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               AngleRangeCW                   (Parm, OutParm, IsPlainOldData)

void UBPC_DoorSteeringHint_C::STATIC_CalculateAngleRange(const struct FVector2D& Location, struct FVector2D* AngleRangeCW)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalculateAngleRange");

	UBPC_DoorSteeringHint_C_CalculateAngleRange_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AngleRangeCW != nullptr)
		*AngleRangeCW = params.AngleRangeCW;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.IntersectsSegment
// (Net, Native, Event, NetResponse, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               A                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               B                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bIntersects                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::IntersectsSegment(const struct FVector2D& Location, const struct FVector2D& Direction, const struct FVector2D& A, const struct FVector2D& B, bool* bIntersects)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.IntersectsSegment");

	UBPC_DoorSteeringHint_C_IntersectsSegment_Params params;
	params.Location = Location;
	params.Direction = Direction;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIntersects != nullptr)
		*bIntersects = params.bIntersects;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalcScalerBasedOnDistance
// (Static, NetMulticast, Public, Private, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scaler                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::STATIC_CalcScalerBasedOnDistance(float Distance, float* Scaler)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalcScalerBasedOnDistance");

	UBPC_DoorSteeringHint_C_CalcScalerBasedOnDistance_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scaler != nullptr)
		*Scaler = params.Scaler;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.IsOnRelevantSide
// (Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bRelevantSide                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::IsOnRelevantSide(const struct FVector2D& Location, bool* bRelevantSide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.IsOnRelevantSide");

	UBPC_DoorSteeringHint_C_IsOnRelevantSide_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRelevantSide != nullptr)
		*bRelevantSide = params.bRelevantSide;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.ReceiveBeginPlay
// (Net, NetResponse, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void UBPC_DoorSteeringHint_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.ReceiveBeginPlay");

	UBPC_DoorSteeringHint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.ReceiveTick
// (NetReliable, Event, NetResponse, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.ReceiveTick");

	UBPC_DoorSteeringHint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.ExecuteUbergraph_BPC_DoorSteeringHint
// (Native, Event, NetResponse, NetMulticast, Public, Private, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorSteeringHint_C::ExecuteUbergraph_BPC_DoorSteeringHint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.ExecuteUbergraph_BPC_DoorSteeringHint");

	UBPC_DoorSteeringHint_C_ExecuteUbergraph_BPC_DoorSteeringHint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
