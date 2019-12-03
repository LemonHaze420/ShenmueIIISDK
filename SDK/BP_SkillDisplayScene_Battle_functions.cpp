
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

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.GetOwningPlayerPawn
// (Exec, Native, Event, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* ABP_SkillDisplayScene_Battle_C::GetOwningPlayerPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.GetOwningPlayerPawn");

	ABP_SkillDisplayScene_Battle_C_GetOwningPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.IsLoading
// (Net, NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, BlueprintPure, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SkillDisplayScene_Battle_C::STATIC_IsLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.IsLoading");

	ABP_SkillDisplayScene_Battle_C_IsLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.SetGuardMode
// (NetReliable, NetRequest, Event, Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Battle_C::STATIC_SetGuardMode(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.SetGuardMode");

	ABP_SkillDisplayScene_Battle_C_SetGuardMode_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.CalculateCoolStartPosition
// (NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, NetValidate)
// Parameters:
// class UAnimMontage*            InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_SkillDisplayScene_Battle_C::STATIC_CalculateCoolStartPosition(class UAnimMontage* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.CalculateCoolStartPosition");

	ABP_SkillDisplayScene_Battle_C_CalculateCoolStartPosition_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.CalculateSnapshotPosition
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UAnimMontage*            InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_SkillDisplayScene_Battle_C::STATIC_CalculateSnapshotPosition(class UAnimMontage* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.CalculateSnapshotPosition");

	ABP_SkillDisplayScene_Battle_C_CalculateSnapshotPosition_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.CaptureSingleFrame
// (Net, NetRequest, Exec, Event, Public, Private, Delegate, BlueprintCallable)
// Parameters:
// struct FName                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Battle_C::CaptureSingleFrame(const struct FName& Item, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.CaptureSingleFrame");

	ABP_SkillDisplayScene_Battle_C_CaptureSingleFrame_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.ResetRotation
// (NetResponse, NetMulticast, Private, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_SkillDisplayScene_Battle_C::ResetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.ResetRotation");

	ABP_SkillDisplayScene_Battle_C_ResetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.StopMotion
// (Net, Native, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Battle_C::STATIC_StopMotion(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.StopMotion");

	ABP_SkillDisplayScene_Battle_C_StopMotion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.PlayMotionForItem
// (Net, NetRequest, Event, NetMulticast, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintPure, NetValidate)
// Parameters:
// struct FName                   Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Battle_C::PlayMotionForItem(const struct FName& Skill, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.PlayMotionForItem");

	ABP_SkillDisplayScene_Battle_C_PlayMotionForItem_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.UserConstructionScript
// (NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_SkillDisplayScene_Battle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.UserConstructionScript");

	ABP_SkillDisplayScene_Battle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.ReceiveBeginPlay
// (NetMulticast, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_SkillDisplayScene_Battle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.ReceiveBeginPlay");

	ABP_SkillDisplayScene_Battle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.ReceiveTick
// (Net, NetReliable, Exec, NetResponse, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Battle_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.ReceiveTick");

	ABP_SkillDisplayScene_Battle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.ReceiveEndPlay
// (Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Battle_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.ReceiveEndPlay");

	ABP_SkillDisplayScene_Battle_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.ExecuteUbergraph_BP_SkillDisplayScene_Battle
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Battle_C::ExecuteUbergraph_BP_SkillDisplayScene_Battle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.ExecuteUbergraph_BP_SkillDisplayScene_Battle");

	ABP_SkillDisplayScene_Battle_C_ExecuteUbergraph_BP_SkillDisplayScene_Battle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
