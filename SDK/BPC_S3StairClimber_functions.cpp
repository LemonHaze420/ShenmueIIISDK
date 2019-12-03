
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

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.IsHeightFixEnabled
// (Net, Native, Event, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           bEnabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3StairClimber_C::IsHeightFixEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.IsHeightFixEnabled");

	UBPC_S3StairClimber_C_IsHeightFixEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnabled != nullptr)
		*bEnabled = params.bEnabled;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.MatchHorizontal
// (NetReliable, Exec, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 TargetRelativeY                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPC_S3StairClimber_C::STATIC_MatchHorizontal(const struct FVector& InLocation, const struct FVector& TargetRelativeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.MatchHorizontal");

	UBPC_S3StairClimber_C_MatchHorizontal_Params params;
	params.InLocation = InLocation;
	params.TargetRelativeY = TargetRelativeY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.ValidateStairCollisionWithTrace
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// struct FVector                 TestLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class ABP_S3StaircaseBase_C*   Stair                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_S3StairClimber_C::STATIC_ValidateStairCollisionWithTrace(const struct FVector& TestLocation, class ABP_S3StaircaseBase_C* Stair)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.ValidateStairCollisionWithTrace");

	UBPC_S3StairClimber_C_ValidateStairCollisionWithTrace_Params params;
	params.TestLocation = TestLocation;
	params.Stair = Stair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.SetMainStairs
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// class ABP_S3StaircaseBase_C*   StairsIn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3StairClimber_C::STATIC_SetMainStairs(class ABP_S3StaircaseBase_C* StairsIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.SetMainStairs");

	UBPC_S3StairClimber_C_SetMainStairs_Params params;
	params.StairsIn = StairsIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.IgnoreStairCollision
// (Net, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           bShouldIgnore                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3StaircaseBase_C*   Stair                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3StairClimber_C::IgnoreStairCollision(bool bShouldIgnore, class ABP_S3StaircaseBase_C* Stair)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.IgnoreStairCollision");

	UBPC_S3StairClimber_C_IgnoreStairCollision_Params params;
	params.bShouldIgnore = bShouldIgnore;
	params.Stair = Stair;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.PostUpdateHeightFix
// (Net, Exec, Native, Event, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UBPC_S3StairClimber_C::PostUpdateHeightFix()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.PostUpdateHeightFix");

	UBPC_S3StairClimber_C_PostUpdateHeightFix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.BottomToCenterLocation
// (Net, Exec, NetResponse, NetMulticast, Delegate, DLLImport, Const)
// Parameters:
// struct FVector                 Bottom                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Center                         (Parm, OutParm, IsPlainOldData)

void UBPC_S3StairClimber_C::BottomToCenterLocation(const struct FVector& Bottom, struct FVector* Center)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.BottomToCenterLocation");

	UBPC_S3StairClimber_C_BottomToCenterLocation_Params params;
	params.Bottom = Bottom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Center != nullptr)
		*Center = params.Center;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.TrySelectAndUpdateStairs
// (NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Private, Protected, DLLImport, Const)
// Parameters:
// class ABP_S3StaircaseBase_C*   InStairs                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3StairClimber_C::TrySelectAndUpdateStairs(class ABP_S3StaircaseBase_C* InStairs, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.TrySelectAndUpdateStairs");

	UBPC_S3StairClimber_C_TrySelectAndUpdateStairs_Params params;
	params.InStairs = InStairs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.CalculateMovePosition
// (Net, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// struct FVector                 PrevLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          PrevAnimCycle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NextAnimCycle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)

void UBPC_S3StairClimber_C::CalculateMovePosition(const struct FVector& PrevLocation, float PrevAnimCycle, float NextAnimCycle, struct FVector* OutLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.CalculateMovePosition");

	UBPC_S3StairClimber_C_CalculateMovePosition_Params params;
	params.PrevLocation = PrevLocation;
	params.PrevAnimCycle = PrevAnimCycle;
	params.NextAnimCycle = NextAnimCycle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.CalculateAngleData
// (Net, NetReliable, Native, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// class ABP_S3StaircaseBase_C*   Stairs                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutRawVeerAngle                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDirectionalVeerAngle        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutStrideScale                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           OutDirUp                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3StairClimber_C::CalculateAngleData(class ABP_S3StaircaseBase_C* Stairs, float* OutRawVeerAngle, float* OutDirectionalVeerAngle, float* OutStrideScale, bool* OutDirUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.CalculateAngleData");

	UBPC_S3StairClimber_C_CalculateAngleData_Params params;
	params.Stairs = Stairs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRawVeerAngle != nullptr)
		*OutRawVeerAngle = params.OutRawVeerAngle;
	if (OutDirectionalVeerAngle != nullptr)
		*OutDirectionalVeerAngle = params.OutDirectionalVeerAngle;
	if (OutStrideScale != nullptr)
		*OutStrideScale = params.OutStrideScale;
	if (OutDirUp != nullptr)
		*OutDirUp = params.OutDirUp;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.CheckOnStairs
