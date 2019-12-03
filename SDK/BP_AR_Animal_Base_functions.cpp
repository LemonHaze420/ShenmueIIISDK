
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

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimInRaceFlag
// (NetRequest, Exec, Native, Event, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           InRace                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_SetAnimInRaceFlag(bool InRace)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimInRaceFlag");

	ABP_AR_Animal_Base_C_SetAnimInRaceFlag_Params params;
	params.InRace = InRace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimNotRaceStartPos
// (Net, NetReliable, NetRequest, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_SetAnimNotRaceStartPos(float Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimNotRaceStartPos");

	ABP_AR_Animal_Base_C_SetAnimNotRaceStartPos_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimDelayUpdateTime
// (NetReliable, NetRequest, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_SetAnimDelayUpdateTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimDelayUpdateTime");

	ABP_AR_Animal_Base_C_SetAnimDelayUpdateTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ChangeStateOnFree
// (Net, NetRequest, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::STATIC_ChangeStateOnFree()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ChangeStateOnFree");

	ABP_AR_Animal_Base_C_ChangeStateOnFree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Finalize
// (NetRequest, NetResponse, Static, MulticastDelegate, Protected, HasOutParms, NetClient, DLLImport)

void ABP_AR_Animal_Base_C::STATIC_Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Finalize");

	ABP_AR_Animal_Base_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.TestSumFuncTurtle
// (NetReliable, NetRequest, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_AR_Animal_Base_C::TestSumFuncTurtle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.TestSumFuncTurtle");

	ABP_AR_Animal_Base_C_TestSumFuncTurtle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetMoveSpeed
// (Net, NetReliable, NetRequest, Exec, NetResponse, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_AR_Animal_Base_C::GetMoveSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetMoveSpeed");

	ABP_AR_Animal_Base_C_GetMoveSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.TestSumFuncToad
// (NetResponse, NetMulticast, Public, Delegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_AR_Animal_Base_C::TestSumFuncToad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.TestSumFuncToad");

	ABP_AR_Animal_Base_C_TestSumFuncToad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.IsUsingSpecialData
// (Net, NetReliable, Native, NetResponse, NetMulticast, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           UseSpecial                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::IsUsingSpecialData(bool* UseSpecial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.IsUsingSpecialData");

	ABP_AR_Animal_Base_C_IsUsingSpecialData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseSpecial != nullptr)
		*UseSpecial = params.UseSpecial;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.CanCancelDelay
// (Net, NetReliable, NetRequest, Native, NetMulticast, Public, Delegate, BlueprintCallable)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bComplete                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::CanCancelDelay(float Duration, bool* bComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.CanCancelDelay");

	ABP_AR_Animal_Base_C_CanCancelDelay_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bComplete != nullptr)
		*bComplete = params.bComplete;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetResultControl
