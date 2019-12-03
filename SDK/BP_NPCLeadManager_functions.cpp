
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

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.ResetPartnerCollision
// (NetRequest, Exec, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, Const)

void ABP_NPCLeadManager_C::ResetPartnerCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.ResetPartnerCollision");

	ABP_NPCLeadManager_C_ResetPartnerCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.IgnorePartnerCollision
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetClient, Const)

void ABP_NPCLeadManager_C::IgnorePartnerCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.IgnorePartnerCollision");

	ABP_NPCLeadManager_C_IgnorePartnerCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.StartActionBlock
// (NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void ABP_NPCLeadManager_C::STATIC_StartActionBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.StartActionBlock");

	ABP_NPCLeadManager_C_StartActionBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.ReleaseActionBlock
// (Exec, Native, Event, NetResponse, MulticastDelegate, Private, NetServer, NetClient, Const)

void ABP_NPCLeadManager_C::ReleaseActionBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.ReleaseActionBlock");

	ABP_NPCLeadManager_C_ReleaseActionBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.SetLookAtSpline
// (NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// bool                           bCanLookAt                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::SetLookAtSpline(bool bCanLookAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.SetLookAtSpline");

	ABP_NPCLeadManager_C_SetLookAtSpline_Params params;
	params.bCanLookAt = bCanLookAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.BindTalkEvents
// (NetReliable, Exec, Native, Private, Protected, Delegate, NetClient, Const)
// Parameters:
// bool                           bBind                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::BindTalkEvents(bool bBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.BindTalkEvents");

	ABP_NPCLeadManager_C_BindTalkEvents_Params params;
	params.bBind = bBind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.UpdateCharacterVisibility
// (Net, NetReliable, NetRequest, NetResponse, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_NPCLeadManager_C::UpdateCharacterVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.UpdateCharacterVisibility");

	ABP_NPCLeadManager_C_UpdateCharacterVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.SetFollowEndDistance
// (NetReliable, NetRequest, Native, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          EndDistance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::SetFollowEndDistance(float EndDistance, bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.SetFollowEndDistance");

	ABP_NPCLeadManager_C_SetFollowEndDistance_Params params;
	params.EndDistance = EndDistance;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_IsCompleted
// (NetReliable, Exec, Native, Event, NetResponse, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_NPCLeadManager_C::Lead_IsCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_IsCompleted");

	ABP_NPCLeadManager_C_Lead_IsCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_StartNextWaitEvent
// (Exec, Native, Event, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_NPCLeadManager_C::Lead_StartNextWaitEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_StartNextWaitEvent");

	ABP_NPCLeadManager_C_Lead_StartNextWaitEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_MessageCompleted
// (Net, NetRequest, Native, Event, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_NPCLeadManager_C::Lead_MessageCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_MessageCompleted");

	ABP_NPCLeadManager_C_Lead_MessageCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_GetNextPointDistance
// (Net, Native, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Next                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::STATIC_Lead_GetNextPointDistance(float* Next)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_GetNextPointDistance");

	ABP_NPCLeadManager_C_Lead_GetNextPointDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Next != nullptr)
		*Next = params.Next;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_CalculateFollowerSpeed
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TargetMatchAmt                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::STATIC_Lead_CalculateFollowerSpeed(float* Speed, float* TargetMatchAmt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_CalculateFollowerSpeed");

	ABP_NPCLeadManager_C_Lead_CalculateFollowerSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
	if (TargetMatchAmt != nullptr)
		*TargetMatchAmt = params.TargetMatchAmt;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.CheckLocationOnStairs
// (Net, NetReliable, Exec, Native, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// struct FVector                 Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           OnStairs                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::STATIC_CheckLocationOnStairs(const struct FVector& Location, bool* OnStairs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.CheckLocationOnStairs");

	ABP_NPCLeadManager_C_CheckLocationOnStairs_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OnStairs != nullptr)
		*OnStairs = params.OnStairs;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetTalkLocation
// (Net, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_NPCLeadManager_C::GetTalkLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetTalkLocation");

	ABP_NPCLeadManager_C_GetTalkLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Pair
