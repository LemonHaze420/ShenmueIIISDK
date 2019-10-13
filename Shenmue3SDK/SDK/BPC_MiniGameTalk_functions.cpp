
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

// Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.GetStartTalkActionType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCanTalk                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS3DetectActionParam    Params                         (Parm, OutParm)

void UBPC_MiniGameTalk_C::GetStartTalkActionType(bool* bCanTalk, struct FS3DetectActionParam* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.GetStartTalkActionType");

	UBPC_MiniGameTalk_C_GetStartTalkActionType_Params params;
	params.bCanTalk = bCanTalk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;
}


// Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.getActionType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Sight                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS3DetectActionParam> Params                         (Parm, OutParm, ZeroConstructor)

void UBPC_MiniGameTalk_C::getActionType(bool* Sight, TArray<struct FS3DetectActionParam>* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.getActionType");

	UBPC_MiniGameTalk_C_getActionType_Params params;
	params.Sight = Sight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;
}


// Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.DecideDetectAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType*             ActionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalk_C::DecideDetectAction(ES3ActionIconType* ActionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.DecideDetectAction");

	UBPC_MiniGameTalk_C_DecideDetectAction_Params params;
	params.ActionType = ActionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.ParseTalkScriptData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkDataListBase**    TalkDataList                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalk_C::ParseTalkScriptData(class US3TalkDataListBase** TalkDataList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.ParseTalkScriptData");

	UBPC_MiniGameTalk_C_ParseTalkScriptData_Params params;
	params.TalkDataList = TalkDataList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.FromExternalFunctions_MemoSet
// (BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameTalk_C::FromExternalFunctions_MemoSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.FromExternalFunctions_MemoSet");

	UBPC_MiniGameTalk_C_FromExternalFunctions_MemoSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.ExecuteUbergraph_BPC_MiniGameTalk
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalk_C::ExecuteUbergraph_BPC_MiniGameTalk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.ExecuteUbergraph_BPC_MiniGameTalk");

	UBPC_MiniGameTalk_C_ExecuteUbergraph_BPC_MiniGameTalk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
