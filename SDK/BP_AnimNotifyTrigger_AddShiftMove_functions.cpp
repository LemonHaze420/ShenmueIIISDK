
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

// Function BP_AnimNotifyTrigger_AddShiftMove.BP_AnimNotifyTrigger_AddShiftMove_C.GetNotifyName
// (NetRequest, Native, NetResponse, Static, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_AnimNotifyTrigger_AddShiftMove_C::STATIC_GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyTrigger_AddShiftMove.BP_AnimNotifyTrigger_AddShiftMove_C.GetNotifyName");

	UBP_AnimNotifyTrigger_AddShiftMove_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotifyTrigger_AddShiftMove.BP_AnimNotifyTrigger_AddShiftMove_C.GetNotifyID
// (NetRequest, Native, NetResponse, Static, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// struct FName                   NotifyID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotifyTrigger_AddShiftMove_C::STATIC_GetNotifyID(struct FName* NotifyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyTrigger_AddShiftMove.BP_AnimNotifyTrigger_AddShiftMove_C.GetNotifyID");

	UBP_AnimNotifyTrigger_AddShiftMove_C_GetNotifyID_Params params;

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
