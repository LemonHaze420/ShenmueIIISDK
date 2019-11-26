
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

// Function BP_AR_Toad.BP_AR_Toad_C.IsUsingSpecialData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           UseSpecial                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Toad_C::IsUsingSpecialData(bool* UseSpecial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.IsUsingSpecialData");

	ABP_AR_Toad_C_IsUsingSpecialData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseSpecial != nullptr)
		*UseSpecial = params.UseSpecial;
}


// Function BP_AR_Toad.BP_AR_Toad_C.PlayerBetAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Toad_C::PlayerBetAction(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.PlayerBetAction");

	ABP_AR_Toad_C_PlayerBetAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_AR_Toad.BP_AR_Toad_C.GetJumpDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Toad_C::GetJumpDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.GetJumpDistance");

	ABP_AR_Toad_C_GetJumpDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_AR_Toad.BP_AR_Toad_C.getSettingInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          motion_rate                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          jump_height                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          jump_distance                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Toad_C::getSettingInfo(float* motion_rate, float* jump_height, float* jump_distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.getSettingInfo");

	ABP_AR_Toad_C_getSettingInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (motion_rate != nullptr)
		*motion_rate = params.motion_rate;
	if (jump_height != nullptr)
		*jump_height = params.jump_height;
	if (jump_distance != nullptr)
		*jump_distance = params.jump_distance;
}


// Function BP_AR_Toad.BP_AR_Toad_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AR_Toad_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.UserConstructionScript");

	ABP_AR_Toad_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Toad_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.ReceiveTick");

	ABP_AR_Toad_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AR_Toad_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.ReceiveBeginPlay");

	ABP_AR_Toad_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.UpdateWalkRate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AR_Toad_C::UpdateWalkRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.UpdateWalkRate");

	ABP_AR_Toad_C_UpdateWalkRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AR_Toad_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.Reset");

	ABP_AR_Toad_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.SetMotion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AR_Motion_Type>  mot_type                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Toad_C::SetMotion(TEnumAsByte<E_AR_Motion_Type> mot_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.SetMotion");

	ABP_AR_Toad_C_SetMotion_Params params;
	params.mot_type = mot_type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.ChangeShape
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Toad_C::ChangeShape(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.ChangeShape");

	ABP_AR_Toad_C_ChangeShape_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.MoveUpdate
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Toad_C::MoveUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.MoveUpdate");

	ABP_AR_Toad_C_MoveUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.IdleEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Toad_C::IdleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.IdleEnd");

	ABP_AR_Toad_C_IdleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.MoveAnimEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Toad_C::MoveAnimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.MoveAnimEnd");

	ABP_AR_Toad_C_MoveAnimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.SetSideRate
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Toad_C::SetSideRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.SetSideRate");

	ABP_AR_Toad_C_SetSideRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.MoveZero
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Toad_C::MoveZero()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.MoveZero");

	ABP_AR_Toad_C_MoveZero_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.MaxJump
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Toad_C::MaxJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.MaxJump");

	ABP_AR_Toad_C_MaxJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.ResetLocation
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Toad_C::ResetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.ResetLocation");

	ABP_AR_Toad_C_ResetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.Jump Start
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Toad_C::Jump_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.Jump Start");

	ABP_AR_Toad_C_Jump_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.walk Start
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Toad_C::walk_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.walk Start");

	ABP_AR_Toad_C_walk_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.WalkStEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Toad_C::WalkStEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.WalkStEnd");

	ABP_AR_Toad_C_WalkStEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.Event_PlaySEWalk
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Toad_C::Event_PlaySEWalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.Event_PlaySEWalk");

	ABP_AR_Toad_C_Event_PlaySEWalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.Event_PlaySECry
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Toad_C::Event_PlaySECry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.Event_PlaySECry");

	ABP_AR_Toad_C_Event_PlaySECry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.CheerAnimalBoost
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AR_Toad_C::CheerAnimalBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.CheerAnimalBoost");

	ABP_AR_Toad_C_CheerAnimalBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.DoubleJump
// (BlueprintCallable, BlueprintEvent)

void ABP_AR_Toad_C::DoubleJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.DoubleJump");

	ABP_AR_Toad_C_DoubleJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.SetAnimNotRaceStartPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Toad_C::SetAnimNotRaceStartPos(float Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.SetAnimNotRaceStartPos");

	ABP_AR_Toad_C_SetAnimNotRaceStartPos_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.ExecuteUbergraph_BP_AR_Toad
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Toad_C::ExecuteUbergraph_BP_AR_Toad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.ExecuteUbergraph_BP_AR_Toad");

	ABP_AR_Toad_C_ExecuteUbergraph_BP_AR_Toad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