// (NetReliable, NetRequest, Static, Public, Private, NetServer, NetClient, Const)
// Parameters:
// class ABP_S3_Character_Adventure_C* NewPartner                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::STATIC_Pair(class ABP_S3_Character_Adventure_C* NewPartner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Pair");

	ABP_NPCLeadManager_C_Pair_Params params;
	params.NewPartner = NewPartner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Unpair
// (Net, Exec, Native, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, Const)

void ABP_NPCLeadManager_C::Unpair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Unpair");

	ABP_NPCLeadManager_C_Unpair_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.SetPartnerCharacter
// (Net, NetRequest, Native, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// class ACharacter*              InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::SetPartnerCharacter(class ACharacter* InputPin, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.SetPartnerCharacter");

	ABP_NPCLeadManager_C_SetPartnerCharacter_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_EstimateSplineTravelDistance
// (NetRequest, Event, NetResponse, MulticastDelegate, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Estimation                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SqrDistanceFromSpline          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ProbablyCloseEnough            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::Lead_EstimateSplineTravelDistance(class ACharacter* Character, float* Estimation, float* SqrDistanceFromSpline, bool* ProbablyCloseEnough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_EstimateSplineTravelDistance");

	ABP_NPCLeadManager_C_Lead_EstimateSplineTravelDistance_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Estimation != nullptr)
		*Estimation = params.Estimation;
	if (SqrDistanceFromSpline != nullptr)
		*SqrDistanceFromSpline = params.SqrDistanceFromSpline;
	if (ProbablyCloseEnough != nullptr)
		*ProbablyCloseEnough = params.ProbablyCloseEnough;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetNPCCharater
// (NetReliable, Exec, Native, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// class AS3Character*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AS3Character* ABP_NPCLeadManager_C::GetNPCCharater()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetNPCCharater");

	ABP_NPCLeadManager_C_GetNPCCharater_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.ResumeMovement
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)

void ABP_NPCLeadManager_C::ResumeMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.ResumeMovement");

	ABP_NPCLeadManager_C_ResumeMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.StopMovement
// (Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)

void ABP_NPCLeadManager_C::StopMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.StopMovement");

	ABP_NPCLeadManager_C_StopMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetInitialSkeletalMesh
// (Native, Event, MulticastDelegate, Public, NetServer, NetClient, Const)
// Parameters:
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMesh* ABP_NPCLeadManager_C::GetInitialSkeletalMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetInitialSkeletalMesh");

	ABP_NPCLeadManager_C_GetInitialSkeletalMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.TestCanSeeFollower
// (NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           OutCanSee                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::STATIC_TestCanSeeFollower(bool* OutCanSee)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.TestCanSeeFollower");

	ABP_NPCLeadManager_C_TestCanSeeFollower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCanSee != nullptr)
		*OutCanSee = params.OutCanSee;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_WaitForFollower_TryTurnAndReact
// (NetRequest, Exec, Native, Static, NetMulticast, Protected, NetServer, NetClient, Const)
// Parameters:
// bool                           bForwardOnly                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::STATIC_Lead_WaitForFollower_TryTurnAndReact(bool bForwardOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_WaitForFollower_TryTurnAndReact");

	ABP_NPCLeadManager_C_Lead_WaitForFollower_TryTurnAndReact_Params params;
	params.bForwardOnly = bForwardOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_WaitForFollower_StartWave
// (Native, Event, NetResponse, Static, NetMulticast, Private, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          TurnAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DistSqr                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::STATIC_Lead_WaitForFollower_StartWave(float TurnAngle, float DistSqr)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_WaitForFollower_StartWave");

	ABP_NPCLeadManager_C_Lead_WaitForFollower_StartWave_Params params;
	params.TurnAngle = TurnAngle;
	params.DistSqr = DistSqr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_WaitForFollower_StartTurn
