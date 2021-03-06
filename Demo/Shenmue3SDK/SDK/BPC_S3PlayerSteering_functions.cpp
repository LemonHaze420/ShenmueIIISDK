
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.ZeroedOutInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_S3PlayerSteering_C::ZeroedOutInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.ZeroedOutInput");

	UBPC_S3PlayerSteering_C_ZeroedOutInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_S3PlayerSteering_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.Clear");

	UBPC_S3PlayerSteering_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.CalcNPCSteer
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3Character*            NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PlayerLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 InputDirection                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          OutStrength                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutPriority                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutDirection                   (Parm, OutParm, IsPlainOldData)

void UBPC_S3PlayerSteering_C::CalcNPCSteer(class AS3Character* NPC, const struct FVector& PlayerLocation, const struct FVector& InputDirection, float* OutStrength, float* OutPriority, struct FVector* OutDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.CalcNPCSteer");

	UBPC_S3PlayerSteering_C_CalcNPCSteer_Params params;
	params.NPC = NPC;
	params.PlayerLocation = PlayerLocation;
	params.InputDirection = InputDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStrength != nullptr)
		*OutStrength = params.OutStrength;
	if (OutPriority != nullptr)
		*OutPriority = params.OutPriority;
	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;
}


// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.SampleFloatCurveWithLinearDefault
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCurveFloat*             Curve                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InputValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutputValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerSteering_C::SampleFloatCurveWithLinearDefault(class UCurveFloat* Curve, float InputValue, float* OutputValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.SampleFloatCurveWithLinearDefault");

	UBPC_S3PlayerSteering_C_SampleFloatCurveWithLinearDefault_Params params;
	params.Curve = Curve;
	params.InputValue = InputValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputValue != nullptr)
		*OutputValue = params.OutputValue;
}


// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.GetNPCAngleN
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NPCLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 PlayerLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          PlayerNPCDistance              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NPCRadius                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InputAngleWS                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerSteering_C::GetNPCAngleN(const struct FVector& NPCLocation, const struct FVector& PlayerLocation, float PlayerNPCDistance, float NPCRadius, float InputAngleWS, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.GetNPCAngleN");

	UBPC_S3PlayerSteering_C_GetNPCAngleN_Params params;
	params.NPCLocation = NPCLocation;
	params.PlayerLocation = PlayerLocation;
	params.PlayerNPCDistance = PlayerNPCDistance;
	params.NPCRadius = NPCRadius;
	params.InputAngleWS = InputAngleWS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.ClearHints
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_S3PlayerSteering_C::ClearHints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.ClearHints");

	UBPC_S3PlayerSteering_C_ClearHints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.Update
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InputDirWS                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ActiveInput                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InputMagnitude                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutStrength                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutDirection                   (Parm, OutParm, IsPlainOldData)
// float                          OutMagnitude                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerSteering_C::Update(const struct FVector& InputDirWS, bool ActiveInput, float InputMagnitude, float* OutStrength, struct FVector* OutDirection, float* OutMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.Update");

	UBPC_S3PlayerSteering_C_Update_Params params;
	params.InputDirWS = InputDirWS;
	params.ActiveInput = ActiveInput;
	params.InputMagnitude = InputMagnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStrength != nullptr)
		*OutStrength = params.OutStrength;
	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;
	if (OutMagnitude != nullptr)
		*OutMagnitude = params.OutMagnitude;
}


// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_S3PlayerSteering_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.ReceiveBeginPlay");

	UBPC_S3PlayerSteering_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.ExecuteUbergraph_BPC_S3PlayerSteering
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerSteering_C::ExecuteUbergraph_BPC_S3PlayerSteering(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.ExecuteUbergraph_BPC_S3PlayerSteering");

	UBPC_S3PlayerSteering_C_ExecuteUbergraph_BPC_S3PlayerSteering_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
