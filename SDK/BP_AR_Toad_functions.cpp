
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
// (NetReliable, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           UseSpecial                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Toad_C::IsUsingSpecialData(bool* UseSpecial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.IsUsingSpecialData");

	ABP_AR_Toad_C_IsUsingSpecialData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseSpecial != nullptr)
		*UseSpecial = params.UseSpecial;
}


// Function BP_AR_Toad.BP_AR_Toad_C.PlayerBetAction
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Toad_C::STATIC_PlayerBetAction(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.PlayerBetAction");

	ABP_AR_Toad_C_PlayerBetAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_AR_Toad.BP_AR_Toad_C.GetJumpDistance
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Toad_C::STATIC_GetJumpDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.GetJumpDistance");

	ABP_AR_Toad_C_GetJumpDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_AR_Toad.BP_AR_Toad_C.getSettingInfo
// (NetReliable, Exec, NetResponse, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (Net, Exec, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_AR_Toad_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.UserConstructionScript");

	ABP_AR_Toad_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.ReceiveTick
// (Exec, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Toad_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.ReceiveTick");

	ABP_AR_Toad_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.ReceiveBeginPlay
// (NetReliable, Exec, Native, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Toad_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.ReceiveBeginPlay");

	ABP_AR_Toad_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.UpdateWalkRate
// (Net, NetReliable, Exec, Native, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Toad_C::STATIC_UpdateWalkRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.UpdateWalkRate");

	ABP_AR_Toad_C_UpdateWalkRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.Reset
// (NetRequest, Exec, Native, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Toad_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.Reset");

	ABP_AR_Toad_C_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.SetMotion
// (NetReliable, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<E_AR_Motion_Type>  mot_type                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Toad_C::STATIC_SetMotion(TEnumAsByte<E_AR_Motion_Type> mot_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.SetMotion");

	ABP_AR_Toad_C_SetMotion_Params params;
	params.mot_type = mot_type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.ChangeShape
// (Net, NetReliable, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Toad_C::STATIC_ChangeShape(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.ChangeShape");

	ABP_AR_Toad_C_ChangeShape_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.MoveUpdate
// (NetReliable, Exec, Native, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Toad_C::STATIC_MoveUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.MoveUpdate");

	ABP_AR_Toad_C_MoveUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.IdleEnd
// (NetRequest, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Toad_C::STATIC_IdleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.IdleEnd");

	ABP_AR_Toad_C_IdleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.MoveAnimEnd
// (Net, NetReliable, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Toad_C::STATIC_MoveAnimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.MoveAnimEnd");

	ABP_AR_Toad_C_MoveAnimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.SetSideRate
// (Net, NetReliable, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Toad_C::STATIC_SetSideRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.SetSideRate");

	ABP_AR_Toad_C_SetSideRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.MoveZero
// (NetReliable, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Toad_C::STATIC_MoveZero()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.MoveZero");

	ABP_AR_Toad_C_MoveZero_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.MaxJump
// (NetReliable, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Toad_C::STATIC_MaxJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.MaxJump");

	ABP_AR_Toad_C_MaxJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.ResetLocation
// (Net, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Toad_C::STATIC_ResetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.ResetLocation");

	ABP_AR_Toad_C_ResetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.Jump Start
// (Net, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Toad_C::STATIC_Jump_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.Jump Start");

	ABP_AR_Toad_C_Jump_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.walk Start
// (Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Toad_C::STATIC_walk_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.walk Start");

	ABP_AR_Toad_C_walk_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.WalkStEnd
// (Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Toad_C::STATIC_WalkStEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.WalkStEnd");

	ABP_AR_Toad_C_WalkStEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.Event_PlaySEWalk
// (Net, NetReliable, Event, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Toad_C::STATIC_Event_PlaySEWalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.Event_PlaySEWalk");

	ABP_AR_Toad_C_Event_PlaySEWalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.Event_PlaySECry
// (Net, NetReliable, Event, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Toad_C::STATIC_Event_PlaySECry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.Event_PlaySECry");

	ABP_AR_Toad_C_Event_PlaySECry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.CheerAnimalBoost
// (Net, NetRequest, Exec, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Toad_C::STATIC_CheerAnimalBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.CheerAnimalBoost");

	ABP_AR_Toad_C_CheerAnimalBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.DoubleJump
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_Toad_C::DoubleJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.DoubleJump");

	ABP_AR_Toad_C_DoubleJump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.SetAnimNotRaceStartPos
// (Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_Toad_C::STATIC_SetAnimNotRaceStartPos(float Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_Toad.BP_AR_Toad_C.SetAnimNotRaceStartPos");

	ABP_AR_Toad_C_SetAnimNotRaceStartPos_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_Toad.BP_AR_Toad_C.ExecuteUbergraph_BP_AR_Toad
// (NetReliable, Public, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
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