// (Net, NetReliable, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsWin                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_SetResultControl(bool IsWin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetResultControl");

	ABP_AR_Animal_Base_C_SetResultControl_Params params;
	params.IsWin = IsWin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetCourseMaterial
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ShapeType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::GetCourseMaterial(int ShapeType, class UMaterialInterface** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetCourseMaterial");

	ABP_AR_Animal_Base_C_GetCourseMaterial_Params params;
	params.ShapeType = ShapeType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.PlayerBetAction
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::PlayerBetAction(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.PlayerBetAction");

	ABP_AR_Animal_Base_C_PlayerBetAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetWalkRate
// (Net, NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetWalkRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetWalkRate");

	ABP_AR_Animal_Base_C_SetWalkRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetSpeedListFromTableIndex
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSpecialSpeed                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetSpeedListFromTableIndex(int Index, bool IsSpecialSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetSpeedListFromTableIndex");

	ABP_AR_Animal_Base_C_SetSpeedListFromTableIndex_Params params;
	params.Index = Index;
	params.IsSpecialSpeed = IsSpecialSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SettingSelectAnimal
// (NetRequest, Exec, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::STATIC_SettingSelectAnimal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SettingSelectAnimal");

	ABP_AR_Animal_Base_C_SettingSelectAnimal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Initialize
// (NetRequest, Exec, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::STATIC_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Initialize");

	ABP_AR_Animal_Base_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetFortuneEnabled
// (Net, NetReliable, Exec, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_SetFortuneEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetFortuneEnabled");

	ABP_AR_Animal_Base_C_SetFortuneEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.CheerAnimalBoost
// (NetReliable, Exec, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::STATIC_CheerAnimalBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.CheerAnimalBoost");

	ABP_AR_Animal_Base_C_CheerAnimalBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetWalkSE
// (Net, Exec, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class USoundAtomCue*           RefWalkCue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_SetWalkSE(class USoundAtomCue* RefWalkCue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetWalkSE");

	ABP_AR_Animal_Base_C_SetWalkSE_Params params;
	params.RefWalkCue = RefWalkCue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.PlayCrySE
// (Event, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_PlayCrySE(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.PlayCrySE");

	ABP_AR_Animal_Base_C_PlayCrySE_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetCrySE
// (Net, NetReliable, Native, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class USoundAtomCue*           Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_SetCrySE(class USoundAtomCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetCrySE");

	ABP_AR_Animal_Base_C_SetCrySE_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetUseSpline
// (NetReliable, Native, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bUseSpline                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_SetUseSpline(bool bUseSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetUseSpline");

	ABP_AR_Animal_Base_C_SetUseSpline_Params params;
	params.bUseSpline = bUseSpline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetMoveSpline
// (Net, Native, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class USplineComponent*        MoveSpline                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_GetMoveSpline(class USplineComponent** MoveSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetMoveSpline");

	ABP_AR_Animal_Base_C_GetMoveSpline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MoveSpline != nullptr)
		*MoveSpline = params.MoveSpline;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetMoveSpline
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USplineComponent*        MoveSpline                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_SetMoveSpline(class USplineComponent* MoveSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetMoveSpline");

	ABP_AR_Animal_Base_C_SetMoveSpline_Params params;
	params.MoveSpline = MoveSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetSplineLocationAndRotation
// (NetReliable, Native, NetMulticast, Public, Delegate, BlueprintCallable)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void ABP_AR_Animal_Base_C::GetSplineLocationAndRotation(float Distance, struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetSplineLocationAndRotation");

	ABP_AR_Animal_Base_C_GetSplineLocationAndRotation_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.UpdateRotate
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::UpdateRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.UpdateRotate");

	ABP_AR_Animal_Base_C_UpdateRotate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ChangeShape
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::ChangeShape(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ChangeShape");

	ABP_AR_Animal_Base_C_ChangeShape_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.InitializeInfo
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Protected, NetServer, DLLImport, Const)
// Parameters:
// struct FST_AR_AnimalInfo       table_offset                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::InitializeInfo(const struct FST_AR_AnimalInfo& table_offset, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.InitializeInfo");

	ABP_AR_Animal_Base_C_InitializeInfo_Params params;
	params.table_offset = table_offset;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetMotion
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_AR_Motion_Type>  mot_type                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetMotion(TEnumAsByte<E_AR_Motion_Type> mot_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetMotion");

	ABP_AR_Animal_Base_C_SetMotion_Params params;
	params.mot_type = mot_type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetDeathTime
// (Net, NetReliable, NetRequest, Exec, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          death_time                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_GetDeathTime(float* death_time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetDeathTime");

	ABP_AR_Animal_Base_C_GetDeathTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (death_time != nullptr)
		*death_time = params.death_time;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetDeath
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           is_death                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetDeath(bool is_death)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetDeath");

	ABP_AR_Animal_Base_C_SetDeath_Params params;
	params.is_death = is_death;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.UpdateWalkRate
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::UpdateWalkRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.UpdateWalkRate");

	ABP_AR_Animal_Base_C_UpdateWalkRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SelectMotion
// (NetReliable, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SelectMotion(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SelectMotion");

	ABP_AR_Animal_Base_C_SelectMotion_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetStop
// (Net, NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           is_stop                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetStop(bool is_stop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetStop");

	ABP_AR_Animal_Base_C_SetStop_Params params;
	params.is_stop = is_stop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Reset
// (Net, NetRequest, Exec, NetResponse, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_AR_Animal_Base_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Reset");

	ABP_AR_Animal_Base_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetRandomSpeedFromTable
// (Exec, NetResponse, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::GetRandomSpeedFromTable(float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetRandomSpeedFromTable");

	ABP_AR_Animal_Base_C_GetRandomSpeedFromTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.UserConstructionScript
// (Net, NetRequest, Native, Event, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.UserConstructionScript");

	ABP_AR_Animal_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ReceiveBeginPlay
// (Exec, Native, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ReceiveBeginPlay");

	ABP_AR_Animal_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ReceiveTick
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ReceiveTick");

	ABP_AR_Animal_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.AnimStop
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::STATIC_AnimStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.AnimStop");

	ABP_AR_Animal_Base_C_AnimStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Right Hit Begin
// (NetReliable, NetRequest, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_Right_Hit_Begin(class UObject* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Right Hit Begin");

	ABP_AR_Animal_Base_C_Right_Hit_Begin_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Left Hit Begin
// (NetReliable, NetRequest, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_Left_Hit_Begin(class UObject* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Left Hit Begin");

	ABP_AR_Animal_Base_C_Left_Hit_Begin_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Right Hit End
// (Net, NetRequest, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_Right_Hit_End(class UObject* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Right Hit End");

	ABP_AR_Animal_Base_C_Right_Hit_End_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Left Hit End
// (NetRequest, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_Left_Hit_End(class UObject* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Left Hit End");

	ABP_AR_Animal_Base_C_Left_Hit_End_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.MoveUpdate
// (NetRequest, Native, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::STATIC_MoveUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.MoveUpdate");

	ABP_AR_Animal_Base_C_MoveUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Idle Reset
// (NetReliable, Event, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::STATIC_Idle_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Idle Reset");

	ABP_AR_Animal_Base_C_Idle_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Set Tick Enable
// (NetReliable, Native, Event, Static, MulticastDelegate, Protected, HasOutParms, NetClient, DLLImport)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DelayTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_Set_Tick_Enable(bool bEnabled, float DelayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Set Tick Enable");

	ABP_AR_Animal_Base_C_Set_Tick_Enable_Params params;
	params.bEnabled = bEnabled;
	params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetCurrentMoveSpeedTimingFromUpdate
// (Net, Event, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::STATIC_SetCurrentMoveSpeedTimingFromUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetCurrentMoveSpeedTimingFromUpdate");

	ABP_AR_Animal_Base_C_SetCurrentMoveSpeedTimingFromUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Event_PlaySECry
// (Event, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::STATIC_Event_PlaySECry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Event_PlaySECry");

	ABP_AR_Animal_Base_C_Event_PlaySECry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Event_PlaySEWalk
// (Event, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::STATIC_Event_PlaySEWalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Event_PlaySEWalk");

	ABP_AR_Animal_Base_C_Event_PlaySEWalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Event_EnabledCheer
// (NetReliable, Exec, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_Event_EnabledCheer(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Event_EnabledCheer");

	ABP_AR_Animal_Base_C_Event_EnabledCheer_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ResetDelayTime
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::STATIC_ResetDelayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ResetDelayTime");

	ABP_AR_Animal_Base_C_ResetDelayTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ResetIdleTime
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::STATIC_ResetIdleTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ResetIdleTime");

	ABP_AR_Animal_Base_C_ResetIdleTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimUpdateEnabled
// (Net, NetReliable, Native, NetMulticast, MulticastDelegate, Protected, HasOutParms, NetClient, DLLImport)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DelayTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetAnimUpdateEnabled(bool Enabled, float DelayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimUpdateEnabled");

	ABP_AR_Animal_Base_C_SetAnimUpdateEnabled_Params params;
	params.Enabled = Enabled;
	params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.DelayedChangeStateOnFree
// (Net, NetRequest, Exec, Native, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::STATIC_DelayedChangeStateOnFree()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.DelayedChangeStateOnFree");

	ABP_AR_Animal_Base_C_DelayedChangeStateOnFree_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.DelayedChangeStateToWait
// (Net, NetRequest, Exec, Native, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::STATIC_DelayedChangeStateToWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.DelayedChangeStateToWait");

	ABP_AR_Animal_Base_C_DelayedChangeStateToWait_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.DelayedInitialize
// (Net, Exec, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DelayTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_DelayedInitialize(float DelayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.DelayedInitialize");

	ABP_AR_Animal_Base_C_DelayedInitialize_Params params;
	params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ExecuteUbergraph_BP_AR_Animal_Base
// (NetReliable, Exec, Event, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::STATIC_ExecuteUbergraph_BP_AR_Animal_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ExecuteUbergraph_BP_AR_Animal_Base");

	ABP_AR_Animal_Base_C_ExecuteUbergraph_BP_AR_Animal_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.OnEndCheerBoostDispacher__DelegateSignature
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_AR_Animal_Base_C::OnEndCheerBoostDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.OnEndCheerBoostDispacher__DelegateSignature");

	ABP_AR_Animal_Base_C_OnEndCheerBoostDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
