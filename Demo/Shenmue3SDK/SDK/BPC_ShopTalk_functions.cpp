
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

// Function BPC_ShopTalk.BPC_ShopTalk_C.GetStartTalkActionType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCanTalk                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS3DetectActionParam    Params                         (Parm, OutParm)

void UBPC_ShopTalk_C::GetStartTalkActionType(bool* bCanTalk, struct FS3DetectActionParam* Params)
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


// Function BPC_ShopTalk.BPC_ShopTalk_C.getActionType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Sight                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS3DetectActionParam> Params                         (Parm, OutParm, ZeroConstructor)

void UBPC_ShopTalk_C::getActionType(bool* Sight, TArray<struct FS3DetectActionParam>* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ShopTalk.BPC_ShopTalk_C.getActionType");

	UBPC_ShopTalk_C_getActionType_Params params;
	params.Sight = Sight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;
}


// Function BPC_ShopTalk.BPC_ShopTalk_C.DecideDetectAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType*             ActionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ShopTalk_C::DecideDetectAction(ES3ActionIconType* ActionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ShopTalk.BPC_ShopTalk_C.DecideDetectAction");

	UBPC_ShopTalk_C_DecideDetectAction_Params params;
	params.ActionType = ActionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ShopTalk.BPC_ShopTalk_C.ExecuteUbergraph_BPC_ShopTalk
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ShopTalk_C::ExecuteUbergraph_BPC_ShopTalk(int EntryPoint)
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