// (NetRequest, Native, NetResponse, NetMulticast, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          TurnAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::Lead_WaitForFollower_StartTurn(float TurnAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_WaitForFollower_StartTurn");

	ABP_NPCLeadManager_C_Lead_WaitForFollower_StartTurn_Params params;
	params.TurnAngle = TurnAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_WaitForFollower_StartTurnCooldown
// (Native, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// bool                           JustWaved                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::Lead_WaitForFollower_StartTurnCooldown(bool JustWaved)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_WaitForFollower_StartTurnCooldown");

	ABP_NPCLeadManager_C_Lead_WaitForFollower_StartTurnCooldown_Params params;
	params.JustWaved = JustWaved;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetRelativeAngleToLocation
// (NetRequest, Exec, Native, Private, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ToLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          OutAngle                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::GetRelativeAngleToLocation(const struct FVector& ToLocation, float* OutAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetRelativeAngleToLocation");

	ABP_NPCLeadManager_C_GetRelativeAngleToLocation_Params params;
	params.ToLocation = ToLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngle != nullptr)
		*OutAngle = params.OutAngle;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetRelativeAngleToFollower
// (Net, Native, Static, NetMulticast, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          OutAngle                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::STATIC_GetRelativeAngleToFollower(float* OutAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetRelativeAngleToFollower");

	ABP_NPCLeadManager_C_GetRelativeAngleToFollower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngle != nullptr)
		*OutAngle = params.OutAngle;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetDirectSqrDistanceToFollower
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::GetDirectSqrDistanceToFollower(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetDirectSqrDistanceToFollower");

	ABP_NPCLeadManager_C_GetDirectSqrDistanceToFollower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.SetPathMassagingEnabled
// (Native, Static, Public, Private, NetServer, NetClient, Const)
// Parameters:
// bool                           bNewValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::STATIC_SetPathMassagingEnabled(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.SetPathMassagingEnabled");

	ABP_NPCLeadManager_C_SetPathMassagingEnabled_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_UpdateDistanceTravelled
// (Net, NetRequest, Event, NetMulticast, MulticastDelegate, NetServer, NetClient, Const)

void ABP_NPCLeadManager_C::Lead_UpdateDistanceTravelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_UpdateDistanceTravelled");

	ABP_NPCLeadManager_C_Lead_UpdateDistanceTravelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_CalculateSpeed
// (NetReliable, NetResponse, Static, NetMulticast, Private, NetServer, NetClient, Const)

void ABP_NPCLeadManager_C::STATIC_Lead_CalculateSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_CalculateSpeed");

	ABP_NPCLeadManager_C_Lead_CalculateSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.CanFollow
// (Exec, Native, Event, NetResponse, Static, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           isFollow                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::STATIC_CanFollow(bool* isFollow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.CanFollow");

	ABP_NPCLeadManager_C_CanFollow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isFollow != nullptr)
		*isFollow = params.isFollow;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.ChangeCollision
// (NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::ChangeCollision(class AActor* Actor, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.ChangeCollision");

	ABP_NPCLeadManager_C_ChangeCollision_Params params;
	params.Actor = Actor;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Follow_IsBeingObstacle
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsObstacle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::STATIC_Follow_IsBeingObstacle(bool* bIsObstacle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Follow_IsBeingObstacle");

	ABP_NPCLeadManager_C_Follow_IsBeingObstacle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsObstacle != nullptr)
		*bIsObstacle = params.bIsObstacle;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.CheckStrayOff
// (Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetClient, Const)
// Parameters:
// struct FVector                 SplinePos                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceMove                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::CheckStrayOff(const struct FVector& SplinePos, float Distance, bool* ForceMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.CheckStrayOff");

	ABP_NPCLeadManager_C_CheckStrayOff_Params params;
	params.SplinePos = SplinePos;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForceMove != nullptr)
		*ForceMove = params.ForceMove;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_WaitForFollower_Tick
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_NPCLeadManager_C::STATIC_Lead_WaitForFollower_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_WaitForFollower_Tick");

	ABP_NPCLeadManager_C_Lead_WaitForFollower_Tick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.NextPoint
