
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

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetSunAndMoonMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::SetSunAndMoonMovement(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetSunAndMoonMovement");

	AUltra_Dynamic_Sky_BP_C_SetSunAndMoonMovement_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetCurrentUDMMat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::GetCurrentUDMMat(class UMaterialInstanceDynamic** newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetCurrentUDMMat");

	AUltra_Dynamic_Sky_BP_C_GetCurrentUDMMat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ForceMoonPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::ForceMoonPosition(float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ForceMoonPosition");

	AUltra_Dynamic_Sky_BP_C_ForceMoonPosition_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ForceUpdateSkylight
// (Public, BlueprintCallable, BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::ForceUpdateSkylight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ForceUpdateSkylight");

	AUltra_Dynamic_Sky_BP_C_ForceUpdateSkylight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.IsCloudy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Cloudy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::IsCloudy(bool* Cloudy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.IsCloudy");

	AUltra_Dynamic_Sky_BP_C_IsCloudy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cloudy != nullptr)
		*Cloudy = params.Cloudy;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ResetCloudSimulateTime
// (Public, BlueprintCallable, BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::ResetCloudSimulateTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ResetCloudSimulateTime");

	AUltra_Dynamic_Sky_BP_C_ResetCloudSimulateTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetWindSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::SetWindSpeed(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetWindSpeed");

	AUltra_Dynamic_Sky_BP_C_SetWindSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UpdateFogDensity
// (Public, BlueprintCallable, BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::UpdateFogDensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UpdateFogDensity");

	AUltra_Dynamic_Sky_BP_C_UpdateFogDensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.AnmateCloudDensity
// (Public, BlueprintCallable, BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::AnmateCloudDensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.AnmateCloudDensity");

	AUltra_Dynamic_Sky_BP_C_AnmateCloudDensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UpdateWind
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WindVector                     (Parm, OutParm, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::UpdateWind(struct FVector* WindVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UpdateWind");

	AUltra_Dynamic_Sky_BP_C_UpdateWind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WindVector != nullptr)
		*WindVector = params.WindVector;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetGameTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InGameTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bJump                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::SetGameTime(float InGameTime, bool bJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetGameTime");

	AUltra_Dynamic_Sky_BP_C_SetGameTime_Params params;
	params.InGameTime = InGameTime;
	params.bJump = bJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetCloudRatio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::GetCloudRatio(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetCloudRatio");

	AUltra_Dynamic_Sky_BP_C_GetCloudRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetSunLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::GetSunLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetSunLocation");

	AUltra_Dynamic_Sky_BP_C_GetSunLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetFogDensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::SetFogDensity(float Value, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetFogDensity");

	AUltra_Dynamic_Sky_BP_C_SetFogDensity_Params params;
	params.Value = Value;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.CanRain
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Rain                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::CanRain(bool* Rain)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.CanRain");

	AUltra_Dynamic_Sky_BP_C_CanRain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rain != nullptr)
		*Rain = params.Rain;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UpdateCloudDensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewDencity                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::UpdateCloudDensity(float NewDencity, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UpdateCloudDensity");

	AUltra_Dynamic_Sky_BP_C_UpdateCloudDensity_Params params;
	params.NewDencity = NewDencity;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetCloudChangeSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Quick                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TransitionTest                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::SetCloudChangeSpeed(bool Quick, bool TransitionTest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetCloudChangeSpeed");

	AUltra_Dynamic_Sky_BP_C_SetCloudChangeSpeed_Params params;
	params.Quick = Quick;
	params.TransitionTest = TransitionTest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetSkyParamater
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                Direction                      (Parm, OutParm, IsPlainOldData)
// float                          Intensity                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LightColor                     (Parm, OutParm, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::GetSkyParamater(struct FRotator* Direction, float* Intensity, struct FLinearColor* LightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetSkyParamater");

	AUltra_Dynamic_Sky_BP_C_GetSkyParamater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
	if (Intensity != nullptr)
		*Intensity = params.Intensity;
	if (LightColor != nullptr)
		*LightColor = params.LightColor;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Update Skylight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAutoTimeOfDay                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::Update_Skylight(bool bAutoTimeOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Update Skylight");

	AUltra_Dynamic_Sky_BP_C_Update_Skylight_Params params;
	params.bAutoTimeOfDay = bAutoTimeOfDay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::Set_Material_Variables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables");

	AUltra_Dynamic_Sky_BP_C_Set_Material_Variables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Solar Angle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::Set_Solar_Angle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Solar Angle");

	AUltra_Dynamic_Sky_BP_C_Set_Solar_Angle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript");

	AUltra_Dynamic_Sky_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick");

	AUltra_Dynamic_Sky_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay");

	AUltra_Dynamic_Sky_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::ExecuteUbergraph_Ultra_Dynamic_Sky_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP");

	AUltra_Dynamic_Sky_BP_C_ExecuteUbergraph_Ultra_Dynamic_Sky_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.OnUpdateWind__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WindDirection                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::OnUpdateWind__DelegateSignature(const struct FVector& WindDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.OnUpdateWind__DelegateSignature");

	AUltra_Dynamic_Sky_BP_C_OnUpdateWind__DelegateSignature_Params params;
	params.WindDirection = WindDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.OnReadyCloud__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::OnReadyCloud__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.OnReadyCloud__DelegateSignature");

	AUltra_Dynamic_Sky_BP_C_OnReadyCloud__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
