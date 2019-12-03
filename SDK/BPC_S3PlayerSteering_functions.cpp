
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

// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.ZeroedOutInput
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Protected, Delegate, NetServer, Const)
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
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetClient, Const)

void UBPC_S3PlayerSteering_C::STATIC_Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.Clear");

	UBPC_S3PlayerSteering_C_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.CalcNPCSteer
// (Exec, Event, NetResponse, MulticastDelegate, Public, Protected, NetClient, Const)
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
// (Exec, Native, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UCurveFloat*             Curve                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InputValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutputValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerSteering_C::STATIC_SampleFloatCurveWithLinearDefault(class UCurveFloat* Curve, float InputValue, float* OutputValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.SampleFloatCurveWithLinearDefault");

	UBPC_S3PlayerSteering_C_SampleFloatCurveWithLinearDefault_Params params;
	params.Curve = Curve;
	params.InputValue = InputValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputValue != nullptr)
		*OutputValue = params.OutputValue;
}


// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.GetNPCAngleN
// (Exec, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, NetClient, Const)
// Parameters:
// struct FVector                 NPCLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 PlayerLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          PlayerNPCDistance              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NPCRadius                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InputAngleWS                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerSteering_C::STATIC_GetNPCAngleN(const struct FVector& NPCLocation, const struct FVector& PlayerLocation, float PlayerNPCDistance, float NPCRadius, float InputAngleWS, float* Angle)
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
// (Net, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetClient, Const)

void UBPC_S3PlayerSteering_C::ClearHints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.ClearHints");

	UBPC_S3PlayerSteering_C_ClearHints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.Update
// (NetReliable, Exec, Event, Static, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 InputDirWS                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ActiveInput                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InputMagnitude                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutStrength                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutDirection                   (Parm, OutParm, IsPlainOldData)
// float                          OutMagnitude                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerSteering_C::STATIC_Update(const struct FVector& InputDirWS, bool ActiveInput, float InputMagnitude, float* OutStrength, struct FVector* OutDirection, float* OutMagnitude)
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
// (NetRequest, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPC_S3PlayerSteering_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.ReceiveBeginPlay");

	UBPC_S3PlayerSteering_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.ExecuteUbergraph_BPC_S3PlayerSteering
// (NetRequest, Exec, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerSteering_C::STATIC_ExecuteUbergraph_BPC_S3PlayerSteering(int EntryPoint)
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