// (NetReliable, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// class ABP_S3StaircaseBase_C*   Stairs                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StrideScale                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AddHysteresis                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_S3StairClimber_C::CheckOnStairs(class ABP_S3StaircaseBase_C* Stairs, float StrideScale, bool AddHysteresis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.CheckOnStairs");

	UBPC_S3StairClimber_C_CheckOnStairs_Params params;
	params.Stairs = Stairs;
	params.StrideScale = StrideScale;
	params.AddHysteresis = AddHysteresis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.GetArcTOA
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, DLLImport, Const)
// Parameters:
// struct FVector2D               End                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Start                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          OutCalc                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3StairClimber_C::GetArcTOA(const struct FVector2D& End, const struct FVector2D& Start, float* OutCalc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.GetArcTOA");

	UBPC_S3StairClimber_C_GetArcTOA_Params params;
	params.End = End;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCalc != nullptr)
		*OutCalc = params.OutCalc;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.GetWeightedAngleToCorner
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           IsLeftSide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3StairClimber_C::STATIC_GetWeightedAngleToCorner(bool IsLeftSide, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.GetWeightedAngleToCorner");

	UBPC_S3StairClimber_C_GetWeightedAngleToCorner_Params params;
	params.IsLeftSide = IsLeftSide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.SetInteractingStairs
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// class ABP_S3StaircaseBase_C*   Stair                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3StairClimber_C::STATIC_SetInteractingStairs(class ABP_S3StaircaseBase_C* Stair)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.SetInteractingStairs");

	UBPC_S3StairClimber_C_SetInteractingStairs_Params params;
	params.Stair = Stair;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.MatchAnimCycle
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// float                          InAnimPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InStairPosition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUp                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutAnimPosition                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3StairClimber_C::MatchAnimCycle(float InAnimPosition, float InStairPosition, bool bUp, float* OutAnimPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.MatchAnimCycle");

	UBPC_S3StairClimber_C_MatchAnimCycle_Params params;
	params.InAnimPosition = InAnimPosition;
	params.InStairPosition = InStairPosition;
	params.bUp = bUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAnimPosition != nullptr)
		*OutAnimPosition = params.OutAnimPosition;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.ClampDirection
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Private, Protected, DLLImport, Const)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Clamped                        (Parm, OutParm, IsPlainOldData)

void UBPC_S3StairClimber_C::ClampDirection(const struct FVector& Direction, struct FVector* Clamped)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.ClampDirection");

	UBPC_S3StairClimber_C_ClampDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Clamped != nullptr)
		*Clamped = params.Clamped;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.Update
// (NetReliable, NetResponse, NetMulticast, Public, Private, NetServer, NetClient, Const)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3StairClimber_C::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.Update");

	UBPC_S3StairClimber_C_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UBPC_S3StairClimber_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.ReceiveBeginPlay");

	UBPC_S3StairClimber_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.ReceiveTick
// (NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3StairClimber_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.ReceiveTick");

	UBPC_S3StairClimber_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.OnBeginOverlapStairs
// (Net, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// class ABP_S3StaircaseBase_C*   Staircase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3StairClimber_C::STATIC_OnBeginOverlapStairs(class ABP_S3StaircaseBase_C* Staircase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.OnBeginOverlapStairs");

	UBPC_S3StairClimber_C_OnBeginOverlapStairs_Params params;
	params.Staircase = Staircase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.OnEndOverlapStairs
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// class ABP_S3StaircaseBase_C*   Staircase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3StairClimber_C::STATIC_OnEndOverlapStairs(class ABP_S3StaircaseBase_C* Staircase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.OnEndOverlapStairs");

	UBPC_S3StairClimber_C_OnEndOverlapStairs_Params params;
	params.Staircase = Staircase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.ExecuteUbergraph_BPC_S3StairClimber
// (Net, NetReliable, NetResponse, NetMulticast, Public, Protected, Delegate, HasDefaults, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3StairClimber_C::ExecuteUbergraph_BPC_S3StairClimber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.ExecuteUbergraph_BPC_S3StairClimber");

	UBPC_S3StairClimber_C_ExecuteUbergraph_BPC_S3StairClimber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.OnEndStairUse__DelegateSignature
// (NetReliable, Native, Event, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UBPC_S3StairClimber_C::OnEndStairUse__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.OnEndStairUse__DelegateSignature");

	UBPC_S3StairClimber_C_OnEndStairUse__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3StairClimber.BPC_S3StairClimber_C.OnStartStairUse__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Event, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_S3StairClimber_C::OnStartStairUse__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3StairClimber.BPC_S3StairClimber_C.OnStartStairUse__DelegateSignature");

	UBPC_S3StairClimber_C_OnStartStairUse__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
