
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

// Function BP_AnimNotifyState_AttackBase.BP_AnimNotifyState_AttackBase_C.GetAttackCollisionEnum
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// TEnumAsByte<EBattleAttackCollision> Enum                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotifyState_AttackBase_C::GetAttackCollisionEnum(TEnumAsByte<EBattleAttackCollision>* Enum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_AttackBase.BP_AnimNotifyState_AttackBase_C.GetAttackCollisionEnum");

	UBP_AnimNotifyState_AttackBase_C_GetAttackCollisionEnum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enum != nullptr)
		*Enum = params.Enum;
}


// Function BP_AnimNotifyState_AttackBase.BP_AnimNotifyState_AttackBase_C.GetNotifyID
// (Net, NetReliable, NetRequest, Native, Static, Private, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FName                   NotifyID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotifyState_AttackBase_C::STATIC_GetNotifyID(struct FName* NotifyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_AttackBase.BP_AnimNotifyState_AttackBase_C.GetNotifyID");

	UBP_AnimNotifyState_AttackBase_C_GetNotifyID_Params params;

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
