
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

// Function BP_AnimNotifyState_PreliminaryAttack.BP_AnimNotifyState_PreliminaryAttack_C.GetNotifyName
// (Net, Native, Event, Private, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_AnimNotifyState_PreliminaryAttack_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_PreliminaryAttack.BP_AnimNotifyState_PreliminaryAttack_C.GetNotifyName");

	UBP_AnimNotifyState_PreliminaryAttack_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotifyState_PreliminaryAttack.BP_AnimNotifyState_PreliminaryAttack_C.GetNotifyID
// (NetReliable, NetRequest, Exec, Native, NetResponse, Private, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FName                   NotifyID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotifyState_PreliminaryAttack_C::GetNotifyID(struct FName* NotifyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_PreliminaryAttack.BP_AnimNotifyState_PreliminaryAttack_C.GetNotifyID");

	UBP_AnimNotifyState_PreliminaryAttack_C_GetNotifyID_Params params;

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
