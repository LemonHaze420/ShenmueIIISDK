
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

// Function BPC_ShopTalk.BPC_ShopTalk_C.GetStartTalkActionType
// (NetRequest, Exec, Event, Static, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bCanTalk                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS3DetectActionParam    Params                         (Parm, OutParm)

void UBPC_ShopTalk_C::STATIC_GetStartTalkActionType(bool bCanTalk, struct FS3DetectActionParam* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ShopTalk.BPC_ShopTalk_C.GetStartTalkActionType");

	UBPC_ShopTalk_C_GetStartTalkActionType_Params params;
	params.bCanTalk = bCanTalk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;
}


// Function BPC_ShopTalk.BPC_ShopTalk_C.GetActionType
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Sight                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS3DetectActionParam> Params                         (Parm, OutParm, ZeroConstructor)

void UBPC_ShopTalk_C::GetActionType(bool Sight, TArray<struct FS3DetectActionParam>* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ShopTalk.BPC_ShopTalk_C.GetActionType");

	UBPC_ShopTalk_C_GetActionType_Params params;
	params.Sight = Sight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;
}


// Function BPC_ShopTalk.BPC_ShopTalk_C.DecideDetectAction
// (Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// ES3ActionIconType              ActionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ShopTalk_C::STATIC_DecideDetectAction(ES3ActionIconType ActionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ShopTalk.BPC_ShopTalk_C.DecideDetectAction");

	UBPC_ShopTalk_C_DecideDetectAction_Params params;
	params.ActionType = ActionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ShopTalk.BPC_ShopTalk_C.ExecuteUbergraph_BPC_ShopTalk
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ShopTalk_C::STATIC_ExecuteUbergraph_BPC_ShopTalk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ShopTalk.BPC_ShopTalk_C.ExecuteUbergraph_BPC_ShopTalk");

	UBPC_ShopTalk_C_ExecuteUbergraph_BPC_ShopTalk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
