
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

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetSunAndMoonMovement
// (Net, Exec, Native, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::SetSunAndMoonMovement(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetSunAndMoonMovement");

	AUltra_Dynamic_Sky_BP_C_SetSunAndMoonMovement_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetCurrentUDMMat
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasOutParms, Const)
// Parameters:
// class UMaterialInstanceDynamic* newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::STATIC_GetCurrentUDMMat(class UMaterialInstanceDynamic** newParam)
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
// (Net, NetRequest, Native, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::ForceMoonPosition(float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ForceMoonPosition");

	AUltra_Dynamic_Sky_BP_C_ForceMoonPosition_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ForceUpdateSkylight
// (Exec, NetResponse, Static, MulticastDelegate, Private, NetServer, NetClient, Const)

void AUltra_Dynamic_Sky_BP_C::STATIC_ForceUpdateSkylight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ForceUpdateSkylight");

	AUltra_Dynamic_Sky_BP_C_ForceUpdateSkylight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.IsCloudy
// (Net, Exec, Native, Event, NetResponse, Public, Private, HasOutParms, NetClient, DLLImport)
// Parameters:
// bool                           Cloudy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::IsCloudy(bool* Cloudy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.IsCloudy");

	AUltra_Dynamic_Sky_BP_C_IsCloudy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cloudy != nullptr)
		*Cloudy = params.Cloudy;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ResetCloudSimulateTime
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)

void AUltra_Dynamic_Sky_BP_C::STATIC_ResetCloudSimulateTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ResetCloudSimulateTime");

	AUltra_Dynamic_Sky_BP_C_ResetCloudSimulateTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetWindSpeed
// (NetReliable, Exec, Native, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::SetWindSpeed(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetWindSpeed");

	AUltra_Dynamic_Sky_BP_C_SetWindSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UpdateFogDensity
// (Exec, Event, MulticastDelegate, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::UpdateFogDensity(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UpdateFogDensity");

	AUltra_Dynamic_Sky_BP_C_UpdateFogDensity_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.AnmateCloudDensity
// (NetRequest, Exec, Native, Static, NetMulticast, Private, Protected, Delegate, NetClient, Const)

void AUltra_Dynamic_Sky_BP_C::STATIC_AnmateCloudDensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.AnmateCloudDensity");

	AUltra_Dynamic_Sky_BP_C_AnmateCloudDensity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UpdateWind
// (Exec, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, Const)
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
// (NetRequest, Exec, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// float                          InGameTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bJump                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::STATIC_SetGameTime(float InGameTime, bool bJump)
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
// (Net, NetRequest, Public, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::STATIC_GetSunLocation(struct FVector* Location)
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
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::STATIC_SetFogDensity(float Value, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetFogDensity");

	AUltra_Dynamic_Sky_BP_C_SetFogDensity_Params params;
	params.Value = Value;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.CanRain
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// bool                           Rain                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::STATIC_CanRain(bool* Rain)
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
// (Net, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Private, Delegate, NetClient, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.SetCloudChangeSpeed
// (NetRequest, Native, Public, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetSkyParamater
// (Net, NetRequest, Exec, Native, Static, Public, Delegate, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FRotator                Direction                      (Parm, OutParm, IsPlainOldData)
// float                          Intensity                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LightColor                     (Parm, OutParm, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::STATIC_GetSkyParamater(struct FRotator* Direction, float* Intensity, struct FLinearColor* LightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetSkyParamater");

	AUltra_Dynamic_Sky_BP_C_GetSkyParamater_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

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
// (NetReliable, Static, NetMulticast, Private, NetServer, NetClient, Const)
// Parameters:
// bool                           bAutoTimeOfDay                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::STATIC_Update_Skylight(bool bAutoTimeOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Update Skylight");

	AUltra_Dynamic_Sky_BP_C_Update_Skylight_Params params;
	params.bAutoTimeOfDay = bAutoTimeOfDay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables
// (NetMulticast, Private, Delegate, NetServer, NetClient, Const)

void AUltra_Dynamic_Sky_BP_C::Set_Material_Variables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables");

	AUltra_Dynamic_Sky_BP_C_Set_Material_Variables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Solar Angle
// (Net, Native, NetMulticast, Protected, Delegate, NetClient, Const)

void AUltra_Dynamic_Sky_BP_C::Set_Solar_Angle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Solar Angle");

	AUltra_Dynamic_Sky_BP_C_Set_Solar_Angle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript
// (Exec, Native, Static, Private, NetServer, NetClient, Const)

void AUltra_Dynamic_Sky_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript");

	AUltra_Dynamic_Sky_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick
// (Net, Exec, Native, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick");

	AUltra_Dynamic_Sky_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay
// (NetRequest, Exec, Native, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void AUltra_Dynamic_Sky_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay");

	AUltra_Dynamic_Sky_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasOutParms, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::STATIC_ExecuteUbergraph_Ultra_Dynamic_Sky_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP");

	AUltra_Dynamic_Sky_BP_C_ExecuteUbergraph_Ultra_Dynamic_Sky_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.OnUpdateWind__DelegateSignature
// (Net, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)
// Parameters:
// struct FVector                 WindDirection                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::OnUpdateWind__DelegateSignature(const struct FVector& WindDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.OnUpdateWind__DelegateSignature");

	AUltra_Dynamic_Sky_BP_C_OnUpdateWind__DelegateSignature_Params params;
	params.WindDirection = WindDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.OnReadyCloud__DelegateSignature
// (NetReliable, Native, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void AUltra_Dynamic_Sky_BP_C::STATIC_OnReadyCloud__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.OnReadyCloud__DelegateSignature");

	AUltra_Dynamic_Sky_BP_C_OnReadyCloud__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
