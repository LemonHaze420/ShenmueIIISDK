
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

// Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.GetNotifyName
// (Net, Native, Event, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_AnimNotifyState_Invincible_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.GetNotifyName");

	UBP_AnimNotifyState_Invincible_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.IsForceGuardMotion
// (Exec, Event, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AnimNotifyState_Invincible_C::STATIC_IsForceGuardMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.IsForceGuardMotion");

	UBP_AnimNotifyState_Invincible_C_IsForceGuardMotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.IsVirtualGuardAction
// (Net, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AnimNotifyState_Invincible_C::STATIC_IsVirtualGuardAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.IsVirtualGuardAction");

	UBP_AnimNotifyState_Invincible_C_IsVirtualGuardAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.IsInvincible
// (Net, NetReliable, Native, Event, MulticastDelegate, Delegate, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AnimNotifyState_Invincible_C::IsInvincible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.IsInvincible");

	UBP_AnimNotifyState_Invincible_C_IsInvincible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.IsSuperArmorEffective
// (NetResponse, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLock                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotifyState_Invincible_C::IsSuperArmorEffective(float Damage, bool* bLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.IsSuperArmorEffective");

	UBP_AnimNotifyState_Invincible_C_IsSuperArmorEffective_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLock != nullptr)
		*bLock = params.bLock;
}


// Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.GetNotifyID
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, BlueprintPure)
// Parameters:
// struct FName                   NotifyID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotifyState_Invincible_C::GetNotifyID(struct FName* NotifyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.GetNotifyID");

	UBP_AnimNotifyState_Invincible_C_GetNotifyID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NotifyID != nullptr)
		*NotifyID = params.NotifyID;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
