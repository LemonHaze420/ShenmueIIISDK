
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

// Function PlayerSplineNavi.PlayerSplineNavi_C.FindClosestForwardDirection
// (Net, NetReliable, Native, MulticastDelegate, Public, HasOutParms, Const)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 OutDirToSpline                 (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutDirectionOFSpline           (Parm, OutParm, IsPlainOldData)
// float                          OutKey                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           OutSuccess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerSplineNavi_C::FindClosestForwardDirection(const struct FVector& InLocation, struct FVector* OutDirToSpline, struct FVector* OutDirectionOFSpline, float* OutKey, bool* OutSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSplineNavi.PlayerSplineNavi_C.FindClosestForwardDirection");

	APlayerSplineNavi_C_FindClosestForwardDirection_Params params;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDirToSpline != nullptr)
		*OutDirToSpline = params.OutDirToSpline;
	if (OutDirectionOFSpline != nullptr)
		*OutDirectionOFSpline = params.OutDirectionOFSpline;
	if (OutKey != nullptr)
		*OutKey = params.OutKey;
	if (OutSuccess != nullptr)
		*OutSuccess = params.OutSuccess;
}


// Function PlayerSplineNavi.PlayerSplineNavi_C.CheckLOS
// (NetReliable, Event, NetResponse, Static, NetMulticast, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 InSplineLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 InPlayerLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           OutIsClear                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerSplineNavi_C::STATIC_CheckLOS(const struct FVector& InSplineLocation, const struct FVector& InPlayerLocation, bool* OutIsClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSplineNavi.PlayerSplineNavi_C.CheckLOS");

	APlayerSplineNavi_C_CheckLOS_Params params;
	params.InSplineLocation = InSplineLocation;
	params.InPlayerLocation = InPlayerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsClear != nullptr)
		*OutIsClear = params.OutIsClear;
}


// Function PlayerSplineNavi.PlayerSplineNavi_C.RailGetClosestDirection
// (Net, NetReliable, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 InDirection                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            InPreviousDirection            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleHysteresis                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutDirection                   (Parm, OutParm, IsPlainOldData)
// float                          OutAngleAbs                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutRailDir                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerSplineNavi_C::STATIC_RailGetClosestDirection(const struct FVector& InLocation, const struct FVector& InDirection, int InPreviousDirection, float AngleHysteresis, struct FVector* OutDirection, float* OutAngleAbs, int* OutRailDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSplineNavi.PlayerSplineNavi_C.RailGetClosestDirection");

	APlayerSplineNavi_C_RailGetClosestDirection_Params params;
	params.InLocation = InLocation;
	params.InDirection = InDirection;
	params.InPreviousDirection = InPreviousDirection;
	params.AngleHysteresis = AngleHysteresis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;
	if (OutAngleAbs != nullptr)
		*OutAngleAbs = params.OutAngleAbs;
	if (OutRailDir != nullptr)
		*OutRailDir = params.OutRailDir;
}


// Function PlayerSplineNavi.PlayerSplineNavi_C.FindSplineDistanceAndForward
// (NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, IsPlainOldData)
// float                          DistanceAlongSpline            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerSplineNavi_C::FindSplineDistanceAndForward(const struct FVector& WorldLocation, struct FVector* Direction, float* DistanceAlongSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSplineNavi.PlayerSplineNavi_C.FindSplineDistanceAndForward");

	APlayerSplineNavi_C_FindSplineDistanceAndForward_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
	if (DistanceAlongSpline != nullptr)
		*DistanceAlongSpline = params.DistanceAlongSpline;
}


// Function PlayerSplineNavi.PlayerSplineNavi_C.GetWidth
// (Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerSplineNavi_C::GetWidth(const struct FVector& Point, float* Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSplineNavi.PlayerSplineNavi_C.GetWidth");

	APlayerSplineNavi_C_GetWidth_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
}


// Function PlayerSplineNavi.PlayerSplineNavi_C.CalculateStrength
// (Net, Static, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 InputDir                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 TargetDir                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          NoInputN                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceFollowDebug              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Strength                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerSplineNavi_C::STATIC_CalculateStrength(const struct FVector& Location, const struct FVector& InputDir, const struct FVector& TargetLocation, const struct FVector& TargetDir, float NoInputN, float Distance, bool bForceFollowDebug, float* Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSplineNavi.PlayerSplineNavi_C.CalculateStrength");

	APlayerSplineNavi_C_CalculateStrength_Params params;
	params.Location = Location;
	params.InputDir = InputDir;
	params.TargetLocation = TargetLocation;
	params.TargetDir = TargetDir;
	params.NoInputN = NoInputN;
	params.Distance = Distance;
	params.bForceFollowDebug = bForceFollowDebug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Strength != nullptr)
		*Strength = params.Strength;
}


// Function PlayerSplineNavi.PlayerSplineNavi_C.CalculateSteer
// (Net, NetMulticast, MulticastDelegate, NetServer, HasOutParms, Const)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 InputDir                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          NoInputN                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDebugFollow                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutDir                         (Parm, OutParm, IsPlainOldData)
// float                          Strength                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerSplineNavi_C::CalculateSteer(const struct FVector& Location, const struct FVector& InputDir, float NoInputN, bool bDebugFollow, struct FVector* OutDir, float* Strength, float* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSplineNavi.PlayerSplineNavi_C.CalculateSteer");

	APlayerSplineNavi_C_CalculateSteer_Params params;
	params.Location = Location;
	params.InputDir = InputDir;
	params.NoInputN = NoInputN;
	params.bDebugFollow = bDebugFollow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDir != nullptr)
		*OutDir = params.OutDir;
	if (Strength != nullptr)
		*Strength = params.Strength;
	if (Priority != nullptr)
		*Priority = params.Priority;
}


// Function PlayerSplineNavi.PlayerSplineNavi_C.SplineInit
// (Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayer_SplineMoveActor_C* SplineMoveActorRef             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerSplineNavi_C::STATIC_SplineInit(class APlayer_SplineMoveActor_C* SplineMoveActorRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSplineNavi.PlayerSplineNavi_C.SplineInit");

	APlayerSplineNavi_C_SplineInit_Params params;
	params.SplineMoveActorRef = SplineMoveActorRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSplineNavi.PlayerSplineNavi_C.UserConstructionScript
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void APlayerSplineNavi_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSplineNavi.PlayerSplineNavi_C.UserConstructionScript");

	APlayerSplineNavi_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
