
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRace                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetAnimInRaceFlag(bool InRace)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimInRaceFlag");

	ABP_AR_Animal_Base_C_SetAnimInRaceFlag_Params params;
	params.InRace = InRace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimNotRaceStartPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetAnimNotRaceStartPos(float Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimNotRaceStartPos");

	ABP_AR_Animal_Base_C_SetAnimNotRaceStartPos_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimDelayUpdateTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetAnimDelayUpdateTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimDelayUpdateTime");

	ABP_AR_Animal_Base_C_SetAnimDelayUpdateTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ChangeStateOnFree
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::ChangeStateOnFree()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ChangeStateOnFree");

	ABP_AR_Animal_Base_C_ChangeStateOnFree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Finalize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Finalize");

	ABP_AR_Animal_Base_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.TestSumFuncTurtle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           UseSpecial                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::IsUsingSpecialData(bool* UseSpecial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.IsUsingSpecialData");

	ABP_AR_Animal_Base_C_IsUsingSpecialData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseSpecial != nullptr)
		*UseSpecial = params.UseSpecial;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.CanCancelDelay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bComplete                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::CanCancelDelay(float Duration, bool* bComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.CanCancelDelay");

	ABP_AR_Animal_Base_C_CanCancelDelay_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bComplete != nullptr)
		*bComplete = params.bComplete;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetResultControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsWin                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetResultControl(bool IsWin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetResultControl");

	ABP_AR_Animal_Base_C_SetResultControl_Params params;
	params.IsWin = IsWin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetCourseMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ShapeType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::GetCourseMaterial(int ShapeType, class UMaterialInterface** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetCourseMaterial");

	ABP_AR_Animal_Base_C_GetCourseMaterial_Params params;
	params.ShapeType = ShapeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.PlayerBetAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::PlayerBetAction(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.PlayerBetAction");

	ABP_AR_Animal_Base_C_PlayerBetAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetWalkRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetWalkRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetWalkRate");

	ABP_AR_Animal_Base_C_SetWalkRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetSpeedListFromTableIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SettingSelectAnimal
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::SettingSelectAnimal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SettingSelectAnimal");

	ABP_AR_Animal_Base_C_SettingSelectAnimal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Initialize");

	ABP_AR_Animal_Base_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetFortuneEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetFortuneEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetFortuneEnabled");

	ABP_AR_Animal_Base_C_SetFortuneEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.CheerAnimalBoost
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::CheerAnimalBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.CheerAnimalBoost");

	ABP_AR_Animal_Base_C_CheerAnimalBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetWalkSE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*           RefWalkCue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetWalkSE(class USoundAtomCue* RefWalkCue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetWalkSE");

	ABP_AR_Animal_Base_C_SetWalkSE_Params params;
	params.RefWalkCue = RefWalkCue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.PlayCrySE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::PlayCrySE(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.PlayCrySE");

	ABP_AR_Animal_Base_C_PlayCrySE_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetCrySE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*           Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetCrySE(class USoundAtomCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetCrySE");

	ABP_AR_Animal_Base_C_SetCrySE_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetUseSpline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseSpline                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetUseSpline(bool bUseSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetUseSpline");

	ABP_AR_Animal_Base_C_SetUseSpline_Params params;
	params.bUseSpline = bUseSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetMoveSpline
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USplineComponent*        MoveSpline                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_AR_Animal_Base_C::GetMoveSpline(class USplineComponent** MoveSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetMoveSpline");

	ABP_AR_Animal_Base_C_GetMoveSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MoveSpline != nullptr)
		*MoveSpline = params.MoveSpline;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetMoveSpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        MoveSpline                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetMoveSpline(class USplineComponent* MoveSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetMoveSpline");

	ABP_AR_Animal_Base_C_SetMoveSpline_Params params;
	params.MoveSpline = MoveSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetSplineLocationAndRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.UpdateRotate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::UpdateRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.UpdateRotate");

	ABP_AR_Animal_Base_C_UpdateRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ChangeShape
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::ChangeShape(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ChangeShape");

	ABP_AR_Animal_Base_C_ChangeShape_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.InitializeInfo
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AR_Motion_Type>  mot_type                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetMotion(TEnumAsByte<E_AR_Motion_Type> mot_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetMotion");

	ABP_AR_Animal_Base_C_SetMotion_Params params;
	params.mot_type = mot_type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetDeathTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          death_time                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::GetDeathTime(float* death_time)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           is_death                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::SetDeath(bool is_death)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetDeath");

	ABP_AR_Animal_Base_C_SetDeath_Params params;
	params.is_death = is_death;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.UpdateWalkRate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::UpdateWalkRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.UpdateWalkRate");

	ABP_AR_Animal_Base_C_UpdateWalkRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SelectMotion
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Reset");

	ABP_AR_Animal_Base_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetRandomSpeedFromTable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.UserConstructionScript");

	ABP_AR_Animal_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AR_Animal_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ReceiveBeginPlay");

	ABP_AR_Animal_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ReceiveTick");

	ABP_AR_Animal_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.AnimStop
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::AnimStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.AnimStop");

	ABP_AR_Animal_Base_C_AnimStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Right Hit Begin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::Right_Hit_Begin(class UObject* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Right Hit Begin");

	ABP_AR_Animal_Base_C_Right_Hit_Begin_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Left Hit Begin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::Left_Hit_Begin(class UObject* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Left Hit Begin");

	ABP_AR_Animal_Base_C_Left_Hit_Begin_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Right Hit End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::Right_Hit_End(class UObject* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Right Hit End");

	ABP_AR_Animal_Base_C_Right_Hit_End_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Left Hit End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::Left_Hit_End(class UObject* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Left Hit End");

	ABP_AR_Animal_Base_C_Left_Hit_End_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.MoveUpdate
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::MoveUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.MoveUpdate");

	ABP_AR_Animal_Base_C_MoveUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Idle Reset
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::Idle_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Idle Reset");

	ABP_AR_Animal_Base_C_Idle_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Set Tick Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DelayTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::Set_Tick_Enable(bool bEnabled, float DelayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Set Tick Enable");

	ABP_AR_Animal_Base_C_Set_Tick_Enable_Params params;
	params.bEnabled = bEnabled;
	params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetCurrentMoveSpeedTimingFromUpdate
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::SetCurrentMoveSpeedTimingFromUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetCurrentMoveSpeedTimingFromUpdate");

	ABP_AR_Animal_Base_C_SetCurrentMoveSpeedTimingFromUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Event_PlaySECry
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::Event_PlaySECry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Event_PlaySECry");

	ABP_AR_Animal_Base_C_Event_PlaySECry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Event_PlaySEWalk
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::Event_PlaySEWalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Event_PlaySEWalk");

	ABP_AR_Animal_Base_C_Event_PlaySEWalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Event_EnabledCheer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::Event_EnabledCheer(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Event_EnabledCheer");

	ABP_AR_Animal_Base_C_Event_EnabledCheer_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ResetDelayTime
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::ResetDelayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ResetDelayTime");

	ABP_AR_Animal_Base_C_ResetDelayTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ResetIdleTime
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::ResetIdleTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ResetIdleTime");

	ABP_AR_Animal_Base_C_ResetIdleTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimUpdateEnabled
// (BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.DelayedChangeStateOnFree
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::DelayedChangeStateOnFree()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.DelayedChangeStateOnFree");

	ABP_AR_Animal_Base_C_DelayedChangeStateOnFree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.DelayedChangeStateToWait
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::DelayedChangeStateToWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.DelayedChangeStateToWait");

	ABP_AR_Animal_Base_C_DelayedChangeStateToWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.DelayedInitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelayTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::DelayedInitialize(float DelayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.DelayedInitialize");

	ABP_AR_Animal_Base_C_DelayedInitialize_Params params;
	params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ExecuteUbergraph_BP_AR_Animal_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Animal_Base_C::ExecuteUbergraph_BP_AR_Animal_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ExecuteUbergraph_BP_AR_Animal_Base");

	ABP_AR_Animal_Base_C_ExecuteUbergraph_BP_AR_Animal_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.OnEndCheerBoostDispacher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_AR_Animal_Base_C::OnEndCheerBoostDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.OnEndCheerBoostDispacher__DelegateSignature");

	ABP_AR_Animal_Base_C_OnEndCheerBoostDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
