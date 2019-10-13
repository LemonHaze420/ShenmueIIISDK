
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

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.IsTalking
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Gimmick_OpenDoor_Template_C::IsTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.IsTalking");

	ABP_Gimmick_OpenDoor_Template_C_IsTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.LockPlayerInteraction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::LockPlayerInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.LockPlayerInteraction");

	ABP_Gimmick_OpenDoor_Template_C_LockPlayerInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckOpenDoorFromDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_S3Character_C*       SelfCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3Character_C*       OpponentCharacter              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Prioritize                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::CheckOpenDoorFromDistance(class ABP_S3Character_C* SelfCharacter, class ABP_S3Character_C* OpponentCharacter, bool* Prioritize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckOpenDoorFromDistance");

	ABP_Gimmick_OpenDoor_Template_C_CheckOpenDoorFromDistance_Params params;
	params.SelfCharacter = SelfCharacter;
	params.OpponentCharacter = OpponentCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prioritize != nullptr)
		*Prioritize = params.Prioritize;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.IsNeedPositionRecovery
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacter**             SelfCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter**             OpponentCharacter              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Gimmick_OpenDoor_Template_C::IsNeedPositionRecovery(class ACharacter** SelfCharacter, class ACharacter** OpponentCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.IsNeedPositionRecovery");

	ABP_Gimmick_OpenDoor_Template_C_IsNeedPositionRecovery_Params params;
	params.SelfCharacter = SelfCharacter;
	params.OpponentCharacter = OpponentCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetRecoveryPoint
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacter**             Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBack                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ABP_Gimmick_OpenDoor_Template_C::GetRecoveryPoint(class ACharacter** Character, bool* bBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetRecoveryPoint");

	ABP_Gimmick_OpenDoor_Template_C_GetRecoveryPoint_Params params;
	params.Character = Character;
	params.bBack = bBack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.IsReserved
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Gimmick_OpenDoor_Template_C::IsReserved()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.IsReserved");

	ABP_Gimmick_OpenDoor_Template_C_IsReserved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.SetDoorUseChara
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3Character_C*       DoorUseChara                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::SetDoorUseChara(class ABP_S3Character_C* DoorUseChara)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.SetDoorUseChara");

	ABP_Gimmick_OpenDoor_Template_C_SetDoorUseChara_Params params;
	params.DoorUseChara = DoorUseChara;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CallNotifyEvent
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::CallNotifyEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CallNotifyEvent");

	ABP_Gimmick_OpenDoor_Template_C_CallNotifyEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.DoesScriptAllowPlayerInteraction
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Gimmick_OpenDoor_Template_C::DoesScriptAllowPlayerInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.DoesScriptAllowPlayerInteraction");

	ABP_Gimmick_OpenDoor_Template_C_DoesScriptAllowPlayerInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetCurrentDoorDataTime
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Gimmick_OpenDoor_Template_C::GetCurrentDoorDataTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetCurrentDoorDataTime");

	ABP_Gimmick_OpenDoor_Template_C_GetCurrentDoorDataTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.TraceToNearInteract
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3CharacterBase_C*   Chara                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hit                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::TraceToNearInteract(class ABP_S3CharacterBase_C* Chara, bool* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.TraceToNearInteract");

	ABP_Gimmick_OpenDoor_Template_C_TraceToNearInteract_Params params;
	params.Chara = Chara;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetNearAlignment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_S3CharacterBase_C*   Chara                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ABP_Gimmick_OpenDoor_Template_C::GetNearAlignment(class ABP_S3CharacterBase_C* Chara)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetNearAlignment");

	ABP_Gimmick_OpenDoor_Template_C_GetNearAlignment_Params params;
	params.Chara = Chara;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetAngleToDoor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 InDirection                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          OutAngle                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::GetAngleToDoor(const struct FVector& InLocation, const struct FVector& InDirection, float* OutAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetAngleToDoor");

	ABP_Gimmick_OpenDoor_Template_C_GetAngleToDoor_Params params;
	params.InLocation = InLocation;
	params.InDirection = InDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngle != nullptr)
		*OutAngle = params.OutAngle;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.InitReleaseCharaCount
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::InitReleaseCharaCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.InitReleaseCharaCount");

	ABP_Gimmick_OpenDoor_Template_C_InitReleaseCharaCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ChangeCollision
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLock                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::ChangeCollision(bool bLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ChangeCollision");

	ABP_Gimmick_OpenDoor_Template_C_ChangeCollision_Params params;
	params.bLock = bLock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.EndEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::EndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.EndEvent");

	ABP_Gimmick_OpenDoor_Template_C_EndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.PrintDebugData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::PrintDebugData(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.PrintDebugData");

	ABP_Gimmick_OpenDoor_Template_C_PrintDebugData_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCanUseChara
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_S3Character_C*       Chara                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::CheckCanUseChara(class ABP_S3Character_C* Chara, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCanUseChara");

	ABP_Gimmick_OpenDoor_Template_C_CheckCanUseChara_Params params;
	params.Chara = Chara;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.RecalculatePlayerGuides
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::RecalculatePlayerGuides()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.RecalculatePlayerGuides");

	ABP_Gimmick_OpenDoor_Template_C_RecalculatePlayerGuides_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CallEventComplete
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::CallEventComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CallEventComplete");

	ABP_Gimmick_OpenDoor_Template_C_CallEventComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetTargetDoorPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsFront                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::GetTargetDoorPoint(bool IsFront, struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetTargetDoorPoint");

	ABP_Gimmick_OpenDoor_Template_C_GetTargetDoorPoint_Params params;
	params.IsFront = IsFront;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetLengthCharaToAdjustPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_S3CharacterBase_C*   Chara                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::GetLengthCharaToAdjustPoint(class ABP_S3CharacterBase_C* Chara, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetLengthCharaToAdjustPoint");

	ABP_Gimmick_OpenDoor_Template_C_GetLengthCharaToAdjustPoint_Params params;
	params.Chara = Chara;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCharaOnExtensionLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_S3CharacterBase_C*   Chara                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHit                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::CheckCharaOnExtensionLine(class ABP_S3CharacterBase_C* Chara, bool* IsHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCharaOnExtensionLine");

	ABP_Gimmick_OpenDoor_Template_C_CheckCharaOnExtensionLine_Params params;
	params.Chara = Chara;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsHit != nullptr)
		*IsHit = params.IsHit;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckNPCOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_S3Character_C*       NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRegist                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::CheckNPCOpen(class ABP_S3Character_C* NPC, bool* IsRegist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckNPCOpen");

	ABP_Gimmick_OpenDoor_Template_C_CheckNPCOpen_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsRegist != nullptr)
		*IsRegist = params.IsRegist;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckDataTable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Existance                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::CheckDataTable(bool* Existance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckDataTable");

	ABP_Gimmick_OpenDoor_Template_C_CheckDataTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Existance != nullptr)
		*Existance = params.Existance;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCan'tKnockDoorState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsOpen                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::CheckCan_tKnockDoorState(bool* IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCan'tKnockDoorState");

	ABP_Gimmick_OpenDoor_Template_C_CheckCan_tKnockDoorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.SetCanPlayEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanPlayEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::SetCanPlayEvent(bool CanPlayEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.SetCanPlayEvent");

	ABP_Gimmick_OpenDoor_Template_C_SetCanPlayEvent_Params params;
	params.CanPlayEvent = CanPlayEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ReleaseDoorUseChara
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::ReleaseDoorUseChara()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ReleaseDoorUseChara");

	ABP_Gimmick_OpenDoor_Template_C_ReleaseDoorUseChara_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.RegistDoorUseChara
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3Character_C*       Chara                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRegist                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::RegistDoorUseChara(class ABP_S3Character_C* Chara, bool* IsRegist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.RegistDoorUseChara");

	ABP_Gimmick_OpenDoor_Template_C_RegistDoorUseChara_Params params;
	params.Chara = Chara;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsRegist != nullptr)
		*IsRegist = params.IsRegist;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckAfterKnockPatarn
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_AfterNockType>  Patarn                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::CheckAfterKnockPatarn(int Time, TEnumAsByte<EN_AfterNockType>* Patarn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckAfterKnockPatarn");

	ABP_Gimmick_OpenDoor_Template_C_CheckAfterKnockPatarn_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Patarn != nullptr)
		*Patarn = params.Patarn;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.JudgePatarnAfterKnock
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::JudgePatarnAfterKnock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.JudgePatarnAfterKnock");

	ABP_Gimmick_OpenDoor_Template_C_JudgePatarnAfterKnock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.NPCOutOfRange
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::NPCOutOfRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.NPCOutOfRange");

	ABP_Gimmick_OpenDoor_Template_C_NPCOutOfRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CanOpenDoor(New)
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3CharacterBase_C*   Chara                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUseDoor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::CanOpenDoor_New_(class ABP_S3CharacterBase_C* Chara, bool* IsUseDoor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CanOpenDoor(New)");

	ABP_Gimmick_OpenDoor_Template_C_CanOpenDoor_New__Params params;
	params.Chara = Chara;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUseDoor != nullptr)
		*IsUseDoor = params.IsUseDoor;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCharaIndoor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Existance                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::CheckCharaIndoor(const struct FName& CharacterName, bool* Existance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCharaIndoor");

	ABP_Gimmick_OpenDoor_Template_C_CheckCharaIndoor_Params params;
	params.CharacterName = CharacterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Existance != nullptr)
		*Existance = params.Existance;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCharaNearSide
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacter*              Chara                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFront                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::CheckCharaNearSide(class ACharacter* Chara, bool* IsFront)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCharaNearSide");

	ABP_Gimmick_OpenDoor_Template_C_CheckCharaNearSide_Params params;
	params.Chara = Chara;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFront != nullptr)
		*IsFront = params.IsFront;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.FinishDoorKnock
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::FinishDoorKnock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.FinishDoorKnock");

	ABP_Gimmick_OpenDoor_Template_C_FinishDoorKnock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckPlayEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           PlayEvent                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::CheckPlayEvent(bool* PlayEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckPlayEvent");

	ABP_Gimmick_OpenDoor_Template_C_CheckPlayEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayEvent != nullptr)
		*PlayEvent = params.PlayEvent;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.JudgeDoorInOrOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsOut                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::JudgeDoorInOrOut(bool* IsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.JudgeDoorInOrOut");

	ABP_Gimmick_OpenDoor_Template_C_JudgeDoorInOrOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOut != nullptr)
		*IsOut = params.IsOut;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.FinishAdjustPosition
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::FinishAdjustPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.FinishAdjustPosition");

	ABP_Gimmick_OpenDoor_Template_C_FinishAdjustPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.InitDoorUseChara
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::InitDoorUseChara()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.InitDoorUseChara");

	ABP_Gimmick_OpenDoor_Template_C_InitDoorUseChara_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OpenDoor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3CharacterBase_C*   Chara                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequence*           AnimSequence                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AnimRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::OpenDoor(class ABP_S3CharacterBase_C* Chara, class UAnimSequence* AnimSequence, float AnimRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OpenDoor");

	ABP_Gimmick_OpenDoor_Template_C_OpenDoor_Params params;
	params.Chara = Chara;
	params.AnimSequence = AnimSequence;
	params.AnimRate = AnimRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCanUseDoor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3CharacterBase_C*   Chara                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUseDoor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::CheckCanUseDoor(class ABP_S3CharacterBase_C* Chara, bool* IsUseDoor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCanUseDoor");

	ABP_Gimmick_OpenDoor_Template_C_CheckCanUseDoor_Params params;
	params.Chara = Chara;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUseDoor != nullptr)
		*IsUseDoor = params.IsUseDoor;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckNearSide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsFront                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::CheckNearSide(bool* IsFront)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckNearSide");

	ABP_Gimmick_OpenDoor_Template_C_CheckNearSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFront != nullptr)
		*IsFront = params.IsFront;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.IsInBackDetectionArea
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           inArea                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::IsInBackDetectionArea(bool* inArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.IsInBackDetectionArea");

	ABP_Gimmick_OpenDoor_Template_C_IsInBackDetectionArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inArea != nullptr)
		*inArea = params.inArea;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.IsInFrontDetectionArea
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           inArea                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::IsInFrontDetectionArea(bool* inArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.IsInFrontDetectionArea");

	ABP_Gimmick_OpenDoor_Template_C_IsInFrontDetectionArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inArea != nullptr)
		*inArea = params.inArea;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.isInDetectionArea
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           isInDetectionArea              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::isInDetectionArea(bool* isInDetectionArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.isInDetectionArea");

	ABP_Gimmick_OpenDoor_Template_C_isInDetectionArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isInDetectionArea != nullptr)
		*isInDetectionArea = params.isInDetectionArea;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.DeactivateOperation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::DeactivateOperation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.DeactivateOperation");

	ABP_Gimmick_OpenDoor_Template_C_DeactivateOperation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ActivateOperation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::ActivateOperation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ActivateOperation");

	ABP_Gimmick_OpenDoor_Template_C_ActivateOperation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.UserConstructionScript");

	ABP_Gimmick_OpenDoor_Template_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnNotifyEnd_D9B9867F444EF4E776FADF9CDDAA1944
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::OnNotifyEnd_D9B9867F444EF4E776FADF9CDDAA1944(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnNotifyEnd_D9B9867F444EF4E776FADF9CDDAA1944");

	ABP_Gimmick_OpenDoor_Template_C_OnNotifyEnd_D9B9867F444EF4E776FADF9CDDAA1944_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnNotifyBegin_D9B9867F444EF4E776FADF9CDDAA1944
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::OnNotifyBegin_D9B9867F444EF4E776FADF9CDDAA1944(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnNotifyBegin_D9B9867F444EF4E776FADF9CDDAA1944");

	ABP_Gimmick_OpenDoor_Template_C_OnNotifyBegin_D9B9867F444EF4E776FADF9CDDAA1944_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnInterrupted_D9B9867F444EF4E776FADF9CDDAA1944
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::OnInterrupted_D9B9867F444EF4E776FADF9CDDAA1944(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnInterrupted_D9B9867F444EF4E776FADF9CDDAA1944");

	ABP_Gimmick_OpenDoor_Template_C_OnInterrupted_D9B9867F444EF4E776FADF9CDDAA1944_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnBlendOut_D9B9867F444EF4E776FADF9CDDAA1944
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::OnBlendOut_D9B9867F444EF4E776FADF9CDDAA1944(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnBlendOut_D9B9867F444EF4E776FADF9CDDAA1944");

	ABP_Gimmick_OpenDoor_Template_C_OnBlendOut_D9B9867F444EF4E776FADF9CDDAA1944_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnCompleted_D9B9867F444EF4E776FADF9CDDAA1944
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::OnCompleted_D9B9867F444EF4E776FADF9CDDAA1944(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnCompleted_D9B9867F444EF4E776FADF9CDDAA1944");

	ABP_Gimmick_OpenDoor_Template_C_OnCompleted_D9B9867F444EF4E776FADF9CDDAA1944_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__DetectArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::BndEvt__DetectArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__DetectArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Gimmick_OpenDoor_Template_C_BndEvt__DetectArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__DetectArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::BndEvt__DetectArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__DetectArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Gimmick_OpenDoor_Template_C_BndEvt__DetectArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckFinishAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFront                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::CheckFinishAnim(float Delay, bool IsFront)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckFinishAnim");

	ABP_Gimmick_OpenDoor_Template_C_CheckFinishAnim_Params params;
	params.Delay = Delay;
	params.IsFront = IsFront;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__NPCCheckArea_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::BndEvt__NPCCheckArea_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__NPCCheckArea_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Gimmick_OpenDoor_Template_C_BndEvt__NPCCheckArea_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__DetectAreaOutside_K2Node_ComponentBoundEvent_42_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::BndEvt__DetectAreaOutside_K2Node_ComponentBoundEvent_42_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__DetectAreaOutside_K2Node_ComponentBoundEvent_42_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Gimmick_OpenDoor_Template_C_BndEvt__DetectAreaOutside_K2Node_ComponentBoundEvent_42_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__DetectAreaGuide_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::BndEvt__DetectAreaGuide_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__DetectAreaGuide_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Gimmick_OpenDoor_Template_C_BndEvt__DetectAreaGuide_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__DetectAreaGuide_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::BndEvt__DetectAreaGuide_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__DetectAreaGuide_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Gimmick_OpenDoor_Template_C_BndEvt__DetectAreaGuide_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ReceiveSmartLinkReached
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Destination                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::ReceiveSmartLinkReached(class AActor** Agent, struct FVector* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ReceiveSmartLinkReached");

	ABP_Gimmick_OpenDoor_Template_C_ReceiveSmartLinkReached_Params params;
	params.Agent = Agent;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ReceiveBeginPlay");

	ABP_Gimmick_OpenDoor_Template_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ReceiveTick");

	ABP_Gimmick_OpenDoor_Template_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnTalkFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnTalkFinished");

	ABP_Gimmick_OpenDoor_Template_C_OnTalkFinished_Params params;
	params.TalkComponent = TalkComponent;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnTalkStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::OnTalkStart(class US3TalkComponent* TalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnTalkStart");

	ABP_Gimmick_OpenDoor_Template_C_OnTalkStart_Params params;
	params.TalkComponent = TalkComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.Screen_Player
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::Screen_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.Screen_Player");

	ABP_Gimmick_OpenDoor_Template_C_Screen_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.Screen_NPC
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::Screen_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.Screen_NPC");

	ABP_Gimmick_OpenDoor_Template_C_Screen_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ExecuteUbergraph_BP_Gimmick_OpenDoor_Template
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::ExecuteUbergraph_BP_Gimmick_OpenDoor_Template(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ExecuteUbergraph_BP_Gimmick_OpenDoor_Template");

	ABP_Gimmick_OpenDoor_Template_C_ExecuteUbergraph_BP_Gimmick_OpenDoor_Template_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.DoorEventAnimFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::DoorEventAnimFinish__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.DoorEventAnimFinish__DelegateSignature");

	ABP_Gimmick_OpenDoor_Template_C_DoorEventAnimFinish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.NotifyEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_Template_C::NotifyEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.NotifyEvent__DelegateSignature");

	ABP_Gimmick_OpenDoor_Template_C_NotifyEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.DoorEventComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Gimmick_OpenDoor_Template_C* Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Front                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_Template_C::DoorEventComplete__DelegateSignature(class ABP_Gimmick_OpenDoor_Template_C* Door, bool Front)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.DoorEventComplete__DelegateSignature");

	ABP_Gimmick_OpenDoor_Template_C_DoorEventComplete__DelegateSignature_Params params;
	params.Door = Door;
	params.Front = Front;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