// (NetReliable, NetRequest, Event, Static, Private, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_NPCLeadManager_C::STATIC_NextPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.NextPoint");

	ABP_NPCLeadManager_C_NextPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.setFollwFlags
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// bool                           follow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           syncGameinstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::setFollwFlags(bool follow, bool syncGameinstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.setFollwFlags");

	ABP_NPCLeadManager_C_setFollwFlags_Params params;
	params.follow = follow;
	params.syncGameinstance = syncGameinstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.NpcLeadActorExit
// (Net, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetClient, Const)

void ABP_NPCLeadManager_C::NpcLeadActorExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.NpcLeadActorExit");

	ABP_NPCLeadManager_C_NpcLeadActorExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.NpcLeadActorInit
// (Net, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// struct FVector                 SpawnPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          SpawnRot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FollowFlag                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ANPC_SplineMoveActor_C*  NpcSplineMoveActorRef          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::NpcLeadActorInit(const struct FVector& SpawnPos, float SpawnRot, bool FollowFlag, class ANPC_SplineMoveActor_C* NpcSplineMoveActorRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.NpcLeadActorInit");

	ABP_NPCLeadManager_C_NpcLeadActorInit_Params params;
	params.SpawnPos = SpawnPos;
	params.SpawnRot = SpawnRot;
	params.FollowFlag = FollowFlag;
	params.NpcSplineMoveActorRef = NpcSplineMoveActorRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_NPCLeadManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.UserConstructionScript");

	ABP_NPCLeadManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.OnFail_9B54DB094FA168F07F4D998937B7C143
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::STATIC_OnFail_9B54DB094FA168F07F4D998937B7C143(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.OnFail_9B54DB094FA168F07F4D998937B7C143");

	ABP_NPCLeadManager_C_OnFail_9B54DB094FA168F07F4D998937B7C143_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.OnSuccess_9B54DB094FA168F07F4D998937B7C143
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::STATIC_OnSuccess_9B54DB094FA168F07F4D998937B7C143(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.OnSuccess_9B54DB094FA168F07F4D998937B7C143");

	ABP_NPCLeadManager_C_OnSuccess_9B54DB094FA168F07F4D998937B7C143_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Tick_Lead
// (NetResponse, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_NPCLeadManager_C::Tick_Lead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Tick_Lead");

	ABP_NPCLeadManager_C_Tick_Lead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Tick_Follow
// (Net, NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_NPCLeadManager_C::Tick_Follow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.Tick_Follow");

	ABP_NPCLeadManager_C_Tick_Follow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_NPCLeadManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.ReceiveBeginPlay");

	ABP_NPCLeadManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.ReceiveTick
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.ReceiveTick");

	ABP_NPCLeadManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.OnBeginTalk
// (NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_NPCLeadManager_C::OnBeginTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.OnBeginTalk");

	ABP_NPCLeadManager_C_OnBeginTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.OnEndTalk
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_NPCLeadManager_C::OnEndTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.OnEndTalk");

	ABP_NPCLeadManager_C_OnEndTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.UpdatePlayerInBuilding
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_NPCLeadManager_C::UpdatePlayerInBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.UpdatePlayerInBuilding");

	ABP_NPCLeadManager_C_UpdatePlayerInBuilding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.ReceiveEndPlay
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.ReceiveEndPlay");

	ABP_NPCLeadManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.OnHideRequestCounterChange
// (NetRequest, Exec, Native, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_NPCLeadManager_C::OnHideRequestCounterChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.OnHideRequestCounterChange");

	ABP_NPCLeadManager_C_OnHideRequestCounterChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCLeadManager.BP_NPCLeadManager_C.ExecuteUbergraph_BP_NPCLeadManager
// (Net, NetReliable, NetResponse, Static, Private, Delegate, DLLImport, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCLeadManager_C::STATIC_ExecuteUbergraph_BP_NPCLeadManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCLeadManager.BP_NPCLeadManager_C.ExecuteUbergraph_BP_NPCLeadManager");

	ABP_NPCLeadManager_C_ExecuteUbergraph_BP_NPCLeadManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
