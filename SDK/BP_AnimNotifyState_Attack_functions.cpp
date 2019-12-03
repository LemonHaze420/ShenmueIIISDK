
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

// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetAttackCollisionEnum
// (NetReliable, Event, NetResponse, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EBattleAttackCollision> Enum                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotifyState_Attack_C::GetAttackCollisionEnum(TEnumAsByte<EBattleAttackCollision>* Enum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetAttackCollisionEnum");

	UBP_AnimNotifyState_Attack_C_GetAttackCollisionEnum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enum != nullptr)
		*Enum = params.Enum;
}


// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.CalcOverrideDirection
// (NetRequest, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FVector                 OwnerDirection                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 OutDirection                   (Parm, OutParm, IsPlainOldData)

void UBP_AnimNotifyState_Attack_C::STATIC_CalcOverrideDirection(const struct FVector& OwnerDirection, struct FVector* OutDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.CalcOverrideDirection");

	UBP_AnimNotifyState_Attack_C_CalcOverrideDirection_Params params;
	params.OwnerDirection = OwnerDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;
}


// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.OverridesDirection
// (Net, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AnimNotifyState_Attack_C::STATIC_OverridesDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.OverridesDirection");

	UBP_AnimNotifyState_Attack_C_OverridesDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetAttackCollisionGroupTags
// (Native, Event, NetMulticast, MulticastDelegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// TArray<struct FName>           TargetArray                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_AnimNotifyState_Attack_C::GetAttackCollisionGroupTags(TArray<struct FName> TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetAttackCollisionGroupTags");

	UBP_AnimNotifyState_Attack_C_GetAttackCollisionGroupTags_Params params;
	params.TargetArray = TargetArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.IsComponentInvolved
// (Net, NetRequest, Native, Event, NetMulticast, Public, Private, Delegate, BlueprintCallable)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AnimNotifyState_Attack_C::IsComponentInvolved(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.IsComponentInvolved");

	UBP_AnimNotifyState_Attack_C_IsComponentInvolved_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetNonDownStrength
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EBattleAnimStrength            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EBattleAnimStrength UBP_AnimNotifyState_Attack_C::STATIC_GetNonDownStrength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetNonDownStrength");

	UBP_AnimNotifyState_Attack_C_GetNonDownStrength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.IsFlyingTypeDown
// (Net, Exec, Event, Static, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AnimNotifyState_Attack_C::STATIC_IsFlyingTypeDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.IsFlyingTypeDown");

	UBP_AnimNotifyState_Attack_C_IsFlyingTypeDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetForceDownByLevel
// (Net, Native, Event, Static, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AnimNotifyState_Attack_C::STATIC_GetForceDownByLevel(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetForceDownByLevel");

	UBP_AnimNotifyState_Attack_C_GetForceDownByLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetNotifyName
// (Net, NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintPure, NetValidate)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_AnimNotifyState_Attack_C::STATIC_GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetNotifyName");

	UBP_AnimNotifyState_Attack_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetAttackCollisionMainTag
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, BlueprintCallable, NetValidate)
// Parameters:
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotifyState_Attack_C::GetAttackCollisionMainTag(struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetAttackCollisionMainTag");

	UBP_AnimNotifyState_Attack_C_GetAttackCollisionMainTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetBaseDamage
// (NetReliable, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotifyState_Attack_C::GetBaseDamage(float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetBaseDamage");

	UBP_AnimNotifyState_Attack_C_GetBaseDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.ConvertLegacyNameToEnum
// (NetReliable, Exec, Native, Event, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBattleAttackCollision> Collision                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotifyState_Attack_C::ConvertLegacyNameToEnum(const struct FName& Name, TEnumAsByte<EBattleAttackCollision>* Collision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.ConvertLegacyNameToEnum");

	UBP_AnimNotifyState_Attack_C_ConvertLegacyNameToEnum_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Collision != nullptr)
		*Collision = params.Collision;
}


// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetAttackCollisionGroupTag
// (Net, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, BlueprintCallable, NetValidate)
// Parameters:
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotifyState_Attack_C::GetAttackCollisionGroupTag(struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetAttackCollisionGroupTag");

	UBP_AnimNotifyState_Attack_C_GetAttackCollisionGroupTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
